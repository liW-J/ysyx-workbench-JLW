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

#ifndef __ISA_H__
#define __ISA_H__

// Located at src/isa/$(GUEST_ISA)/include/isa-def.h
#include <isa-def.h>

// The macro `__GUEST_ISA__` is defined in $(CFLAGS).
// It will be expanded as "x86" or "mips32" ...
typedef riscv32_CPU_state CPU_state;
// typedef concat(__GUEST_ISA__, _CPU_state) CPU_state;
// typedef concat(__GUEST_ISA__, _ISADecodeInfo) ISADecodeInfo;

// reg
extern CPU_state cpu;
// void isa_reg_display();
word_t isa_reg_str2val(const char *name, bool *success);


// monitor
extern unsigned char isa_logo[];
void init_isa();

#endif
