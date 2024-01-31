package utils

import chisel3._
import config.Configs._
import config.OPcodes._
import config.{Configs, OPcodes}

class BundleIDControl extends Bundle {
  val isALUSrc = Input(Bool())
  val isJump = Output(UInt())
  val isBranch = Output(UInt())
  val opcode = Output(UInt(OP_TYPES_WIDTH.W))
}

class BundleReg extends Bundle {
  val rs1 = Output(UInt(REG_NUMS_LOG.W))
  val rs2 = Output(UInt(REG_NUMS_LOG.W))
  val rd  = Output(UInt(REG_NUMS_LOG.W))
}

class BundleEXControl extends Bundle {
    val isALUSrc = Input(Bool())
    val isJAL = Input(Bool())
    val isBranch = Input(Bool())
    val exeOP = Input(UInt(OP_TYPES_WIDTH.W))    
}
