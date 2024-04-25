package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.ExeTypes._
import blackbox._

class LSUIO extends Bundle {
  val isLoad  = Input(Bool())
  val isStore = Input(Bool())
  val addr    = Input(UInt(ADDR_WIDTH.W))
  val len     = Input(UInt(DATA_WIDTH.W))
  val wdata   = Input(UInt(DATA_WIDTH.W))
  val res     = Output(UInt(DATA_WIDTH.W))
}

class LSU extends Module {
  val io = IO(new LSUIO())

  val dataMem  = Mem(MEM_DATA_SIZE, UInt(DATA_WIDTH.W))
  val dataSRAM = Module(new DataSRAM())
  val res      = WireDefault(0.U(DATA_WIDTH.W))

  dataSRAM.io.isLoad  := io.isLoad
  dataSRAM.io.isStore := io.isStore
  dataSRAM.io.addr    := io.addr
  dataSRAM.io.len     := io.len
  dataSRAM.io.wdata   := io.wdata

  res := dataSRAM.io.res

  when(io.isLoad || io.isStore) {
    when(io.isLoad) {
      dataMem.write(io.addr, res)
    }.otherwise {
      dataMem.write(io.addr, io.wdata)
    }
  }.otherwise {
    res := io.addr
  }

  io.res := res
}
