// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024unit.h"

extern "C" void check_ebreak(svBit flag);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_check_ebreak_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_check_ebreak_TOP____024unit\n"); );
    // Body
    svBit flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    check_ebreak(flag__Vcvt);
}

extern "C" void get_pc(int flag);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit\n"); );
    // Body
    int flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    get_pc(flag__Vcvt);
}

extern "C" int paddr_read(int addr, int len);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_paddr_read_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &paddr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_paddr_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int paddr_read__Vfuncrtn__Vcvt;
    paddr_read__Vfuncrtn__Vcvt = paddr_read(addr__Vcvt, len__Vcvt);
    paddr_read__Vfuncrtn = paddr_read__Vfuncrtn__Vcvt;
}

extern "C" void paddr_write(int addr, int len, int data);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_paddr_write_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_paddr_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    paddr_write(addr__Vcvt, len__Vcvt, data__Vcvt);
}
