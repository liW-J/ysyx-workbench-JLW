package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.ExeTypes._
import blackbox._
import bus._
import utils._
import scala.annotation.switch

class IFUIO extends Bundle {
  val isJump     = Input(Bool())
  val isBranch   = Input(Bool())
  val resBranch  = Input(Bool())
  val addrTarget = Input(UInt(ADDR_WIDTH.W))
  val csrType    = Input(UInt(EXE_TYPES_WIDTH.W))
  val resCSR     = Input(UInt(ADDR_WIDTH.W))
  val pc   = Output(UInt(ADDR_WIDTH.W))
  val inst = Output(UInt(INST_WIDTH.W))
  val in      = Flipped(new AXI4LiteIO)
  val out = new AXI4LiteIO()
}

class IFU extends Module {
  val io = IO(new IFUIO())
  
  io.in.ar  := DontCare
  io.in.r   := DontCare
  io.in.aw  := DontCare
  io.in.b   := DontCare
  io.out.aw := DontCare
  io.out.b := DontCare

  io.out.ar.valid := true.B
  io.out.ar.bits.addr := io.pc

  io.out.r.ready := true.B

  io.out.w.valid := false.B
  io.out.w.bits.data := io.out.r.bits.data
  io.out.w.bits.strb := 0.U

  io.in.w.ready := true.B

  val pcReg = RegInit(UInt(ADDR_WIDTH.W), START_ADDR.U) // init pcAddr: 0x80000000
  val resBranch = RegEnable(io.resBranch, io.out.w.fire)
  
  when(io.in.w.fire){
    when(io.isJump || (io.isBranch && resBranch) || (io.csrType === CSR_ECALL) || (io.csrType === CSR_MRET)) {
      when(io.isJump || (io.isBranch && resBranch)) {
        pcReg := io.addrTarget
      }.otherwise {
        pcReg := io.resCSR
      }
    }.otherwise {
      pcReg := pcReg + ADDR_BYTE_WIDTH.U
    }
  }

  io.pc := pcReg


  val s_idle :: s_get_inst :: s_wait_ready :: Nil = Enum(3)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.out.ar.valid, s_get_inst, s_idle),
    s_get_inst   -> Mux(io.out.w.valid, s_wait_ready, s_get_inst),
    s_wait_ready -> Mux(~io.out.w.valid, s_idle, s_wait_ready)
  ))

  switch(state){
    is(s_idle){ 
      io.out.ar.valid := true.B
      io.out.w.valid := false.B
    }
    is(s_get_inst){ 
      io.out.ar.valid := false.B
      io.out.w.valid := true.B
    }
    is(s_wait_ready){ 
      io.out.ar.valid := false.B
      io.out.w.valid := false.B
    }
  }

  io.inst := io.out.r.bits.data
}
 