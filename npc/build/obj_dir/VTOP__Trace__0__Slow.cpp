// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+37,"io_inst", false,-1, 31,0);
    tracep->declBus(c+38,"io_res", false,-1, 31,0);
    tracep->declBus(c+39,"io_pc", false,-1, 31,0);
    tracep->declBit(c+40,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+41,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+42,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+43,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+44,"io_bundleControl_writeEnable", false,-1);
    tracep->declBit(c+45,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+46,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+47,"io_bundleControl_isSigned", false,-1);
    tracep->declBus(c+48,"io_bundleControl_lsType", false,-1, 3,0);
    tracep->declBus(c+49,"io_bundleControl_exeType", false,-1, 3,0);
    tracep->declBus(c+50,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+51,"io_src1", false,-1, 31,0);
    tracep->declBus(c+52,"io_src2", false,-1, 31,0);
    tracep->declBus(c+53,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+54,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+55,"io_rd", false,-1, 4,0);
    tracep->declBus(c+56,"io_imm", false,-1, 31,0);
    tracep->declBit(c+57,"io_resBranch", false,-1);
    tracep->declBit(c+58,"io_writeEnable", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+37,"io_inst", false,-1, 31,0);
    tracep->declBus(c+38,"io_res", false,-1, 31,0);
    tracep->declBus(c+39,"io_pc", false,-1, 31,0);
    tracep->declBit(c+40,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+41,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+42,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+43,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+44,"io_bundleControl_writeEnable", false,-1);
    tracep->declBit(c+45,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+46,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+47,"io_bundleControl_isSigned", false,-1);
    tracep->declBus(c+48,"io_bundleControl_lsType", false,-1, 3,0);
    tracep->declBus(c+49,"io_bundleControl_exeType", false,-1, 3,0);
    tracep->declBus(c+50,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+51,"io_src1", false,-1, 31,0);
    tracep->declBus(c+52,"io_src2", false,-1, 31,0);
    tracep->declBus(c+53,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+54,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+55,"io_rd", false,-1, 4,0);
    tracep->declBus(c+56,"io_imm", false,-1, 31,0);
    tracep->declBit(c+57,"io_resBranch", false,-1);
    tracep->declBit(c+44,"io_writeEnable", false,-1);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+40,"io_bundleControlIn_isALUSrc", false,-1);
    tracep->declBit(c+41,"io_bundleControlIn_isJump", false,-1);
    tracep->declBit(c+43,"io_bundleControlIn_isJAL", false,-1);
    tracep->declBit(c+44,"io_bundleControlIn_writeEnable", false,-1);
    tracep->declBit(c+40,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+43,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+41,"io_bundleControlOut_isJump", false,-1);
    tracep->declBit(c+44,"io_bundleControlOut_writeEnable", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+40,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+43,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBus(c+51,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+52,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+56,"io_imm", false,-1, 31,0);
    tracep->declBus(c+39,"io_pc", false,-1, 31,0);
    tracep->declBus(c+50,"io_res", false,-1, 31,0);
    tracep->declBus(c+51,"io_src1", false,-1, 31,0);
    tracep->declBus(c+52,"io_src2", false,-1, 31,0);
    tracep->declBus(c+50,"res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("getPC ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+39,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gprFile ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+44,"io_writeEnable", false,-1);
    tracep->declBit(c+41,"io_isJump", false,-1);
    tracep->declBus(c+39,"io_pc", false,-1, 31,0);
    tracep->declBus(c+50,"io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+53,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+54,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+55,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+51,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+52,"io_dataRead2", false,-1, 31,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+53,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+63,"R0_en", false,-1);
    tracep->declBit(c+35,"R0_clk", false,-1);
    tracep->declBus(c+54,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+63,"R1_en", false,-1);
    tracep->declBit(c+35,"R1_clk", false,-1);
    tracep->declBus(c+55,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+59,"W0_en", false,-1);
    tracep->declBit(c+35,"W0_clk", false,-1);
    tracep->declBus(c+1,"W0_data", false,-1, 31,0);
    tracep->declBus(c+55,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+60,"W1_en", false,-1);
    tracep->declBit(c+35,"W1_clk", false,-1);
    tracep->declBus(c+50,"W1_data", false,-1, 31,0);
    tracep->declBus(c+51,"R0_data", false,-1, 31,0);
    tracep->declBus(c+52,"R1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id ");
    tracep->declBus(c+37,"io_inst", false,-1, 31,0);
    tracep->declBit(c+40,"io_BundleControl_isALUSrc", false,-1);
    tracep->declBit(c+41,"io_BundleControl_isJump", false,-1);
    tracep->declBit(c+43,"io_BundleControl_isJAL", false,-1);
    tracep->declBit(c+44,"io_BundleControl_writeEnable", false,-1);
    tracep->declBit(c+46,"io_BundleControl_isStore", false,-1);
    tracep->declBus(c+53,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+54,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+55,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+56,"io_imm", false,-1, 31,0);
    tracep->declBit(c+61,"io_isEbreak", false,-1);
    tracep->declBus(c+62,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+41,"io_isJump", false,-1);
    tracep->declBus(c+38,"io_addrTarget", false,-1, 31,0);
    tracep->declBus(c+39,"io_pc", false,-1, 31,0);
    tracep->declBus(c+34,"pcReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+61,"isEbreak", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    VTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((IData)(4U) + vlSelf->TOP__DOT__pcReg__DOT__pcReg)),32);
    bufp->fullIData(oldp+2,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullIData(oldp+34,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
    bufp->fullBit(oldp+35,(vlSelf->clock));
    bufp->fullBit(oldp+36,(vlSelf->reset));
    bufp->fullIData(oldp+37,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+38,(vlSelf->io_res),32);
    bufp->fullIData(oldp+39,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+40,(vlSelf->io_bundleControl_isALUSrc));
    bufp->fullBit(oldp+41,(vlSelf->io_bundleControl_isJump));
    bufp->fullBit(oldp+42,(vlSelf->io_bundleControl_isBranch));
    bufp->fullBit(oldp+43,(vlSelf->io_bundleControl_isJAL));
    bufp->fullBit(oldp+44,(vlSelf->io_bundleControl_writeEnable));
    bufp->fullBit(oldp+45,(vlSelf->io_bundleControl_isLoad));
    bufp->fullBit(oldp+46,(vlSelf->io_bundleControl_isStore));
    bufp->fullBit(oldp+47,(vlSelf->io_bundleControl_isSigned));
    bufp->fullCData(oldp+48,(vlSelf->io_bundleControl_lsType),4);
    bufp->fullCData(oldp+49,(vlSelf->io_bundleControl_exeType),4);
    bufp->fullIData(oldp+50,(vlSelf->io_resEX),32);
    bufp->fullIData(oldp+51,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+52,(vlSelf->io_src2),32);
    bufp->fullCData(oldp+53,(vlSelf->io_rs1),5);
    bufp->fullCData(oldp+54,(vlSelf->io_rs2),5);
    bufp->fullCData(oldp+55,(vlSelf->io_rd),5);
    bufp->fullIData(oldp+56,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+57,(vlSelf->io_resBranch));
    bufp->fullBit(oldp+58,(vlSelf->io_writeEnable));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN) 
                            & (IData)(vlSelf->io_bundleControl_isJump))));
    bufp->fullBit(oldp+60,(((~ (IData)(vlSelf->io_bundleControl_isJump)) 
                            & (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN))));
    bufp->fullBit(oldp+61,(vlSelf->TOP__DOT___id_io_isEbreak));
    bufp->fullIData(oldp+62,(vlSelf->TOP__DOT__id__DOT__casez_tmp),32);
    bufp->fullBit(oldp+63,(1U));
}
