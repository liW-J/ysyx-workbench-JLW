// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___ico_sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_rd = (0x1fU & (vlSelf->io_inst >> 7U));
    vlSelf->io_rs1 = (0x1fU & (vlSelf->io_inst >> 0xfU));
    vlSelf->io_rs2 = (0x1fU & (vlSelf->io_inst >> 0x14U));
    vlSelf->TOP__DOT__id__DOT___csignals_T_1 = (0x13U 
                                                == 
                                                ((0x380U 
                                                  & (vlSelf->io_inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->io_inst)));
    vlSelf->TOP__DOT___id_io_isEbreak = ((~ (IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)) 
                                         & (0x17U != 
                                            (0x7fU 
                                             & vlSelf->io_inst)));
    vlSelf->io_bundleControl_isALUSrc = ((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelf->io_inst)));
    vlSelf->io_bundleControl_isJAL = ((~ (IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)) 
                                      & (0x17U == (0x7fU 
                                                   & vlSelf->io_inst)));
    vlSelf->TOP__DOT__id__DOT__casez_tmp = (((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : 4U))
                                             ? (((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 2U))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 0U))
                                                  ? 0U
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->io_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->io_inst 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->io_inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->io_inst 
                                                              >> 7U)))))))
                                             : (((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 2U))
                                                 ? 
                                                (((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 0U))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->io_inst 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSelf->io_inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->io_inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->io_inst 
                                                              >> 0x14U)))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->io_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->io_inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->io_inst 
                                                           >> 7U)))))
                                                 : 
                                                (((IData)(vlSelf->TOP__DOT__id__DOT___csignals_T_1)
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 0U))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->io_inst)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->io_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->io_inst 
                                                     >> 0x14U)))));
    vlSelf->io_src1 = ((IData)(vlSelf->io_bundleControl_isJAL)
                        ? vlSelf->TOP__DOT__pcReg__DOT__pcReg
                        : vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                       [vlSelf->io_rs1]);
    vlSelf->io_imm = vlSelf->TOP__DOT__id__DOT__casez_tmp;
    vlSelf->io_src2 = ((IData)(vlSelf->io_bundleControl_isALUSrc)
                        ? vlSelf->TOP__DOT__id__DOT__casez_tmp
                        : vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                       [vlSelf->io_rs2]);
    vlSelf->io_resEX = (vlSelf->io_src1 + vlSelf->io_src2);
}

void VTOP___024root___eval_ico(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VTOP___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__2(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->io_src1 = ((IData)(vlSelf->io_bundleControl_isJAL)
                        ? vlSelf->TOP__DOT__pcReg__DOT__pcReg
                        : vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                       [vlSelf->io_rs1]);
    vlSelf->io_src2 = ((IData)(vlSelf->io_bundleControl_isALUSrc)
                        ? vlSelf->TOP__DOT__id__DOT__casez_tmp
                        : vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                       [vlSelf->io_rs2]);
    vlSelf->io_resEX = (vlSelf->io_src1 + vlSelf->io_src2);
}

void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf);
void VTOP___024root___nba_sequent__TOP__1(VTOP___024root* vlSelf);

void VTOP___024root___eval_nba(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTOP___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTOP___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTOP___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void VTOP___024root___eval_triggers__ico(VTOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VTOP___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VTOP___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 267, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VTOP___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 267, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 267, "", "NBA region did not converge.");
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
