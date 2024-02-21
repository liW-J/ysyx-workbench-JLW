// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___eval_static(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_initial__TOP(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    VTOP___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_initial__TOP(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_rs1 = 0U;
    vlSelf->io_rs2 = 0U;
    vlSelf->io_bundleControl_isJump = 0U;
    vlSelf->io_bundleControl_isBranch = 0U;
    vlSelf->io_bundleControl_isJAL = 0U;
    vlSelf->io_bundleControl_isLoad = 0U;
    vlSelf->io_bundleControl_isStore = 0U;
    vlSelf->io_bundleControl_isSigned = 0U;
    vlSelf->io_bundleControl_writeEnable = 0U;
    vlSelf->io_bundleControl_lsType = 0U;
    vlSelf->io_resBranch = 0U;
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
                VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 228, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_pc = vlSelf->TOP__DOT__pcReg__DOT__pcReg;
    vlSelf->io_inst = vlSelf->TOP__DOT__instRom__DOT__instMem_ext__DOT__Memory
        [(0x3ffU & (vlSelf->TOP__DOT__pcReg__DOT__pcReg 
                    >> 2U))];
    vlSelf->io_bundleControl_isALUSrc = ((0x1cU != 
                                          (0x1fU & vlSelf->io_inst)) 
                                         & (4U == (0x1fU 
                                                   & vlSelf->io_inst)));
    vlSelf->io_bundleControl_exeType = ((0x1cU == (0x1fU 
                                                   & vlSelf->io_inst))
                                         ? 0U : (4U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelf->io_inst)));
    vlSelf->io_imm = (((4U != (0x1fU & vlSelf->io_inst)) 
                       | (0x1cU == (0x1fU & vlSelf->io_inst)))
                       ? 0U : (((- (IData)((vlSelf->io_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->io_inst 
                                            >> 0x14U)));
    vlSelf->io_resEX = ((1U == (IData)(vlSelf->io_bundleControl_exeType))
                         ? ((IData)(vlSelf->io_bundleControl_isALUSrc)
                             ? vlSelf->io_imm : 0U)
                         : 0U);
    vlSelf->io_resLoad = vlSelf->io_resEX;
}

VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTOP___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
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
    vlSelf->io_pc = 0;
    vlSelf->io_inst = 0;
    vlSelf->io_bundleControl_isALUSrc = 0;
    vlSelf->io_bundleControl_isJump = 0;
    vlSelf->io_bundleControl_isBranch = 0;
    vlSelf->io_bundleControl_isJAL = 0;
    vlSelf->io_bundleControl_isLoad = 0;
    vlSelf->io_bundleControl_isStore = 0;
    vlSelf->io_bundleControl_isSigned = 0;
    vlSelf->io_bundleControl_writeEnable = 0;
    vlSelf->io_bundleControl_lsType = 0;
    vlSelf->io_bundleControl_exeType = 0;
    vlSelf->io_resEX = 0;
    vlSelf->io_rs1 = 0;
    vlSelf->io_rs2 = 0;
    vlSelf->io_imm = 0;
    vlSelf->io_resBranch = 0;
    vlSelf->io_resLoad = 0;
    vlSelf->TOP__DOT__pcReg__DOT__pcReg = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TOP__DOT__instRom__DOT__instMem_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->__Vtrigrprev__TOP__clock = 0;
}
