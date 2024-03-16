// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___eval_triggers__stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ flag);

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_rd = (0x1fU & (vlSelf->io_inst >> 7U));
    vlSelf->io_test = vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
        [2U];
    vlSelf->io_pc = vlSelf->TOP__DOT__pcReg__DOT__pcReg;
    vlSelf->io_rs1 = (0x1fU & (vlSelf->io_inst >> 0xfU));
    vlSelf->io_rs2 = (0x1fU & (vlSelf->io_inst >> 0x14U));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_hfd5cca07__0 
        = ((4U == (0x1fU & (vlSelf->io_inst >> 2U))) 
           | (5U == (0x1fU & (vlSelf->io_inst >> 2U))));
    vlSelf->TOP__DOT__id__DOT__isEbreak = (0x1cU == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U)));
    VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       (&(vlSymsp->__Vscope_TOP__getPC)), 
                                                       "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x1a9U, vlSelf->io_pc);
    if (vlSelf->TOP__DOT__id__DOT__isEbreak) {
        vlSelf->io_bundleControl_exeType = 0U;
        vlSelf->io_imm = 0U;
    } else {
        vlSelf->io_bundleControl_exeType = vlSelf->TOP__DOT__id__DOT____VdfgTmp_hfd5cca07__0;
        vlSelf->io_imm = ((4U == (0x1fU & (vlSelf->io_inst 
                                           >> 2U)))
                           ? (((- (IData)((vlSelf->io_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->io_inst 
                                           >> 0x14U))
                           : ((5U == (0x1fU & (vlSelf->io_inst 
                                               >> 2U)))
                               ? (0xfffff000U & vlSelf->io_inst)
                               : 0U));
    }
    vlSelf->io_bundleControl_isALUSrc = ((~ (IData)(vlSelf->TOP__DOT__id__DOT__isEbreak)) 
                                         & (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hfd5cca07__0));
    vlSelf->io_bundleControl_isJAL = (IData)(((0x14U 
                                               == (0x7cU 
                                                   & vlSelf->io_inst)) 
                                              & (~ 
                                                 ((IData)(vlSelf->TOP__DOT__id__DOT__isEbreak) 
                                                  | (4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 2U)))))));
    vlSelf->io_writeEnable = (1U == (IData)(vlSelf->io_bundleControl_exeType));
    vlSelf->io_src1 = ((IData)(vlSelf->io_bundleControl_isJAL)
                        ? vlSelf->TOP__DOT__pcReg__DOT__pcReg
                        : vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                       [vlSelf->io_rs1]);
    vlSelf->io_src2 = ((IData)(vlSelf->io_bundleControl_isALUSrc)
                        ? vlSelf->io_imm : vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                       [vlSelf->io_rs2]);
    vlSelf->io_resEX = ((IData)(vlSelf->io_writeEnable)
                         ? (vlSelf->io_src1 + vlSelf->io_src2)
                         : 0U);
}
