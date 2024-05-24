// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/sends/local/share/ysyx-workbench/npc/build/ysyx_23060194.v:1337:38
    extern void check_ebreak(svBit flag);
    // DPI import at /home/sends/local/share/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/sends/local/share/ysyx-workbench/npc/build/ysyx_23060194.v:1353:38
    extern void get_pc(int flag);
    // DPI import at /home/sends/local/share/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4752:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/sends/local/share/ysyx-workbench/npc/build/ysyx_23060194.v:1384:37
    extern int paddr_read(int addr, int len);
    // DPI import at /home/sends/local/share/ysyx-workbench/npc/build/ysyx_23060194.v:1385:38
    extern void paddr_write(int addr, int len, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
