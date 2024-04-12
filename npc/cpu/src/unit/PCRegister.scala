package unit

import chisel3._
import chisel3.util._

import config.Configs._
import config.ExeTypes._

//-----------------------------------------------------------------------------
// PCRegister
//-----------------------------------------------------------------------------
//
// Description : every clk pcAddr + 4, except Jump OR Branch to target pcAddr
//
//-----------------------------------------------------------------------------
class PCRegisterIO extends Bundle {
  val isJump     = Input(Bool())
  val isBranch   = Input(Bool())
  val resBranch  = Input(Bool())
  val addrTarget = Input(UInt(ADDR_WIDTH.W))
  val csrType    = Input(UInt(EXE_TYPES_WIDTH.W))
  val resCSR     = Input(UInt(ADDR_WIDTH.W))
  val pc         = Output(UInt(ADDR_WIDTH.W))
}

class PCRegister extends Module {
  val io = IO(new PCRegisterIO())

  val pcReg = RegInit(UInt(ADDR_WIDTH.W), START_ADDR.U) // init pcAddr: 0x80000000

  when(io.isJump || (io.isBranch && io.resBranch) || (io.csrType === CSR_ECALL) || (io.csrType === CSR_MRET)) {
    when(io.isJump || (io.isBranch && io.resBranch)) {
      pcReg := io.addrTarget
    }.otherwise {
      pcReg := io.resCSR
    }
  }.otherwise {
    pcReg := pcReg + ADDR_BYTE_WIDTH.U
  }

  io.pc := pcReg
}
