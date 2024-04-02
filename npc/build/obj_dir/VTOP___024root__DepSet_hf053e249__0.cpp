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
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->clock) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__clock));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__TOP__DOT___id_io_isEbreak 
        = vlSelf->TOP__DOT___id_io_isEbreak;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
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
                                                             "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x2ecU, (IData)(vlSelf->TOP__DOT___id_io_isEbreak));
}

void VTOP___024unit____Vdpiimwrap_pmem_write_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);
void VTOP___024unit____Vdpiimwrap_pmem_read_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__1(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    // Body
    if (vlSelf->io_bundleControl_isStore) {
        VTOP___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (&(vlSymsp->__Vscope_TOP__memRam)), 
                                                               "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x31cU, vlSelf->io_resEX, (IData)(vlSelf->io_bundleControl_lsuType), vlSelf->io_src2);
    }
    if (vlSelf->io_bundleControl_isLoad) {
        VTOP___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (&(vlSymsp->__Vscope_TOP__memRam)), 
                                                              "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x313U, vlSelf->io_resEX, (IData)(vlSelf->io_bundleControl_lsuType), __Vfunc_pmem_read__2__Vfuncout);
        vlSelf->TOP__DOT___memRam_rdata = __Vfunc_pmem_read__2__Vfuncout;
    } else {
        vlSelf->TOP__DOT___memRam_rdata = vlSelf->io_resEX;
    }
}

void VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ flag);

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__2(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__2\n"); );
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
                                                ? vlSelf->TOP__DOT___memRam_rdata
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
                    ? (((- (IData)((1U & (vlSelf->TOP__DOT___memRam_rdata 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->TOP__DOT___memRam_rdata))
                    : ((2U == (IData)(vlSelf->io_bundleControl_lsuType))
                        ? (((- (IData)((1U & (vlSelf->TOP__DOT___memRam_rdata 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->TOP__DOT___memRam_rdata))
                        : ((4U == (IData)(vlSelf->io_bundleControl_lsuType))
                            ? vlSelf->TOP__DOT___memRam_rdata
                            : 0U))) : vlSelf->TOP__DOT___memRam_rdata);
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
                                                       "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x2fcU, vlSelf->io_pc);
}
