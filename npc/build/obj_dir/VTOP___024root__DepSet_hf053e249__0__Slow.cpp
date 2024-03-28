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
    vlSelf->io_pc = vlSelf->TOP__DOT__pcReg__DOT__pcReg;
    vlSelf->io_rd = (0x1fU & (vlSelf->io_inst >> 7U));
    vlSelf->io_rs1 = (0x1fU & (vlSelf->io_inst >> 0xfU));
    vlSelf->io_rs2 = (0x1fU & (vlSelf->io_inst >> 0x14U));
    vlSelf->TOP__DOT__id__DOT___GEN = ((0x380U & (vlSelf->io_inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->io_inst));
    VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       (&(vlSymsp->__Vscope_TOP__getPC)), 
                                                       "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x1caU, vlSelf->io_pc);
    vlSelf->io_src1 = vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs1];
    vlSelf->io_src2 = vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs2];
    vlSelf->io_bundleControl_isJAL = ((0x13U != (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                      & ((0x17U == 
                                          (0x7fU & vlSelf->io_inst)) 
                                         | (0x6fU == 
                                            (0x7fU 
                                             & vlSelf->io_inst))));
    vlSelf->TOP__DOT__id__DOT__casez_tmp = (((0x13U 
                                              == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                    ? 0U
                                                    : 
                                                   (4U 
                                                    & (2U 
                                                       | ((0x123U 
                                                           != (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                          << 2U)))))))
                                             ? (((0x13U 
                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    (2U 
                                                     & 2U)))))
                                                 ? 0U
                                                 : 
                                                (((0x13U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->io_inst))
                                                     ? 1U
                                                     : 0U)))
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
                                             : (((0x13U 
                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    (2U 
                                                     & 2U)))))
                                                 ? 
                                                (((0x13U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->io_inst))
                                                     ? 1U
                                                     : 0U)))
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
                                                (((0x13U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->io_inst))
                                                     ? 1U
                                                     : 0U)))
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
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h166f560e__0 
        = ((0x13U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
           | (0x17U == (0x7fU & vlSelf->io_inst)));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0 
        = ((0x6fU == (0x7fU & vlSelf->io_inst)) | (0x67U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->io_imm = vlSelf->TOP__DOT__id__DOT__casez_tmp;
    vlSelf->io_bundleControl_isJump = ((~ (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h166f560e__0)) 
                                       & (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0));
    vlSelf->io_bundleControl_writeEnable = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h166f560e__0) 
                                            | (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0));
    vlSelf->io_writeEnable = vlSelf->io_bundleControl_writeEnable;
    vlSelf->io_bundleControl_isStore = ((~ (IData)(vlSelf->io_bundleControl_writeEnable)) 
                                        & (0x123U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT__gprFile__DOT___GEN = ((IData)(vlSelf->io_bundleControl_writeEnable) 
                                            & (0U != (IData)(vlSelf->io_rd)));
    vlSelf->io_bundleControl_isALUSrc = ((IData)(vlSelf->io_bundleControl_writeEnable) 
                                         | (0x123U 
                                            == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT___id_io_isEbreak = ((~ (IData)(vlSelf->io_bundleControl_isALUSrc)) 
                                         & (0x100073U 
                                            == vlSelf->io_inst));
    vlSelf->io_resEX = (((IData)(vlSelf->io_bundleControl_isJAL)
                          ? vlSelf->TOP__DOT__pcReg__DOT__pcReg
                          : vlSelf->io_src1) + ((IData)(vlSelf->io_bundleControl_isALUSrc)
                                                 ? vlSelf->TOP__DOT__id__DOT__casez_tmp
                                                 : vlSelf->io_src2));
}
