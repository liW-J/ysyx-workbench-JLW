// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTOP__Syms;

class VTOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_bundleControl_isALUSrc,0,0);
    VL_OUT8(io_bundleControl_isJump,0,0);
    VL_OUT8(io_bundleControl_isBranch,0,0);
    VL_OUT8(io_bundleControl_isJAL,0,0);
    VL_OUT8(io_bundleControl_isLoad,0,0);
    VL_OUT8(io_bundleControl_isStore,0,0);
    VL_OUT8(io_bundleControl_isSigned,0,0);
    VL_OUT8(io_bundleControl_writeEnable,0,0);
    VL_OUT8(io_bundleControl_lsType,1,0);
    VL_OUT8(io_bundleControl_exeType,3,0);
    VL_OUT8(io_resBranch,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VL_OUT(io_pc,31,0);
    VL_OUT(io_inst,31,0);
    VL_OUT(io_resEX,31,0);
    VL_OUT(io_rs1,31,0);
    VL_OUT(io_rs2,31,0);
    VL_OUT(io_imm,31,0);
    VL_OUT(io_resLoad,31,0);
    IData/*31:0*/ TOP__DOT__pcReg__DOT__pcReg;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> TOP__DOT__instRom__DOT__instMem_ext__DOT__Memory;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP___024root(VTOP__Syms* symsp, const char* v__name);
    ~VTOP___024root();
    VL_UNCOPYABLE(VTOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
