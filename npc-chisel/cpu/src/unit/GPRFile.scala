package unit

import chisel3._
import chisel3.util._

import config.Configs._
import utils._

//-----------------------------------------------------------------------------
// GPRFile
//-----------------------------------------------------------------------------
//
// Description : a GPR File to control reg read or write
//
// Input  :
//              1) ctrlRegWrite [Bool] : judge Jump
//              2) ctrlBranch [Bool] : judge Branch
//              3) resultBranch [Bool] : Branch result
//              4) addrTarget [UInt(ADDR_WIDTH.W)] : if Branch SUCCESS or Jump , to this addr
// Output :
//              1) addrOut [UInt(ADDR_WIDTH.W)] : target address
//
//-----------------------------------------------------------------------------
class GPRFileIO extends Bundle {
  val writeEnable = Input(Bool())
  val isJump    = Input(Bool())
  val pc          = Input(UInt(ADDR_WIDTH.W))
  val dataWrite   = Input(UInt(DATA_WIDTH.W))
  val bundleReg   = Flipped(new BundleReg)
  val dataRead1   = Output(UInt(DATA_WIDTH.W))
  val dataRead2   = Output(UInt(DATA_WIDTH.W))
}

class GPRFile extends Module {
  val io = IO(new GPRFileIO())

  // register file
  val regs = Mem(REG_NUMS, UInt(DATA_WIDTH.W))

  // if use $zero reg, set 0 as output
  when(io.bundleReg.rs1 === 0.U) { io.dataRead1 := 0.U }
  when(io.bundleReg.rs2 === 0.U) { io.dataRead2 := 0.U }

  io.dataRead1 := regs.read(io.bundleReg.rs1)
  io.dataRead2 := regs.read(io.bundleReg.rs2)

  // if we is TRUE && not $zero , write
  when(io.writeEnable && io.bundleReg.rd =/= 0.U) {
    when (io.isJump) { // JAL or JALR will set pc+4 into $rd
      regs.write(io.bundleReg.rd, io.pc + INST_BYTE_WIDTH.U)
    }.otherwise { regs.write(io.bundleReg.rd, io.dataWrite) }
  } 
}
