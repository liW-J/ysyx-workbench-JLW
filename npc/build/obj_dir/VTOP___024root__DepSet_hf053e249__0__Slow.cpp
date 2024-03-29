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
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h87db9210__0 
        = ((0x17U == (0x7fU & vlSelf->io_inst)) | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst)));
    vlSelf->TOP__DOT__id__DOT___GEN_6 = ((0x37U == 
                                          (0x7fU & vlSelf->io_inst)) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelf->io_inst)));
    vlSelf->TOP__DOT__id__DOT___GEN = ((0x380U & (vlSelf->io_inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->io_inst));
    VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       (&(vlSymsp->__Vscope_TOP__getPC)), 
                                                       "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x2e3U, vlSelf->io_pc);
    vlSelf->io_src1 = vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs1];
    vlSelf->io_src2 = vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs2];
    vlSelf->TOP__DOT__id__DOT___GEN_8 = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h87db9210__0) 
                                         | (0x67U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0 
        = ((0x6fU == (0x7fU & vlSelf->io_inst)) | (0x67U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h98976784__0 
        = ((3U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
              | (0x103U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))));
    vlSelf->TOP__DOT__id__DOT___GEN_2 = ((0x203U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                         | (0x283U 
                                            == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT__id__DOT___GEN_1 = ((0x23U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                         | ((0xa3U 
                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                            | (0x123U 
                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))));
    vlSelf->TOP__DOT__id__DOT___GEN_4 = ((0x363U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                         | (0x3e3U 
                                            == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT__id__DOT___GEN_0 = ((0x1fc00U 
                                          & (vlSelf->io_inst 
                                             >> 0xfU)) 
                                         | (IData)(vlSelf->TOP__DOT__id__DOT___GEN));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_he0211b27__0 
        = ((0x63U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
           | ((0xe3U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
              | ((0x263U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                 | (0x2e3U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)))));
    vlSelf->TOP__DOT__id__DOT___GEN_9 = ((0x37U == 
                                          (0x7fU & vlSelf->io_inst)) 
                                         | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_8));
    vlSelf->io_bundleControl_isJump = ((~ (IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)) 
                                       & (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h86568975__0 
        = ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6) 
           | (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5d4f4c30__0));
    vlSelf->TOP__DOT__id__DOT___GEN_3 = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h98976784__0) 
                                         | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_2));
    vlSelf->__VdfgTmp_h83fc06f1__0 = (((0x13U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                       | ((0x113U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                          | ((0x193U 
                                              == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                             | ((0x213U 
                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                | ((0x313U 
                                                    == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                   | ((0x393U 
                                                       == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                      | ((0x93U 
                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                         | ((0x293U 
                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                            | ((0x8293U 
                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                               | ((0x33U 
                                                                   == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                  | ((0x8033U 
                                                                      == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                     | ((0xb3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                        | ((0x133U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                           | ((0x1b3U 
                                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                              | ((0x233U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                                | ((0x2b3U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                                | ((0x82b3U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                                | (0x333U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0)))))))))))))))))) 
                                      | (0x3b3U == vlSelf->TOP__DOT__id__DOT___GEN_0));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5eaebdb1__0 
        = (((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_he0211b27__0) 
            | (0x363U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
           | (0x3e3U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)));
    vlSelf->TOP__DOT__id__DOT___GEN_5 = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_he0211b27__0) 
                                         | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_4));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_hcd9142c5__0 
        = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h86568975__0) 
           | (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_he0211b27__0));
    vlSelf->io_bundleControl_aluType = ((0x37U == (0x7fU 
                                                   & vlSelf->io_inst))
                                         ? 0U : ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_8)
                                                  ? 1U
                                                  : 
                                                 ((0x63U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                   ? 9U
                                                   : 
                                                  ((0xe3U 
                                                    == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                    ? 0xaU
                                                    : 
                                                   ((0x263U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 0xbU
                                                     : 
                                                    ((0x2e3U 
                                                      == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                      ? 0xcU
                                                      : 
                                                     ((0x363U 
                                                       == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                       ? 0xbU
                                                       : 
                                                      ((0x3e3U 
                                                        == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3) 
                                                         | ((0x23U 
                                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                            | ((0xa3U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                               | ((0x123U 
                                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                                  | (0x13U 
                                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))))))
                                                         ? 1U
                                                         : 
                                                        (((0x113U 
                                                           == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                          | (0x193U 
                                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)))
                                                          ? 0xbU
                                                          : 
                                                         ((0x213U 
                                                           == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                           ? 5U
                                                           : 
                                                          ((0x313U 
                                                            == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                            ? 4U
                                                            : 
                                                           ((0x393U 
                                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                             ? 3U
                                                             : 
                                                            ((0x93U 
                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                              ? 6U
                                                              : 
                                                             ((0x293U 
                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                               ? 7U
                                                               : 
                                                              ((0x8293U 
                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                ? 8U
                                                                : 
                                                               ((0x33U 
                                                                 == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                 ? 1U
                                                                 : 
                                                                ((0x8033U 
                                                                  == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                  ? 2U
                                                                  : 
                                                                 ((0xb3U 
                                                                   == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                   ? 6U
                                                                   : 
                                                                  (((0x133U 
                                                                     == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                    | (0x1b3U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                                    ? 0xbU
                                                                    : 
                                                                   ((0x233U 
                                                                     == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                     ? 5U
                                                                     : 
                                                                    ((0x2b3U 
                                                                      == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                      ? 7U
                                                                      : 
                                                                     ((0x82b3U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                       ? 8U
                                                                       : 
                                                                      ((0x333U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                        ? 4U
                                                                        : 
                                                                       ((0x3b3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)
                                                                         ? 3U
                                                                         : 
                                                                        ((0x100073U 
                                                                          == vlSelf->io_inst)
                                                                          ? 1U
                                                                          : 0xfU))))))))))))))))))))))))));
    vlSelf->io_bundleControl_isBranch = ((~ (IData)(vlSelf->TOP__DOT__id__DOT___GEN_9)) 
                                         & (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5eaebdb1__0));
    vlSelf->io_bundleControl_isJAL = ((0x37U != (0x7fU 
                                                 & vlSelf->io_inst)) 
                                      & ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h87db9210__0) 
                                         | ((0x67U 
                                             != (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                            & (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h5eaebdb1__0))));
    vlSelf->TOP__DOT__id__DOT___GEN_11 = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h86568975__0) 
                                          | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_5));
    vlSelf->io_bundleControl_writeEnable = ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_9) 
                                            | ((~ (IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)) 
                                               & ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3) 
                                                  | ((~ (IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)) 
                                                     & (IData)(vlSelf->__VdfgTmp_h83fc06f1__0)))));
    vlSelf->TOP__DOT__id__DOT__casez_tmp = (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)
                                                      ? 0U
                                                      : 
                                                     ((((((((((0x13U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                              | (0x113U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                             | (0x193U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                            | (0x213U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                           | (0x313U 
                                                              == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                          | (0x393U 
                                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                         | (0x93U 
                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                        | (0x293U 
                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                       | (0x8293U 
                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                       ? 0U
                                                       : 
                                                      (4U 
                                                       & (4U 
                                                          | (2U 
                                                             & ((~ 
                                                                 ((((((((((0x33U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                          | (0x8033U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                         | (0xb3U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                        | (0x133U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                       | (0x1b3U 
                                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                      | (0x233U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                     | (0x2b3U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                    | (0x82b3U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                   | (0x333U 
                                                                      == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                  | (0x3b3U 
                                                                     == vlSelf->TOP__DOT__id__DOT___GEN_0))) 
                                                                << 1U)))))))))))
                                             ? (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)
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
                                                   ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)
                                                       ? 2U
                                                       : 
                                                      ((((((((((0x13U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                               | (0x113U 
                                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                              | (0x193U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                             | (0x213U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                            | (0x313U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                           | (0x393U 
                                                              == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                          | (0x93U 
                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                         | (0x293U 
                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                        | (0x8293U 
                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                        ? 0U
                                                        : 
                                                       (2U 
                                                        & (4U 
                                                           | (2U 
                                                              & ((~ 
                                                                  ((((((((((0x33U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                           | (0x8033U 
                                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                          | (0xb3U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                         | (0x133U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                        | (0x1b3U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                       | (0x233U 
                                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                      | (0x2b3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                     | (0x82b3U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                    | (0x333U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                   | (0x3b3U 
                                                                      == vlSelf->TOP__DOT__id__DOT___GEN_0))) 
                                                                 << 1U)))))))))))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)
                                                        ? 0U
                                                        : 
                                                       ((((((((((0x13U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                                | (0x113U 
                                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                               | (0x193U 
                                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                              | (0x213U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                             | (0x313U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                            | (0x393U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                           | (0x93U 
                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                          | (0x293U 
                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                         | (0x8293U 
                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                         ? 0U
                                                         : 
                                                        (1U 
                                                         & (4U 
                                                            | (2U 
                                                               & ((~ 
                                                                   ((((((((((0x33U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                            | (0x8033U 
                                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                           | (0xb3U 
                                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                          | (0x133U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                         | (0x1b3U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                        | (0x233U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                       | (0x2b3U 
                                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                      | (0x82b3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                     | (0x333U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                    | (0x3b3U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0))) 
                                                                  << 1U)))))))))))
                                                  ? 
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
                                                              >> 7U)))))
                                                  : 0U))
                                             : (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)
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
                                                   ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)
                                                       ? 2U
                                                       : 
                                                      ((((((((((0x13U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                               | (0x113U 
                                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                              | (0x193U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                             | (0x213U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                            | (0x313U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                           | (0x393U 
                                                              == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                          | (0x93U 
                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                         | (0x293U 
                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                        | (0x8293U 
                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                        ? 0U
                                                        : 
                                                       (2U 
                                                        & (4U 
                                                           | (2U 
                                                              & ((~ 
                                                                  ((((((((((0x33U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                           | (0x8033U 
                                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                          | (0xb3U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                         | (0x133U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                        | (0x1b3U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                       | (0x233U 
                                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                      | (0x2b3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                     | (0x82b3U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                    | (0x333U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                   | (0x3b3U 
                                                                      == vlSelf->TOP__DOT__id__DOT___GEN_0))) 
                                                                 << 1U)))))))))))
                                                 ? 
                                                (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)
                                                        ? 0U
                                                        : 
                                                       ((((((((((0x13U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                                | (0x113U 
                                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                               | (0x193U 
                                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                              | (0x213U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                             | (0x313U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                            | (0x393U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                           | (0x93U 
                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                          | (0x293U 
                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                         | (0x8293U 
                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                         ? 0U
                                                         : 
                                                        (1U 
                                                         & (4U 
                                                            | (2U 
                                                               & ((~ 
                                                                   ((((((((((0x33U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                            | (0x8033U 
                                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                           | (0xb3U 
                                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                          | (0x133U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                         | (0x1b3U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                        | (0x233U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                       | (0x2b3U 
                                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                      | (0x82b3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                     | (0x333U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                    | (0x3b3U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0))) 
                                                                  << 1U)))))))))))
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
                                                (((IData)(vlSelf->TOP__DOT__id__DOT___GEN_6)
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_5)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_3)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)
                                                        ? 0U
                                                        : 
                                                       ((((((((((0x13U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                                | (0x113U 
                                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                               | (0x193U 
                                                                  == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                              | (0x213U 
                                                                 == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                             | (0x313U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                            | (0x393U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))) 
                                                           | (0x93U 
                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                          | (0x293U 
                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                         | (0x8293U 
                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0))
                                                         ? 0U
                                                         : 
                                                        (1U 
                                                         & (4U 
                                                            | (2U 
                                                               & ((~ 
                                                                   ((((((((((0x33U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                            | (0x8033U 
                                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                           | (0xb3U 
                                                                              == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                          | (0x133U 
                                                                             == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                         | (0x1b3U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                        | (0x233U 
                                                                           == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                       | (0x2b3U 
                                                                          == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                      | (0x82b3U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                     | (0x333U 
                                                                        == vlSelf->TOP__DOT__id__DOT___GEN_0)) 
                                                                    | (0x3b3U 
                                                                       == vlSelf->TOP__DOT__id__DOT___GEN_0))) 
                                                                  << 1U)))))))))))
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
    vlSelf->io_bundleControl_isUnsigned = ((~ (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hcd9142c5__0)) 
                                           & ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_4) 
                                              | ((~ (IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_h98976784__0)) 
                                                 & ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_2) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_1) 
                                                         | ((0x13U 
                                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                            | (0x113U 
                                                               == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))))) 
                                                       & ((0x193U 
                                                           == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                          | ((~ 
                                                              ((0x213U 
                                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                               | ((0x313U 
                                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                                  | ((0x393U 
                                                                      == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                                     | ((0x93U 
                                                                         == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                        | ((0x293U 
                                                                            == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                           | ((0x8293U 
                                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                              | ((0x33U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                                | ((0xb3U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                                | (0x133U 
                                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0))))))))))) 
                                                             & (0x1b3U 
                                                                == vlSelf->TOP__DOT__id__DOT___GEN_0))))))));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_hc285b89a__0 
        = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hcd9142c5__0) 
           | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_4));
    vlSelf->TOP__DOT__ex__DOT__operand1 = ((IData)(vlSelf->io_bundleControl_isJAL)
                                            ? vlSelf->TOP__DOT__pcReg__DOT__pcReg
                                            : vlSelf->io_src1);
    vlSelf->io_bundleControl_isLoad = ((~ (IData)(vlSelf->TOP__DOT__id__DOT___GEN_11)) 
                                       & (IData)(vlSelf->TOP__DOT__id__DOT___GEN_3));
    vlSelf->io_bundleControl_lsuType = ((IData)(vlSelf->TOP__DOT__id__DOT___GEN_11)
                                         ? 0xfU : (
                                                   (3U 
                                                    == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x83U 
                                                     == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x103U 
                                                      == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                      ? 4U
                                                      : 
                                                     ((0x203U 
                                                       == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                       ? 1U
                                                       : 
                                                      ((0x283U 
                                                        == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                        ? 2U
                                                        : 
                                                       ((0x23U 
                                                         == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                         ? 1U
                                                         : 
                                                        ((0xa3U 
                                                          == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                          ? 2U
                                                          : 
                                                         ((0x123U 
                                                           == (IData)(vlSelf->TOP__DOT__id__DOT___GEN))
                                                           ? 4U
                                                           : 0xfU)))))))));
    vlSelf->io_writeEnable = vlSelf->io_bundleControl_writeEnable;
    vlSelf->TOP__DOT__gprFile__DOT___GEN = ((IData)(vlSelf->io_bundleControl_writeEnable) 
                                            & (0U != (IData)(vlSelf->io_rd)));
    vlSelf->io_imm = vlSelf->TOP__DOT__id__DOT__casez_tmp;
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
    vlSelf->io_bundleControl_isStore = ((~ ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hc285b89a__0) 
                                            | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_3))) 
                                        & (IData)(vlSelf->TOP__DOT__id__DOT___GEN_1));
    vlSelf->TOP__DOT__id__DOT____VdfgTmp_hbd1d6ada__0 
        = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hc285b89a__0) 
           | ((3U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
              | ((0x83U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                 | ((0x103U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                    | ((0x203U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                       | ((0x283U == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                          | (IData)(vlSelf->TOP__DOT__id__DOT___GEN_1)))))));
    vlSelf->TOP__DOT___id_io_isEbreak = (1U & (~ ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hbd1d6ada__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h83fc06f1__0))));
    vlSelf->io_bundleControl_isALUSrc = ((IData)(vlSelf->TOP__DOT__id__DOT____VdfgTmp_hbd1d6ada__0) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                            | ((0x113U 
                                                == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                               | ((0x193U 
                                                   == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                  | ((0x213U 
                                                      == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                     | ((0x313U 
                                                         == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                        | ((0x393U 
                                                            == (IData)(vlSelf->TOP__DOT__id__DOT___GEN)) 
                                                           | ((0x93U 
                                                               == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                              | ((0x293U 
                                                                  == vlSelf->TOP__DOT__id__DOT___GEN_0) 
                                                                 | (0x8293U 
                                                                    == vlSelf->TOP__DOT__id__DOT___GEN_0))))))))));
    vlSelf->TOP__DOT__ex__DOT__operand2 = ((IData)(vlSelf->io_bundleControl_isALUSrc)
                                            ? vlSelf->TOP__DOT__id__DOT__casez_tmp
                                            : vlSelf->io_src2);
    vlSelf->TOP__DOT__ex__DOT___GEN = (vlSelf->TOP__DOT__ex__DOT__operand1 
                                       + vlSelf->TOP__DOT__ex__DOT__operand2);
    vlSelf->TOP__DOT__ex__DOT__casez_tmp = ((8U & (IData)(vlSelf->io_bundleControl_aluType))
                                             ? ((4U 
                                                 & (IData)(vlSelf->io_bundleControl_aluType))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 0U
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
