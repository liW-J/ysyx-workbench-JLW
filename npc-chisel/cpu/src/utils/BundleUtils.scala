package utils

import chisel3._
import config.Configs._

class BundleControl extends Bundle {
  val isJump = Output(UInt())
  val isBranch = Output(UInt())
  val opcode = Output(UInt())
}

class BundleReg extends Bundle {
  val rs1 = Output(UInt(REG_NUMS_LOG.W))
  val rs2 = Output(UInt(REG_NUMS_LOG.W))
  val rd  = Output(UInt(REG_NUMS_LOG.W))
}
