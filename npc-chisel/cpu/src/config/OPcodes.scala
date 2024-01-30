package config

import chisel3._

object OPcodes {
    val OP_TYPES_WIDTH = 7
    val EX_ADDI_OP = "b0010011".U(OP_TYPES_WIDTH.W)
    val EX_EBREAK_OP = "b1110011".U(OP_TYPES_WIDTH.W)
}

