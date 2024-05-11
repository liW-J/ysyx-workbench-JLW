package stage

import chisel3._
import chisel3.util._
import config.Status._
import config.Configs._
import config.ExeTypes._
import blackbox._
import bus._
import utils._

class LSUIO extends Bundle {
  val isLoad  = Input(Bool())
  val isStore = Input(Bool())
  val addr    = Input(UInt(ADDR_WIDTH.W))
  val len     = Input(UInt(DATA_WIDTH.W))
  val wdata   = Input(UInt(DATA_WIDTH.W))
  val res     = Output(UInt(DATA_WIDTH.W))
  val isLSU   = Output(Bool())
  val status  = Output(UInt(DATA_WIDTH.W))
  val in      = Flipped(new AXI4LiteIO)
  val out     = new AXI4LiteIO()
}

class ysyx_23060194_LSU extends Module {
  val io = IO(new LSUIO())

  val res      = WireDefault(0.U(DATA_WIDTH.W))

  io.in  := DontCare
  io.out.b  := DontCare
  io.isLSU := false.B

  io.in.aw.ready := true.B
  io.in.w.ready  := true.B
  io.out.r.ready := true.B
  io.out.w.bits.strb := 0.U

  val len = io.len
  val addr = io.addr
  val isLoad = WireDefault(false.B)
  val isStore = WireDefault(false.B)
  val wdata = io.in.w.bits.data
    
  isLoad := io.isLoad
  isStore := io.isStore

  when(io.in.aw.fire){ 
    io.isLSU := true.B 
    io.out.w.valid := true.B
  }

  io.out.ar.valid := io.isLoad
  io.out.aw.valid := io.isStore
  io.out.w.valid := io.isStore
  io.out.ar.bits.len := io.len
  io.out.aw.bits.len := io.len
  io.out.ar.bits.addr := addr
  io.out.aw.bits.addr := addr
  io.out.w.bits.data := wdata

  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.in.aw.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.out.ar.ready, s_idle, s_wait_ready)
  ))

  io.status := state
  io.res := io.out.r.bits.data
}
