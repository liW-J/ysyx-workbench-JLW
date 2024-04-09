/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */

  cpu.csr[CSR_MEPC] = epc;
  cpu.csr[CSR_MCAUSE] = NO;

#ifdef CONFIG_ETRACE_COND
  word_t mstatus = cpu.csr[CSR_MSTATUS];
  cpu.csr[CSR_MSTATUS] = 0x1800;
  LOG(DEBUG, "[etrace] mcause: " FMT_WORD \
                ", mstatus: " FMT_WORD \
                ", mepc: " FMT_WORD \
                ", mtvec: " FMT_WORD ,
          cpu.csr[CSR_MCAUSE],
          cpu.csr[CSR_MSTATUS],
          cpu.csr[CSR_MEPC],
          cpu.csr[CSR_MTVEC]);
  LOG(DEBUG, "[etrace] ecall before: " FMT_WORD ", after: " FMT_WORD ,
           mstatus, cpu.csr[CSR_MSTATUS]);
#endif
  cpu.csr[CSR_MSTATUS] = 0x1800;
  return cpu.csr[CSR_MTVEC];
  // return 0;
}

word_t isa_mret() {
  
#ifdef CONFIG_ETRACE_COND
  word_t mstatus = cpu.csr[CSR_MSTATUS];
  cpu.csr[CSR_MSTATUS] = 0x1800;
  LOG(DEBUG, "[etrace] mret  before: " FMT_WORD ", after: " FMT_WORD ,
           mstatus, cpu.csr[CSR_MSTATUS]);
#endif
  cpu.csr[CSR_MSTATUS] = 0x1800;
  return cpu.csr[CSR_MEPC];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
