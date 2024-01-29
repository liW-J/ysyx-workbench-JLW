package test

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

import config.Configs._
import unit._

object PCRegTest extends ChiselUtestTester {
  val tests = Tests {
    test("PCReg") {
      testCircuit(new PCReg()) { dut =>
        println(s"------------testing-pcReg-BEGIN------------")
        println(s"START_ADDR: ${START_ADDR.toHexString}")
        // initIO
        dut.io.ctrlBranch.poke(false.B)
        dut.io.ctrlJump.poke(false.B)
        dut.io.resultBranch.poke(false.B)
        dut.io.addrTarget.poke(START_ADDR)
        dut.io.addrOut.expect(START_ADDR)

        val target_list = Seq.fill(10)(scala.util.Random.nextInt().toLong & 0xffffffffL)

        var addr = START_ADDR

        // Normal
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          addr += ADDR_BYTE_WIDTH
          dut.clock.step()
          dut.io.addrOut.expect(addr.U)
        }

        // Jump
        dut.io.ctrlJump.poke(true.B)
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          dut.clock.step()
          dut.io.addrOut.expect(target.U)
          addr = target
        }
        dut.io.ctrlJump.poke(false.B)

        // Branch UNSUCCESS
        dut.io.ctrlBranch.poke(true.B)
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          addr += ADDR_BYTE_WIDTH
          dut.clock.step()
          dut.io.addrOut.expect(addr.U)
        }

        // Branch SUCCESS
        dut.io.resultBranch.poke(true.B)
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          addr += ADDR_BYTE_WIDTH
          dut.clock.step()
          dut.io.addrOut.expect(target.U)
          addr = target
        }
        println(s"------------testing-pcReg-END------------")
      }
    }
  }
}
