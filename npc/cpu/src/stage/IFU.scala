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
  val pc   = Input(UInt(ADDR_WIDTH.W))
  val inst = Output(UInt(INST_WIDTH.W))
  val out  = Decoupled(new AXI4LiteAIO)
  val in   = Flipped(Decoupled(new AXI4LiteRIO))
}

class IFU extends Module {
  val io = IO(new IFUIO())
  
  io.out.valid := true.B
  io.out.bits.addr := io.pc

  io.in.ready := false.B

  printf("io.out.valid = %d\n", io.out.valid)
  printf("io.out.ready = %d\n", io.out.ready)
  printf("io.in.ready = %d\n", io.in.ready)
  printf("io.in.valid = %d\n", io.in.valid)
  printf("io.in.bits.data = %x\n\n", io.in.bits.data)

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.out.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.out.ready, s_idle, s_wait_ready)
  ))

  switch(state){
    is(s_idle){ io.in.ready := false.B }
    is(s_wait_ready){ io.in.ready := true.B }
  }


  io.inst := io.in.bits.data
}
