package blackbox

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._
 
class InstSRAM extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val pc = Input(UInt(ADDR_WIDTH.W))
    val inst = Output(UInt(INST_WIDTH.W))
  })

  addResource("/instSRAM.v")

}
