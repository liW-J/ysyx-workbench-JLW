package config

import chisel3._
import chisel3.util._

// enum imm type
object OPtypes {
  val typeI :: typeU :: typeS :: typeJ :: typeR :: typeB :: noTYPE :: Nil = Enum(7)
}

//enum EXE_OP for EX stage
object EXEtypes {
  val EXE_TYPES_WIDTH = 4
  val EXE_NOP         = "b0000".U(EXE_TYPES_WIDTH.W)
  val EXE_ADD         = "b0001".U(EXE_TYPES_WIDTH.W)
  val EXE_SUB         = "b0010".U(EXE_TYPES_WIDTH.W)
  val EXE_AND         = "b0011".U(EXE_TYPES_WIDTH.W)
  val EXE_OR          = "b0100".U(EXE_TYPES_WIDTH.W)
  val EXE_XOR         = "b0101".U(EXE_TYPES_WIDTH.W)
  val EXE_SLL         = "b0110".U(EXE_TYPES_WIDTH.W)
  val EXE_SRA         = "b0111".U(EXE_TYPES_WIDTH.W)
  val EXE_EQ          = "b1000".U(EXE_TYPES_WIDTH.W)
  val EXE_NEQ         = "b1001".U(EXE_TYPES_WIDTH.W)
  val EXE_LT          = "b1010".U(EXE_TYPES_WIDTH.W)
  val EXE_GE          = "b1011".U(EXE_TYPES_WIDTH.W)
}

// enum Load/Store
object LStypes {
  val LS_TYPE_WIDTH = 2
  val LS_H          = "b00".U(LS_TYPE_WIDTH.W)
  val LS_B          = "b01".U(LS_TYPE_WIDTH.W)
  val LS_W          = "b10".U(LS_TYPE_WIDTH.W)
}
