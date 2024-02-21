// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf);

VTOP___024root::VTOP___024root(VTOP__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP___024root___ctor_var_reset(this);
}

void VTOP___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP___024root::~VTOP___024root() {
}
