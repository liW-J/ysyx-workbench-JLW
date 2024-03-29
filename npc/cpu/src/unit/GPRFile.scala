package unit

import chisel3._
import chisel3.util._
import config.ExeTypes._
import config.Configs._
import utils._
import javax.swing.InputMap

class GPRFileIO extends Bundle {
  val writeEnable = Input(Bool())
  val isJump      = Input(Bool())
  val isLoad      = Input(Bool())
  val isUnsigned    = Input(Bool())
  val lsuType     = Input(UInt(EXE_TYPES_WIDTH.W))
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
  val dataWrite = WireDefault(0.U(DATA_WIDTH.W))

  // if use $zero reg, set 0 as output
  when(io.bundleReg.rs1 === 0.U) { io.dataRead1 := 0.U }
  when(io.bundleReg.rs2 === 0.U) { io.dataRead2 := 0.U }

  io.dataRead1 := regs.read(io.bundleReg.rs1)
  io.dataRead2 := regs.read(io.bundleReg.rs2)

  when(io.isLoad && ~io.isUnsigned){
    switch(io.lsuType) {
      is(LSU_B) {dataWrite := Cat(Fill(24, io.dataWrite(7)), io.dataWrite(7, 0))}
      is(LSU_H) {dataWrite := Cat(Fill(16, io.dataWrite(15)), io.dataWrite(15, 0))}
      is(LSU_W) {dataWrite := io.dataWrite}
    }
  }.otherwise{dataWrite := io.dataWrite}

  // if we is TRUE && not $zero , write
  when(io.writeEnable && io.bundleReg.rd =/= 0.U) {
    when (io.isJump) { // JAL or JALR will set pc+4 into $rd
      regs.write(io.bundleReg.rd, io.pc + INST_BYTE_WIDTH.U)
    }.otherwise { regs.write(io.bundleReg.rd, dataWrite) }
  } 

}
