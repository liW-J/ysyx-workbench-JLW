import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import unit._
import blackbox._
import bus._
import _root_.stage._

class TopIO extends Bundle {
  val inst          = Output(UInt(INST_WIDTH.W))
  val pc            = Output(UInt(ADDR_WIDTH.W))
  val bundleControl = new BundleControl()
  val resEX         = Output(UInt(DATA_WIDTH.W))
  val src1          = Output(UInt(DATA_WIDTH.W))
  val src2          = Output(UInt(DATA_WIDTH.W))
  val rs1           = Output(UInt(REG_NUMS_LOG.W))
  val rs2           = Output(UInt(REG_NUMS_LOG.W))
  val rd            = Output(UInt(REG_NUMS_LOG.W))
  val imm           = Output(UInt(DATA_WIDTH.W))
  val resBranch     = Output(Bool())
  val writeEnable   = Output(Bool())
}

class TOP(arch: String) extends Module {
  val io = IO(new TopIO())

  val idu        = Module(new IDU())
  val gprFile    = Module(new GPRFile())
  val exu        = Module(new EXU())
  val controller = Module(new Controller())
  val trap       = Module(new Trap())
  val getPC      = Module(new GetPC())
  val ifu        = Module(new IFU())
  val lsu        = Module(new LSU())
  val sram       = Module(new AXI4SRAM())

  trap.io.isEbreak := idu.io.isEbreak
  trap.io.clock    := clock
  trap.io.reset    := reset

  getPC.io.pc    := ifu.io.pc
  getPC.io.clock := clock
  getPC.io.reset := reset

  lsu.io.isLoad  := controller.io.bundleControlOut.isLoad
  lsu.io.isStore := controller.io.bundleControlOut.isStore
  lsu.io.addr    := exu.io.res
  lsu.io.len     := controller.io.bundleControlOut.lsuType
  lsu.io.wdata   := exu.io.src2

  // ifu.io.pc <> pcReg.io.pc

  sram.io.ar <> ifu.io.out.ar
  sram.io.r <> ifu.io.out.r
  ifu.io.out.w <> exu.io.in.w
  exu.io.out.w <> lsu.io.in.w
  lsu.io.out.w <> gprFile.io.in.w
  gprFile.io.out.w <> ifu.io.in.w

  
  // judge nextPC by control from frontPC
  ifu.io.resBranch <> exu.io.resBranch
  ifu.io.addrTarget <> lsu.io.res
  ifu.io.isBranch <> controller.io.bundleControlOut.isBranch
  ifu.io.isJump <> controller.io.bundleControlOut.isJump
  ifu.io.csrType <> controller.io.bundleControlOut.csrType
  ifu.io.resCSR <> gprFile.io.resCSR

  // get inst to Decoder
  // StageConnect(ifu.io.out, idu.io.in, arch)
  ifu.io.inst <> idu.io.inst

  // read or write GPRs from idres to $rs1/$rs2/$rd
  // if isJump, set nextPC to $rd temporarily
  gprFile.io.bundleReg <> idu.io.bundleReg
  gprFile.io.writeEnable <> controller.io.bundleControlOut.writeEnable
  gprFile.io.lsuType <> controller.io.bundleControlOut.lsuType
  gprFile.io.isJump <> controller.io.bundleControlOut.isJump
  gprFile.io.isLoad <> controller.io.bundleControlOut.isLoad
  gprFile.io.isUnsigned <> controller.io.bundleControlOut.isUnsigned
  gprFile.io.isContext <> controller.io.bundleControlOut.isContext
  gprFile.io.csrType <> controller.io.bundleControlOut.csrType
  gprFile.io.imm <> idu.io.imm
  gprFile.io.dataWrite <> lsu.io.res
  gprFile.io.pc <> ifu.io.pc

  // exec ALU operate by control from thisInstDecode
  exu.io.bundleEXControl <> controller.io.bundleEXControl
  exu.io.dataRead1 <> gprFile.io.dataRead1
  exu.io.dataRead2 <> gprFile.io.dataRead2
  exu.io.csrData <> gprFile.io.csrData
  exu.io.imm <> idu.io.imm
  exu.io.pc <> ifu.io.pc

  controller.io.bundleControlIn <> idu.io.BundleControl

  io.rs1 <> idu.io.bundleReg.rs1
  io.rs2 <> idu.io.bundleReg.rs2
  io.rd <> idu.io.bundleReg.rd
  io.imm <> idu.io.imm
  io.pc <> ifu.io.pc
  io.bundleControl <> idu.io.BundleControl
  io.resEX <> exu.io.res
  io.resBranch <> exu.io.resBranch
  io.src1 <> exu.io.src1
  io.src2 <> exu.io.src2
  io.inst <> ifu.io.inst
  io.writeEnable <> controller.io.bundleControlOut.writeEnable

  sram.io.aw := DontCare
  sram.io.w := DontCare
  sram.io.b := DontCare

  ifu.io.out.aw := DontCare
  ifu.io.out.b := DontCare
  ifu.io.in.ar := DontCare
  ifu.io.in.r := DontCare
  ifu.io.in.aw := DontCare
  ifu.io.in.b := DontCare

  exu.io.in.ar := DontCare
  exu.io.in.r := DontCare
  exu.io.in.aw := DontCare
  exu.io.in.b := DontCare
  exu.io.out.ar := DontCare
  exu.io.out.r := DontCare
  exu.io.out.aw := DontCare
  exu.io.out.b := DontCare

  lsu.io.in.ar := DontCare
  lsu.io.in.r := DontCare
  lsu.io.in.aw := DontCare
  lsu.io.in.b := DontCare
  lsu.io.out.ar := DontCare
  lsu.io.out.r := DontCare
  lsu.io.out.aw := DontCare
  lsu.io.out.b := DontCare
  lsu.io.out.w := DontCare

  gprFile.io.in.ar := DontCare
  gprFile.io.in.r := DontCare
  gprFile.io.in.aw := DontCare
  gprFile.io.in.b := DontCare
  gprFile.io.out.ar := DontCare
  gprFile.io.out.r := DontCare
  gprFile.io.out.aw := DontCare
  gprFile.io.out.b := DontCare

}

// object StageConnect {
//   def apply[T <: Data](left: DecoupledIO[T], right: DecoupledIO[T], arch: String) = {
//     if (arch == "single") {
//       left.ready  := true.B
//       right.valid := true.B
//       right.bits  := left.bits
//     } else if (arch == "multi") { right <> left }
//     else if (arch == "pipeline") { right <> RegEnable(left, left.fire) }
//   }
// }
