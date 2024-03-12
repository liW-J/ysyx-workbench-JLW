// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024unit.h"

void VTOP___024unit___ctor_var_reset(VTOP___024unit* vlSelf);

VTOP___024unit::VTOP___024unit(VTOP__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP___024unit___ctor_var_reset(this);
}

void VTOP___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP___024unit::~VTOP___024unit() {
}
