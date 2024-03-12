package config

import chisel3._

object OPcodes {
  val OP_TYPES_WIDTH = 5
  val LUI_OP         = "b01101".U(OP_TYPES_WIDTH.W)
  val ADDI_OP        = "b00100".U(OP_TYPES_WIDTH.W);
  val EBREAK_OP      = "b11100".U(OP_TYPES_WIDTH.W);
  val AUIPC_OP       = "b00101".U(OP_TYPES_WIDTH.W)
}
