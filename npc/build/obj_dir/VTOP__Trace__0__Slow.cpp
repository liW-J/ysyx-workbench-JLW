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
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_pc", false,-1, 31,0);
    tracep->declBus(c+4,"io_inst", false,-1, 31,0);
    tracep->declBit(c+5,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+6,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+7,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+8,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+9,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+10,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+11,"io_bundleControl_isSigned", false,-1);
    tracep->declBit(c+12,"io_bundleControl_writeEnable", false,-1);
    tracep->declBus(c+13,"io_bundleControl_lsType", false,-1, 1,0);
    tracep->declBus(c+14,"io_bundleControl_exeType", false,-1, 3,0);
    tracep->declBus(c+15,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+16,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+17,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+18,"io_imm", false,-1, 31,0);
    tracep->declBit(c+19,"io_resBranch", false,-1);
    tracep->declBus(c+20,"io_resLoad", false,-1, 31,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_pc", false,-1, 31,0);
    tracep->declBus(c+4,"io_inst", false,-1, 31,0);
    tracep->declBit(c+5,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+6,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+7,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+8,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+9,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+10,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+11,"io_bundleControl_isSigned", false,-1);
    tracep->declBit(c+12,"io_bundleControl_writeEnable", false,-1);
    tracep->declBus(c+13,"io_bundleControl_lsType", false,-1, 1,0);
    tracep->declBus(c+14,"io_bundleControl_exeType", false,-1, 3,0);
    tracep->declBus(c+15,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+16,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+17,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+18,"io_imm", false,-1, 31,0);
    tracep->declBit(c+19,"io_resBranch", false,-1);
    tracep->declBus(c+15,"io_resLoad", false,-1, 31,0);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+5,"io_bundleControlIn_isALUSrc", false,-1);
    tracep->declBus(c+14,"io_bundleControlIn_exeType", false,-1, 3,0);
    tracep->declBit(c+5,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBus(c+21,"io_bundleEXControl_exeType", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataRam ");
    tracep->declBus(c+15,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+15,"io_res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex ");
    tracep->declBit(c+5,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBus(c+21,"io_bundleEXControl_exeType", false,-1, 4,0);
    tracep->declBus(c+24,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+24,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+18,"io_imm", false,-1, 31,0);
    tracep->declBus(c+15,"io_res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gprFile ");
    tracep->declBus(c+24,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+24,"io_dataRead2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+4,"io_inst", false,-1, 31,0);
    tracep->declBit(c+5,"io_BundleControl_isALUSrc", false,-1);
    tracep->declBus(c+14,"io_BundleControl_exeType", false,-1, 3,0);
    tracep->declBus(c+18,"io_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instRom ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBus(c+3,"io_addr", false,-1, 31,0);
    tracep->declBus(c+4,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("instMem_ext ");
    tracep->declBus(c+22,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+25,"R0_en", false,-1);
    tracep->declBit(c+1,"R0_clk", false,-1);
    tracep->declBus(c+26,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+25,"W0_en", false,-1);
    tracep->declBit(c+1,"W0_clk", false,-1);
    tracep->declBus(c+27,"W0_data", false,-1, 31,0);
    tracep->declBus(c+28,"W1_addr", false,-1, 9,0);
    tracep->declBit(c+25,"W1_en", false,-1);
    tracep->declBit(c+1,"W1_clk", false,-1);
    tracep->declBus(c+29,"W1_data", false,-1, 31,0);
    tracep->declBus(c+4,"R0_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_pc", false,-1, 31,0);
    tracep->declBus(c+23,"pcReg", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullIData(oldp+3,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+4,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+5,(vlSelf->io_bundleControl_isALUSrc));
    bufp->fullBit(oldp+6,(vlSelf->io_bundleControl_isJump));
    bufp->fullBit(oldp+7,(vlSelf->io_bundleControl_isBranch));
    bufp->fullBit(oldp+8,(vlSelf->io_bundleControl_isJAL));
    bufp->fullBit(oldp+9,(vlSelf->io_bundleControl_isLoad));
    bufp->fullBit(oldp+10,(vlSelf->io_bundleControl_isStore));
    bufp->fullBit(oldp+11,(vlSelf->io_bundleControl_isSigned));
    bufp->fullBit(oldp+12,(vlSelf->io_bundleControl_writeEnable));
    bufp->fullCData(oldp+13,(vlSelf->io_bundleControl_lsType),2);
    bufp->fullCData(oldp+14,(vlSelf->io_bundleControl_exeType),4);
    bufp->fullIData(oldp+15,(vlSelf->io_resEX),32);
    bufp->fullIData(oldp+16,(vlSelf->io_rs1),32);
    bufp->fullIData(oldp+17,(vlSelf->io_rs2),32);
    bufp->fullIData(oldp+18,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+19,(vlSelf->io_resBranch));
    bufp->fullIData(oldp+20,(vlSelf->io_resLoad),32);
    bufp->fullCData(oldp+21,(vlSelf->io_bundleControl_exeType),5);
    bufp->fullSData(oldp+22,((0x3ffU & (vlSelf->TOP__DOT__pcReg__DOT__pcReg 
                                        >> 2U))),10);
    bufp->fullIData(oldp+23,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
    bufp->fullIData(oldp+24,(0U),32);
    bufp->fullBit(oldp+25,(1U));
    bufp->fullSData(oldp+26,(1U),10);
    bufp->fullIData(oldp+27,(0xfe0f8f93U),32);
    bufp->fullSData(oldp+28,(2U),10);
    bufp->fullIData(oldp+29,(0x100073U),32);
}
