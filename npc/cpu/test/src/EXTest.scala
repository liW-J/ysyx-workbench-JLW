package test

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

import config.Configs._
import config.EXEtypes._
import _root_.stage.EX

object EXTest extends ChiselUtestTester {
  val tests = Tests {
    test("EX") {
      testCircuit(new EX()) { dut =>
        println(s"------------testing-EX-BEGIN------------")

        val src1 = 0x00000001L
        val src2 = 0x00000001L
        dut.io.bundleEXControl.isBranch.poke(false.B)
        dut.io.bundleEXControl.isALUSrc.poke(false.B)
        dut.io.bundleEXControl.isJAL.poke(false.B)
        dut.io.bundleEXControl.exeType.poke(EXE_ADD)
        dut.io.pc.poke(0.U)
        dut.io.imm.poke(4.U)
        dut.io.dataRead1.poke(src1.U)
        dut.io.dataRead2.poke(src2.U)

        val result = src1 + src2
        dut.io.res.expect((result.toLong & 0xffffffffL).U)

        println(s"------------testing-EX-END------------")
      }
    }
  }
}