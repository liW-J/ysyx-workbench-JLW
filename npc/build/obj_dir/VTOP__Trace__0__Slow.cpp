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
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBus(c+68,"io_inst", false,-1, 31,0);
    tracep->declBus(c+69,"io_pc", false,-1, 31,0);
    tracep->declBit(c+70,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+71,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+72,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+73,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+74,"io_bundleControl_writeEnable", false,-1);
    tracep->declBit(c+75,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+76,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+77,"io_bundleControl_isUnsigned", false,-1);
    tracep->declBit(c+78,"io_bundleControl_isContext", false,-1);
    tracep->declBus(c+79,"io_bundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+80,"io_bundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+81,"io_bundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+82,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+83,"io_src1", false,-1, 31,0);
    tracep->declBus(c+84,"io_src2", false,-1, 31,0);
    tracep->declBus(c+85,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+86,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+87,"io_rd", false,-1, 4,0);
    tracep->declBus(c+88,"io_imm", false,-1, 31,0);
    tracep->declBit(c+89,"io_resBranch", false,-1);
    tracep->declBit(c+90,"io_writeEnable", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBus(c+68,"io_inst", false,-1, 31,0);
    tracep->declBus(c+69,"io_pc", false,-1, 31,0);
    tracep->declBit(c+70,"io_bundleControl_isALUSrc", false,-1);
    tracep->declBit(c+71,"io_bundleControl_isJump", false,-1);
    tracep->declBit(c+72,"io_bundleControl_isBranch", false,-1);
    tracep->declBit(c+73,"io_bundleControl_isJAL", false,-1);
    tracep->declBit(c+74,"io_bundleControl_writeEnable", false,-1);
    tracep->declBit(c+75,"io_bundleControl_isLoad", false,-1);
    tracep->declBit(c+76,"io_bundleControl_isStore", false,-1);
    tracep->declBit(c+77,"io_bundleControl_isUnsigned", false,-1);
    tracep->declBit(c+78,"io_bundleControl_isContext", false,-1);
    tracep->declBus(c+79,"io_bundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+80,"io_bundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+81,"io_bundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+82,"io_resEX", false,-1, 31,0);
    tracep->declBus(c+83,"io_src1", false,-1, 31,0);
    tracep->declBus(c+84,"io_src2", false,-1, 31,0);
    tracep->declBus(c+85,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+86,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+87,"io_rd", false,-1, 4,0);
    tracep->declBus(c+88,"io_imm", false,-1, 31,0);
    tracep->declBit(c+89,"io_resBranch", false,-1);
    tracep->declBit(c+74,"io_writeEnable", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+55,"io_in2ifu_ar_valid", false,-1);
    tracep->declBus(c+69,"io_in2ifu_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_in2lsu_ar_valid", false,-1);
    tracep->declBus(c+82,"io_in2lsu_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+91,"io_in2lsu_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+76,"io_in2lsu_aw_valid", false,-1);
    tracep->declBus(c+84,"io_in2lsu_w_bits_data", false,-1, 31,0);
    tracep->declBit(c+56,"io_isIFU", false,-1);
    tracep->declBit(c+57,"io_isLSU", false,-1);
    tracep->declBus(c+1,"io_resIFU", false,-1, 31,0);
    tracep->declBus(c+52,"io_resLSU", false,-1, 31,0);
    tracep->declBus(c+68,"io_in2ifu_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+52,"io_in2lsu_r_bits_data", false,-1, 31,0);
    tracep->declBit(c+92,"io_out_ar_valid", false,-1);
    tracep->declBus(c+9,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+93,"io_out_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+94,"io_out_aw_valid", false,-1);
    tracep->declBus(c+95,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+58,"exec", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+70,"io_bundleControlIn_isALUSrc", false,-1);
    tracep->declBit(c+71,"io_bundleControlIn_isJump", false,-1);
    tracep->declBit(c+72,"io_bundleControlIn_isBranch", false,-1);
    tracep->declBit(c+73,"io_bundleControlIn_isJAL", false,-1);
    tracep->declBit(c+74,"io_bundleControlIn_writeEnable", false,-1);
    tracep->declBit(c+75,"io_bundleControlIn_isLoad", false,-1);
    tracep->declBit(c+76,"io_bundleControlIn_isStore", false,-1);
    tracep->declBit(c+77,"io_bundleControlIn_isUnsigned", false,-1);
    tracep->declBit(c+78,"io_bundleControlIn_isContext", false,-1);
    tracep->declBus(c+79,"io_bundleControlIn_csrType", false,-1, 3,0);
    tracep->declBus(c+80,"io_bundleControlIn_lsuType", false,-1, 3,0);
    tracep->declBus(c+81,"io_bundleControlIn_aluType", false,-1, 3,0);
    tracep->declBit(c+70,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+73,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+72,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+77,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+81,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBit(c+71,"io_bundleControlOut_isJump", false,-1);
    tracep->declBit(c+72,"io_bundleControlOut_isBranch", false,-1);
    tracep->declBit(c+74,"io_bundleControlOut_writeEnable", false,-1);
    tracep->declBit(c+75,"io_bundleControlOut_isLoad", false,-1);
    tracep->declBit(c+76,"io_bundleControlOut_isStore", false,-1);
    tracep->declBit(c+77,"io_bundleControlOut_isUnsigned", false,-1);
    tracep->declBit(c+78,"io_bundleControlOut_isContext", false,-1);
    tracep->declBus(c+79,"io_bundleControlOut_csrType", false,-1, 3,0);
    tracep->declBus(c+80,"io_bundleControlOut_lsuType", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+70,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+73,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+72,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+77,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+81,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBus(c+83,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+84,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+10,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+88,"io_imm", false,-1, 31,0);
    tracep->declBus(c+69,"io_pc", false,-1, 31,0);
    tracep->declBus(c+59,"io_ifuStatus", false,-1, 31,0);
    tracep->declBit(c+89,"io_resBranch", false,-1);
    tracep->declBus(c+82,"io_res", false,-1, 31,0);
    tracep->declBus(c+83,"io_src1", false,-1, 31,0);
    tracep->declBus(c+84,"io_src2", false,-1, 31,0);
    tracep->declBit(c+57,"io_out_aw_valid", false,-1);
    tracep->declBus(c+84,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+11,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+12,"operand1", false,-1, 31,0);
    tracep->declBus(c+13,"operand2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("getPC ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+68,"io_inst", false,-1, 31,0);
    tracep->declBit(c+70,"io_BundleControl_isALUSrc", false,-1);
    tracep->declBit(c+71,"io_BundleControl_isJump", false,-1);
    tracep->declBit(c+72,"io_BundleControl_isBranch", false,-1);
    tracep->declBit(c+73,"io_BundleControl_isJAL", false,-1);
    tracep->declBit(c+74,"io_BundleControl_writeEnable", false,-1);
    tracep->declBit(c+75,"io_BundleControl_isLoad", false,-1);
    tracep->declBit(c+76,"io_BundleControl_isStore", false,-1);
    tracep->declBit(c+77,"io_BundleControl_isUnsigned", false,-1);
    tracep->declBit(c+78,"io_BundleControl_isContext", false,-1);
    tracep->declBus(c+79,"io_BundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+80,"io_BundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+81,"io_BundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+85,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+86,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+87,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+88,"io_imm", false,-1, 31,0);
    tracep->declBit(c+2,"io_isEbreak", false,-1);
    tracep->declBus(c+3,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBit(c+71,"io_isJump", false,-1);
    tracep->declBit(c+72,"io_isBranch", false,-1);
    tracep->declBit(c+89,"io_resBranch", false,-1);
    tracep->declBus(c+52,"io_addrTarget", false,-1, 31,0);
    tracep->declBus(c+79,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+96,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+14,"io_lsuStatus", false,-1, 31,0);
    tracep->declBus(c+68,"io_out_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+69,"io_pc", false,-1, 31,0);
    tracep->declBus(c+68,"io_inst", false,-1, 31,0);
    tracep->declBit(c+56,"io_isIFU", false,-1);
    tracep->declBus(c+59,"io_status", false,-1, 31,0);
    tracep->declBit(c+55,"io_out_ar_valid", false,-1);
    tracep->declBus(c+69,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+15,"pcReg", false,-1, 31,0);
    tracep->declBit(c+16,"resBranch", false,-1);
    tracep->declBus(c+60,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBit(c+75,"io_isLoad", false,-1);
    tracep->declBit(c+76,"io_isStore", false,-1);
    tracep->declBus(c+82,"io_addr", false,-1, 31,0);
    tracep->declBus(c+91,"io_len", false,-1, 31,0);
    tracep->declBit(c+57,"io_in_aw_valid", false,-1);
    tracep->declBus(c+84,"io_in_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+52,"io_out_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+52,"io_res", false,-1, 31,0);
    tracep->declBit(c+57,"io_isLSU", false,-1);
    tracep->declBus(c+14,"io_status", false,-1, 31,0);
    tracep->declBit(c+75,"io_out_ar_valid", false,-1);
    tracep->declBus(c+82,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+91,"io_out_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+76,"io_out_aw_valid", false,-1);
    tracep->declBus(c+84,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+17,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+92,"io_in_ar_valid", false,-1);
    tracep->declBus(c+9,"io_in_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+93,"io_in_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+94,"io_in_aw_valid", false,-1);
    tracep->declBus(c+95,"io_in_w_bits_data", false,-1, 31,0);
    tracep->declBit(c+56,"io_isIFU", false,-1);
    tracep->declBit(c+57,"io_isLSU", false,-1);
    tracep->declBus(c+1,"io_resIFU", false,-1, 31,0);
    tracep->declBus(c+52,"io_resLSU", false,-1, 31,0);
    tracep->declBus(c+61,"dataSRAM_io_len_r", false,-1, 31,0);
    tracep->declBus(c+62,"dataSRAM_io_wdata_r", false,-1, 31,0);
    tracep->declBus(c+63,"dataSRAM_io_addr_r", false,-1, 31,0);
    tracep->declBit(c+64,"dataSRAM_io_isLoad_r", false,-1);
    tracep->declBit(c+65,"dataSRAM_io_isStore_r", false,-1);
    tracep->declBus(c+18,"instSRAM_io_pc_r", false,-1, 31,0);
    tracep->pushNamePrefix("dataSRAM ");
    tracep->declBit(c+64,"isLoad", false,-1);
    tracep->declBit(c+65,"isStore", false,-1);
    tracep->declBus(c+63,"addr", false,-1, 31,0);
    tracep->declBus(c+61,"len", false,-1, 31,0);
    tracep->declBus(c+62,"wdata", false,-1, 31,0);
    tracep->declBus(c+52,"res", false,-1, 31,0);
    tracep->declBit(c+53,"load_flag", false,-1);
    tracep->declBit(c+54,"store_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instSRAM ");
    tracep->declBus(c+18,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBit(c+2,"isEbreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+66,"clock", false,-1);
    tracep->declBit(c+74,"io_writeEnable", false,-1);
    tracep->declBit(c+71,"io_isJump", false,-1);
    tracep->declBit(c+75,"io_isLoad", false,-1);
    tracep->declBit(c+77,"io_isUnsigned", false,-1);
    tracep->declBit(c+78,"io_isContext", false,-1);
    tracep->declBus(c+88,"io_imm", false,-1, 31,0);
    tracep->declBus(c+79,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+80,"io_lsuType", false,-1, 3,0);
    tracep->declBus(c+69,"io_pc", false,-1, 31,0);
    tracep->declBus(c+52,"io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+85,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+86,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+87,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+14,"io_lsuStatus", false,-1, 31,0);
    tracep->declBus(c+83,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+84,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+10,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+96,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+19,"snpc", false,-1, 31,0);
    tracep->declBus(c+97,"dataWrite", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+4,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+104,"R0_en", false,-1);
    tracep->declBit(c+66,"R0_clk", false,-1);
    tracep->declBus(c+105,"R1_addr", false,-1, 9,0);
    tracep->declBit(c+5,"R1_en", false,-1);
    tracep->declBit(c+66,"R1_clk", false,-1);
    tracep->declBus(c+106,"R2_addr", false,-1, 9,0);
    tracep->declBit(c+6,"R2_en", false,-1);
    tracep->declBit(c+66,"R2_clk", false,-1);
    tracep->declBus(c+4,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+7,"W0_en", false,-1);
    tracep->declBit(c+66,"W0_clk", false,-1);
    tracep->declBus(c+97,"W0_data", false,-1, 31,0);
    tracep->declBus(c+4,"W1_addr", false,-1, 9,0);
    tracep->declBit(c+8,"W1_en", false,-1);
    tracep->declBit(c+66,"W1_clk", false,-1);
    tracep->declBus(c+97,"W1_data", false,-1, 31,0);
    tracep->declBus(c+106,"W2_addr", false,-1, 9,0);
    tracep->declBit(c+5,"W2_en", false,-1);
    tracep->declBit(c+66,"W2_clk", false,-1);
    tracep->declBus(c+19,"W2_data", false,-1, 31,0);
    tracep->declBus(c+107,"W3_addr", false,-1, 9,0);
    tracep->declBit(c+5,"W3_en", false,-1);
    tracep->declBit(c+66,"W3_clk", false,-1);
    tracep->declBus(c+108,"W3_data", false,-1, 31,0);
    tracep->declBus(c+109,"W4_addr", false,-1, 9,0);
    tracep->declBit(c+5,"W4_en", false,-1);
    tracep->declBit(c+66,"W4_clk", false,-1);
    tracep->declBus(c+110,"W4_data", false,-1, 31,0);
    tracep->declBus(c+109,"W5_addr", false,-1, 9,0);
    tracep->declBit(c+6,"W5_en", false,-1);
    tracep->declBit(c+66,"W5_clk", false,-1);
    tracep->declBus(c+110,"W5_data", false,-1, 31,0);
    tracep->declBus(c+10,"R0_data", false,-1, 31,0);
    tracep->declBus(c+98,"R1_data", false,-1, 31,0);
    tracep->declBus(c+99,"R2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+85,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+104,"R0_en", false,-1);
    tracep->declBit(c+66,"R0_clk", false,-1);
    tracep->declBus(c+86,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+104,"R1_en", false,-1);
    tracep->declBit(c+66,"R1_clk", false,-1);
    tracep->declBus(c+87,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+100,"W0_en", false,-1);
    tracep->declBit(c+66,"W0_clk", false,-1);
    tracep->declBus(c+19,"W0_data", false,-1, 31,0);
    tracep->declBus(c+87,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+101,"W1_en", false,-1);
    tracep->declBit(c+66,"W1_clk", false,-1);
    tracep->declBus(c+97,"W1_data", false,-1, 31,0);
    tracep->declBus(c+87,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+102,"W2_en", false,-1);
    tracep->declBit(c+66,"W2_clk", false,-1);
    tracep->declBus(c+10,"W2_data", false,-1, 31,0);
    tracep->declBus(c+87,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+103,"W3_en", false,-1);
    tracep->declBit(c+66,"W3_clk", false,-1);
    tracep->declBus(c+10,"W3_data", false,-1, 31,0);
    tracep->declBus(c+83,"R0_data", false,-1, 31,0);
    tracep->declBus(c+84,"R1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->TOP__DOT___sram_io_resIFU),32);
    bufp->fullBit(oldp+2,(vlSelf->TOP__DOT___idu_io_isEbreak));
    bufp->fullIData(oldp+3,(vlSelf->TOP__DOT__idu__DOT__casez_tmp),32);
    bufp->fullSData(oldp+4,((0x3ffU & vlSelf->TOP__DOT__idu__DOT__casez_tmp)),10);
    bufp->fullBit(oldp+5,(vlSelf->TOP__DOT__wbu__DOT___GEN_4));
    bufp->fullBit(oldp+6,(vlSelf->TOP__DOT__wbu__DOT___GEN_6));
    bufp->fullBit(oldp+7,(vlSelf->TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en));
    bufp->fullBit(oldp+8,(vlSelf->TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en));
    bufp->fullIData(oldp+9,(vlSelf->TOP__DOT___arbiter_io_out_ar_bits_addr),32);
    bufp->fullIData(oldp+10,(vlSelf->TOP__DOT__wbu__DOT___csrs_ext_R0_data),32);
    bufp->fullIData(oldp+11,(vlSelf->TOP__DOT__exu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+12,(vlSelf->TOP__DOT__exu__DOT__operand1),32);
    bufp->fullIData(oldp+13,(vlSelf->TOP__DOT__exu__DOT__operand2),32);
    bufp->fullIData(oldp+14,(vlSelf->TOP__DOT__lsu__DOT__state),32);
    bufp->fullIData(oldp+15,(vlSelf->TOP__DOT__ifu__DOT__pcReg),32);
    bufp->fullBit(oldp+16,(vlSelf->TOP__DOT__ifu__DOT__resBranch));
    bufp->fullCData(oldp+17,(vlSelf->TOP__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+18,(vlSelf->TOP__DOT__sram__DOT__instSRAM_io_pc_r),32);
    bufp->fullIData(oldp+19,(((IData)(4U) + vlSelf->TOP__DOT__ifu__DOT__pcReg)),32);
    bufp->fullIData(oldp+20,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+25,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+26,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+27,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+28,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+29,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+30,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+31,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+32,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+33,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+34,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+35,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+36,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+37,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+38,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+39,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+40,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+41,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+42,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+43,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+44,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+45,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+46,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+47,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+48,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+49,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+50,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+51,(vlSelf->TOP__DOT__wbu__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullIData(oldp+52,(vlSelf->TOP__DOT___sram_io_resLSU),32);
    bufp->fullBit(oldp+53,(vlSelf->TOP__DOT__sram__DOT__dataSRAM__DOT__load_flag));
    bufp->fullBit(oldp+54,(vlSelf->TOP__DOT__sram__DOT__dataSRAM__DOT__store_flag));
    bufp->fullBit(oldp+55,((1U & ((~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ifu__DOT__state)))) 
                                  | (~ ((1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state)) 
                                        | (2U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state))))))));
    bufp->fullBit(oldp+56,((1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ifu__DOT__state)))))));
    bufp->fullBit(oldp+57,((1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state))));
    bufp->fullCData(oldp+58,(vlSelf->TOP__DOT__arbiter__DOT__exec),2);
    bufp->fullIData(oldp+59,(vlSelf->TOP__DOT__ifu__DOT__state),32);
    bufp->fullCData(oldp+60,(vlSelf->TOP__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+61,(vlSelf->TOP__DOT__sram__DOT__dataSRAM_io_len_r),32);
    bufp->fullIData(oldp+62,(vlSelf->TOP__DOT__sram__DOT__dataSRAM_io_wdata_r),32);
    bufp->fullIData(oldp+63,(vlSelf->TOP__DOT__sram__DOT__dataSRAM_io_addr_r),32);
    bufp->fullBit(oldp+64,(vlSelf->TOP__DOT__sram__DOT__dataSRAM_io_isLoad_r));
    bufp->fullBit(oldp+65,(vlSelf->TOP__DOT__sram__DOT__dataSRAM_io_isStore_r));
    bufp->fullBit(oldp+66,(vlSelf->clock));
    bufp->fullBit(oldp+67,(vlSelf->reset));
    bufp->fullIData(oldp+68,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+69,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+70,(vlSelf->io_bundleControl_isALUSrc));
    bufp->fullBit(oldp+71,(vlSelf->io_bundleControl_isJump));
    bufp->fullBit(oldp+72,(vlSelf->io_bundleControl_isBranch));
    bufp->fullBit(oldp+73,(vlSelf->io_bundleControl_isJAL));
    bufp->fullBit(oldp+74,(vlSelf->io_bundleControl_writeEnable));
    bufp->fullBit(oldp+75,(vlSelf->io_bundleControl_isLoad));
    bufp->fullBit(oldp+76,(vlSelf->io_bundleControl_isStore));
    bufp->fullBit(oldp+77,(vlSelf->io_bundleControl_isUnsigned));
    bufp->fullBit(oldp+78,(vlSelf->io_bundleControl_isContext));
    bufp->fullCData(oldp+79,(vlSelf->io_bundleControl_csrType),4);
    bufp->fullCData(oldp+80,(vlSelf->io_bundleControl_lsuType),4);
    bufp->fullCData(oldp+81,(vlSelf->io_bundleControl_aluType),4);
    bufp->fullIData(oldp+82,(vlSelf->io_resEX),32);
    bufp->fullIData(oldp+83,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+84,(vlSelf->io_src2),32);
    bufp->fullCData(oldp+85,(vlSelf->io_rs1),5);
    bufp->fullCData(oldp+86,(vlSelf->io_rs2),5);
    bufp->fullCData(oldp+87,(vlSelf->io_rd),5);
    bufp->fullIData(oldp+88,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+89,(vlSelf->io_resBranch));
    bufp->fullBit(oldp+90,(vlSelf->io_writeEnable));
    bufp->fullIData(oldp+91,(vlSelf->io_bundleControl_lsuType),32);
    bufp->fullBit(oldp+92,((1U & ((0U == (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec))
                                   ? ((~ (IData)((0U 
                                                  != (IData)(vlSelf->TOP__DOT__ifu__DOT__state)))) 
                                      | (~ ((1U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state)) 
                                            | (2U == (IData)(vlSelf->TOP__DOT__ifu__DOT__state)))))
                                   : ((1U == (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec)) 
                                      & (IData)(vlSelf->io_bundleControl_isLoad))))));
    bufp->fullIData(oldp+93,(((IData)(vlSelf->TOP__DOT__arbiter__DOT___GEN_1)
                               ? 0U : (IData)(vlSelf->io_bundleControl_lsuType))),32);
    bufp->fullBit(oldp+94,(((0U != (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec)) 
                            & ((1U == (IData)(vlSelf->TOP__DOT__arbiter__DOT__exec)) 
                               & (IData)(vlSelf->io_bundleControl_isStore)))));
    bufp->fullIData(oldp+95,(((IData)(vlSelf->TOP__DOT__arbiter__DOT___GEN_1)
                               ? 0U : vlSelf->io_src2)),32);
    bufp->fullIData(oldp+96,(((1U & ((~ (IData)(vlSelf->io_bundleControl_isContext)) 
                                     | (IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_3)))
                               ? 0U : ((2U == (IData)(vlSelf->io_bundleControl_csrType))
                                        ? ((IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_4)
                                            ? vlSelf->TOP__DOT__wbu__DOT__csrs_ext__DOT__Memory
                                           [0x305U]
                                            : 0U) : 
                                       ((3U == (IData)(vlSelf->io_bundleControl_csrType))
                                         ? ((IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_6)
                                             ? vlSelf->TOP__DOT__wbu__DOT__csrs_ext__DOT__Memory
                                            [0x341U]
                                             : 0U) : 0U)))),32);
    bufp->fullIData(oldp+97,(vlSelf->TOP__DOT__wbu__DOT__dataWrite),32);
    bufp->fullIData(oldp+98,(((IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_4)
                               ? vlSelf->TOP__DOT__wbu__DOT__csrs_ext__DOT__Memory
                              [0x305U] : 0U)),32);
    bufp->fullIData(oldp+99,(((IData)(vlSelf->TOP__DOT__wbu__DOT___GEN_6)
                               ? vlSelf->TOP__DOT__wbu__DOT__csrs_ext__DOT__Memory
                              [0x341U] : 0U)),32);
    bufp->fullBit(oldp+100,(((IData)(vlSelf->TOP__DOT__wbu__DOT___GEN) 
                             & (IData)(vlSelf->io_bundleControl_isJump))));
    bufp->fullBit(oldp+101,(((~ (IData)(vlSelf->io_bundleControl_isJump)) 
                             & (IData)(vlSelf->TOP__DOT__wbu__DOT___GEN))));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en) 
                             & (0U != (IData)(vlSelf->io_rd)))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->TOP__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en) 
                             & (0U != (IData)(vlSelf->io_rd)))));
    bufp->fullBit(oldp+104,(1U));
    bufp->fullSData(oldp+105,(0x305U),10);
    bufp->fullSData(oldp+106,(0x341U),10);
    bufp->fullSData(oldp+107,(0x342U),10);
    bufp->fullIData(oldp+108,(0xbU),32);
    bufp->fullSData(oldp+109,(0x300U),10);
    bufp->fullIData(oldp+110,(0x1800U),32);
}
