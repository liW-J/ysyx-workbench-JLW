package bus

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._
import config.ArbiterExec._
import blackbox._
import utils._

class ArbiterIO extends Bundle {
  val in2ifu = Flipped(new AXI4LiteIO)
  val in2lsu = Flipped(new AXI4LiteIO)
  val isIFU  = Input(Bool())
  val isLSU  = Input(Bool())
  val resIFU = Input(UInt(DATA_WIDTH.W))
  val resLSU = Input(UInt(DATA_WIDTH.W))
  val out    = new AXI4LiteIO
}

class AXI4Arbiter extends Module {
  val io = IO(new ArbiterIO())

  io.in2ifu := DontCare
  io.in2lsu := DontCare
  io.out    := DontCare

  val exec  = WireDefault(0.U)
  val isIFU = WireDefault(false.B)
  val isLSU = WireDefault(false.B)
  isIFU := io.isIFU
  isLSU := io.isLSU

  when(isIFU === false.B && isLSU === true.B) {
    exec := exec_LSU
  }.elsewhen(isIFU === true.B && isLSU === false.B) {
    exec := exec_IFU
  }.otherwise {
    exec := exec_NONE
  }

  switch(exec) {
    is(exec_IFU) {
      io.out.ar.valid := io.in2ifu.ar.valid
      io.out.r.ready  := io.in2ifu.r.ready
      io.out.w.valid  := io.in2ifu.w.valid
      io.out.aw.valid := io.in2ifu.aw.valid
      io.out.ar.bits  := io.in2ifu.ar.bits
      io.out.aw.bits  := io.in2ifu.aw.bits
      io.out.w.bits   := io.in2ifu.w.bits
    }
    is(exec_LSU) {
      io.out.ar.valid := io.in2lsu.ar.valid
      io.out.r.ready  := io.in2lsu.r.ready
      io.out.w.valid  := io.in2lsu.w.valid
      io.out.aw.valid := io.in2lsu.aw.valid
      io.out.ar.bits  := io.in2lsu.ar.bits
      io.out.aw.bits  := io.in2lsu.aw.bits
      io.out.w.bits   := io.in2lsu.w.bits
    }
    is(exec_NONE) {
      io.out.ar.valid := false.B
      io.out.r.ready  := false.B
      io.out.w.valid  := false.B
      io.out.aw.valid := false.B
      io.out.ar.bits  := DontCare
      io.out.aw.bits  := DontCare
      io.out.w.bits   := DontCare
    }
  }

  io.in2ifu.r.valid     := io.out.r.valid
  io.in2ifu.r.bits.data := io.resIFU
  io.in2ifu.ar.ready    := true.B

  io.in2lsu.r.bits.data := io.resLSU
  io.in2lsu.r.valid     := io.out.r.valid
  io.in2lsu.ar.ready    := true.B
  io.in2lsu.aw.ready    := true.B
  io.in2lsu.w.ready     := true.B
}
