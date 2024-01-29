package config

import chisel3._

object Configs {
  val ADDR_WIDTH      = 32 // 地址位宽
  val ADDR_BYTE_WIDTH = ADDR_WIDTH / 8 // 地址位宽按字节算
  val DATA_WIDTH      = 32 // 数据位宽
  val DATA_WIDTH_H    = 16 // 半字数据位宽
  val DATA_WIDTH_B    = 8 // 字节数据位宽
  val START_ADDR: Long = 0x00000000 // 起始执行地址

}
