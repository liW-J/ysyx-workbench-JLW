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
class IDUIO extends Bundle {
  val inst          = Input(UInt(INST_WIDTH.W))
  val BundleControl = new BundleControl()
  val bundleReg     = new BundleReg()
  val imm           = Output(UInt(DATA_WIDTH.W))
  val isEbreak      = Output(Bool())
}

class IDU extends Module with DecodeUtils {
  val io = IO(new IDUIO())

  io.bundleReg.rs1 := io.inst(19, 15)
  io.bundleReg.rs2 := io.inst(24, 20)
  io.bundleReg.rd  := io.inst(11, 7)

  val imm     = WireDefault(0.U(DATA_WIDTH.W))
  val inst    = WireDefault(0.U(INST_WIDTH.W))

  inst := io.inst

  val csignals = ListLookup(inst,
    List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, NO_EXE_TYPE, NO_EXE_TYPE, false.B),
    Array(
      LUI    -> List(typeU, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LUI, NO_EXE_TYPE, false.B),
      AUIPC  -> List(typeU, true.B, false.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, NO_EXE_TYPE, false.B),
      JAL    -> List(typeJ, true.B, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, NO_EXE_TYPE, false.B),
      JALR   -> List(typeI, true.B, true.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, NO_EXE_TYPE, false.B),
      
      BEQ    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_EQ, NO_EXE_TYPE, false.B),
      BNE    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_NEQ, NO_EXE_TYPE, false.B),
      BLT    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LT, NO_EXE_TYPE, false.B),
      BGE    -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_GE, NO_EXE_TYPE, false.B),
      BLTU   -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, true.B, false.B, NO_EXE_TYPE, ALU_LT, NO_EXE_TYPE, false.B),
      BGEU   -> List(typeB, true.B, false.B, true.B, true.B, false.B, false.B, false.B, true.B, false.B, NO_EXE_TYPE, ALU_GE, NO_EXE_TYPE, false.B),
      
      LB     -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, false.B, false.B, LSU_B, ALU_ADD, NO_EXE_TYPE, false.B),
      LH     -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, false.B, false.B, LSU_H, ALU_ADD, NO_EXE_TYPE, false.B),
      LW     -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, false.B, false.B, LSU_W, ALU_ADD, NO_EXE_TYPE, false.B),
      LBU    -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, true.B, false.B, LSU_B, ALU_ADD, NO_EXE_TYPE, false.B),
      LHU    -> List(typeI, true.B, false.B, false.B, false.B, true.B, true.B, false.B, true.B, false.B, LSU_H, ALU_ADD, NO_EXE_TYPE, false.B),

      SB     -> List(typeS, true.B, false.B, false.B, false.B, false.B, false.B, true.B, false.B, false.B, LSU_B, ALU_ADD, NO_EXE_TYPE, false.B),
      SH     -> List(typeS, true.B, false.B, false.B, false.B, false.B, false.B, true.B, false.B, false.B, LSU_H, ALU_ADD, NO_EXE_TYPE, false.B),
      SW     -> List(typeS, true.B, false.B, false.B, false.B, false.B, false.B, true.B, false.B, false.B, LSU_W, ALU_ADD, NO_EXE_TYPE, false.B),
      
      ADDI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, NO_EXE_TYPE, false.B),
      SLTI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LT, NO_EXE_TYPE, false.B),
      SLTIU  -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, true.B, false.B, NO_EXE_TYPE, ALU_LT, NO_EXE_TYPE, false.B),
      XORI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_XOR, NO_EXE_TYPE, false.B),
      ORI    -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_OR, NO_EXE_TYPE, false.B),
      ANDI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_AND, NO_EXE_TYPE, false.B),
      
      SLLI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SLL, NO_EXE_TYPE, false.B),
      SRLI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRL, NO_EXE_TYPE, false.B),
      SRAI   -> List(typeI, true.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRA, NO_EXE_TYPE, false.B),
      
      ADD    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, NO_EXE_TYPE, false.B),
      SUB    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SUB, NO_EXE_TYPE, false.B),
      SLL    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SLL, NO_EXE_TYPE, false.B),
      SLT    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_LT, NO_EXE_TYPE, false.B),
      SLTU   -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, true.B, false.B, NO_EXE_TYPE, ALU_LT, NO_EXE_TYPE, false.B ),
      XOR    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_XOR, NO_EXE_TYPE, false.B),
      SRL    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRL, NO_EXE_TYPE, false.B),
      SRA    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_SRA, NO_EXE_TYPE, false.B),
      OR     -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_OR, NO_EXE_TYPE, false.B),
      AND    -> List(typeR, false.B, false.B, false.B, false.B, true.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_AND, NO_EXE_TYPE, false.B),
      
      EBREAK -> List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, NO_EXE_TYPE, ALU_ADD, NO_EXE_TYPE, true.B),  
      ECALL  -> List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, true.B, NO_EXE_TYPE, NO_EXE_TYPE, CSR_ECALL, false.B),

      CSRRS  -> List(typeI, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, true.B, NO_EXE_TYPE, ALU_CSR_RS, CSR_RS, false.B),
      CSRRW  -> List(typeI, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, true.B, NO_EXE_TYPE, ALU_CSR_RW, CSR_RW, false.B),
      MRET   -> List(noTYPE, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, true.B, NO_EXE_TYPE, NO_EXE_TYPE, CSR_MRET, false.B)
      )
  )

  val opType::isALUSrc::isJump::isBranch::isJAL::writeEnable::isLoad::isStore::isUnsigned::isContext::lsuType::aluType::csrType::isEbreak::Nil = csignals


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
  io.BundleControl.isContext  := isContext
  io.BundleControl.lsuType     := lsuType
  io.BundleControl.aluType     := aluType
  io.BundleControl.csrType     := csrType
  io.isEbreak                  := isEbreak
  io.imm                       := imm
}
