// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTOP__Syms.h"
#include "VTOP.h"
#include "VTOP___024root.h"
#include "VTOP___024unit.h"

// FUNCTIONS
VTOP__Syms::~VTOP__Syms()
{
}

VTOP__Syms::VTOP__Syms(VerilatedContext* contextp, const char* namep, VTOP* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP__getPC.configure(this, name(), "getPC", "getPC", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP__lsu__dataSRAM.configure(this, name(), "lsu.dataSRAM", "dataSRAM", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP__sram__instSRAM.configure(this, name(), "sram.instSRAM", "instSRAM", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP__trap.configure(this, name(), "trap", "trap", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
