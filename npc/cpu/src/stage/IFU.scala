package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.ExeTypes._
import config.Status._
import blackbox._
import bus._
import utils._

class IFUIO extends Bundle {
  val isJump     = Input(Bool())
  val isBranch   = Input(Bool())
  val resBranch  = Input(Bool())
  val addrTarget = Input(UInt(ADDR_WIDTH.W))
  val csrType    = Input(UInt(EXE_TYPES_WIDTH.W))
  val resCSR     = Input(UInt(ADDR_WIDTH.W))
  val lsuStatus  = Input(UInt(DATA_WIDTH.W))
  val pc         = Output(UInt(ADDR_WIDTH.W))
  val inst       = Output(UInt(INST_WIDTH.W))
  val isIFU      = Output(Bool())
  val status     = Output(UInt(DATA_WIDTH.W))
  val out        = new AXI4LiteIO()
}

class ysyx_23060194_IFU extends Module {
  val io = IO(new IFUIO())

  io.out          := DontCare
  io.out.ar.valid := true.B
  io.out.r.ready  := false.B
  io.isIFU        := false.B

  val pcReg     = RegInit(UInt(ADDR_WIDTH.W), START_ADDR.U) // init pcAddr: 0x80000000
  val finishEXU = WireDefault(false.B)
  val resBranch = RegEnable(io.resBranch, io.out.r.ready)

  when(io.lsuStatus === s_wait_ready) {
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

  io.pc               := pcReg
  io.out.ar.bits.addr := pcReg

  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(
    List(
      s_idle -> Mux(io.out.ar.ready, s_get_inst, s_idle),
      s_get_inst -> Mux(io.out.r.ready, s_wait_ready, s_get_inst),
      s_wait_ready -> Mux(~io.isIFU, s_idle, s_wait_ready)
    )
  )

  switch(state) {
    is(s_idle) {
      io.out.ar.valid := true.B
      io.out.r.ready  := false.B
      io.isIFU        := true.B
    }
    is(s_get_inst) {
      io.out.ar.valid := false.B
      io.out.r.ready  := true.B
      io.isIFU        := false.B
    }
    is(s_wait_ready) {
      io.out.ar.valid := false.B
      io.out.r.ready  := false.B
      io.isIFU        := false.B
    }
  }

  io.inst   := io.out.r.bits.data
  io.status := state
}
