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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        CData/*0:0*/ TOP__DOT___idu_io_isEbreak;
        CData/*0:0*/ TOP__DOT__sram__DOT__dataSRAM_io_isLoad_r;
        CData/*0:0*/ TOP__DOT__sram__DOT__dataSRAM_io_isStore_r;
        VL_IN8(reset,0,0);
        VL_OUT8(io_bundleControl_isALUSrc,0,0);
        VL_OUT8(io_bundleControl_isJump,0,0);
        VL_OUT8(io_bundleControl_isBranch,0,0);
        VL_OUT8(io_bundleControl_isJAL,0,0);
        VL_OUT8(io_bundleControl_writeEnable,0,0);
        VL_OUT8(io_bundleControl_isLoad,0,0);
        VL_OUT8(io_bundleControl_isStore,0,0);
        VL_OUT8(io_bundleControl_isUnsigned,0,0);
        VL_OUT8(io_bundleControl_isContext,0,0);
        VL_OUT8(io_bundleControl_csrType,3,0);
        VL_OUT8(io_bundleControl_lsuType,3,0);
        VL_OUT8(io_bundleControl_aluType,3,0);
        VL_OUT8(io_rs1,4,0);
        VL_OUT8(io_rs2,4,0);
        VL_OUT8(io_rd,4,0);
        VL_OUT8(io_resBranch,0,0);
        VL_OUT8(io_writeEnable,0,0);
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_1;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_2;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_3;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_4;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_5;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_6;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_7;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_8;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_10;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_11;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_12;
        CData/*0:0*/ TOP__DOT__idu__DOT___GEN_13;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_hc285b89a__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_h5d4f4c30__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_h5eaebdb1__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_h87db9210__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_hcd9142c5__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_h98976784__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_he0211b27__0;
        CData/*0:0*/ TOP__DOT__idu__DOT____VdfgTmp_h86568975__0;
        CData/*0:0*/ TOP__DOT__wbu__DOT___GEN;
        CData/*0:0*/ TOP__DOT__wbu__DOT___GEN_3;
        CData/*0:0*/ TOP__DOT__wbu__DOT___GEN_4;
        CData/*0:0*/ TOP__DOT__wbu__DOT___GEN_6;
        CData/*0:0*/ TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en;
        CData/*0:0*/ TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en;
        CData/*0:0*/ TOP__DOT__exu__DOT___GEN;
        CData/*0:0*/ TOP__DOT__ifu__DOT__resBranch;
        CData/*1:0*/ TOP__DOT__ifu__DOT__state;
        CData/*0:0*/ TOP__DOT__ifu__DOT___state_T_8;
        CData/*0:0*/ TOP__DOT__ifu__DOT___GEN;
        CData/*0:0*/ TOP__DOT__ifu__DOT___GEN_0;
        CData/*1:0*/ TOP__DOT__lsu__DOT__state;
        CData/*0:0*/ TOP__DOT__sram__DOT__dataSRAM__DOT__load_flag;
        CData/*0:0*/ TOP__DOT__sram__DOT__dataSRAM__DOT__store_flag;
        CData/*1:0*/ TOP__DOT__arbiter__DOT__exec;
        CData/*0:0*/ TOP__DOT__arbiter__DOT___GEN_1;
        CData/*1:0*/ __Vdly__TOP__DOT__ifu__DOT__state;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __Vtrigrprev__TOP__TOP__DOT___idu_io_isEbreak;
        CData/*0:0*/ __Vtrigrprev__TOP__TOP__DOT__sram__DOT__dataSRAM_io_isLoad_r;
        CData/*0:0*/ __Vtrigrprev__TOP__TOP__DOT__sram__DOT__dataSRAM_io_isStore_r;
    };
    struct {
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ TOP__DOT__idu__DOT___GEN;
        VL_OUT(io_inst,31,0);
        VL_OUT(io_pc,31,0);
        VL_OUT(io_resEX,31,0);
        VL_OUT(io_src1,31,0);
        VL_OUT(io_src2,31,0);
        VL_OUT(io_imm,31,0);
        IData/*31:0*/ TOP__DOT___arbiter_io_out_ar_bits_addr;
        IData/*31:0*/ TOP__DOT___sram_io_resIFU;
        IData/*31:0*/ TOP__DOT___sram_io_resLSU;
        IData/*31:0*/ TOP__DOT__idu__DOT__casez_tmp;
        IData/*16:0*/ TOP__DOT__idu__DOT___GEN_0;
        IData/*31:0*/ TOP__DOT__wbu__DOT___csrs_ext_R0_data;
        IData/*31:0*/ TOP__DOT__wbu__DOT__dataWrite;
        IData/*31:0*/ TOP__DOT__exu__DOT__casez_tmp;
        IData/*31:0*/ TOP__DOT__exu__DOT__operand1;
        IData/*31:0*/ TOP__DOT__exu__DOT__operand2;
        IData/*31:0*/ TOP__DOT__exu__DOT___GEN_0;
        IData/*31:0*/ TOP__DOT__ifu__DOT__pcReg;
        IData/*31:0*/ TOP__DOT__sram__DOT__dataSRAM_io_len_r;
        IData/*31:0*/ TOP__DOT__sram__DOT__dataSRAM_io_wdata_r;
        IData/*31:0*/ TOP__DOT__sram__DOT__dataSRAM_io_addr_r;
        IData/*31:0*/ TOP__DOT__sram__DOT__instSRAM_io_pc_r;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__TOP__DOT__sram__DOT__instSRAM_io_pc_r;
        IData/*31:0*/ __Vtrigrprev__TOP__TOP__DOT__sram__DOT__dataSRAM_io_addr_r;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> TOP__DOT__wbu__DOT__regs_ext__DOT__Memory;
        VlUnpacked<IData/*31:0*/, 1024> TOP__DOT__wbu__DOT__csrs_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

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
