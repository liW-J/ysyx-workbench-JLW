package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.OpTypes._
import utils._
import config.ExeTypes._

//-----------------------------------------------------------------------------
// EX
//-----------------------------------------------------------------------------
//
// Description :
// Input  :
// Output :
//
//-----------------------------------------------------------------------------
class ExecIO extends Bundle {
    val bundleEXControl = new BundleEXControl()
    val dataRead1 = Input(UInt(DATA_WIDTH.W))
    val dataRead2 = Input(UInt(DATA_WIDTH.W))
    val imm = Input(UInt(DATA_WIDTH.W))
    val pc = Input(UInt(ADDR_WIDTH.W))
    val resBranch = Output(Bool())
    val res = Output(UInt(DATA_WIDTH.W))
    val src1 = Output(UInt(DATA_WIDTH.W))
    val src2 = Output(UInt(DATA_WIDTH.W))
    val writeEnable   = Output(Bool())
}

class EX extends Module {
    val io = IO(new ExecIO())

    val resBranch = WireDefault(false.B)
    val writeEnable = WireDefault(false.B)
    val res = WireDefault(0.U(DATA_WIDTH.W))
    val src1 = WireDefault(0.U(DATA_WIDTH.W))
    val src2 = WireDefault(0.U(DATA_WIDTH.W))

    src1 := Mux(io.bundleEXControl.isJAL, io.pc, io.dataRead1)
    src2 := Mux(io.bundleEXControl.isALUSrc, io.imm, io.dataRead2)

 
    printf("jal=%d\n",io.bundleEXControl.isJAL)
    printf("ALUsrc=%d\n",io.bundleEXControl.isALUSrc)
    printf("src111=%x\n",src1)
    printf("src222=%x\n",src2)
    printf("pcccccc=%x\n",io.pc)


    switch(io.bundleEXControl.exeType) {
        is(ALU_ADD) {
            res := src1 +& src2
            writeEnable := true.B
        }
    }

    printf("res=%x\n",res)   
    io.src1 := src1
    io.src2 := src2
    io.res := res
    io.resBranch := resBranch
    io.writeEnable := writeEnable
}
