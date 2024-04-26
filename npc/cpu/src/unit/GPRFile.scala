package unit

import chisel3._
import chisel3.util._
import config.ExeTypes._
import config.Configs._
import config.CSRNums._
import utils._
import javax.swing.InputMap
import javax.xml.transform.OutputKeys
import scala.annotation.switch

class GPRFileIO extends Bundle {
  val writeEnable = Input(Bool())
  val isJump      = Input(Bool())
  val isLoad      = Input(Bool())
  val isUnsigned  = Input(Bool())
  val isContext   = Input(Bool())
  val imm         = Input(UInt(DATA_WIDTH.W))
  val csrType     = Input(UInt(EXE_TYPES_WIDTH.W))
  val lsuType     = Input(UInt(EXE_TYPES_WIDTH.W))
  val pc          = Input(UInt(ADDR_WIDTH.W))
  val dataWrite   = Input(UInt(DATA_WIDTH.W))
  val bundleReg   = Flipped(new BundleReg)
  val dataRead1   = Output(UInt(DATA_WIDTH.W))
  val dataRead2   = Output(UInt(DATA_WIDTH.W))
  val csrData     = Output(UInt(DATA_WIDTH.W))
  val resCSR      = Output(UInt(ADDR_WIDTH.W))
  val in       = Flipped(new AXI4LiteIO)
  val out      = new AXI4LiteIO()
}

class GPRFile extends Module {
  val io = IO(new GPRFileIO())

  io.in.ar  := DontCare
  io.in.r   := DontCare
  io.in.aw  := DontCare
  io.in.b   := DontCare
  io.out.ar := DontCare
  io.out.r  := DontCare
  io.out.aw := DontCare
  io.out.b  := DontCare

  io.in.w.ready := true.B
  io.out.w.valid := false.B
  io.out.w.bits.data := 0.U
  io.out.w.bits.strb := 0.U

  // register file
  val regs      = Mem(REG_NUMS, UInt(DATA_WIDTH.W))
  val csrs      = Mem(CSR_NUMS, UInt(ADDR_WIDTH.W))
  val dataWrite = WireDefault(0.U(DATA_WIDTH.W))
  val resCSR    = WireDefault(0.U(ADDR_WIDTH.W))
  val snpc      = WireDefault(0.U(ADDR_WIDTH.W))
  
  // if use $zero reg, set 0 as output
  when(io.bundleReg.rs1 === 0.U) { io.dataRead1 := 0.U }
  when(io.bundleReg.rs2 === 0.U) { io.dataRead2 := 0.U }

  snpc         := io.pc + INST_BYTE_WIDTH.U
  io.dataRead1 := regs.read(io.bundleReg.rs1)
  io.dataRead2 := regs.read(io.bundleReg.rs2)
  io.csrData   := csrs.read(io.imm)

  when(io.isLoad && ~io.isUnsigned) {
    switch(io.lsuType) {
      is(LSU_B) { dataWrite := Cat(Fill(24, io.dataWrite(7)), io.dataWrite(7, 0)) }
      is(LSU_H) { dataWrite := Cat(Fill(16, io.dataWrite(15)), io.dataWrite(15, 0)) }
      is(LSU_W) { dataWrite := io.dataWrite }
    }
  }.otherwise { dataWrite := io.dataWrite }

  when(io.in.w.fire){
    when(io.writeEnable && io.bundleReg.rd =/= 0.U) {
      when(io.isJump) { //JAL or JALR will set pc+4 into $rd
        regs.write(io.bundleReg.rd, snpc)
      }.otherwise { regs.write(io.bundleReg.rd, dataWrite) }
    }
  }

  when(io.isContext){
    switch(io.csrType) {
      is(CSR_RS) { 
        when (io.bundleReg.rd =/= 0.U){
          regs.write(io.bundleReg.rd, io.csrData)
        }
        csrs.write(io.imm, dataWrite) 
      }
      is(CSR_RW) { 
        when (io.bundleReg.rd =/= 0.U){
          regs.write(io.bundleReg.rd, io.csrData)
        }
        csrs.write(io.imm, dataWrite) 
      }
      is(CSR_ECALL) {
        csrs.write(CSR_MEPC, snpc)
        csrs.write(CSR_MCAUSE, 0x0b.U)
        csrs.write(CSR_MSTATUS, 0x1800.U)
        resCSR       := csrs.read(CSR_MTVEC)
      }
      is(CSR_MRET) {
        csrs.write(CSR_MSTATUS, 0x1800.U)
        resCSR :=  csrs.read(CSR_MEPC)
      }
    }  
  }

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.in.w.fire, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.out.w.ready, s_idle, s_wait_ready)
  ))

  switch(state){
    is(s_idle){ io.out.w.valid := false.B }
    is(s_wait_ready){ io.out.w.valid := true.B }
  }

  io.resCSR := resCSR
}
