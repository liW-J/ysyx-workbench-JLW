package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.OPcodes._
import config.OPtypes._
import utils._

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
  val inst       = Input(UInt(INST_WIDTH.W))
  val bundleCtrl = new BundleIDControl()
  val bundleReg  = new BundleReg()
  val imm        = Output(UInt(DATA_WIDTH.W))
}

class ID extends Module with DecodeUtils {
  val io = IO(new DecoderIO())

  io.bundleReg.rs1 := io.inst(19, 15)
  io.bundleReg.rs2 := io.inst(24, 20)
  io.bundleReg.rd  := io.inst(11, 7)

  // val funct3   = Reg(io.inst(14, 12))
  // val funct7   = Reg(io.inst(31, 27))

  val imm      = WireDefault(0.U(32.W))
  val isALUSrc, isJump, isBranch, isLoad, isStore, isSigned = WireDefault(false.B)
  val opcode   = WireDefault(0.U(OP_TYPES_WIDTH.W))

  opcode := io.inst(6, 0)

  switch(opcode) {
    is(EBREAK_OP) {
      printf("ebreak")
    }
    is(ADDI_OP) {
      printf("addi")
      isALUSrc := true.B
      imm      := decodeImm(io.inst, typeI)
    }
  }

  io.bundleCtrl.isALUSrc := isALUSrc
  io.bundleCtrl.isJump   := isJump
  io.bundleCtrl.isBranch := isBranch
  io.bundleCtrl.isLoad   := isLoad
  io.bundleCtrl.isStore  := isStore
  io.bundleCtrl.isSigned := isSigned
  io.bundleCtrl.opcode   := opcode
  io.imm                 := imm
}
