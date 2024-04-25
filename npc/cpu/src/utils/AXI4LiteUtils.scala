package utils

import chisel3._
import chisel3.util._
import config.Configs._
import config.ExeTypes._

class AXI4LiteAIO extends Bundle {
    val addr = Output(UInt(ADDR_WIDTH.W))
}

class AXI4LiteRIO extends Bundle {
    val data = Output(UInt(DATA_WIDTH.W))
    val resp = Output(UInt(RESP_WIDTH.W))
}

class AXI4LiteWIO extends Bundle {
    val data = Output(UInt(DATA_WIDTH.W))
    val strb = Output(UInt(MASK_WIDTH.W))
}

class AXI4LiteBIO extends Bundle {
    val resp = Output(UInt(RESP_WIDTH.W))
}

class AXI4LiteIO extends Bundle {
    val ar = Decoupled(new AXI4LiteAIO)
    val r  = Flipped(Decoupled(new AXI4LiteRIO))
    val aw = Decoupled(new AXI4LiteAIO)
    val w  = Decoupled(new AXI4LiteWIO)
    val b  = Flipped(Decoupled(new AXI4LiteBIO))
}