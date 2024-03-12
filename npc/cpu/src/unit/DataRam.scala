// package unit

// import chisel3._
// import chisel3.util._

// import config.Configs._
// import config.OPtypes._
// import config.LStypes._
// import utils.BundleDataControl

// // import utils._

// //-----------------------------------------------------------------------------
// // DataRam
// //-----------------------------------------------------------------------------
// //
// // Description :  accept a addr, and find instruction from instRom
// //
// // Input  :
// //              1) addr [UInt(ADDR_WIDTH.W)] : addr to get corresponding instruction
// // Output :
// //              1) inst [UInt(INST_WIDTH.W)] : target instruction
// //
// //-----------------------------------------------------------------------------
// class DataRamIO extends Bundle {
//   val bundleDataControl = new BundleDataControl()
//   val resEX            = Input(UInt(DATA_WIDTH.W))
//   val dataStore         = Input(UInt(DATA_WIDTH.W))
//   val res               = Output(UInt(DATA_WIDTH.W))
// }

// class DataRam extends Module {
//   val io = IO(new DataRamIO)

//   val dataMem = Mem(MEM_DATA_SIZE, UInt(DATA_WIDTH.W))

//   val res      = WireDefault(0.U(DATA_WIDTH.W))
//   val dataLoad = WireDefault(0.U(DATA_WIDTH.W))

//   // data from EX result
//   dataLoad := dataMem.read(io.resEX >> DATA_BYTE_WIDTH_LOG.U)

//   // STORE
//   when(io.bundleDataControl.isStore) {
//     when(io.bundleDataControl.lsType === LS_W) { // Store 4 bit
//       dataMem.write(io.resEX >> DATA_BYTE_WIDTH_LOG.U, io.dataStore)
//     }.elsewhen(io.bundleDataControl.lsType === LS_H) { // Store low 2 bit
//       dataMem.write(io.resEX >> DATA_BYTE_WIDTH_LOG.U, Cat(dataLoad(31, 16), io.dataStore(15, 0)))
//     }.otherwise { // Store low 1 bit
//       dataMem.write(io.resEX >> DATA_BYTE_WIDTH_LOG.U, Cat(dataLoad(31, 8), io.dataStore(7, 0)))
//     }
//   }

//   // LOAD
//   when(io.bundleDataControl.isLoad) {
//     when(io.bundleDataControl.lsType === LS_W) { res := dataLoad }
//       .elsewhen(io.bundleDataControl.lsType === LS_H) {
//         when(io.bundleDataControl.isSigned) {
//           res := Cat(Fill(16, dataLoad(15)), dataLoad(15, 0))
//         }.otherwise {
//           res := Cat(Fill(16, 0.U), dataLoad(15, 0))
//         }
//       }
//       .otherwise {
//         when(io.bundleDataControl.isSigned) {
//           res := Cat(Fill(24, dataLoad(7)), dataLoad(7, 0))
//         }.otherwise {
//           res := Cat(Fill(24, 0.U), dataLoad(7, 0))
//         }
//       }
//   }.otherwise {
//     res := io.resEX
//   }

//   io.res := res
// }
