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
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelf->TOP__DOT__pcReg__DOT__pcReg)),32);
        bufp->chgIData(oldp+1,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[31]),32);
        bufp->chgIData(oldp+33,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
    }
    bufp->chgBit(oldp+34,(vlSelf->clock));
    bufp->chgBit(oldp+35,(vlSelf->reset));
    bufp->chgIData(oldp+36,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+37,(vlSelf->io_res),32);
    bufp->chgIData(oldp+38,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+39,(vlSelf->io_bundleControl_isALUSrc));
    bufp->chgBit(oldp+40,(vlSelf->io_bundleControl_isJump));
    bufp->chgBit(oldp+41,(vlSelf->io_bundleControl_isBranch));
    bufp->chgBit(oldp+42,(vlSelf->io_bundleControl_isJAL));
    bufp->chgBit(oldp+43,(vlSelf->io_bundleControl_writeEnable));
    bufp->chgBit(oldp+44,(vlSelf->io_bundleControl_isLoad));
    bufp->chgBit(oldp+45,(vlSelf->io_bundleControl_isStore));
    bufp->chgBit(oldp+46,(vlSelf->io_bundleControl_isUnsigned));
    bufp->chgCData(oldp+47,(vlSelf->io_bundleControl_lsuType),4);
    bufp->chgCData(oldp+48,(vlSelf->io_bundleControl_aluType),4);
    bufp->chgIData(oldp+49,(vlSelf->io_resEX),32);
    bufp->chgIData(oldp+50,(vlSelf->io_src1),32);
    bufp->chgIData(oldp+51,(vlSelf->io_src2),32);
    bufp->chgCData(oldp+52,(vlSelf->io_rs1),5);
    bufp->chgCData(oldp+53,(vlSelf->io_rs2),5);
    bufp->chgCData(oldp+54,(vlSelf->io_rd),5);
    bufp->chgIData(oldp+55,(vlSelf->io_imm),32);
    bufp->chgBit(oldp+56,(vlSelf->io_resBranch));
    bufp->chgBit(oldp+57,(vlSelf->io_writeEnable));
    bufp->chgIData(oldp+58,(vlSelf->TOP__DOT__ex__DOT__casez_tmp),32);
    bufp->chgIData(oldp+59,(vlSelf->TOP__DOT__ex__DOT__operand1),32);
    bufp->chgIData(oldp+60,(vlSelf->TOP__DOT__ex__DOT__operand2),32);
    bufp->chgIData(oldp+61,(vlSelf->TOP__DOT___memRam_rdata),32);
    bufp->chgBit(oldp+62,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN) 
                           & (IData)(vlSelf->io_bundleControl_isJump))));
    bufp->chgBit(oldp+63,(((~ (IData)(vlSelf->io_bundleControl_isJump)) 
                           & (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN))));
    bufp->chgIData(oldp+64,((((~ (IData)(vlSelf->io_bundleControl_isUnsigned)) 
                              & (IData)(vlSelf->io_bundleControl_isLoad))
                              ? ((1U == (IData)(vlSelf->io_bundleControl_lsuType))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TOP__DOT___memRam_rdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->TOP__DOT___memRam_rdata))
                                  : ((2U == (IData)(vlSelf->io_bundleControl_lsuType))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->TOP__DOT___memRam_rdata 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->TOP__DOT___memRam_rdata))
                                      : ((4U == (IData)(vlSelf->io_bundleControl_lsuType))
                                          ? vlSelf->TOP__DOT___memRam_rdata
                                          : 0U))) : vlSelf->TOP__DOT___memRam_rdata)),32);
    bufp->chgBit(oldp+65,(vlSelf->TOP__DOT___id_io_isEbreak));
    bufp->chgIData(oldp+66,(vlSelf->TOP__DOT__id__DOT__casez_tmp),32);
    bufp->chgIData(oldp+67,(vlSelf->io_bundleControl_lsuType),32);
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
}
