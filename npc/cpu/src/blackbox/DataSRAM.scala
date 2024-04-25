package blackbox

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._
 
class DataSRAM extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val isLoad = Input(Bool())
    val isStore = Input(Bool())
    val addr = Input(UInt(ADDR_WIDTH.W))
    val len = Input(UInt(DATA_WIDTH.W))
    val wdata = Input(UInt(DATA_WIDTH.W))
    val res = Output(UInt(DATA_WIDTH.W))
  })

  addResource("/dataSRAM.v")
}