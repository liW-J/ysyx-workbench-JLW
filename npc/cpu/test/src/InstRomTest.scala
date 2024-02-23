// package test

// import chisel3._
// import chiseltest._
// import chisel3.experimental.BundleLiterals._

// import utest._

// import config.Configs._
// import unit._

// object InstRomTest extends ChiselUtestTester {
//   val tests = Tests {
//     test("InstRom") {
//       testCircuit(new InstRom()) { dut =>
//         println(s"------------testing-InstRom-BEGIN------------")
//         // creat a Inst for test
//         dut.io.addr.poke((1* INST_BYTE_WIDTH).U) 
//         dut.io.inst.expect(0xfe0f8f93L.U)
//         // TODO : creat more random Insts for test
//         println(s"------------testing-InstRom-END------------")
//       }
//     }
//   }
// }
