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
    List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, NO_EXE_TYPE, false.B),
    Array(
      LUI    -> List(typeU, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LUI, false.B),
      AUIPC  -> List(typeU, true.B, false.B, false.B, true.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, false.B),
      JAL    -> List(typeJ, true.B, true.B, false.B, true.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, false.B),
      JALR   -> List(typeI, true.B, true.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, false.B),
      
      BEQ    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_EQ, false.B),
      BNE    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_NEQ, false.B),
      BLT    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LT, false.B),
      BGE    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_GE, false.B),
      BLTU   -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, true.B, NO_EXE_TYPE, ALU_LT, false.B),
      BGEU   -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, true.B, NO_EXE_TYPE, ALU_GE, false.B),
      
      LB     -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, false.B, LSU_B, ALU_ADD, false.B),
      LH     -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, false.B, LSU_H, ALU_ADD, false.B),
      LW     -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, false.B, LSU_W, ALU_ADD, false.B),
      LBU    -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, true.B, LSU_B, ALU_ADD, false.B),
      LHU    -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, true.B, LSU_H, ALU_ADD, false.B),

      SB     -> List(typeS, true.B, false.B, false.B, false.B, false.B, false.B, true.B, false.B, LSU_B, ALU_ADD, false.B),
      SH     -> List(typeS, true.B, false.B, false.B, false.B, false.B, false.B, true.B, false.B, LSU_H, ALU_ADD, false.B),
      SW     -> List(typeS, true.B, false.B, false.B, false.B, false.B, false.B, true.B, false.B, LSU_W, ALU_ADD, false.B),
      
      ADDI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, false.B),
      SLTI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LT, false.B),
      SLTIU  -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, true.B, NO_EXE_TYPE, ALU_LT, false.B),
      XORI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_XOR, false.B),
      ORI    -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_OR, false.B),
      ANDI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_AND, false.B),
      
      SLLI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SLL, false.B),
      SRLI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRL, false.B),
      SRAI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRA, false.B),
      
      ADD    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, false.B),
      SUB    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SUB, false.B),
      SLL    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SLL, false.B),
      SLT    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LT, false.B),
      SLTU   -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, true.B, NO_EXE_TYPE, ALU_LT, false.B ),
      XOR    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_XOR, false.B),
      SRL    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRL, false.B),
      SRA    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRA, false.B),
      OR     -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_OR, false.B),
      AND    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_AND, false.B),
      
      EBREAK -> List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, true.B)  

      )
  )

  val opType::isALUSrc::isJump::isBranch::isJAL::writeEnable::isLoad::isStore::isUnsigned::lsuType::aluType::isEbreak::Nil = csignals


  switch(opType) {
    is(typeI) {imm := decodeImm(inst, typeI)}
    is(typeU) {imm := decodeImm(inst, typeU)}
    is(typeS) {imm := decodeImm(inst, typeS)}
    is(typeJ) {imm := decodeImm(inst, typeJ)}
    is(typeB) {imm := decodeImm(inst, typeB)}
  }

  io.BundleControl.isALUSrc    := isALUSrc
  io.BundleControl.isJump      := isJump
  io.BundleControl.isBranch    := isBranch
  io.BundleControl.isJAL       := isJAL
  io.BundleControl.writeEnable := writeEnable
  io.BundleControl.isLoad      := isLoad
  io.BundleControl.isStore     := isStore
  io.BundleControl.isUnsigned  := isUnsigned
  io.BundleControl.lsuType     := lsuType
  io.BundleControl.aluType     := aluType
  io.isEbreak                  := isEbreak
  io.imm                       := imm
}
