package test

package rv32isc

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

import org.scalatest.flatspec.AnyFlatSpec

import config.Configs._
import config.LStypes._
import unit.DataRam


object DataRam extends ChiselUtestTester {
  val tests = Tests {
    test("DataRam") {
      testCircuit(new DataRam()) { dut =>
        println(s"------------testing-DataRam-BEGIN------------")
        val data_list = Seq.fill(MEM_DATA_SIZE)( scala.util.Random.nextInt().toLong & 0xffffffffL)
        dut.io.bundleDataControl.isLoad.poke(false.B)
        dut.io.bundleDataControl.isStore.poke(false.B)
        dut.io.bundleDataControl.lsType.poke(LS_W)
        dut.io.bundleDataControl.isSigned.poke(false.B)
        dut.io.dataStore.poke(0.U(DATA_WIDTH.W))
        dut.io.resEX.poke(0.U(DATA_WIDTH.W))
        // 非LS指令
        for (i <- 0 to MEM_DATA_SIZE - 1) {
            dut.io.resEX.poke((i * DATA_BYTE_WIDTH).U)
            dut.clock.step(1)
            dut.io.res.expect((i * DATA_BYTE_WIDTH).U)
        }
        println(s"------------testing-DataRam-END------------")
      }
    }
  }
}