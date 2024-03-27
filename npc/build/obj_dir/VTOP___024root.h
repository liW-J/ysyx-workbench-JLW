// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTOP__Syms;
class VTOP___024unit;


class VTOP___024root final : public VerilatedModule {
  public:
    // CELLS
    VTOP___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    CData/*0:0*/ TOP__DOT___id_io_isEbreak;
    VL_IN8(reset,0,0);
    VL_OUT8(io_bundleControl_isALUSrc,0,0);
    VL_OUT8(io_bundleControl_isJump,0,0);
    VL_OUT8(io_bundleControl_isBranch,0,0);
    VL_OUT8(io_bundleControl_isJAL,0,0);
    VL_OUT8(io_bundleControl_isLoad,0,0);
    VL_OUT8(io_bundleControl_isStore,0,0);
    VL_OUT8(io_bundleControl_isSigned,0,0);
    VL_OUT8(io_bundleControl_lsType,3,0);
    VL_OUT8(io_bundleControl_exeType,3,0);
    VL_OUT8(io_rs1,4,0);
    VL_OUT8(io_rs2,4,0);
    VL_OUT8(io_rd,4,0);
    VL_OUT8(io_resBranch,0,0);
    VL_OUT8(io_writeEnable,0,0);
    CData/*0:0*/ TOP__DOT__id__DOT___csignals_T_1;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__TOP__DOT___id_io_isEbreak;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_inst,31,0);
    VL_IN(io_res,31,0);
    VL_OUT(io_pc,31,0);
    VL_OUT(io_resEX,31,0);
    VL_OUT(io_src1,31,0);
    VL_OUT(io_src2,31,0);
    VL_OUT(io_imm,31,0);
    VL_OUT(io_test,31,0);
    IData/*31:0*/ TOP__DOT__pcReg__DOT__pcReg;
    IData/*31:0*/ TOP__DOT__id__DOT__casez_tmp;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
