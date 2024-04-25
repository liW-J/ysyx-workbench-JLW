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

  printf("io.ar.ready = %d\n", io.ar.ready)
  printf("io.r.valid = %d\n", io.r.valid)

  printf("instSRAM.io.pc = %x\n\n", instSRAM.io.pc)

  instSRAM.io.pc := RegEnable(io.ar.bits.addr, io.ar.fire)
  // io.r.bits.data := RegEnable(instSRAM.io.inst, io.r.fire)

  io.r.bits.data := instSRAM.io.inst
  io.r.bits.resp := 1.U

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.ar.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.ar.ready, s_idle, s_wait_ready)
  ))

  switch(state){
    is(s_idle){ io.r.valid := false.B }
    is(s_wait_ready){ io.r.valid := true.B }
  }
}