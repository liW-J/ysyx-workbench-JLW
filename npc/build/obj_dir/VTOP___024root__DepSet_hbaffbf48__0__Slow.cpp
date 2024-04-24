// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___eval_static(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__io_pc = vlSelf->io_pc;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__TOP__DOT___id_io_isEbreak 
        = vlSelf->TOP__DOT___id_io_isEbreak;
    vlSelf->__Vtrigrprev__TOP__io_resEX = vlSelf->io_resEX;
}

VL_ATTR_COLD void VTOP___024root___eval_final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_triggers__stl(VTOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VTOP___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VTOP___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 755, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VTOP___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] io_pc)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] TOP._id_io_isEbreak)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] io_resEX)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] io_pc)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] TOP._id_io_isEbreak)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] io_resEX)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_inst = 0;
    vlSelf->io_pc = 0;
    vlSelf->io_bundleControl_isALUSrc = 0;
    vlSelf->io_bundleControl_isJump = 0;
    vlSelf->io_bundleControl_isBranch = 0;
    vlSelf->io_bundleControl_isJAL = 0;
    vlSelf->io_bundleControl_writeEnable = 0;
    vlSelf->io_bundleControl_isLoad = 0;
    vlSelf->io_bundleControl_isStore = 0;
    vlSelf->io_bundleControl_isUnsigned = 0;
    vlSelf->io_bundleControl_isContext = 0;
    vlSelf->io_bundleControl_csrType = 0;
    vlSelf->io_bundleControl_lsuType = 0;
    vlSelf->io_bundleControl_aluType = 0;
    vlSelf->io_resEX = 0;
    vlSelf->io_src1 = 0;
    vlSelf->io_src2 = 0;
    vlSelf->io_rs1 = 0;
    vlSelf->io_rs2 = 0;
    vlSelf->io_rd = 0;
    vlSelf->io_imm = 0;
    vlSelf->io_resBranch = 0;
    vlSelf->io_writeEnable = 0;
    vlSelf->TOP__DOT___instSRAM_inst = 0;
    vlSelf->TOP__DOT___dataSRAM_res = 0;
    vlSelf->TOP__DOT___id_io_isEbreak = 0;
    vlSelf->TOP__DOT__pcReg__DOT__pcReg = 0;
    vlSelf->TOP__DOT__pcReg__DOT___GEN = 0;
    vlSelf->TOP__DOT__id__DOT__casez_tmp = 0;
    vlSelf->TOP__DOT__id__DOT___GEN = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_0 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_1 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_2 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_3 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_4 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_5 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_6 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_7 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_8 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_10 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_11 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_12 = 0;
    vlSelf->TOP__DOT__id__DOT___GEN_13 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_hc285b89a__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5eaebdb1__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h87db9210__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_hcd9142c5__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h98976784__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_he0211b27__0 = 0;
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h86568975__0 = 0;
    vlSelf->TOP__DOT__gprFile__DOT___csrs_ext_R0_data = 0;
    vlSelf->TOP__DOT__gprFile__DOT__dataWrite = 0;
    vlSelf->TOP__DOT__gprFile__DOT___GEN = 0;
    vlSelf->TOP__DOT__gprFile__DOT___GEN_3 = 0;
    vlSelf->TOP__DOT__gprFile__DOT___GEN_4 = 0;
    vlSelf->TOP__DOT__gprFile__DOT___GEN_6 = 0;
    vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W1_en = 0;
    vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOP__DOT__ex__DOT__casez_tmp = 0;
    vlSelf->TOP__DOT__ex__DOT__operand1 = 0;
    vlSelf->TOP__DOT__ex__DOT__operand2 = 0;
    vlSelf->TOP__DOT__ex__DOT___GEN = 0;
    vlSelf->TOP__DOT__dataSRAM__DOT__load_flag = 0;
    vlSelf->TOP__DOT__dataSRAM__DOT__store_flag = 0;
    vlSelf->__Vtrigrprev__TOP__io_pc = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    vlSelf->__Vtrigrprev__TOP__TOP__DOT___id_io_isEbreak = 0;
    vlSelf->__Vtrigrprev__TOP__io_resEX = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
