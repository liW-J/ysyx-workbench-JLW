package utils

import chisel3._
import config.Configs._
import config.ExeTypes._


class BundleControl extends Bundle {
  val isALUSrc = Output(Bool())
  val isJump = Output(Bool())
  val isBranch = Output(Bool())
  val isJAL = Output(Bool())
  val writeEnable = Output(Bool())
  val isLoad = Output(Bool())
  val isStore = Output(Bool())
  val isSigned = Output(Bool()) // unsignNum or signNum
  val lsType = Output(UInt(EXE_TYPES_WIDTH.W))
  val exeType = Output(UInt(EXE_TYPES_WIDTH.W))
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
    val isSigned = Input(Bool())
    val exeType = Input(UInt(EXE_TYPES_WIDTH.W))    
}

class BundleDataControl extends Bundle {
    val isLoad = Output(Bool())
    val isStore = Output(Bool())
    val isSigned = Output(Bool())
    val lsType = Output(UInt(EXE_TYPES_WIDTH.W))
}
