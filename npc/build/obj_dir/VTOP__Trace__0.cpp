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
        bufp->chgIData(oldp+0,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
    }
    bufp->chgBit(oldp+33,(vlSelf->clock));
    bufp->chgBit(oldp+34,(vlSelf->reset));
    bufp->chgIData(oldp+35,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+36,(vlSelf->io_res),32);
    bufp->chgIData(oldp+37,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+38,(vlSelf->io_bundleControl_isALUSrc));
    bufp->chgBit(oldp+39,(vlSelf->io_bundleControl_isJump));
    bufp->chgBit(oldp+40,(vlSelf->io_bundleControl_isBranch));
    bufp->chgBit(oldp+41,(vlSelf->io_bundleControl_isJAL));
    bufp->chgBit(oldp+42,(vlSelf->io_bundleControl_isLoad));
    bufp->chgBit(oldp+43,(vlSelf->io_bundleControl_isStore));
    bufp->chgBit(oldp+44,(vlSelf->io_bundleControl_isSigned));
    bufp->chgCData(oldp+45,(vlSelf->io_bundleControl_lsType),2);
    bufp->chgCData(oldp+46,(vlSelf->io_bundleControl_exeType),4);
    bufp->chgIData(oldp+47,(vlSelf->io_resEX),32);
    bufp->chgIData(oldp+48,(vlSelf->io_src1),32);
    bufp->chgIData(oldp+49,(vlSelf->io_src2),32);
    bufp->chgCData(oldp+50,(vlSelf->io_rs1),5);
    bufp->chgCData(oldp+51,(vlSelf->io_rs2),5);
    bufp->chgCData(oldp+52,(vlSelf->io_rd),5);
    bufp->chgIData(oldp+53,(vlSelf->io_imm),32);
    bufp->chgBit(oldp+54,(vlSelf->io_resBranch));
    bufp->chgBit(oldp+55,(vlSelf->io_writeEnable));
    bufp->chgIData(oldp+56,(vlSelf->io_test),32);
    bufp->chgCData(oldp+57,(vlSelf->io_bundleControl_exeType),5);
    bufp->chgIData(oldp+58,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                            [vlSelf->io_rs1]),32);
    bufp->chgIData(oldp+59,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory
                            [vlSelf->io_rs2]),32);
    bufp->chgBit(oldp+60,(((IData)(vlSelf->io_writeEnable) 
                           & (0U != (IData)(vlSelf->io_rd)))));
    bufp->chgBit(oldp+61,(vlSelf->TOP__DOT__id__DOT__isEbreak));
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
