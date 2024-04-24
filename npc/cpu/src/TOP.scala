import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import unit._
import blackbox._
import _root_.stage.ID
import _root_.stage.EX

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

  val pcReg      = Module(new PCRegister())
  val id         = Module(new ID())
  val gprFile    = Module(new GPRFile())
  val ex         = Module(new EX())
  val controller = Module(new Controller())
  val trap       = Module(new Trap())
  val getPC      = Module(new GetPC())
  val memRam     = Module(new MemRam())

  trap.io.isEbreak := id.io.isEbreak
  trap.io.clock    := clock
  trap.io.reset    := reset

  getPC.io.pc    := pcReg.io.pc
  getPC.io.clock := clock
  getPC.io.reset := reset

  memRam.io.isLoad  := controller.io.bundleControlOut.isLoad
  memRam.io.isStore := controller.io.bundleControlOut.isStore
  memRam.io.addr    := ex.io.res
  memRam.io.len     := controller.io.bundleControlOut.lsuType
  memRam.io.pc      := pcReg.io.pc
  memRam.io.wdata   := ex.io.src2
  memRam.io.clock   := clock
  memRam.io.reset   := reset

  // judge nextPC by control from frontPC
  pcReg.io.resBranch <> ex.io.resBranch
  pcReg.io.addrTarget <> memRam.io.rdata
  pcReg.io.isBranch <> controller.io.bundleControlOut.isBranch
  pcReg.io.isJump <> controller.io.bundleControlOut.isJump
  pcReg.io.csrType <> controller.io.bundleControlOut.csrType
  pcReg.io.resCSR <> gprFile.io.resCSR

  // get inst to Decoder
  id.io.inst <> memRam.io.inst

  // read or write GPRs from IDres to $rs1/$rs2/$rd
  // if isJump, set nextPC to $rd temporarily
  gprFile.io.bundleReg <> id.io.bundleReg
  gprFile.io.writeEnable <> controller.io.bundleControlOut.writeEnable
  gprFile.io.lsuType <> controller.io.bundleControlOut.lsuType
  gprFile.io.isJump <> controller.io.bundleControlOut.isJump
  gprFile.io.isLoad <> controller.io.bundleControlOut.isLoad
  gprFile.io.isUnsigned <> controller.io.bundleControlOut.isUnsigned
  gprFile.io.isContext <> controller.io.bundleControlOut.isContext
  gprFile.io.csrType <> controller.io.bundleControlOut.csrType
  gprFile.io.imm <> id.io.imm
  gprFile.io.dataWrite <> memRam.io.rdata
  gprFile.io.pc <> pcReg.io.pc

  // exec ALU operate by control from thisInstDecode
  ex.io.bundleEXControl <> controller.io.bundleEXControl
  ex.io.dataRead1 <> gprFile.io.dataRead1
  ex.io.dataRead2 <> gprFile.io.dataRead2
  ex.io.csrData <> gprFile.io.csrData
  ex.io.imm <> id.io.imm
  ex.io.pc <> pcReg.io.pc

  controller.io.bundleControlIn <> id.io.BundleControl

  io.rs1 <> id.io.bundleReg.rs1
  io.rs2 <> id.io.bundleReg.rs2
  io.rd <> id.io.bundleReg.rd
  io.imm <> id.io.imm
  io.pc <> pcReg.io.pc
  io.bundleControl <> id.io.BundleControl
  io.resEX <> ex.io.res
  io.resBranch <> ex.io.resBranch
  io.src1 <> ex.io.src1
  io.src2 <> ex.io.src2
  io.inst <> memRam.io.inst
  io.writeEnable <> controller.io.bundleControlOut.writeEnable
}
