package config

import chisel3._
import chisel3.util._

// enum imm type
object OpTypes {
  val typeI :: typeU :: typeS :: typeJ :: typeR :: typeB :: noTYPE :: Nil = Enum(7)
}

//enum ALU_OP for EX stage
object ExeTypes {
  val EXE_TYPES_WIDTH = 4
  val NO_EXE_TYPE     = "b1111".U(EXE_TYPES_WIDTH.W)
  val ALU_LUI         = "b0000".U(EXE_TYPES_WIDTH.W)
  val ALU_ADD         = "b0001".U(EXE_TYPES_WIDTH.W)
  val ALU_SUB         = "b0010".U(EXE_TYPES_WIDTH.W)
  val ALU_AND         = "b0011".U(EXE_TYPES_WIDTH.W)
  val ALU_OR          = "b0100".U(EXE_TYPES_WIDTH.W)
  val ALU_XOR         = "b0101".U(EXE_TYPES_WIDTH.W)
  val ALU_SLL         = "b0110".U(EXE_TYPES_WIDTH.W)
  val ALU_SRL         = "b0111".U(EXE_TYPES_WIDTH.W)
  val ALU_SRA         = "b1000".U(EXE_TYPES_WIDTH.W)
  val ALU_EQ          = "b1001".U(EXE_TYPES_WIDTH.W)
  val ALU_NEQ         = "b1010".U(EXE_TYPES_WIDTH.W)
  val ALU_LT          = "b1011".U(EXE_TYPES_WIDTH.W)
  val ALU_GE          = "b1100".U(EXE_TYPES_WIDTH.W)
  val ALU_CSR_RS      = "b1101".U(EXE_TYPES_WIDTH.W)
  val ALU_CSR_RW      = "b1110".U(EXE_TYPES_WIDTH.W)

// enum Load/Store
  val LSU_B = "b0001".U(EXE_TYPES_WIDTH.W)
  val LSU_H = "b0010".U(EXE_TYPES_WIDTH.W)
  val LSU_W = "b0100".U(EXE_TYPES_WIDTH.W)

  val CSR_RS    = "b0000".U(EXE_TYPES_WIDTH.W)
  val CSR_RW    = "b0001".U(EXE_TYPES_WIDTH.W)
  val CSR_ECALL = "b0010".U(EXE_TYPES_WIDTH.W)
  val CSR_MRET  = "b0011".U(EXE_TYPES_WIDTH.W)
}

object CSRNums {
  val CSR_MTVEC   = 0x305.U
  val CSR_MSTATUS = 0x300.U
  val CSR_MEPC    = 0x341.U
  val CSR_MCAUSE  = 0x342.U
}
