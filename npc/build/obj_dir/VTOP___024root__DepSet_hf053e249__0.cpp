// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval_triggers__ico(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval_triggers__act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->TOP__DOT___id_io_isEbreak) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__TOP__DOT___id_io_isEbreak));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__TOP__DOT___id_io_isEbreak 
        = vlSelf->TOP__DOT___id_io_isEbreak;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTOP___024unit____Vdpiimwrap_check_ebreak_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ flag);

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__0\n"); );
    // Body
    VTOP___024unit____Vdpiimwrap_check_ebreak_TOP____024unit(
                                                             (&(vlSymsp->__Vscope_TOP__trap)), 
                                                             "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x2d3U, (IData)(vlSelf->TOP__DOT___id_io_isEbreak));
}

void VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ flag);

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__1(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__TOP__DOT__pcReg__DOT__pcReg;
    __Vdly__TOP__DOT__pcReg__DOT__pcReg = 0;
    CData/*4:0*/ __Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0;
    __Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0;
    __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0;
    __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 = 0;
    IData/*31:0*/ __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 = 0;
    // Body
    __Vdly__TOP__DOT__pcReg__DOT__pcReg = vlSelf->TOP__DOT__pcReg__DOT__pcReg;
    __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 = 0U;
    __Vdly__TOP__DOT__pcReg__DOT__pcReg = ((IData)(vlSelf->reset)
                                            ? 0x80000000U
                                            : (((IData)(vlSelf->io_bundleControl_isJump) 
                                                | ((IData)(vlSelf->io_bundleControl_isBranch) 
                                                   & (IData)(vlSelf->io_resBranch)))
                                                ? vlSelf->io_res
                                                : ((IData)(4U) 
                                                   + vlSelf->TOP__DOT__pcReg__DOT__pcReg)));
    if (((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN) 
         & (IData)(vlSelf->io_bundleControl_isJump))) {
        __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 
            = ((IData)(4U) + vlSelf->TOP__DOT__pcReg__DOT__pcReg);
        __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0 
            = vlSelf->io_rd;
    }
    if (((~ (IData)(vlSelf->io_bundleControl_isJump)) 
         & (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN))) {
        __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 
            = (((~ (IData)(vlSelf->io_bundleControl_isUnsigned)) 
                & (IData)(vlSelf->io_bundleControl_isLoad))
                ? ((1U == (IData)(vlSelf->io_bundleControl_lsuType))
                    ? (((- (IData)((1U & (vlSelf->io_res 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->io_res))
                    : ((2U == (IData)(vlSelf->io_bundleControl_lsuType))
                        ? (((- (IData)((1U & (vlSelf->io_res 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->io_res))
                        : ((4U == (IData)(vlSelf->io_bundleControl_lsuType))
                            ? vlSelf->io_res : 0U)))
                : vlSelf->io_res);
        __Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 = 1U;
        __Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1 
            = vlSelf->io_rd;
    }
    vlSelf->TOP__DOT__pcReg__DOT__pcReg = __Vdly__TOP__DOT__pcReg__DOT__pcReg;
    if (__Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0) {
        vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1) {
        vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1] 
            = __Vdlyvval__TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory__v1;
    }
    vlSelf->io_pc = vlSelf->TOP__DOT__pcReg__DOT__pcReg;
    VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       (&(vlSymsp->__Vscope_TOP__getPC)), 
                                                       "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x2e3U, vlSelf->io_pc);
}
