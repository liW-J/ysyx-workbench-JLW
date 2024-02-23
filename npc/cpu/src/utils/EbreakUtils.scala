import chisel3._
import chisel3.util._

import Configs._
 
class Trap extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock      = Input(Clock())
    val reset      = Input(Reset())
    val flag = Input(UInt(8.W))
  })
 
  setInline("trap.v",
            """
            |`define BYTE_WIDTH 8
            |
            |module Trap(
            |    input wire                      clock,
            |    input wire                      reset,
            |    input wire[`BYTE_WIDTH - 1 : 0] flag
            |);
            |
            |    import "DPI-C" context function void NPCTrap(input byte unsigned flag);
            |
            |    always @(flag) begin
            |        NPCTrap(EbreakFlag);
            |    end
            |
            |endmodule
            """.stripMargin)            
}
