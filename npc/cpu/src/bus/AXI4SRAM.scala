package bus

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._
import blackbox._
import utils._

class SRAMIO extends Bundle {
  val in     = Flipped(new AXI4LiteIO)
  val isIFU  = Input(Bool())
  val isLSU  = Input(Bool())
  val resIFU = Output(UInt(DATA_WIDTH.W))
  val resLSU = Output(UInt(DATA_WIDTH.W))
}

class AXI4SRAM extends Module {
  val io = IO(new SRAMIO())

  io.in.b        := DontCare
  io.in.ar.ready := true.B
  io.in.r.valid  := false.B
  io.in.aw.ready := true.B
  io.in.w.ready  := true.B
  io.in.r.bits   := DontCare

  val instSRAM = Module(new InstSRAM())
  val dataSRAM = Module(new DataSRAM())
  val instRes  = WireDefault(0.U(DATA_WIDTH.W))
  val dataRes  = WireDefault(0.U(DATA_WIDTH.W))

  dataSRAM.io.len     := RegEnable(io.in.ar.bits.len, io.isLSU)
  dataSRAM.io.wdata   := RegEnable(io.in.w.bits.data, io.isLSU)
  dataSRAM.io.addr    := RegEnable(io.in.ar.bits.addr, io.isLSU)
  dataSRAM.io.isLoad  := RegEnable(io.in.ar.fire, io.isLSU)
  dataSRAM.io.isStore := RegEnable(io.in.aw.fire, io.isLSU)
  instSRAM.io.pc      := RegEnable(io.in.ar.bits.addr, io.isIFU)

  io.resLSU := dataSRAM.io.res
  io.resIFU := instSRAM.io.inst
}
