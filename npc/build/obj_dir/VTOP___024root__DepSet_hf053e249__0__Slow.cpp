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
    vlSelf->TOP__DOT__exu__DOT___GEN = (1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state));
    vlSelf->TOP__DOT__ifu__DOT___state_T_8 = (2U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state));
    vlSelf->io_pc = vlSelf->TOP__DOT__ifu__DOT__pcReg;
    vlSelf->io_rd = (0x1fU & (vlSelf->TOP__DOT___sram_io_resIFU 
                              >> 7U));
    vlSelf->TOP__DOT__ifu__DOT___GEN_0 = ((0U != (IData)(vlSelf->TOP__DOT__ifu__DOT__state)) 
                                          & (1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state)));
    vlSelf->io_rs1 = (0x1fU & (vlSelf->TOP__DOT___sram_io_resIFU 
                               >> 0xfU));
    vlSelf->io_rs2 = (0x1fU & (vlSelf->TOP__DOT___sram_io_resIFU 
                               >> 0x14U));
    vlSelf->io_inst = vlSelf->TOP__DOT___sram_io_resIFU;
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h87db9210__0 
        = ((0x17U == (0x7fU & vlSelf->TOP__DOT___sram_io_resIFU)) 
           | (0x6fU == (0x7fU & vlSelf->TOP__DOT___sram_io_resIFU)));
    vlSelf->TOP__DOT__idu__DOT___GEN_8 = ((0x37U == 
                                           (0x7fU & vlSelf->TOP__DOT___sram_io_resIFU)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->TOP__DOT___sram_io_resIFU)));
    vlSelf->TOP__DOT__idu__DOT___GEN = ((0x380U & (vlSelf->TOP__DOT___sram_io_resIFU 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->TOP__DOT___sram_io_resIFU));
    VTOP___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       (&(vlSymsp->__Vscope_TOP__getPC)), 
                                                       "/home/sends/local/share/ysyx-workbench/npc/build/TOP.v", 0x4f7U, vlSelf->io_pc);
    vlSelf->TOP__DOT__arbiter__DOT__exec = ((IData)(vlSelf->TOP__DOT__ifu__DOT___GEN_0)
                                             ? 1U : 
                                            (2U & (
                                                   (~ 
                                                    ((1U 
                                                      != (IData)(vlSelf->TOP__DOT__ifu__DOT__state)) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->TOP__DOT__ifu__DOT__state)))))) 
                                                   << 1U)));
    vlSelf->io_src1 = vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs1];
    vlSelf->io_src2 = vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory
        [vlSelf->io_rs2];
    vlSelf->TOP__DOT__idu__DOT___GEN_10 = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h87db9210__0) 
                                           | (0x67U 
                                              == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)));
    vlSelf->TOP__DOT__idu__DOT___GEN_1 = ((0x173U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                          | (0xf3U 
                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)));
    vlSelf->TOP__DOT__idu__DOT___GEN_3 = ((0x23U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                          | ((0xa3U 
                                              == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                             | (0x123U 
                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h98976784__0 
        = ((3U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
              | (0x103U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))));
    vlSelf->TOP__DOT__idu__DOT___GEN_4 = ((0x203U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                          | (0x283U 
                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h5d4f4c30__0 
        = ((0x6fU == (0x7fU & vlSelf->TOP__DOT___sram_io_resIFU)) 
           | (0x67U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)));
    vlSelf->TOP__DOT__idu__DOT___GEN_6 = ((0x363U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                          | (0x3e3U 
                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_he0211b27__0 
        = ((0x63U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
           | ((0xe3U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
              | ((0x263U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                 | (0x2e3U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)))));
    vlSelf->TOP__DOT__idu__DOT___GEN_0 = ((0x1fc00U 
                                           & (vlSelf->TOP__DOT___sram_io_resIFU 
                                              >> 0xfU)) 
                                          | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN));
    vlSelf->TOP__DOT__arbiter__DOT___GEN_1 = ((1U != (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec)) 
                                              | (0U 
                                                 == (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec)));
    vlSelf->TOP__DOT__idu__DOT___GEN_11 = ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->TOP__DOT___sram_io_resIFU)) 
                                           | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_10));
    vlSelf->TOP__DOT__idu__DOT___GEN_5 = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h98976784__0) 
                                          | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_4));
    vlSelf->io_bundleControl_isJump = ((~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)) 
                                       & (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h5d4f4c30__0));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h86568975__0 
        = ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8) 
           | (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h5d4f4c30__0));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h5eaebdb1__0 
        = (((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_he0211b27__0) 
            | (0x363U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
           | (0x3e3U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)));
    vlSelf->TOP__DOT__idu__DOT___GEN_7 = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_he0211b27__0) 
                                          | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_6));
    vlSelf->TOP__DOT__idu__DOT___GEN_2 = ((0x33U == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                          | ((0x8033U 
                                              == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                             | ((0xb3U 
                                                 == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                | ((0x133U 
                                                    == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                   | ((0x1b3U 
                                                       == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                      | ((0x233U 
                                                          == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                         | ((0x2b3U 
                                                             == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                            | ((0x82b3U 
                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                               | ((0x333U 
                                                                   == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                  | (0x3b3U 
                                                                     == vlSelf->TOP__DOT__idu__DOT___GEN_0))))))))));
    vlSelf->io_bundleControl_aluType = ((0x37U == (0x7fU 
                                                   & vlSelf->TOP__DOT___sram_io_resIFU))
                                         ? 0U : ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_10)
                                                  ? 1U
                                                  : 
                                                 ((0x63U 
                                                   == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                   ? 9U
                                                   : 
                                                  ((0xe3U 
                                                    == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                    ? 0xaU
                                                    : 
                                                   ((0x263U 
                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                     ? 0xbU
                                                     : 
                                                    ((0x2e3U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                      ? 0xcU
                                                      : 
                                                     ((0x363U 
                                                       == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                       ? 0xbU
                                                       : 
                                                      ((0x3e3U 
                                                        == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5) 
                                                         | ((0x23U 
                                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                            | ((0xa3U 
                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                               | ((0x123U 
                                                                   == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                  | (0x13U 
                                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))))))
                                                         ? 1U
                                                         : 
                                                        (((0x113U 
                                                           == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                          | (0x193U 
                                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)))
                                                          ? 0xbU
                                                          : 
                                                         ((0x213U 
                                                           == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                           ? 5U
                                                           : 
                                                          ((0x313U 
                                                            == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                            ? 4U
                                                            : 
                                                           ((0x393U 
                                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                             ? 3U
                                                             : 
                                                            ((0x93U 
                                                              == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                              ? 6U
                                                              : 
                                                             ((0x293U 
                                                               == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                               ? 7U
                                                               : 
                                                              ((0x8293U 
                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                ? 8U
                                                                : 
                                                               ((0x33U 
                                                                 == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                 ? 1U
                                                                 : 
                                                                ((0x8033U 
                                                                  == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                  ? 2U
                                                                  : 
                                                                 ((0xb3U 
                                                                   == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                   ? 6U
                                                                   : 
                                                                  (((0x133U 
                                                                     == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                    | (0x1b3U 
                                                                       == vlSelf->TOP__DOT__idu__DOT___GEN_0))
                                                                    ? 0xbU
                                                                    : 
                                                                   ((0x233U 
                                                                     == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                     ? 5U
                                                                     : 
                                                                    ((0x2b3U 
                                                                      == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                      ? 7U
                                                                      : 
                                                                     ((0x82b3U 
                                                                       == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                       ? 8U
                                                                       : 
                                                                      ((0x333U 
                                                                        == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                        ? 4U
                                                                        : 
                                                                       ((0x3b3U 
                                                                         == vlSelf->TOP__DOT__idu__DOT___GEN_0)
                                                                         ? 3U
                                                                         : 
                                                                        ((0x100073U 
                                                                          == vlSelf->TOP__DOT___sram_io_resIFU)
                                                                          ? 1U
                                                                          : 
                                                                         ((0x73U 
                                                                           == vlSelf->TOP__DOT___sram_io_resIFU)
                                                                           ? 0xfU
                                                                           : 
                                                                          ((0x173U 
                                                                            == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                                            ? 0xdU
                                                                            : 
                                                                           (0xeU 
                                                                            | (0xf3U 
                                                                               != (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)))))))))))))))))))))))))))))));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_hcd9142c5__0 
        = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h86568975__0) 
           | (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_he0211b27__0));
    vlSelf->io_bundleControl_isBranch = ((~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_11)) 
                                         & (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h5eaebdb1__0));
    vlSelf->io_bundleControl_isJAL = ((0x37U != (0x7fU 
                                                 & vlSelf->TOP__DOT___sram_io_resIFU)) 
                                      & ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h87db9210__0) 
                                         | ((0x67U 
                                             != (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                            & (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h5eaebdb1__0))));
    vlSelf->TOP__DOT__idu__DOT___GEN_12 = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h86568975__0) 
                                           | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7));
    vlSelf->io_bundleControl_writeEnable = ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_11) 
                                            | ((~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)) 
                                               & ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5) 
                                                  | ((~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_3)) 
                                                     & ((0x13U 
                                                         == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                        | ((0x113U 
                                                            == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                           | ((0x193U 
                                                               == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                              | ((0x213U 
                                                                  == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                 | ((0x313U 
                                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                    | ((0x393U 
                                                                        == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                       | ((0x93U 
                                                                           == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                          | ((0x293U 
                                                                              == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                             | ((0x8293U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                                | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_2))))))))))))));
    vlSelf->TOP__DOT__idu__DOT__casez_tmp = (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)
                                               ? 0U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->TOP__DOT___sram_io_resIFU))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_3)
                                                       ? 0U
                                                       : 
                                                      ((((((((((0x13U 
                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                               | (0x113U 
                                                                  == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                              | (0x193U 
                                                                 == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                             | (0x213U 
                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                            | (0x313U 
                                                               == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                           | (0x393U 
                                                              == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                          | (0x93U 
                                                             == vlSelf->TOP__DOT__idu__DOT___GEN_0)) 
                                                         | (0x293U 
                                                            == vlSelf->TOP__DOT__idu__DOT___GEN_0)) 
                                                        | (0x8293U 
                                                           == vlSelf->TOP__DOT__idu__DOT___GEN_0))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_2)
                                                         ? 4U
                                                         : 
                                                        ((1U 
                                                          & (((0x100073U 
                                                               == vlSelf->TOP__DOT___sram_io_resIFU) 
                                                              | (0x73U 
                                                                 == vlSelf->TOP__DOT___sram_io_resIFU)) 
                                                             | (~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_1))))
                                                          ? 4U
                                                          : 0U)))))))))
                                              ? (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TOP__DOT___sram_io_resIFU))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_3)
                                                        ? 2U
                                                        : 
                                                       ((((((((((0x13U 
                                                                 == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                | (0x113U 
                                                                   == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                               | (0x193U 
                                                                  == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                              | (0x213U 
                                                                 == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                             | (0x313U 
                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                            | (0x393U 
                                                               == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                           | (0x93U 
                                                              == vlSelf->TOP__DOT__idu__DOT___GEN_0)) 
                                                          | (0x293U 
                                                             == vlSelf->TOP__DOT__idu__DOT___GEN_0)) 
                                                         | (0x8293U 
                                                            == vlSelf->TOP__DOT__idu__DOT___GEN_0))
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_2)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (((0x100073U 
                                                                == vlSelf->TOP__DOT___sram_io_resIFU) 
                                                               | (0x73U 
                                                                  == vlSelf->TOP__DOT___sram_io_resIFU)) 
                                                              | (~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_1))))
                                                           ? 2U
                                                           : 0U)))))))))
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TOP__DOT___sram_io_resIFU))
                                                     ? 1U
                                                     : 
                                                    ((0x67U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)
                                                       ? 1U
                                                       : 0U))))
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
                                              : (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TOP__DOT___sram_io_resIFU))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_3)
                                                        ? 2U
                                                        : 
                                                       ((((((((((0x13U 
                                                                 == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                | (0x113U 
                                                                   == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                               | (0x193U 
                                                                  == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                              | (0x213U 
                                                                 == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                             | (0x313U 
                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                            | (0x393U 
                                                               == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))) 
                                                           | (0x93U 
                                                              == vlSelf->TOP__DOT__idu__DOT___GEN_0)) 
                                                          | (0x293U 
                                                             == vlSelf->TOP__DOT__idu__DOT___GEN_0)) 
                                                         | (0x8293U 
                                                            == vlSelf->TOP__DOT__idu__DOT___GEN_0))
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_2)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (((0x100073U 
                                                                == vlSelf->TOP__DOT___sram_io_resIFU) 
                                                               | (0x73U 
                                                                  == vlSelf->TOP__DOT___sram_io_resIFU)) 
                                                              | (~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_1))))
                                                           ? 2U
                                                           : 0U)))))))))
                                                  ? 
                                                 (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TOP__DOT___sram_io_resIFU))
                                                     ? 1U
                                                     : 
                                                    ((0x67U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)
                                                       ? 1U
                                                       : 0U))))
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
                                                 (((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_8)
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TOP__DOT___sram_io_resIFU))
                                                     ? 1U
                                                     : 
                                                    ((0x67U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_7)
                                                       ? 1U
                                                       : 0U))))
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
    vlSelf->io_bundleControl_isUnsigned = ((~ (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_hcd9142c5__0)) 
                                           & ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_6) 
                                              | ((~ (IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_h98976784__0)) 
                                                 & ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_4) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_3) 
                                                         | ((0x13U 
                                                             == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                            | (0x113U 
                                                               == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))))) 
                                                       & ((0x193U 
                                                           == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                          | ((~ 
                                                              ((0x213U 
                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                               | ((0x313U 
                                                                   == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                  | ((0x393U 
                                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                     | ((0x93U 
                                                                         == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                        | ((0x293U 
                                                                            == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                           | ((0x8293U 
                                                                               == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                              | ((0x33U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                                | ((0xb3U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                                | (0x133U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0))))))))))) 
                                                             & (0x1b3U 
                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0))))))));
    vlSelf->TOP__DOT__idu__DOT____VdfgTmp_hc285b89a__0 
        = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_hcd9142c5__0) 
           | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_6));
    vlSelf->TOP__DOT__ifu__DOT___GEN = ((IData)(vlSelf->io_bundleControl_isJump) 
                                        | ((IData)(vlSelf->io_bundleControl_isBranch) 
                                           & (IData)(vlSelf->TOP__DOT__ifu__DOT__resBranch)));
    vlSelf->TOP__DOT__exu__DOT__operand1 = ((IData)(vlSelf->io_bundleControl_isJAL)
                                             ? vlSelf->TOP__DOT__ifu__DOT__pcReg
                                             : vlSelf->io_src1);
    vlSelf->io_bundleControl_isLoad = ((~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_12)) 
                                       & (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5));
    vlSelf->io_bundleControl_lsuType = ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_12)
                                         ? 0xfU : (
                                                   (3U 
                                                    == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x83U 
                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x103U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                      ? 4U
                                                      : 
                                                     ((0x203U 
                                                       == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                       ? 1U
                                                       : 
                                                      ((0x283U 
                                                        == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                        ? 2U
                                                        : 
                                                       ((0x23U 
                                                         == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                         ? 1U
                                                         : 
                                                        ((0xa3U 
                                                          == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                          ? 2U
                                                          : 
                                                         ((0x123U 
                                                           == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                           ? 4U
                                                           : 0xfU)))))))));
    vlSelf->io_writeEnable = vlSelf->io_bundleControl_writeEnable;
    vlSelf->TOP__DOT__wbu__DOT___GEN = ((2U == (IData)(vlSelf->TOP__DOT__lsu__DOT__state)) 
                                        & ((IData)(vlSelf->io_bundleControl_writeEnable) 
                                           & (0U != (IData)(vlSelf->io_rd))));
    vlSelf->io_imm = vlSelf->TOP__DOT__idu__DOT__casez_tmp;
    vlSelf->TOP__DOT__wbu__DOT___csrs_ext_R0_data = 
        vlSelf->TOP__DOT__wbu__DOT__csrs_ext__DOT__Memory
        [(0x3ffU & vlSelf->TOP__DOT__idu__DOT__casez_tmp)];
    vlSelf->io_resBranch = ((1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state)) 
                            & ((~ ((0U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                   | ((1U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                      | ((2U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                         | ((3U == (IData)(vlSelf->io_bundleControl_aluType)) 
                                            | ((4U 
                                                == (IData)(vlSelf->io_bundleControl_aluType)) 
                                               | (5U 
                                                  == (IData)(vlSelf->io_bundleControl_aluType)))))))) 
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
                                           : ((0xcU 
                                               == (IData)(vlSelf->io_bundleControl_aluType)) 
                                              & ((IData)(vlSelf->io_bundleControl_isUnsigned)
                                                  ? 
                                                 (vlSelf->io_src1 
                                                  >= vlSelf->io_src2)
                                                  : 
                                                 VL_GTES_III(32, vlSelf->io_src1, vlSelf->io_src2))))))));
    vlSelf->io_bundleControl_isStore = ((~ ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_hc285b89a__0) 
                                            | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_5))) 
                                        & (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_3));
    vlSelf->io_bundleControl_isALUSrc = ((IData)(vlSelf->TOP__DOT__idu__DOT____VdfgTmp_hc285b89a__0) 
                                         | ((3U == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                            | ((0x83U 
                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                               | ((0x103U 
                                                   == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                  | ((0x203U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                     | ((0x283U 
                                                         == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                        | ((0x23U 
                                                            == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                           | ((0xa3U 
                                                               == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                              | ((0x123U 
                                                                  == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                 | ((0x13U 
                                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                    | ((0x113U 
                                                                        == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                       | ((0x193U 
                                                                           == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                          | ((0x213U 
                                                                              == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                             | ((0x313U 
                                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                                | ((0x393U 
                                                                                == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN)) 
                                                                                | ((0x93U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                                | ((0x293U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                                | (0x8293U 
                                                                                == vlSelf->TOP__DOT__idu__DOT___GEN_0))))))))))))))))));
    vlSelf->TOP__DOT__wbu__DOT__dataWrite = (((~ (IData)(vlSelf->io_bundleControl_isUnsigned)) 
                                              & (IData)(vlSelf->io_bundleControl_isLoad))
                                              ? ((1U 
                                                  == (IData)(vlSelf->io_bundleControl_lsuType))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->TOP__DOT___sram_io_resLSU 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->TOP__DOT___sram_io_resLSU))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->io_bundleControl_lsuType))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->TOP__DOT___sram_io_resLSU 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->TOP__DOT___sram_io_resLSU))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_bundleControl_lsuType))
                                                    ? vlSelf->TOP__DOT___sram_io_resLSU
                                                    : 0U)))
                                              : vlSelf->TOP__DOT___sram_io_resLSU);
    vlSelf->TOP__DOT___idu_io_isEbreak = ((~ ((IData)(vlSelf->io_bundleControl_isALUSrc) 
                                              | (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_2))) 
                                          & (0x100073U 
                                             == vlSelf->TOP__DOT___sram_io_resIFU));
    vlSelf->TOP__DOT__exu__DOT__operand2 = ((IData)(vlSelf->io_bundleControl_isALUSrc)
                                             ? vlSelf->TOP__DOT__idu__DOT__casez_tmp
                                             : vlSelf->io_src2);
    vlSelf->TOP__DOT__idu__DOT___GEN_13 = ((IData)(vlSelf->io_bundleControl_isALUSrc) 
                                           | ((0x33U 
                                               == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                              | ((0x8033U 
                                                  == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                 | ((0xb3U 
                                                     == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                    | ((0x133U 
                                                        == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                       | ((0x1b3U 
                                                           == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                          | ((0x233U 
                                                              == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                             | ((0x2b3U 
                                                                 == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                | ((0x82b3U 
                                                                    == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                   | ((0x333U 
                                                                       == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                      | ((0x3b3U 
                                                                          == vlSelf->TOP__DOT__idu__DOT___GEN_0) 
                                                                         | (0x100073U 
                                                                            == vlSelf->TOP__DOT___sram_io_resIFU))))))))))));
    vlSelf->TOP__DOT__exu__DOT___GEN_0 = (vlSelf->TOP__DOT__exu__DOT__operand1 
                                          + vlSelf->TOP__DOT__exu__DOT__operand2);
    vlSelf->io_bundleControl_isContext = ((~ (IData)(vlSelf->TOP__DOT__idu__DOT___GEN_13)) 
                                          & ((0x73U 
                                              == vlSelf->TOP__DOT___sram_io_resIFU) 
                                             | ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_1) 
                                                | (0x30200073U 
                                                   == vlSelf->TOP__DOT___sram_io_resIFU))));
    vlSelf->io_bundleControl_csrType = ((IData)(vlSelf->TOP__DOT__idu__DOT___GEN_13)
                                         ? 0xfU : (
                                                   (0x73U 
                                                    == vlSelf->TOP__DOT___sram_io_resIFU)
                                                    ? 2U
                                                    : 
                                                   ((0x173U 
                                                     == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((0xf3U 
                                                      == (IData)(vlSelf->TOP__DOT__idu__DOT___GEN))
                                                      ? 1U
                                                      : 
                                                     ((0x30200073U 
                                                       == vlSelf->TOP__DOT___sram_io_resIFU)
                                                       ? 3U
                                                       : 0xfU)))));
    vlSelf->TOP__DOT__exu__DOT__casez_tmp = ((8U & (IData)(vlSelf->io_bundleControl_aluType))
                                              ? ((4U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? 0U
                                                    : vlSelf->TOP__DOT__exu__DOT__operand1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    | vlSelf->TOP__DOT__wbu__DOT___csrs_ext_R0_data)
                                                    : vlSelf->TOP__DOT__exu__DOT___GEN_0))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? 
                                                   ((IData)(vlSelf->io_bundleControl_isBranch)
                                                     ? vlSelf->TOP__DOT__exu__DOT___GEN_0
                                                     : 
                                                    ((IData)(vlSelf->io_bundleControl_isUnsigned)
                                                      ? 
                                                     (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                      < vlSelf->TOP__DOT__exu__DOT__operand2)
                                                      : 
                                                     VL_LTS_III(32, vlSelf->TOP__DOT__exu__DOT__operand1, vlSelf->TOP__DOT__exu__DOT__operand2)))
                                                    : vlSelf->TOP__DOT__exu__DOT___GEN_0)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? vlSelf->TOP__DOT__exu__DOT___GEN_0
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->TOP__DOT__exu__DOT__operand1, 
                                                                  (0x1fU 
                                                                   & vlSelf->TOP__DOT__exu__DOT__operand2)))))
                                              : ((4U 
                                                  & (IData)(vlSelf->io_bundleControl_aluType))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->TOP__DOT__exu__DOT__operand2))
                                                    : 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->TOP__DOT__exu__DOT__operand2)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    ^ vlSelf->TOP__DOT__exu__DOT__operand2)
                                                    : 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    | vlSelf->TOP__DOT__exu__DOT__operand2)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->io_bundleControl_aluType))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    & vlSelf->TOP__DOT__exu__DOT__operand2)
                                                    : 
                                                   (vlSelf->TOP__DOT__exu__DOT__operand1 
                                                    - vlSelf->TOP__DOT__exu__DOT__operand2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_bundleControl_aluType))
                                                    ? vlSelf->TOP__DOT__exu__DOT___GEN_0
                                                    : vlSelf->TOP__DOT__exu__DOT__operand2))));
    vlSelf->TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en 
        = ((IData)(vlSelf->io_bundleControl_isContext) 
           & (0U == (IData)(vlSelf->io_bundleControl_csrType)));
    vlSelf->TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en 
        = ((IData)(vlSelf->io_bundleControl_isContext) 
           & ((0U != (IData)(vlSelf->io_bundleControl_csrType)) 
              & (1U == (IData)(vlSelf->io_bundleControl_csrType))));
    vlSelf->TOP__DOT__wbu__DOT___GEN_3 = ((0U == (IData)(vlSelf->io_bundleControl_csrType)) 
                                          | (1U == (IData)(vlSelf->io_bundleControl_csrType)));
    vlSelf->io_resEX = ((1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state))
                         ? vlSelf->TOP__DOT__exu__DOT__casez_tmp
                         : 0U);
    vlSelf->TOP__DOT__wbu__DOT___GEN_4 = ((IData)(vlSelf->io_bundleControl_isContext) 
                                          & ((~ (IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_3)) 
                                             & (2U 
                                                == (IData)(vlSelf->io_bundleControl_csrType))));
    vlSelf->TOP__DOT__wbu__DOT___GEN_6 = ((IData)(vlSelf->io_bundleControl_isContext) 
                                          & ((~ ((IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_3) 
                                                 | (2U 
                                                    == (IData)(vlSelf->io_bundleControl_csrType)))) 
                                             & (3U 
                                                == (IData)(vlSelf->io_bundleControl_csrType))));
    vlSelf->TOP__DOT___arbiter_io_out_ar_bits_addr 
        = ((0U == (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec))
            ? vlSelf->TOP__DOT__ifu__DOT__pcReg : (
                                                   (1U 
                                                    == (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec))
                                                    ? vlSelf->io_resEX
                                                    : 0U));
}
