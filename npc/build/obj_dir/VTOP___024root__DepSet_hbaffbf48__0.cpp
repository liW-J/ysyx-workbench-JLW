// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP___024root.h"

void VTOP___024root___act_sequent__TOP__0(VTOP___024root* vlSelf);

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VTOP___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__3(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->io_src2 = vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs2];
    vlSelf->io_resBranch = ((~ ((0U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                | ((1U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                   | ((2U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                      | ((3U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                         | ((4U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                            | (5U == (IData)(vlSelf->io_bundleControl_aluType)))))))) 
                            & ((0xbU == (IData)(vlSelf->io_bundleControl_aluType))
                                ? ((IData)(vlSelf->io_bundleControl_isBranch) 
                                   & ((IData)(vlSelf->io_bundleControl_isUnsigned)
                                       ? (vlSelf->io_src1 
                                          < vlSelf->io_src2)
                                       : VL_LTS_III(32, vlSelf->io_src1, vlSelf->io_src2)))
                                : ((9U == (IData)(vlSelf->io_bundleControl_aluType))
                                    ? (vlSelf->io_src1 
                                       == vlSelf->io_src2)
                                    : ((0xaU == (IData)(vlSelf->io_bundleControl_aluType))
                                        ? (vlSelf->io_src1 
                                           != vlSelf->io_src2)
                                        : ((0xcU == (IData)(vlSelf->io_bundleControl_aluType)) 
                                           & ((IData)(vlSelf->io_bundleControl_isUnsigned)
                                               ? (vlSelf->io_src1 
                                                  >= vlSelf->io_src2)
                                               : VL_GTES_III(32, vlSelf->io_src1, vlSelf->io_src2)))))));
    vlSelf->TOP__DOT__ex__DOT__operand2 = ((IData)(vlSelf->io_bundleControl_isALUSrc)
                                            ? vlSelf->TOP__DOT__id__DOT__casez_tmp
                                            : vlSelf->io_src2);
    vlSelf->TOP__DOT__pcReg__DOT___GEN = ((IData)(vlSelf->io_bundleControl_isJump) 
                                          | ((IData)(vlSelf->io_bundleControl_isBranch) 
                                             & (IData)(vlSelf->io_resBranch)));
    vlSelf->TOP__DOT__ex__DOT___GEN = (vlSelf->TOP__DOT__ex__DOT__operand1 
                                       + vlSelf->TOP__DOT__ex__DOT__operand2);
    vlSelf->TOP__DOT__ex__DOT__casez_tmp = ((8U & (IData)(vlSelf->io_bundleControl_aluType))
                                             ? ((4U 
                                                 & (IData)(vlSelf->io_bundleControl_aluType))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 0U
                                                   : vlSelf->TOP__DOT__ex__DOT__operand1)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   | vlSelf->TOP__DOT__gprFile__DOT___csrs_ext_R0_data)
                                                   : vlSelf->TOP__DOT__ex__DOT___GEN))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  ((IData)(vlSelf->io_bundleControl_isBranch)
                                                    ? vlSelf->TOP__DOT__ex__DOT___GEN
                                                    : 
                                                   ((IData)(vlSelf->io_bundleControl_isUnsigned)
                                                     ? 
                                                    (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                     < vlSelf->TOP__DOT__ex__DOT__operand2)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->TOP__DOT__ex__DOT__operand1, vlSelf->TOP__DOT__ex__DOT__operand2)))
                                                   : vlSelf->TOP__DOT__ex__DOT___GEN)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? vlSelf->TOP__DOT__ex__DOT___GEN
                                                   : 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->TOP__DOT__ex__DOT__operand1, 
                                                                 (0x1fU 
                                                                  & vlSelf->TOP__DOT__ex__DOT__operand2)))))
                                             : ((4U 
                                                 & (IData)(vlSelf->io_bundleControl_aluType))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->TOP__DOT__ex__DOT__operand2))
                                                   : 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->TOP__DOT__ex__DOT__operand2)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   ^ vlSelf->TOP__DOT__ex__DOT__operand2)
                                                   : 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   | vlSelf->TOP__DOT__ex__DOT__operand2)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   & vlSelf->TOP__DOT__ex__DOT__operand2)
                                                   : 
                                                  (vlSelf->TOP__DOT__ex__DOT__operand1 
                                                   - vlSelf->TOP__DOT__ex__DOT__operand2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? vlSelf->TOP__DOT__ex__DOT___GEN
                                                   : vlSelf->TOP__DOT__ex__DOT__operand2))));
    vlSelf->io_resEX = vlSelf->TOP__DOT__ex__DOT__casez_tmp;
}

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__4(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->TOP__DOT__gprFile__DOT__dataWrite = (((~ (IData)(vlSelf->io_bundleControl_isUnsigned)) 
                                                  & (IData)(vlSelf->io_bundleControl_isLoad))
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelf->io_bundleControl_lsuType))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->TOP__DOT___dataSRAM_res 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->TOP__DOT___dataSRAM_res))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->io_bundleControl_lsuType))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->TOP__DOT___dataSRAM_res 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->TOP__DOT___dataSRAM_res))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_bundleControl_lsuType))
                                                     ? vlSelf->TOP__DOT___dataSRAM_res
                                                     : 0U)))
                                                  : vlSelf->TOP__DOT___dataSRAM_res);
}

void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf);
void VTOP___024root___nba_sequent__TOP__1(VTOP___024root* vlSelf);
void VTOP___024root___nba_sequent__TOP__2(VTOP___024root* vlSelf);

void VTOP___024root___eval_nba(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VTOP___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTOP___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VTOP___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTOP___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VTOP___024root___nba_sequent__TOP__4(vlSelf);
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
    VlTriggerVec<4> __VpreTriggered;
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
                    VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 755, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 755, "", "NBA region did not converge.");
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
