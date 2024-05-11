import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import unit._
import blackbox._
import bus._
import _root_.stage._

class TopIO extends Bundle {
  // val inst          = Output(UInt(INST_WIDTH.W))
  // val pc            = Output(UInt(ADDR_WIDTH.W))
  // val bundleControl = new BundleControl()
  // val resEX         = Output(UInt(DATA_WIDTH.W))
  // val src1          = Output(UInt(DATA_WIDTH.W))
  // val src2          = Output(UInt(DATA_WIDTH.W))
  // val rs1           = Output(UInt(REG_NUMS_LOG.W))
  // val rs2           = Output(UInt(REG_NUMS_LOG.W))
  // val rd            = Output(UInt(REG_NUMS_LOG.W))
  // val imm           = Output(UInt(DATA_WIDTH.W))
  // val resBranch     = Output(Bool())
  // val writeEnable   = Output(Bool())
}

class ysyx_23060194(arch: String) extends Module {
  val io = IO(new TopIO())

  val idu        = Module(new ysyx_23060194_IDU())
  val wbu        = Module(new ysyx_23060194_WBU())
  val exu        = Module(new ysyx_23060194_EXU())
  val controller = Module(new Controller())
  val trap       = Module(new Trap())
  val getPC      = Module(new GetPC())
  val ifu        = Module(new ysyx_23060194_IFU())
  val lsu        = Module(new ysyx_23060194_LSU())
  val sram       = Module(new AXI4SRAM())
  val arbiter    = Module(new AXI4Arbiter())

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

  arbiter.io.in2ifu <> ifu.io.out
  arbiter.io.in2lsu <> lsu.io.out
  arbiter.io.isIFU := ifu.io.isIFU
  arbiter.io.isLSU := lsu.io.isLSU
  arbiter.io.resIFU := sram.io.resIFU
  arbiter.io.resLSU := sram.io.resLSU

  sram.io.in <> arbiter.io.out
  sram.io.isIFU := ifu.io.isIFU
  sram.io.isLSU := lsu.io.isLSU

  exu.io.out <> lsu.io.in

  // judge nextPC by control from frontPC
  ifu.io.resBranch <> exu.io.resBranch
  ifu.io.addrTarget <> lsu.io.res
  ifu.io.isBranch <> controller.io.bundleControlOut.isBranch
  ifu.io.isJump <> controller.io.bundleControlOut.isJump
  ifu.io.csrType <> controller.io.bundleControlOut.csrType
  ifu.io.resCSR <> wbu.io.resCSR
  ifu.io.lsuStatus <> lsu.io.status

  // get inst to Decoder
  // StageConnect(ifu.io.out, idu.io.in, arch)
  idu.io.inst <> ifu.io.inst
  idu.io.status <> ifu.io.status

  // read or write GPRs from idres to $rs1/$rs2/$rd
  // if isJump, set nextPC to $rd temporarily
  wbu.io.bundleReg <> idu.io.bundleReg
  wbu.io.writeEnable <> controller.io.bundleControlOut.writeEnable
  wbu.io.lsuType <> controller.io.bundleControlOut.lsuType
  wbu.io.isJump <> controller.io.bundleControlOut.isJump
  wbu.io.isLoad <> controller.io.bundleControlOut.isLoad
  wbu.io.isUnsigned <> controller.io.bundleControlOut.isUnsigned
  wbu.io.isContext <> controller.io.bundleControlOut.isContext
  wbu.io.csrType <> controller.io.bundleControlOut.csrType
  wbu.io.imm <> idu.io.imm
  wbu.io.dataWrite <> lsu.io.res
  wbu.io.pc <> ifu.io.pc
  wbu.io.lsuStatus <> lsu.io.status

  // exec ALU operate by control from thisInstDecode
  exu.io.bundleEXControl <> controller.io.bundleEXControl
  exu.io.dataRead1 <> wbu.io.dataRead1
  exu.io.dataRead2 <> wbu.io.dataRead2
  exu.io.csrData <> wbu.io.csrData
  exu.io.imm <> idu.io.imm
  exu.io.pc <> ifu.io.pc
  exu.io.ifuStatus <> ifu.io.status

  controller.io.bundleControlIn <> idu.io.BundleControl

  // io.rs1 <> idu.io.bundleReg.rs1
  // io.rs2 <> idu.io.bundleReg.rs2
  // io.rd <> idu.io.bundleReg.rd
  // io.imm <> idu.io.imm
  // io.pc <> ifu.io.pc
  // io.bundleControl <> idu.io.BundleControl
  // io.resEX <> exu.io.res
  // io.resBranch <> exu.io.resBranch
  // io.src1 <> exu.io.src1
  // io.src2 <> exu.io.src2
  // io.inst <> ifu.io.inst
  // io.writeEnable <> controller.io.bundleControlOut.writeEnable

  arbiter.io.in2ifu.aw := DontCare
  arbiter.io.in2ifu.w := DontCare
  arbiter.io.in2ifu.b := DontCare
  arbiter.io.in2lsu.b := DontCare

  ifu.io.out.aw := DontCare
  ifu.io.out.w := DontCare

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
