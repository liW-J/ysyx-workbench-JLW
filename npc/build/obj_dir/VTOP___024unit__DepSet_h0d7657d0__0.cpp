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
