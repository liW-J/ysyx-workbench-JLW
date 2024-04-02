package blackbox

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._
 
class MemRam extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val isLoad = Input(Bool())
    val isStore = Input(Bool())
    val addr = Input(UInt(ADDR_WIDTH.W))
    val len = Input(UInt(DATA_WIDTH.W))
    val wdata = Input(UInt(DATA_WIDTH.W))
    val rdata = Output(UInt(DATA_WIDTH.W))
  })
  
  // printf("!!!!!!!!!!!!!!!!!!!")
  addResource("/memRam.v")
}
