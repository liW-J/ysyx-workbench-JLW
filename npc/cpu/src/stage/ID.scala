package stage

import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import config.ExeTypes._
import config.OpTypes._
import config.RV32EInstr._



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
  val isEbreak      = Output(Bool())
}

class ID extends Module with DecodeUtils {
  val io = IO(new DecoderIO())

  io.bundleReg.rs1 := io.inst(19, 15)
  io.bundleReg.rs2 := io.inst(24, 20)
  io.bundleReg.rd  := io.inst(11, 7)

  val imm     = WireDefault(0.U(DATA_WIDTH.W))
  val inst    = WireDefault(0.U(INST_WIDTH.W))

  inst := io.inst

  val csignals = ListLookup(inst,
    List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, ALU_ADD, true.B),
    Array(
      ADDI   -> List(typeI, true.B, false.B, false.B, false.B, false.B, false.B, false.B, ALU_ADD, false.B),
      AUIPC  -> List(typeU, true.B, false.B, false.B, true.B, false.B, false.B, false.B, ALU_ADD, false.B),
      EBREAK -> List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, ALU_ADD, true.B)  
    )
  )

  val opType::isALUSrc::isJump::isBranch::isJAL::isLoad::isStore::isSigned::exeType::isEbreak::Nil = csignals


  switch(opType) {
    is(typeI) {imm := decodeImm(inst, typeI)}
    is(typeU) {imm := decodeImm(inst, typeU)}
    is(typeS) {imm := decodeImm(inst, typeS)}
    is(typeJ) {imm := decodeImm(inst, typeJ)}
    is(typeR) {imm := decodeImm(inst, typeR)}
  }

  io.BundleControl.isALUSrc    := isALUSrc
  io.BundleControl.isJump      := isJump
  io.BundleControl.isBranch    := isBranch
  io.BundleControl.isJAL       := isJAL
  io.BundleControl.isLoad      := isLoad
  io.BundleControl.isStore     := isStore
  io.BundleControl.isSigned    := isSigned
  io.BundleControl.lsType      := exeType
  io.BundleControl.exeType     := exeType
  io.isEbreak                  := isEbreak
  io.imm                       := imm
}
