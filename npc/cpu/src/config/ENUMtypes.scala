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
  val ALU_NOP         = "b0000".U(EXE_TYPES_WIDTH.W)
  val ALU_ADD         = "b0001".U(EXE_TYPES_WIDTH.W)
  val ALU_SUB         = "b0010".U(EXE_TYPES_WIDTH.W)
  val ALU_AND         = "b0011".U(EXE_TYPES_WIDTH.W)
  val ALU_OR          = "b0100".U(EXE_TYPES_WIDTH.W)
  val ALU_XOR         = "b0101".U(EXE_TYPES_WIDTH.W)
  val ALU_SLL         = "b0110".U(EXE_TYPES_WIDTH.W)
  val ALU_SRA         = "b0111".U(EXE_TYPES_WIDTH.W)
  val ALU_EQ          = "b1000".U(EXE_TYPES_WIDTH.W)
  val ALU_NEQ         = "b1001".U(EXE_TYPES_WIDTH.W)
  val ALU_LT          = "b1010".U(EXE_TYPES_WIDTH.W)
  val ALU_GE          = "b1011".U(EXE_TYPES_WIDTH.W)

// enum Load/Store
  val LSU_H          = "b00".U(EXE_TYPES_WIDTH.W)
  val LSU_B          = "b01".U(EXE_TYPES_WIDTH.W)
  val LSU_W          = "b10".U(EXE_TYPES_WIDTH.W)
}
