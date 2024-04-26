package stage

import chisel3._
import chisel3.util._

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
  val in      = Flipped(new AXI4LiteIO)
  val out     = new AXI4LiteIO()
}

class LSU extends Module {
  val io = IO(new LSUIO())

  val dataMem  = Mem(MEM_DATA_SIZE, UInt(DATA_WIDTH.W))
  val dataSRAM = Module(new DataSRAM())
  val res      = WireDefault(0.U(DATA_WIDTH.W))

  io.in.ar  := DontCare
  io.in.r   := DontCare
  io.in.aw  := DontCare
  io.in.b   := DontCare
  io.out.ar := DontCare
  io.out.r  := DontCare
  io.out.aw := DontCare
  io.out.b  := DontCare

  io.in.w.ready  := true.B
  io.out.w.valid := false.B
  io.out.w.bits.data := 0.U
  io.out.w.bits.strb := 0.U

  dataSRAM.io.len     := io.len
  dataSRAM.io.wdata   := io.wdata
  dataSRAM.io.addr    := RegEnable(io.addr, io.in.w.fire)
  dataSRAM.io.isLoad  := RegEnable(io.isLoad, io.in.w.fire)
  dataSRAM.io.isStore := RegEnable(io.isStore, io.in.w.fire)

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.in.w.fire, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.out.w.valid, s_idle, s_wait_ready)
  ))

  switch(state){
    is(s_idle){ io.out.w.valid := false.B }
    is(s_wait_ready){ io.out.w.valid := true.B }
  }

  io.res := dataSRAM.io.res
}
