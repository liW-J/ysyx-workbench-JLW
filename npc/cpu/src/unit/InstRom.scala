package unit

import chisel3._
import chisel3.util._

import config.Configs._

class InstRomIO extends Bundle {
  val addr = Input(UInt(ADDR_WIDTH.W))
  val inst = Output(UInt(INST_WIDTH.W))
}

class InstRom extends Module {
  val io = IO(new InstRomIO())

  // Mem(size: Int, t: T) is a hardware generators provided by Chisel, used to create Memory moudle
  val instMem = Mem(MEM_INST_SIZE, UInt(INST_WIDTH.W))

  io.inst := instMem.read(io.addr >> INST_BYTE_WIDTH_LOG.U) // addr need offset right 2
}
