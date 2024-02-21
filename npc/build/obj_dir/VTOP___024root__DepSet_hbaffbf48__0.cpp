// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((0x1cU == (0x1fU & vlSelf->io_inst)) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"ebreak");
    }
    if (VL_UNLIKELY((1U & (((~ (0x1cU == (0x1fU & vlSelf->io_inst))) 
                            & (4U == (0x1fU & vlSelf->io_inst))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"addi");
    }
    vlSelf->TOP__DOT__pcReg__DOT__pcReg = ((IData)(vlSelf->reset)
                                            ? 0x80000000U
                                            : ((IData)(4U) 
                                               + vlSelf->TOP__DOT__pcReg__DOT__pcReg));
    vlSelf->TOP__DOT__instRom__DOT__instMem_ext__DOT__Memory[1U] = 0xfe0f8f93U;
    vlSelf->TOP__DOT__instRom__DOT__instMem_ext__DOT__Memory[2U] = 0x100073U;
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

void VTOP___024root___eval_nba(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTOP___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VTOP___024root___eval_triggers__act(VTOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTOP___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTOP___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 228, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VTOP___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTOP___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 228, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTOP___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
