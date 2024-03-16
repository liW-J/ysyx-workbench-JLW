package blackbox

import chisel3._
import chisel3.util._
import config.Configs._
 
class GetPC extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val pc = Input(UInt(ADDR_WIDTH.W))
  })
  
  addResource("/getPC.v")

  
}
