package utils

import chisel3._
import chisel3.util._

import config.Configs._
import config.OPcodes._

trait DecodeUtils {

  def immI(s: UInt): UInt = Cat(Fill(20, s(31)), s(31, 20))
  def immU(s: UInt): UInt = Cat(s(31, 12), Fill(12, 0.U))
  def immS(s: UInt): UInt = Cat(Fill(20, s(31)), s(31, 25), s(11, 7))
  def immJ(s: UInt): UInt = Cat(Fill(12, s(31)), s(31), s(19, 12), s(20), s(30, 21), Fill(1, 0.U))
  def immR(s :UInt): UInt = Cat(Fill(20, s(31)), s(7), s(30, 25), s(11, 8), 0.U(1.W))

  def decodeImm (s: UInt, immTYPE: UInt): UInt = {
    if (immTYPE == typeI) immI(s)
    else if (immTYPE == typeU) immU(s)
    else if (immTYPE == typeS) immS(s)
    else if (immTYPE == typeJ) immJ(s)
    else if (immTYPE == typeR) immR(s)
    else ???
  }
}