// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgIData(oldp+2,(vlSelf->io_pc),32);
    bufp->chgIData(oldp+3,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+4,(vlSelf->io_bundleControl_isALUSrc));
    bufp->chgBit(oldp+5,(vlSelf->io_bundleControl_isJump));
    bufp->chgBit(oldp+6,(vlSelf->io_bundleControl_isBranch));
    bufp->chgBit(oldp+7,(vlSelf->io_bundleControl_isJAL));
    bufp->chgBit(oldp+8,(vlSelf->io_bundleControl_isLoad));
    bufp->chgBit(oldp+9,(vlSelf->io_bundleControl_isStore));
    bufp->chgBit(oldp+10,(vlSelf->io_bundleControl_isSigned));
    bufp->chgBit(oldp+11,(vlSelf->io_bundleControl_writeEnable));
    bufp->chgCData(oldp+12,(vlSelf->io_bundleControl_lsType),2);
    bufp->chgCData(oldp+13,(vlSelf->io_bundleControl_exeType),4);
    bufp->chgIData(oldp+14,(vlSelf->io_resEX),32);
    bufp->chgIData(oldp+15,(vlSelf->io_rs1),32);
    bufp->chgIData(oldp+16,(vlSelf->io_rs2),32);
    bufp->chgIData(oldp+17,(vlSelf->io_imm),32);
    bufp->chgBit(oldp+18,(vlSelf->io_resBranch));
    bufp->chgIData(oldp+19,(vlSelf->io_resLoad),32);
    bufp->chgCData(oldp+20,(vlSelf->io_bundleControl_exeType),5);
    bufp->chgSData(oldp+21,((0x3ffU & (vlSelf->TOP__DOT__pcReg__DOT__pcReg 
                                       >> 2U))),10);
    bufp->chgIData(oldp+22,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
