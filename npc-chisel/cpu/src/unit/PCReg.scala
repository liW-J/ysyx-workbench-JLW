package unit

import chisel3._
import chisel3.util._

import config.Configs._

//-----------------------------------------------------------------------------
// PCReg
//-----------------------------------------------------------------------------
//
// Description :
//
// Input  : 
//              1) ctrlJump [Bool] : judge Jump
//              2) ctrlBranch [Bool] : judge Branch
//              3) resultBranch [Bool] : Branch result 
//              4) addrTarget [UInt(ADDR_WIDTH.W)] : if Branch SUCCESS or Jump , to this addr
// Output :
//              1) addrOut []: target address
//
//-----------------------------------------------------------------------------
class PCRegIO extends Bundle {
  val ctrlJump     = Input(Bool()) 
  val ctrlBranch   = Input(Bool()) 
  val resultBranch = Input(Bool())
  val addrTarget   = Input(UInt(ADDR_WIDTH.W)) 
  val addrOut      = Output(UInt(ADDR_WIDTH.W)) 
}

class PCReg extends Module {
  val io = IO(new PCRegIO()) 

  val regPC = RegInit(UInt(ADDR_WIDTH.W), START_ADDR.U) // init pcAddr: 0x80000000

  when(io.ctrlJump || (io.ctrlBranch && io.resultBranch)) {
    regPC := io.addrTarget
  }.otherwise { 
    regPC := regPC + ADDR_BYTE_WIDTH.U
  }

  io.addrOut := regPC 
}
