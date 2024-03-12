package blackbox

import chisel3._
import chisel3.util._
 
class Trap extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val isEbreak = Input(Bool())
  })
  
  addResource("/trap.v")

  
}
