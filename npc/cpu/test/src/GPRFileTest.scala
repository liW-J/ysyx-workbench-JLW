// package test

// import chisel3._
// import chiseltest._
// import chisel3.experimental.BundleLiterals._

// import utest._

// import config.Configs._
// import unit.PCRegister
// import unit.GPRFile

// object GPRFileTest extends ChiselUtestTester {
//   val tests = Tests {
//     test("GPRFile") {
//       testCircuit(new GPRFile()) { dut =>
//         println(s"------------testing-PCReg-BEGIN------------")
//         val oprand_list = Seq.fill(REG_NUMS)(scala.util.Random.nextInt().toLong & 0xffffffffL)
//         // test tread
//         for (i <- 0 to REG_NUMS - 1) {
//           dut.io.bundleReg.rs1.poke(i.U)
//           dut.io.dataRead1.expect(0.U)
//           dut.io.bundleReg.rs2.poke(i.U)
//           dut.io.dataRead2.expect(0.U)
//         }
//         // test write
//         for (i <- 0 to REG_NUMS - 1) {
//           dut.io.writeEnable.poke(true.B)
//           dut.io.bundleReg.rd.poke(i.U)
//           dut.io.dataWrite.poke(oprand_list(i))
//           dut.clock.step()
//         }
//         // test read after write SUCCESS
//         for (i <- 0 to REG_NUMS - 1) {
//           dut.io.bundleReg.rs1.poke(i.U)
//           if (i == 0) {
//             dut.io.dataRead1.expect(0.U)
//           } else {
//             dut.io.dataRead1.expect(oprand_list(i))
//           }

//           dut.io.bundleReg.rs2.poke(i.U)
//           if (i == 0) {
//             dut.io.dataRead2.expect(0.U)
//           } else {
//             dut.io.dataRead2.expect(oprand_list(i))
//           }
//         }
//         // if we is FALSE , write 0 to test
//         for (i <- 0 to REG_NUMS - 1) {
//           dut.io.writeEnable.poke(false.B)
//           dut.io.bundleReg.rd.poke(i.U)
//           dut.io.dataWrite.poke(0)
//           dut.clock.step()
//         }
//         // test read after write UNSUCCESS
//         for (i <- 0 to REG_NUMS - 1) {
//           dut.io.bundleReg.rs1.poke(i.U)
//           if (i == 0) {
//             dut.io.dataRead1.expect(0.U)
//           } else {
//             dut.io.dataRead1.expect(oprand_list(i))
//           }

//           dut.io.bundleReg.rs2.poke(i.U)
//           if (i == 0) {
//             dut.io.dataRead2.expect(0.U)
//           } else {
//             dut.io.dataRead2.expect(oprand_list(i))
//           }
//         }
//         println(s"------------testing-PCReg-END------------")
//       }
//     }

//   }
// }
