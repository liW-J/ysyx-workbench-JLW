// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,((0x3ffU & vlSelf->TOP__DOT__id__DOT__casez_tmp)),10);
        bufp->chgBit(oldp+1,(vlSelf->TOP__DOT__gprFile__DOT___GEN_4));
        bufp->chgBit(oldp+2,(vlSelf->TOP__DOT__gprFile__DOT___GEN_6));
        bufp->chgBit(oldp+3,(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W0_en));
        bufp->chgBit(oldp+4,(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W1_en));
        bufp->chgIData(oldp+5,(vlSelf->TOP__DOT___instSRAM_inst),32);
        bufp->chgBit(oldp+6,(vlSelf->TOP__DOT___id_io_isEbreak));
        bufp->chgIData(oldp+7,(vlSelf->TOP__DOT__id__DOT__casez_tmp),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+8,(((IData)(4U) + vlSelf->TOP__DOT__pcReg__DOT__pcReg)),32);
        bufp->chgIData(oldp+9,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+10,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+11,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+12,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+13,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+14,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+15,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+16,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+17,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+18,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+19,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+20,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+21,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+22,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+23,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+24,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+25,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+26,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+27,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+28,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+29,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+30,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+31,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+32,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+33,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+34,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+35,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+36,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+37,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+38,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+39,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+40,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[31]),32);
        bufp->chgIData(oldp+41,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+42,(vlSelf->TOP__DOT___dataSRAM_res),32);
        bufp->chgBit(oldp+43,(vlSelf->TOP__DOT__dataSRAM__DOT__load_flag));
        bufp->chgBit(oldp+44,(vlSelf->TOP__DOT__dataSRAM__DOT__store_flag));
    }
    bufp->chgBit(oldp+45,(vlSelf->clock));
    bufp->chgBit(oldp+46,(vlSelf->reset));
    bufp->chgIData(oldp+47,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+48,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+49,(vlSelf->io_bundleControl_isALUSrc));
    bufp->chgBit(oldp+50,(vlSelf->io_bundleControl_isJump));
    bufp->chgBit(oldp+51,(vlSelf->io_bundleControl_isBranch));
    bufp->chgBit(oldp+52,(vlSelf->io_bundleControl_isJAL));
    bufp->chgBit(oldp+53,(vlSelf->io_bundleControl_writeEnable));
    bufp->chgBit(oldp+54,(vlSelf->io_bundleControl_isLoad));
    bufp->chgBit(oldp+55,(vlSelf->io_bundleControl_isStore));
    bufp->chgBit(oldp+56,(vlSelf->io_bundleControl_isUnsigned));
    bufp->chgBit(oldp+57,(vlSelf->io_bundleControl_isContext));
    bufp->chgCData(oldp+58,(vlSelf->io_bundleControl_csrType),4);
    bufp->chgCData(oldp+59,(vlSelf->io_bundleControl_lsuType),4);
    bufp->chgCData(oldp+60,(vlSelf->io_bundleControl_aluType),4);
    bufp->chgIData(oldp+61,(vlSelf->io_resEX),32);
    bufp->chgIData(oldp+62,(vlSelf->io_src1),32);
    bufp->chgIData(oldp+63,(vlSelf->io_src2),32);
    bufp->chgCData(oldp+64,(vlSelf->io_rs1),5);
    bufp->chgCData(oldp+65,(vlSelf->io_rs2),5);
    bufp->chgCData(oldp+66,(vlSelf->io_rd),5);
    bufp->chgIData(oldp+67,(vlSelf->io_imm),32);
    bufp->chgBit(oldp+68,(vlSelf->io_resBranch));
    bufp->chgBit(oldp+69,(vlSelf->io_writeEnable));
    bufp->chgIData(oldp+70,(vlSelf->io_bundleControl_lsuType),32);
    bufp->chgIData(oldp+71,(vlSelf->TOP__DOT__gprFile__DOT___csrs_ext_R0_data),32);
    bufp->chgIData(oldp+72,(vlSelf->TOP__DOT__ex__DOT__casez_tmp),32);
    bufp->chgIData(oldp+73,(vlSelf->TOP__DOT__ex__DOT__operand1),32);
    bufp->chgIData(oldp+74,(vlSelf->TOP__DOT__ex__DOT__operand2),32);
    bufp->chgIData(oldp+75,(((1U & ((~ (IData)(vlSelf->io_bundleControl_isContext)) 
                                    | (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_3)))
                              ? 0U : ((2U == (IData)(vlSelf->io_bundleControl_csrType))
                                       ? ((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_4)
                                           ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                                          [0x305U] : 0U)
                                       : ((3U == (IData)(vlSelf->io_bundleControl_csrType))
                                           ? ((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_6)
                                               ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                                              [0x341U]
                                               : 0U)
                                           : 0U)))),32);
    bufp->chgIData(oldp+76,(vlSelf->TOP__DOT__gprFile__DOT__dataWrite),32);
    bufp->chgIData(oldp+77,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_4)
                              ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                             [0x305U] : 0U)),32);
    bufp->chgIData(oldp+78,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_6)
                              ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                             [0x341U] : 0U)),32);
    bufp->chgBit(oldp+79,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN) 
                           & (IData)(vlSelf->io_bundleControl_isJump))));
    bufp->chgBit(oldp+80,(((~ (IData)(vlSelf->io_bundleControl_isJump)) 
                           & (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN))));
    bufp->chgBit(oldp+81,(((IData)(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W0_en) 
                           & (0U != (IData)(vlSelf->io_rd)))));
    bufp->chgBit(oldp+82,(((IData)(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W1_en) 
                           & (0U != (IData)(vlSelf->io_rd)))));
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
