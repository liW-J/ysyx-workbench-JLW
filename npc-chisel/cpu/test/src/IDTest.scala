package test

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

import config.Configs._
import _root_.stage.ID

object IDTest extends ChiselUtestTester {
  val tests = Tests {
    test("ID") {
      testCircuit(new ID()) { dut =>
        println(s"------------testing-ID-BEGIN------------")
        // ADDI x1, x1, 0x4
        // EBREAK 
        val inst_list = Seq(0x00408093L.U, 0x00100073L.U)
        for (inst <- inst_list) {
                dut.io.inst.poke(inst)
                println(dut.io.bundleReg.rs1.peekInt())
                println(dut.io.bundleReg.rs2.peekInt())
                println(dut.io.imm.peek())
                println(dut.io.bundleReg.rd.peekInt())
                println(dut.io.BundleControl.peek())
        }
        println(s"------------testing-ID-END------------")
      }
    }
  }
}