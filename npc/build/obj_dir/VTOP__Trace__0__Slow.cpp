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
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBus(c+51,"io_inst", false,-1, 31,0);
    tracep->declBus(c+52,"io_pc", false,-1, 31,0);
    tracep->declBit(c+53,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+54,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+55,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+56,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+57,"io_bundleControl_writeEnable", false,-1);
    tracep->declBit(c+58,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+59,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+60,"io_bundleControl_isUnsigned", false,-1);
    tracep->declBit(c+61,"io_bundleControl_isContext", false,-1);
    tracep->declBus(c+62,"io_bundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+63,"io_bundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+64,"io_bundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+65,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+66,"io_src1", false,-1, 31,0);
    tracep->declBus(c+67,"io_src2", false,-1, 31,0);
    tracep->declBus(c+68,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+69,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+70,"io_rd", false,-1, 4,0);
    tracep->declBus(c+71,"io_imm", false,-1, 31,0);
    tracep->declBit(c+72,"io_resBranch", false,-1);
    tracep->declBit(c+73,"io_writeEnable", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBus(c+51,"io_inst", false,-1, 31,0);
    tracep->declBus(c+52,"io_pc", false,-1, 31,0);
    tracep->declBit(c+53,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+54,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+55,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+56,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+57,"io_bundleControl_writeEnable", false,-1);
    tracep->declBit(c+58,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+59,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+60,"io_bundleControl_isUnsigned", false,-1);
    tracep->declBit(c+61,"io_bundleControl_isContext", false,-1);
    tracep->declBus(c+62,"io_bundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+63,"io_bundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+64,"io_bundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+65,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+66,"io_src1", false,-1, 31,0);
    tracep->declBus(c+67,"io_src2", false,-1, 31,0);
    tracep->declBus(c+68,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+69,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+70,"io_rd", false,-1, 4,0);
    tracep->declBus(c+71,"io_imm", false,-1, 31,0);
    tracep->declBit(c+72,"io_resBranch", false,-1);
    tracep->declBit(c+57,"io_writeEnable", false,-1);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+53,"io_bundleControlIn_isALUSrc", false,-1);
    tracep->declBit(c+54,"io_bundleControlIn_isJump", false,-1);
    tracep->declBit(c+55,"io_bundleControlIn_isBranch", false,-1);
    tracep->declBit(c+56,"io_bundleControlIn_isJAL", false,-1);
    tracep->declBit(c+57,"io_bundleControlIn_writeEnable", false,-1);
    tracep->declBit(c+58,"io_bundleControlIn_isLoad", false,-1);
    tracep->declBit(c+59,"io_bundleControlIn_isStore", false,-1);
    tracep->declBit(c+60,"io_bundleControlIn_isUnsigned", false,-1);
    tracep->declBit(c+61,"io_bundleControlIn_isContext", false,-1);
    tracep->declBus(c+62,"io_bundleControlIn_csrType", false,-1, 3,0);
    tracep->declBus(c+63,"io_bundleControlIn_lsuType", false,-1, 3,0);
    tracep->declBus(c+64,"io_bundleControlIn_aluType", false,-1, 3,0);
    tracep->declBit(c+53,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+56,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+55,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+60,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+64,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBit(c+54,"io_bundleControlOut_isJump", false,-1);
    tracep->declBit(c+55,"io_bundleControlOut_isBranch", false,-1);
    tracep->declBit(c+57,"io_bundleControlOut_writeEnable", false,-1);
    tracep->declBit(c+58,"io_bundleControlOut_isLoad", false,-1);
    tracep->declBit(c+59,"io_bundleControlOut_isStore", false,-1);
    tracep->declBit(c+60,"io_bundleControlOut_isUnsigned", false,-1);
    tracep->declBit(c+61,"io_bundleControlOut_isContext", false,-1);
    tracep->declBus(c+62,"io_bundleControlOut_csrType", false,-1, 3,0);
    tracep->declBus(c+63,"io_bundleControlOut_lsuType", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+53,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+56,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+55,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+60,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+64,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBus(c+66,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+67,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+74,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+71,"io_imm", false,-1, 31,0);
    tracep->declBus(c+52,"io_pc", false,-1, 31,0);
    tracep->declBit(c+72,"io_resBranch", false,-1);
    tracep->declBus(c+65,"io_res", false,-1, 31,0);
    tracep->declBus(c+66,"io_src1", false,-1, 31,0);
    tracep->declBus(c+67,"io_src2", false,-1, 31,0);
    tracep->declBus(c+75,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+76,"operand1", false,-1, 31,0);
    tracep->declBus(c+77,"operand2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("getPC ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBus(c+52,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gprFile ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+57,"io_writeEnable", false,-1);
    tracep->declBit(c+54,"io_isJump", false,-1);
    tracep->declBit(c+58,"io_isLoad", false,-1);
    tracep->declBit(c+60,"io_isUnsigned", false,-1);
    tracep->declBit(c+61,"io_isContext", false,-1);
    tracep->declBus(c+71,"io_imm", false,-1, 31,0);
    tracep->declBus(c+62,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+63,"io_lsuType", false,-1, 3,0);
    tracep->declBus(c+52,"io_pc", false,-1, 31,0);
    tracep->declBus(c+78,"io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+68,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+69,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+70,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+66,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+67,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+74,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+79,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+9,"snpc", false,-1, 31,0);
    tracep->declBus(c+80,"dataWrite", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+1,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+88,"R0_en", false,-1);
    tracep->declBit(c+49,"R0_clk", false,-1);
    tracep->declBus(c+89,"R1_addr", false,-1, 9,0);
    tracep->declBit(c+2,"R1_en", false,-1);
    tracep->declBit(c+49,"R1_clk", false,-1);
    tracep->declBus(c+90,"R2_addr", false,-1, 9,0);
    tracep->declBit(c+3,"R2_en", false,-1);
    tracep->declBit(c+49,"R2_clk", false,-1);
    tracep->declBus(c+1,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+4,"W0_en", false,-1);
    tracep->declBit(c+49,"W0_clk", false,-1);
    tracep->declBus(c+80,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1,"W1_addr", false,-1, 9,0);
    tracep->declBit(c+5,"W1_en", false,-1);
    tracep->declBit(c+49,"W1_clk", false,-1);
    tracep->declBus(c+80,"W1_data", false,-1, 31,0);
    tracep->declBus(c+90,"W2_addr", false,-1, 9,0);
    tracep->declBit(c+2,"W2_en", false,-1);
    tracep->declBit(c+49,"W2_clk", false,-1);
    tracep->declBus(c+9,"W2_data", false,-1, 31,0);
    tracep->declBus(c+91,"W3_addr", false,-1, 9,0);
    tracep->declBit(c+2,"W3_en", false,-1);
    tracep->declBit(c+49,"W3_clk", false,-1);
    tracep->declBus(c+92,"W3_data", false,-1, 31,0);
    tracep->declBus(c+93,"W4_addr", false,-1, 9,0);
    tracep->declBit(c+2,"W4_en", false,-1);
    tracep->declBit(c+49,"W4_clk", false,-1);
    tracep->declBus(c+94,"W4_data", false,-1, 31,0);
    tracep->declBus(c+93,"W5_addr", false,-1, 9,0);
    tracep->declBit(c+3,"W5_en", false,-1);
    tracep->declBit(c+49,"W5_clk", false,-1);
    tracep->declBus(c+94,"W5_data", false,-1, 31,0);
    tracep->declBus(c+74,"R0_data", false,-1, 31,0);
    tracep->declBus(c+81,"R1_data", false,-1, 31,0);
    tracep->declBus(c+82,"R2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+68,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+88,"R0_en", false,-1);
    tracep->declBit(c+49,"R0_clk", false,-1);
    tracep->declBus(c+69,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+88,"R1_en", false,-1);
    tracep->declBit(c+49,"R1_clk", false,-1);
    tracep->declBus(c+70,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+83,"W0_en", false,-1);
    tracep->declBit(c+49,"W0_clk", false,-1);
    tracep->declBus(c+9,"W0_data", false,-1, 31,0);
    tracep->declBus(c+70,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+84,"W1_en", false,-1);
    tracep->declBit(c+49,"W1_clk", false,-1);
    tracep->declBus(c+80,"W1_data", false,-1, 31,0);
    tracep->declBus(c+70,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+85,"W2_en", false,-1);
    tracep->declBit(c+49,"W2_clk", false,-1);
    tracep->declBus(c+74,"W2_data", false,-1, 31,0);
    tracep->declBus(c+70,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+86,"W3_en", false,-1);
    tracep->declBit(c+49,"W3_clk", false,-1);
    tracep->declBus(c+74,"W3_data", false,-1, 31,0);
    tracep->declBus(c+66,"R0_data", false,-1, 31,0);
    tracep->declBus(c+67,"R1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+51,"io_inst", false,-1, 31,0);
    tracep->declBit(c+53,"io_BundleControl_isALUSrc", false,-1);
    tracep->declBit(c+54,"io_BundleControl_isJump", false,-1);
    tracep->declBit(c+55,"io_BundleControl_isBranch", false,-1);
    tracep->declBit(c+56,"io_BundleControl_isJAL", false,-1);
    tracep->declBit(c+57,"io_BundleControl_writeEnable", false,-1);
    tracep->declBit(c+58,"io_BundleControl_isLoad", false,-1);
    tracep->declBit(c+59,"io_BundleControl_isStore", false,-1);
    tracep->declBit(c+60,"io_BundleControl_isUnsigned", false,-1);
    tracep->declBit(c+61,"io_BundleControl_isContext", false,-1);
    tracep->declBus(c+62,"io_BundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+63,"io_BundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+64,"io_BundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+68,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+69,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+70,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+71,"io_imm", false,-1, 31,0);
    tracep->declBit(c+6,"io_isEbreak", false,-1);
    tracep->declBus(c+7,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBus(c+52,"io_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_in_valid", false,-1);
    tracep->declBus(c+8,"io_in_bits_data", false,-1, 31,0);
    tracep->declBus(c+51,"io_inst", false,-1, 31,0);
    tracep->declBus(c+52,"io_out_bits_addr", false,-1, 31,0);
    tracep->declBit(c+43,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+58,"io_isLoad", false,-1);
    tracep->declBit(c+59,"io_isStore", false,-1);
    tracep->declBus(c+65,"io_addr", false,-1, 31,0);
    tracep->declBus(c+87,"io_len", false,-1, 31,0);
    tracep->declBus(c+67,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"io_res", false,-1, 31,0);
    tracep->pushNamePrefix("dataSRAM ");
    tracep->declBit(c+58,"isLoad", false,-1);
    tracep->declBit(c+59,"isStore", false,-1);
    tracep->declBus(c+65,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"len", false,-1, 31,0);
    tracep->declBus(c+67,"wdata", false,-1, 31,0);
    tracep->declBus(c+46,"res", false,-1, 31,0);
    tracep->declBit(c+47,"load_flag", false,-1);
    tracep->declBit(c+48,"store_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBit(c+54,"io_isJump", false,-1);
    tracep->declBit(c+55,"io_isBranch", false,-1);
    tracep->declBit(c+72,"io_resBranch", false,-1);
    tracep->declBus(c+78,"io_addrTarget", false,-1, 31,0);
    tracep->declBus(c+62,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+79,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+52,"io_pc", false,-1, 31,0);
    tracep->declBus(c+44,"pcReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBus(c+52,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+42,"io_r_valid", false,-1);
    tracep->declBus(c+8,"io_r_bits_data", false,-1, 31,0);
    tracep->declBit(c+42,"state", false,-1);
    tracep->declBus(c+45,"instSRAM_io_pc_r", false,-1, 31,0);
    tracep->pushNamePrefix("instSRAM ");
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+49,"clock", false,-1);
    tracep->declBit(c+50,"reset", false,-1);
    tracep->declBit(c+6,"isEbreak", false,-1);
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
    bufp->fullSData(oldp+1,((0x3ffU & vlSelf->TOP__DOT__idu__DOT__casez_tmp)),10);
    bufp->fullBit(oldp+2,(vlSelf->TOP__DOT__gprFile__DOT___GEN_4));
    bufp->fullBit(oldp+3,(vlSelf->TOP__DOT__gprFile__DOT___GEN_6));
    bufp->fullBit(oldp+4,(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W0_en));
    bufp->fullBit(oldp+5,(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W1_en));
    bufp->fullBit(oldp+6,(vlSelf->TOP__DOT___idu_io_isEbreak));
    bufp->fullIData(oldp+7,(vlSelf->TOP__DOT__idu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+8,(vlSelf->TOP__DOT___sram_io_r_bits_data),32);
    bufp->fullIData(oldp+9,(((IData)(4U) + vlSelf->TOP__DOT__pcReg__DOT__pcReg)),32);
    bufp->fullIData(oldp+10,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+14,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+15,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+16,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+17,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+18,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+19,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+20,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+21,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+22,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+23,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+24,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+25,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+26,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+27,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+28,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+29,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+30,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+31,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+32,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+33,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+34,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+35,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+36,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+37,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+38,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+39,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+40,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+41,(vlSelf->TOP__DOT__gprFile__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+42,(vlSelf->TOP__DOT__sram__DOT__state));
    bufp->fullBit(oldp+43,(vlSelf->TOP__DOT__ifu__DOT__state));
    bufp->fullIData(oldp+44,(vlSelf->TOP__DOT__pcReg__DOT__pcReg),32);
    bufp->fullIData(oldp+45,(vlSelf->TOP__DOT__sram__DOT__instSRAM_io_pc_r),32);
    bufp->fullIData(oldp+46,(vlSelf->TOP__DOT__lsu__DOT___dataSRAM_res),32);
    bufp->fullBit(oldp+47,(vlSelf->TOP__DOT__lsu__DOT__dataSRAM__DOT__load_flag));
    bufp->fullBit(oldp+48,(vlSelf->TOP__DOT__lsu__DOT__dataSRAM__DOT__store_flag));
    bufp->fullBit(oldp+49,(vlSelf->clock));
    bufp->fullBit(oldp+50,(vlSelf->reset));
    bufp->fullIData(oldp+51,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+52,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+53,(vlSelf->io_bundleControl_isALUSrc));
    bufp->fullBit(oldp+54,(vlSelf->io_bundleControl_isJump));
    bufp->fullBit(oldp+55,(vlSelf->io_bundleControl_isBranch));
    bufp->fullBit(oldp+56,(vlSelf->io_bundleControl_isJAL));
    bufp->fullBit(oldp+57,(vlSelf->io_bundleControl_writeEnable));
    bufp->fullBit(oldp+58,(vlSelf->io_bundleControl_isLoad));
    bufp->fullBit(oldp+59,(vlSelf->io_bundleControl_isStore));
    bufp->fullBit(oldp+60,(vlSelf->io_bundleControl_isUnsigned));
    bufp->fullBit(oldp+61,(vlSelf->io_bundleControl_isContext));
    bufp->fullCData(oldp+62,(vlSelf->io_bundleControl_csrType),4);
    bufp->fullCData(oldp+63,(vlSelf->io_bundleControl_lsuType),4);
    bufp->fullCData(oldp+64,(vlSelf->io_bundleControl_aluType),4);
    bufp->fullIData(oldp+65,(vlSelf->io_resEX),32);
    bufp->fullIData(oldp+66,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+67,(vlSelf->io_src2),32);
    bufp->fullCData(oldp+68,(vlSelf->io_rs1),5);
    bufp->fullCData(oldp+69,(vlSelf->io_rs2),5);
    bufp->fullCData(oldp+70,(vlSelf->io_rd),5);
    bufp->fullIData(oldp+71,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+72,(vlSelf->io_resBranch));
    bufp->fullBit(oldp+73,(vlSelf->io_writeEnable));
    bufp->fullIData(oldp+74,(vlSelf->TOP__DOT__gprFile__DOT___csrs_ext_R0_data),32);
    bufp->fullIData(oldp+75,(vlSelf->TOP__DOT__exu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+76,(vlSelf->TOP__DOT__exu__DOT__operand1),32);
    bufp->fullIData(oldp+77,(vlSelf->TOP__DOT__exu__DOT__operand2),32);
    bufp->fullIData(oldp+78,(vlSelf->TOP__DOT___lsu_io_res),32);
    bufp->fullIData(oldp+79,(((1U & ((~ (IData)(vlSelf->io_bundleControl_isContext)) 
                                     | (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_3)))
                               ? 0U : ((2U == (IData)(vlSelf->io_bundleControl_csrType))
                                        ? ((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_4)
                                            ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                                           [0x305U]
                                            : 0U) : 
                                       ((3U == (IData)(vlSelf->io_bundleControl_csrType))
                                         ? ((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_6)
                                             ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                                            [0x341U]
                                             : 0U) : 0U)))),32);
    bufp->fullIData(oldp+80,(vlSelf->TOP__DOT__gprFile__DOT__dataWrite),32);
    bufp->fullIData(oldp+81,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_4)
                               ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                              [0x305U] : 0U)),32);
    bufp->fullIData(oldp+82,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN_6)
                               ? vlSelf->TOP__DOT__gprFile__DOT__csrs_ext__DOT__Memory
                              [0x341U] : 0U)),32);
    bufp->fullBit(oldp+83,(((IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN) 
                            & (IData)(vlSelf->io_bundleControl_isJump))));
    bufp->fullBit(oldp+84,(((~ (IData)(vlSelf->io_bundleControl_isJump)) 
                            & (IData)(vlSelf->TOP__DOT__gprFile__DOT___GEN))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W0_en) 
                            & (0U != (IData)(vlSelf->io_rd)))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->TOP__DOT__gprFile__DOT____Vcellinp__csrs_ext__W1_en) 
                            & (0U != (IData)(vlSelf->io_rd)))));
    bufp->fullIData(oldp+87,(vlSelf->io_bundleControl_lsuType),32);
    bufp->fullBit(oldp+88,(1U));
    bufp->fullSData(oldp+89,(0x305U),10);
    bufp->fullSData(oldp+90,(0x341U),10);
    bufp->fullSData(oldp+91,(0x342U),10);
    bufp->fullIData(oldp+92,(0xbU),32);
    bufp->fullSData(oldp+93,(0x300U),10);
    bufp->fullIData(oldp+94,(0x1800U),32);
}
