package test

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

import config.Configs._
import unit.PCRegister

object PCRegisterTest extends ChiselUtestTester {
  val tests = Tests {
    test("PCRegister") {
      testCircuit(new PCRegister()) { dut =>
        println(s"------------testing-PCReg-BEGIN------------")
        println(s"START_ADDR: ${START_ADDR.toHexString}")
        // initIO
        dut.io.isBranch.poke(false.B)
        dut.io.isJump.poke(false.B)
        dut.io.resBranch.poke(false.B)
        dut.io.addrTarget.poke(START_ADDR)
        dut.io.pc.expect(START_ADDR)

        val target_list = Seq.fill(10)(scala.util.Random.nextInt().toLong & 0xffffffffL)

        var addr = START_ADDR

        // Normal
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          addr += ADDR_BYTE_WIDTH
          dut.clock.step()
          dut.io.pc.expect(addr.U)
        }

        // Jump
        dut.io.isJump.poke(true.B)
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          dut.clock.step()
          dut.io.pc.expect(target.U)
          addr = target
        }
        dut.io.isJump.poke(false.B)

        // Branch UNSUCCESS
        dut.io.isBranch.poke(true.B)
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          addr += ADDR_BYTE_WIDTH
          dut.clock.step()
          dut.io.pc.expect(addr.U)
        }

        // Branch SUCCESS
        dut.io.resBranch.poke(true.B)
        for (target <- target_list) {
          dut.io.addrTarget.poke(target.U)
          addr += ADDR_BYTE_WIDTH
          dut.clock.step()
          dut.io.pc.expect(target.U)
          addr = target
        }
        println(s"------------testing-PCReg-END------------")
      }
    }
  }
}
