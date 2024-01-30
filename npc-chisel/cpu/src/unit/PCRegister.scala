package unit

import chisel3._
import chisel3.util._

import config.Configs._
import utils._

//-----------------------------------------------------------------------------
// PCReg
//-----------------------------------------------------------------------------
//
// Description : every clk pcAddr + 4, except Jump OR Branch to target pcAddr
//
// Input  : 
//              1) ctrlJump [Bool] : judge Jump
//              2) ctrlBranch [Bool] : judge Branch
//              3) resultBranch [Bool] : Branch result 
//              4) addrTarget [UInt(ADDR_WIDTH.W)] : if Branch SUCCESS or Jump , to this addr
// Output :
//              1) addrOut [UInt(ADDR_WIDTH.W)] : target address
//
//-----------------------------------------------------------------------------
class PCRegisterIO extends Bundle {
  val ctrlJump     = Input(Bool()) 
  val ctrlBranch   = Input(Bool()) 
  val resultBranch = Input(Bool())
  val addrTarget   = Input(UInt(ADDR_WIDTH.W)) 
  val addrOut      = Output(UInt(ADDR_WIDTH.W)) 
}

class PCRegister extends Module {
  val io = IO(new PCRegisterIO()) 

  val pcReg = RegInit(UInt(ADDR_WIDTH.W), START_ADDR.U) // init pcAddr: 0x80000000

  when(io.ctrlJump || (io.ctrlBranch && io.resultBranch)) {
    pcReg := io.addrTarget
  }.otherwise { 
    pcReg := pcReg + ADDR_BYTE_WIDTH.U
  }

  io.addrOut := pcReg 
}
