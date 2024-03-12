package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.OPcodes._
import config.OPtypes._
import utils._
import config.EXEtypes._
import config.LStypes._

//-----------------------------------------------------------------------------
// ID
//-----------------------------------------------------------------------------
//
// Description :
// Input  :
// Output :
//
//-----------------------------------------------------------------------------
class DecoderIO extends Bundle {
  val inst          = Input(UInt(INST_WIDTH.W))
  val BundleControl = new BundleControl()
  val bundleReg     = new BundleReg()
  val imm           = Output(UInt(DATA_WIDTH.W))
  val writeEnable = Output(Bool())
}

class ID extends Module with DecodeUtils {
  val io = IO(new DecoderIO())

  io.bundleReg.rs1 := io.inst(19, 15)
  io.bundleReg.rs2 := io.inst(24, 20)
  io.bundleReg.rd  := io.inst(11, 7)

  // val funct3   = Reg(io.inst(14, 12))
  // val funct7   = Reg(io.inst(31, 27))

  val isALUSrc, isJump, isBranch, isJAL, isLoad, isStore, isSigned, writeEnable = WireDefault(false.B)

  val opcode  = WireDefault(0.U(OP_TYPES_WIDTH.W))
  val lsType  = WireDefault(0.U(LS_TYPE_WIDTH.W))
  val exeType = WireDefault(0.U(EXE_TYPES_WIDTH.W))
  val imm     = WireDefault(0.U(32.W))

  opcode := io.inst(6, 2)

  switch(opcode) {
    is(EBREAK_OP) {
      printf("ebreak")
    }
    is(ADDI_OP) {
      printf("addi\n")
      isALUSrc := true.B
      exeType  := EXE_ADD
      writeEnable := true.B
      imm      := decodeImm(io.inst, typeI)
    }
    is(AUIPC_OP) {
      printf("auipc\n")
      isALUSrc := true.B
      isJAL    := true.B
      exeType  := EXE_ADD
      writeEnable := true.B
      imm      := decodeImm(io.inst, typeU)
    }
  }

  io.BundleControl.isALUSrc    := isALUSrc
  io.BundleControl.isJump      := isJump
  io.BundleControl.isBranch    := isBranch
  io.BundleControl.isJAL       := isJAL
  io.BundleControl.isLoad      := isLoad
  io.BundleControl.isStore     := isStore
  io.BundleControl.isSigned    := isSigned
  io.BundleControl.lsType      := lsType
  io.BundleControl.exeType     := exeType
  io.writeEnable               := writeEnable
  io.imm                       := imm
}
