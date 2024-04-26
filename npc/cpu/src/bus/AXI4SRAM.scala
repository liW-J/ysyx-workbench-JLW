package bus

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._
import blackbox._
import utils._

class AXI4SRAM extends Module {
  val io = IO(Flipped(new AXI4LiteIO()))

  io.aw := DontCare
  io.w := DontCare
  io.b := DontCare

  io.ar.ready := true.B
  io.r.valid := false.B

  val instSRAM = Module(new InstSRAM())

  instSRAM.io.pc := io.ar.bits.addr

  io.r.bits.data := instSRAM.io.inst
  io.r.bits.resp := 1.U

}