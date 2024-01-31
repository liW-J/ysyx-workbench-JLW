package unit

import chisel3._
import chisel3.util._

import config.Configs._

//-----------------------------------------------------------------------------
// InstRom
//-----------------------------------------------------------------------------
//
// Description :  accept a addr, and find instruction from instRom
//
// Input  :
//              1) addr [UInt(ADDR_WIDTH.W)] : addr to get corresponding instruction
// Output :
//              1) inst [UInt(INST_WIDTH.W)] : target instruction
//
//-----------------------------------------------------------------------------
class InstRomIO extends Bundle {
  val addr = Input(UInt(ADDR_WIDTH.W))
  val inst = Output(UInt(INST_WIDTH.W))
}

class InstRom extends Module {
  val io = IO(new InstRomIO())

  // Mem(size: Int, t: T) is a hardware generators provided by Chisel, used to create Memory moudle
  val instMem = Mem(MEM_INST_SIZE, UInt(INST_WIDTH.W))

  // a test num used for InstRomtest
  instMem.write(1.U, 0xfe0f8f93L.U);
  instMem.write(2.U, 0x00100073L.U)

  io.inst := instMem.read(io.addr >> INST_BYTE_WIDTH_LOG.U) // addr need offset right 2
}
