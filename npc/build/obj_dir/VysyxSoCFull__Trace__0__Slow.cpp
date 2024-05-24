// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+916,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+917,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+918,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+919,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+920,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+921,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+922,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+923,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+924,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+925,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+926,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+927,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+928,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+929,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+930,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+931,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+932,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+933,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+934,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+935,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+916,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+917,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+918,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+919,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+920,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+921,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+922,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+923,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+924,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+925,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+926,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+927,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+928,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+929,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+930,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+931,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+932,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+933,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+934,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+935,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+296,"spi_sck", false,-1);
    tracep->declBus(c+297,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+832,"spi_mosi", false,-1);
    tracep->declBit(c+936,"spi_miso", false,-1);
    tracep->declBit(c+934,"uart_rx", false,-1);
    tracep->declBit(c+935,"uart_tx", false,-1);
    tracep->declBit(c+937,"psram_sck", false,-1);
    tracep->declBit(c+938,"psram_ce_n", false,-1);
    tracep->declBus(c+198,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+939,"sdram_clk", false,-1);
    tracep->declBit(c+298,"sdram_cke", false,-1);
    tracep->declBit(c+299,"sdram_cs", false,-1);
    tracep->declBit(c+300,"sdram_ras", false,-1);
    tracep->declBit(c+301,"sdram_cas", false,-1);
    tracep->declBit(c+302,"sdram_we", false,-1);
    tracep->declBus(c+303,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+304,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+305,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+833,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+916,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+917,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+918,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+919,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+920,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+921,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+922,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+923,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+924,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+925,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+926,"ps2_clk", false,-1);
    tracep->declBit(c+927,"ps2_data", false,-1);
    tracep->declBus(c+928,"vga_r", false,-1, 7,0);
    tracep->declBus(c+929,"vga_g", false,-1, 7,0);
    tracep->declBus(c+930,"vga_b", false,-1, 7,0);
    tracep->declBit(c+931,"vga_hsync", false,-1);
    tracep->declBit(c+932,"vga_vsync", false,-1);
    tracep->declBit(c+933,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+74,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+75,"in_psel", false,-1);
    tracep->declBit(c+466,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+199,"in_pready", false,-1);
    tracep->declBus(c+940,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+79,"in_pslverr", false,-1);
    tracep->declBus(c+74,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+75,"out_psel", false,-1);
    tracep->declBit(c+466,"out_penable", false,-1);
    tracep->declBus(c+969,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"out_pwrite", false,-1);
    tracep->declBus(c+77,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+199,"out_pready", false,-1);
    tracep->declBus(c+940,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+79,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+75,"auto_in_psel", false,-1);
    tracep->declBit(c+466,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+74,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+199,"auto_in_pready", false,-1);
    tracep->declBit(c+79,"auto_in_pslverr", false,-1);
    tracep->declBus(c+940,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+80,"auto_out_6_psel", false,-1);
    tracep->declBit(c+32,"auto_out_6_penable", false,-1);
    tracep->declBit(c+76,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+74,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+834,"auto_out_6_pready", false,-1);
    tracep->declBit(c+970,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+835,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+81,"auto_out_5_psel", false,-1);
    tracep->declBit(c+33,"auto_out_5_penable", false,-1);
    tracep->declBit(c+76,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+82,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+969,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+971,"auto_out_5_pready", false,-1);
    tracep->declBit(c+972,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+973,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+83,"auto_out_4_psel", false,-1);
    tracep->declBit(c+34,"auto_out_4_penable", false,-1);
    tracep->declBit(c+76,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+84,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+969,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"auto_out_4_pready", false,-1);
    tracep->declBit(c+975,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+976,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+85,"auto_out_3_psel", false,-1);
    tracep->declBit(c+35,"auto_out_3_penable", false,-1);
    tracep->declBit(c+76,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+84,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+969,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+977,"auto_out_3_pready", false,-1);
    tracep->declBit(c+978,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+979,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+86,"auto_out_2_psel", false,-1);
    tracep->declBit(c+36,"auto_out_2_penable", false,-1);
    tracep->declBit(c+76,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+74,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+941,"auto_out_2_pready", false,-1);
    tracep->declBit(c+970,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+467,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+87,"auto_out_1_psel", false,-1);
    tracep->declBit(c+88,"auto_out_1_penable", false,-1);
    tracep->declBit(c+76,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+84,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+969,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+89,"auto_out_1_pready", false,-1);
    tracep->declBit(c+970,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+942,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+90,"auto_out_0_psel", false,-1);
    tracep->declBit(c+91,"auto_out_0_penable", false,-1);
    tracep->declBit(c+76,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+82,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+969,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+306,"auto_out_0_pready", false,-1);
    tracep->declBit(c+970,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+836,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+92,"sel_0", false,-1);
    tracep->declBit(c+93,"sel_1", false,-1);
    tracep->declBit(c+94,"sel_2", false,-1);
    tracep->declBit(c+95,"sel_3", false,-1);
    tracep->declBit(c+96,"sel_4", false,-1);
    tracep->declBit(c+97,"sel_5", false,-1);
    tracep->declBit(c+98,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+99,"auto_in_awready", false,-1);
    tracep->declBit(c+100,"auto_in_awvalid", false,-1);
    tracep->declBus(c+468,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+469,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+99,"auto_in_wready", false,-1);
    tracep->declBit(c+102,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+200,"auto_in_bready", false,-1);
    tracep->declBit(c+201,"auto_in_bvalid", false,-1);
    tracep->declBus(c+471,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_in_arready", false,-1);
    tracep->declBit(c+106,"auto_in_arvalid", false,-1);
    tracep->declBus(c+472,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+107,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+473,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+202,"auto_in_rready", false,-1);
    tracep->declBit(c+203,"auto_in_rvalid", false,-1);
    tracep->declBus(c+474,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+943,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+37,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+75,"auto_out_psel", false,-1);
    tracep->declBit(c+466,"auto_out_penable", false,-1);
    tracep->declBit(c+76,"auto_out_pwrite", false,-1);
    tracep->declBus(c+74,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+77,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+199,"auto_out_pready", false,-1);
    tracep->declBit(c+79,"auto_out_pslverr", false,-1);
    tracep->declBus(c+940,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+466,"nodeOut_penable", false,-1);
    tracep->declBus(c+475,"state", false,-1, 1,0);
    tracep->declBit(c+105,"accept_read", false,-1);
    tracep->declBit(c+99,"accept_write", false,-1);
    tracep->declBit(c+476,"is_write_r", false,-1);
    tracep->declBit(c+76,"is_write", false,-1);
    tracep->declBus(c+474,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+471,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+477,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+478,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+108,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+479,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+109,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+481,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+111,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+112,"resp", false,-1, 1,0);
    tracep->declBus(c+482,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+37,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+203,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+483,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+201,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+484,"auto_in_awready", false,-1);
    tracep->declBit(c+113,"auto_in_awvalid", false,-1);
    tracep->declBus(c+980,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+485,"auto_in_wready", false,-1);
    tracep->declBit(c+113,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+115,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+981,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+970,"auto_in_wlast", false,-1);
    tracep->declBit(c+970,"auto_in_bready", false,-1);
    tracep->declBit(c+204,"auto_in_bvalid", false,-1);
    tracep->declBus(c+205,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+486,"auto_in_arready", false,-1);
    tracep->declBit(c+117,"auto_in_arvalid", false,-1);
    tracep->declBus(c+980,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+901,"auto_in_rready", false,-1);
    tracep->declBit(c+206,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_in_rlast", false,-1);
    tracep->declBit(c+208,"auto_out_awready", false,-1);
    tracep->declBit(c+119,"auto_out_awvalid", false,-1);
    tracep->declBus(c+468,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+469,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+487,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+209,"auto_out_wready", false,-1);
    tracep->declBit(c+120,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+121,"auto_out_wlast", false,-1);
    tracep->declBit(c+210,"auto_out_bready", false,-1);
    tracep->declBit(c+211,"auto_out_bvalid", false,-1);
    tracep->declBus(c+205,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+212,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+213,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+214,"auto_out_arready", false,-1);
    tracep->declBit(c+122,"auto_out_arvalid", false,-1);
    tracep->declBus(c+472,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+107,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+473,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+488,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+901,"auto_out_rready", false,-1);
    tracep->declBit(c+206,"auto_out_rvalid", false,-1);
    tracep->declBus(c+207,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+41,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+215,"auto_out_rlast", false,-1);
    tracep->declBit(c+120,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+489,"w_idle", false,-1);
    tracep->declBit(c+216,"in_awready", false,-1);
    tracep->declBit(c+490,"busy", false,-1);
    tracep->declBus(c+491,"r_addr", false,-1, 31,0);
    tracep->declBus(c+492,"r_len", false,-1, 7,0);
    tracep->declBus(c+493,"len", false,-1, 7,0);
    tracep->declBus(c+123,"addr", false,-1, 31,0);
    tracep->declBit(c+494,"busy_1", false,-1);
    tracep->declBus(c+495,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+496,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+497,"len_1", false,-1, 7,0);
    tracep->declBus(c+124,"addr_1", false,-1, 31,0);
    tracep->declBit(c+498,"wbeats_latched", false,-1);
    tracep->declBit(c+119,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+125,"wbeats_valid", false,-1);
    tracep->declBus(c+499,"w_counter", false,-1, 8,0);
    tracep->declBus(c+126,"w_todo", false,-1, 8,0);
    tracep->declBit(c+121,"w_last", false,-1);
    tracep->declBit(c+210,"nodeOut_bready", false,-1);
    tracep->declBus(c+500,"error_0", false,-1, 1,0);
    tracep->declBus(c+501,"error_1", false,-1, 1,0);
    tracep->declBus(c+502,"error_2", false,-1, 1,0);
    tracep->declBus(c+503,"error_3", false,-1, 1,0);
    tracep->declBus(c+504,"error_4", false,-1, 1,0);
    tracep->declBus(c+505,"error_5", false,-1, 1,0);
    tracep->declBus(c+506,"error_6", false,-1, 1,0);
    tracep->declBus(c+507,"error_7", false,-1, 1,0);
    tracep->declBus(c+508,"error_8", false,-1, 1,0);
    tracep->declBus(c+509,"error_9", false,-1, 1,0);
    tracep->declBus(c+510,"error_10", false,-1, 1,0);
    tracep->declBus(c+511,"error_11", false,-1, 1,0);
    tracep->declBus(c+512,"error_12", false,-1, 1,0);
    tracep->declBus(c+513,"error_13", false,-1, 1,0);
    tracep->declBus(c+514,"error_14", false,-1, 1,0);
    tracep->declBus(c+515,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+117,"io_enq_valid", false,-1);
    tracep->declBus(c+980,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+118,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+981,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+982,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+983,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+217,"io_deq_ready", false,-1);
    tracep->declBit(c+122,"io_deq_valid", false,-1);
    tracep->declBus(c+472,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+127,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+516,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+473,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+517,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+518,"ram", false,-1, 48,0);
    tracep->declBit(c+520,"full", false,-1);
    tracep->declBit(c+122,"io_deq_valid_0", false,-1);
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+113,"io_enq_valid", false,-1);
    tracep->declBus(c+980,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+114,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+981,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+982,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+983,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+219,"io_deq_ready", false,-1);
    tracep->declBit(c+128,"io_deq_valid", false,-1);
    tracep->declBus(c+468,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+129,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+521,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+469,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+522,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+523,"ram", false,-1, 48,0);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+128,"io_deq_valid_0", false,-1);
    tracep->declBit(c+220,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+113,"io_enq_valid", false,-1);
    tracep->declQuad(c+115,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+981,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+970,"io_enq_bits_last", false,-1);
    tracep->declBit(c+221,"io_deq_ready", false,-1);
    tracep->declBit(c+130,"io_deq_valid", false,-1);
    tracep->declQuad(c+103,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+470,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+526,"io_deq_bits_last", false,-1);
    tracep->declArray(c+527,"ram", false,-1, 72,0);
    tracep->declBit(c+530,"full", false,-1);
    tracep->declBit(c+130,"io_deq_valid_0", false,-1);
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+223,"auto_in_awready", false,-1);
    tracep->declBit(c+131,"auto_in_awvalid", false,-1);
    tracep->declBus(c+468,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+948,"auto_in_wready", false,-1);
    tracep->declBit(c+133,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+224,"auto_in_bready", false,-1);
    tracep->declBit(c+531,"auto_in_bvalid", false,-1);
    tracep->declBus(c+532,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+533,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_in_arready", false,-1);
    tracep->declBit(c+134,"auto_in_arvalid", false,-1);
    tracep->declBus(c+472,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+226,"auto_in_rready", false,-1);
    tracep->declBit(c+534,"auto_in_rvalid", false,-1);
    tracep->declBus(c+535,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+536,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+538,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+225,"nodeIn_arready", false,-1);
    tracep->declBit(c+223,"nodeIn_awready", false,-1);
    tracep->declBit(c+136,"w_sel0", false,-1);
    tracep->declBit(c+531,"w_full", false,-1);
    tracep->declBus(c+532,"w_id", false,-1, 3,0);
    tracep->declBit(c+539,"r_sel1", false,-1);
    tracep->declBit(c+540,"w_sel1", false,-1);
    tracep->declBit(c+534,"r_full", false,-1);
    tracep->declBus(c+535,"r_id", false,-1, 3,0);
    tracep->declBit(c+227,"ren", false,-1);
    tracep->declBit(c+541,"rdata_REG", false,-1);
    tracep->declBus(c+542,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+543,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+544,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+545,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+546,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+547,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+548,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+549,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+137,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+227,"R0_en", false,-1);
    tracep->declBit(c+914,"R0_clk", false,-1);
    tracep->declQuad(c+550,"R0_data", false,-1, 63,0);
    tracep->declBus(c+138,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+228,"W0_en", false,-1);
    tracep->declBit(c+914,"W0_clk", false,-1);
    tracep->declQuad(c+103,"W0_data", false,-1, 63,0);
    tracep->declBus(c+470,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+484,"auto_in_awready", false,-1);
    tracep->declBit(c+113,"auto_in_awvalid", false,-1);
    tracep->declBus(c+980,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+485,"auto_in_wready", false,-1);
    tracep->declBit(c+113,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+115,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+981,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+970,"auto_in_wlast", false,-1);
    tracep->declBit(c+970,"auto_in_bready", false,-1);
    tracep->declBit(c+204,"auto_in_bvalid", false,-1);
    tracep->declBus(c+205,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+486,"auto_in_arready", false,-1);
    tracep->declBit(c+117,"auto_in_arvalid", false,-1);
    tracep->declBus(c+980,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+901,"auto_in_rready", false,-1);
    tracep->declBit(c+206,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_in_rlast", false,-1);
    tracep->declBit(c+484,"auto_out_awready", false,-1);
    tracep->declBit(c+113,"auto_out_awvalid", false,-1);
    tracep->declBus(c+980,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+485,"auto_out_wready", false,-1);
    tracep->declBit(c+113,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+115,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+981,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+970,"auto_out_wlast", false,-1);
    tracep->declBit(c+970,"auto_out_bready", false,-1);
    tracep->declBit(c+204,"auto_out_bvalid", false,-1);
    tracep->declBus(c+205,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+486,"auto_out_arready", false,-1);
    tracep->declBit(c+117,"auto_out_arvalid", false,-1);
    tracep->declBus(c+980,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+901,"auto_out_rready", false,-1);
    tracep->declBit(c+206,"auto_out_rvalid", false,-1);
    tracep->declBus(c+207,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+229,"auto_in_awready", false,-1);
    tracep->declBit(c+139,"auto_in_awvalid", false,-1);
    tracep->declBus(c+468,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+469,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_in_wready", false,-1);
    tracep->declBit(c+120,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+121,"auto_in_wlast", false,-1);
    tracep->declBit(c+210,"auto_in_bready", false,-1);
    tracep->declBit(c+211,"auto_in_bvalid", false,-1);
    tracep->declBus(c+205,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+212,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+230,"auto_in_arready", false,-1);
    tracep->declBit(c+140,"auto_in_arvalid", false,-1);
    tracep->declBus(c+472,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+107,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+473,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+901,"auto_in_rready", false,-1);
    tracep->declBit(c+206,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+215,"auto_in_rlast", false,-1);
    tracep->declBit(c+223,"auto_out_2_awready", false,-1);
    tracep->declBit(c+131,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+468,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+948,"auto_out_2_wready", false,-1);
    tracep->declBit(c+133,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+224,"auto_out_2_bready", false,-1);
    tracep->declBit(c+531,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+532,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+533,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_out_2_arready", false,-1);
    tracep->declBit(c+134,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+472,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+226,"auto_out_2_rready", false,-1);
    tracep->declBit(c+534,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+535,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+536,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+538,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+142,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+552,"auto_out_1_arready", false,-1);
    tracep->declBit(c+143,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+472,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+473,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+949,"auto_out_1_rready", false,-1);
    tracep->declBit(c+553,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+554,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+555,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+99,"auto_out_0_awready", false,-1);
    tracep->declBit(c+100,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+468,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+469,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+99,"auto_out_0_wready", false,-1);
    tracep->declBit(c+102,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+200,"auto_out_0_bready", false,-1);
    tracep->declBit(c+201,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+471,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_out_0_arready", false,-1);
    tracep->declBit(c+106,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+472,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+107,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+473,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+202,"auto_out_0_rready", false,-1);
    tracep->declBit(c+203,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+474,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+943,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+37,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+211,"in_0_bvalid", false,-1);
    tracep->declBit(c+206,"in_0_rvalid", false,-1);
    tracep->declBit(c+229,"nodeIn_awready", false,-1);
    tracep->declBit(c+145,"requestARIO_0_0", false,-1);
    tracep->declBit(c+146,"requestARIO_0_1", false,-1);
    tracep->declBit(c+147,"requestARIO_0_2", false,-1);
    tracep->declBit(c+148,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+149,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+150,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+557,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+558,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+559,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+560,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+561,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+562,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+563,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+564,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+565,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+566,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+567,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+568,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+569,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+570,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+571,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+572,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+573,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+574,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+575,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+576,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+577,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+578,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+579,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+580,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+581,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+582,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+583,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+584,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+585,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+586,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+587,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+588,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+589,"latched", false,-1);
    tracep->declBit(c+151,"in_0_awvalid", false,-1);
    tracep->declBit(c+152,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+153,"in_0_wvalid", false,-1);
    tracep->declBit(c+590,"idle_3", false,-1);
    tracep->declBit(c+231,"anyValid", false,-1);
    tracep->declBus(c+232,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+591,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+233,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+234,"prefixOR_1", false,-1);
    tracep->declBit(c+235,"winner_3_1", false,-1);
    tracep->declBit(c+236,"winner_3_2", false,-1);
    tracep->declBit(c+592,"state_3_0", false,-1);
    tracep->declBit(c+593,"state_3_1", false,-1);
    tracep->declBit(c+594,"state_3_2", false,-1);
    tracep->declBit(c+237,"muxState_3_0", false,-1);
    tracep->declBit(c+238,"muxState_3_1", false,-1);
    tracep->declBit(c+239,"muxState_3_2", false,-1);
    tracep->declBit(c+595,"idle_4", false,-1);
    tracep->declBit(c+240,"anyValid_1", false,-1);
    tracep->declBus(c+241,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+596,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+242,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+243,"winner_4_0", false,-1);
    tracep->declBit(c+244,"winner_4_2", false,-1);
    tracep->declBit(c+597,"state_4_0", false,-1);
    tracep->declBit(c+598,"state_4_2", false,-1);
    tracep->declBit(c+245,"muxState_4_0", false,-1);
    tracep->declBit(c+246,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+599,"io_enq_ready", false,-1);
    tracep->declBit(c+152,"io_enq_valid", false,-1);
    tracep->declBus(c+154,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+247,"io_deq_ready", false,-1);
    tracep->declBit(c+155,"io_deq_valid", false,-1);
    tracep->declBus(c+156,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+600,"wrap", false,-1);
    tracep->declBit(c+601,"wrap_1", false,-1);
    tracep->declBit(c+602,"maybe_full", false,-1);
    tracep->declBit(c+603,"ptr_match", false,-1);
    tracep->declBit(c+604,"empty", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+155,"io_deq_valid_0", false,-1);
    tracep->declBit(c+248,"do_deq", false,-1);
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+601,"R0_addr", false,-1);
    tracep->declBit(c+984,"R0_en", false,-1);
    tracep->declBit(c+914,"R0_clk", false,-1);
    tracep->declBus(c+606,"R0_data", false,-1, 2,0);
    tracep->declBit(c+600,"W0_addr", false,-1);
    tracep->declBit(c+249,"W0_en", false,-1);
    tracep->declBit(c+914,"W0_clk", false,-1);
    tracep->declBus(c+154,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+607+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+208,"auto_in_awready", false,-1);
    tracep->declBit(c+119,"auto_in_awvalid", false,-1);
    tracep->declBus(c+468,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+469,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+487,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+209,"auto_in_wready", false,-1);
    tracep->declBit(c+120,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+121,"auto_in_wlast", false,-1);
    tracep->declBit(c+210,"auto_in_bready", false,-1);
    tracep->declBit(c+211,"auto_in_bvalid", false,-1);
    tracep->declBus(c+205,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+212,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+213,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+214,"auto_in_arready", false,-1);
    tracep->declBit(c+122,"auto_in_arvalid", false,-1);
    tracep->declBus(c+472,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+107,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+473,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+488,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+901,"auto_in_rready", false,-1);
    tracep->declBit(c+206,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+41,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+215,"auto_in_rlast", false,-1);
    tracep->declBit(c+229,"auto_out_awready", false,-1);
    tracep->declBit(c+139,"auto_out_awvalid", false,-1);
    tracep->declBus(c+468,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+469,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_out_wready", false,-1);
    tracep->declBit(c+120,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+103,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+470,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+121,"auto_out_wlast", false,-1);
    tracep->declBit(c+210,"auto_out_bready", false,-1);
    tracep->declBit(c+211,"auto_out_bvalid", false,-1);
    tracep->declBus(c+205,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+212,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+230,"auto_out_arready", false,-1);
    tracep->declBit(c+140,"auto_out_arvalid", false,-1);
    tracep->declBus(c+472,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+107,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+473,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+901,"auto_out_rready", false,-1);
    tracep->declBit(c+206,"auto_out_rvalid", false,-1);
    tracep->declBus(c+207,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+215,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+609,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+250,"io_deq_ready", false,-1);
    tracep->declBit(c+610,"io_deq_valid", false,-1);
    tracep->declBit(c+611,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+611,"ram_real_last", false,-1);
    tracep->declBit(c+610,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+612,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+613,"io_enq_ready", false,-1);
    tracep->declBit(c+43,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+251,"io_deq_ready", false,-1);
    tracep->declBit(c+614,"io_deq_valid", false,-1);
    tracep->declBit(c+615,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+615,"ram_real_last", false,-1);
    tracep->declBit(c+614,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+616,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+617,"io_enq_ready", false,-1);
    tracep->declBit(c+44,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+252,"io_deq_ready", false,-1);
    tracep->declBit(c+618,"io_deq_valid", false,-1);
    tracep->declBit(c+619,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+619,"ram_real_last", false,-1);
    tracep->declBit(c+618,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+620,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+621,"io_enq_ready", false,-1);
    tracep->declBit(c+45,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+253,"io_deq_ready", false,-1);
    tracep->declBit(c+622,"io_deq_valid", false,-1);
    tracep->declBit(c+623,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+623,"ram_real_last", false,-1);
    tracep->declBit(c+622,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+624,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+625,"io_enq_ready", false,-1);
    tracep->declBit(c+46,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+254,"io_deq_ready", false,-1);
    tracep->declBit(c+626,"io_deq_valid", false,-1);
    tracep->declBit(c+627,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+627,"ram_real_last", false,-1);
    tracep->declBit(c+626,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+628,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+629,"io_enq_ready", false,-1);
    tracep->declBit(c+47,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+255,"io_deq_ready", false,-1);
    tracep->declBit(c+630,"io_deq_valid", false,-1);
    tracep->declBit(c+631,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+631,"ram_real_last", false,-1);
    tracep->declBit(c+630,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+632,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+633,"io_enq_ready", false,-1);
    tracep->declBit(c+48,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+256,"io_deq_ready", false,-1);
    tracep->declBit(c+634,"io_deq_valid", false,-1);
    tracep->declBit(c+635,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+635,"ram_real_last", false,-1);
    tracep->declBit(c+634,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+636,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+637,"io_enq_ready", false,-1);
    tracep->declBit(c+49,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+257,"io_deq_ready", false,-1);
    tracep->declBit(c+638,"io_deq_valid", false,-1);
    tracep->declBit(c+639,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+639,"ram_real_last", false,-1);
    tracep->declBit(c+638,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+640,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+641,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+258,"io_deq_ready", false,-1);
    tracep->declBit(c+642,"io_deq_valid", false,-1);
    tracep->declBit(c+643,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+643,"ram_real_last", false,-1);
    tracep->declBit(c+642,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+644,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+645,"io_enq_ready", false,-1);
    tracep->declBit(c+51,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+259,"io_deq_ready", false,-1);
    tracep->declBit(c+646,"io_deq_valid", false,-1);
    tracep->declBit(c+647,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+647,"ram_real_last", false,-1);
    tracep->declBit(c+646,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+648,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+649,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+260,"io_deq_ready", false,-1);
    tracep->declBit(c+650,"io_deq_valid", false,-1);
    tracep->declBit(c+651,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+651,"ram_real_last", false,-1);
    tracep->declBit(c+650,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+652,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+653,"io_enq_ready", false,-1);
    tracep->declBit(c+53,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+261,"io_deq_ready", false,-1);
    tracep->declBit(c+654,"io_deq_valid", false,-1);
    tracep->declBit(c+655,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+655,"ram_real_last", false,-1);
    tracep->declBit(c+654,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+656,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+657,"io_enq_ready", false,-1);
    tracep->declBit(c+54,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+262,"io_deq_ready", false,-1);
    tracep->declBit(c+658,"io_deq_valid", false,-1);
    tracep->declBit(c+659,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+659,"ram_real_last", false,-1);
    tracep->declBit(c+658,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+660,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+661,"io_enq_ready", false,-1);
    tracep->declBit(c+55,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+263,"io_deq_ready", false,-1);
    tracep->declBit(c+662,"io_deq_valid", false,-1);
    tracep->declBit(c+663,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+663,"ram_real_last", false,-1);
    tracep->declBit(c+662,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+664,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+665,"io_enq_ready", false,-1);
    tracep->declBit(c+56,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+264,"io_deq_ready", false,-1);
    tracep->declBit(c+666,"io_deq_valid", false,-1);
    tracep->declBit(c+667,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+667,"ram_real_last", false,-1);
    tracep->declBit(c+666,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+668,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+669,"io_enq_ready", false,-1);
    tracep->declBit(c+57,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+265,"io_deq_ready", false,-1);
    tracep->declBit(c+670,"io_deq_valid", false,-1);
    tracep->declBit(c+671,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+671,"ram_real_last", false,-1);
    tracep->declBit(c+670,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+672,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+673,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+266,"io_deq_ready", false,-1);
    tracep->declBit(c+674,"io_deq_valid", false,-1);
    tracep->declBit(c+675,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+675,"ram_real_last", false,-1);
    tracep->declBit(c+674,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+676,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+677,"io_enq_ready", false,-1);
    tracep->declBit(c+59,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+267,"io_deq_ready", false,-1);
    tracep->declBit(c+678,"io_deq_valid", false,-1);
    tracep->declBit(c+679,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+679,"ram_real_last", false,-1);
    tracep->declBit(c+678,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+680,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+681,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+268,"io_deq_ready", false,-1);
    tracep->declBit(c+682,"io_deq_valid", false,-1);
    tracep->declBit(c+683,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+683,"ram_real_last", false,-1);
    tracep->declBit(c+682,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+684,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+685,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+269,"io_deq_ready", false,-1);
    tracep->declBit(c+686,"io_deq_valid", false,-1);
    tracep->declBit(c+687,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+687,"ram_real_last", false,-1);
    tracep->declBit(c+686,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+688,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+689,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+270,"io_deq_ready", false,-1);
    tracep->declBit(c+690,"io_deq_valid", false,-1);
    tracep->declBit(c+691,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+691,"ram_real_last", false,-1);
    tracep->declBit(c+690,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+692,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+693,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+271,"io_deq_ready", false,-1);
    tracep->declBit(c+694,"io_deq_valid", false,-1);
    tracep->declBit(c+695,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+695,"ram_real_last", false,-1);
    tracep->declBit(c+694,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+696,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+697,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+272,"io_deq_ready", false,-1);
    tracep->declBit(c+698,"io_deq_valid", false,-1);
    tracep->declBit(c+699,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+699,"ram_real_last", false,-1);
    tracep->declBit(c+698,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+700,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+701,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+273,"io_deq_ready", false,-1);
    tracep->declBit(c+702,"io_deq_valid", false,-1);
    tracep->declBit(c+703,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+703,"ram_real_last", false,-1);
    tracep->declBit(c+702,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+704,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+705,"io_enq_ready", false,-1);
    tracep->declBit(c+66,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+274,"io_deq_ready", false,-1);
    tracep->declBit(c+706,"io_deq_valid", false,-1);
    tracep->declBit(c+707,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+707,"ram_real_last", false,-1);
    tracep->declBit(c+706,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+708,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+709,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBit(c+487,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+275,"io_deq_ready", false,-1);
    tracep->declBit(c+710,"io_deq_valid", false,-1);
    tracep->declBit(c+711,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+711,"ram_real_last", false,-1);
    tracep->declBit(c+710,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+712,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+713,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+276,"io_deq_ready", false,-1);
    tracep->declBit(c+714,"io_deq_valid", false,-1);
    tracep->declBit(c+715,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+715,"ram_real_last", false,-1);
    tracep->declBit(c+714,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+716,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+717,"io_enq_ready", false,-1);
    tracep->declBit(c+69,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+277,"io_deq_ready", false,-1);
    tracep->declBit(c+718,"io_deq_valid", false,-1);
    tracep->declBit(c+719,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+719,"ram_real_last", false,-1);
    tracep->declBit(c+718,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+720,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+721,"io_enq_ready", false,-1);
    tracep->declBit(c+70,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+278,"io_deq_ready", false,-1);
    tracep->declBit(c+722,"io_deq_valid", false,-1);
    tracep->declBit(c+723,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+723,"ram_real_last", false,-1);
    tracep->declBit(c+722,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+724,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+725,"io_enq_ready", false,-1);
    tracep->declBit(c+71,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+279,"io_deq_ready", false,-1);
    tracep->declBit(c+726,"io_deq_valid", false,-1);
    tracep->declBit(c+727,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+727,"ram_real_last", false,-1);
    tracep->declBit(c+726,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+728,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+729,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+280,"io_deq_ready", false,-1);
    tracep->declBit(c+730,"io_deq_valid", false,-1);
    tracep->declBit(c+731,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+731,"ram_real_last", false,-1);
    tracep->declBit(c+730,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+732,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+733,"io_enq_ready", false,-1);
    tracep->declBit(c+73,"io_enq_valid", false,-1);
    tracep->declBit(c+488,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+281,"io_deq_ready", false,-1);
    tracep->declBit(c+734,"io_deq_valid", false,-1);
    tracep->declBit(c+735,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+735,"ram_real_last", false,-1);
    tracep->declBit(c+734,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+736,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+950,"reset", false,-1);
    tracep->declBit(c+484,"auto_master_out_awready", false,-1);
    tracep->declBit(c+113,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+980,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+485,"auto_master_out_wready", false,-1);
    tracep->declBit(c+113,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+115,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+981,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+970,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+970,"auto_master_out_bready", false,-1);
    tracep->declBit(c+204,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+205,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+39,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+486,"auto_master_out_arready", false,-1);
    tracep->declBit(c+117,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+980,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+901,"auto_master_out_rready", false,-1);
    tracep->declBit(c+206,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+207,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+945,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+947,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+950,"reset", false,-1);
    tracep->declBit(c+484,"io_master_awready", false,-1);
    tracep->declBit(c+485,"io_master_wready", false,-1);
    tracep->declBit(c+204,"io_master_bvalid", false,-1);
    tracep->declBus(c+39,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+205,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+486,"io_master_arready", false,-1);
    tracep->declBit(c+206,"io_master_rvalid", false,-1);
    tracep->declBus(c+947,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+945,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+40,"io_master_rlast", false,-1);
    tracep->declBus(c+207,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+970,"io_slave_awvalid", false,-1);
    tracep->declBus(c+985,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+980,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+981,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+983,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+970,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+986,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+981,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+970,"io_slave_wlast", false,-1);
    tracep->declBit(c+970,"io_slave_bready", false,-1);
    tracep->declBit(c+970,"io_slave_arvalid", false,-1);
    tracep->declBus(c+985,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+980,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+981,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+982,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+970,"io_slave_rready", false,-1);
    tracep->declBit(c+970,"io_interrupt", false,-1);
    tracep->declBit(c+113,"io_master_awvalid", false,-1);
    tracep->declBus(c+114,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+980,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+981,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+983,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+113,"io_master_wvalid", false,-1);
    tracep->declQuad(c+115,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+981,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+970,"io_master_wlast", false,-1);
    tracep->declBit(c+970,"io_master_bready", false,-1);
    tracep->declBit(c+117,"io_master_arvalid", false,-1);
    tracep->declBus(c+118,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+980,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+981,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+982,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+901,"io_master_rready", false,-1);
    tracep->declBit(c+970,"io_slave_awready", false,-1);
    tracep->declBit(c+970,"io_slave_wready", false,-1);
    tracep->declBit(c+970,"io_slave_bvalid", false,-1);
    tracep->declBus(c+983,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+980,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+970,"io_slave_arready", false,-1);
    tracep->declBit(c+970,"io_slave_rvalid", false,-1);
    tracep->declBus(c+983,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+986,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+970,"io_slave_rlast", false,-1);
    tracep->declBus(c+980,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+902,"io_in2ifu_ar_valid", false,-1);
    tracep->declBus(c+737,"io_in2ifu_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+903,"io_in2ifu_r_ready", false,-1);
    tracep->declBit(c+1,"io_in2lsu_ar_valid", false,-1);
    tracep->declBus(c+157,"io_in2lsu_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+2,"io_in2lsu_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+3,"io_in2lsu_aw_valid", false,-1);
    tracep->declBus(c+157,"io_in2lsu_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+3,"io_in2lsu_w_valid", false,-1);
    tracep->declBus(c+27,"io_in2lsu_w_bits_data", false,-1, 31,0);
    tracep->declBit(c+904,"io_isIFU", false,-1);
    tracep->declBit(c+905,"io_isLSU", false,-1);
    tracep->declBus(c+4,"io_resIFU", false,-1, 31,0);
    tracep->declBus(c+823,"io_resLSU", false,-1, 31,0);
    tracep->declBus(c+4,"io_in2ifu_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+823,"io_in2lsu_r_bits_data", false,-1, 31,0);
    tracep->declBit(c+117,"io_out_ar_valid", false,-1);
    tracep->declBus(c+118,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+158,"io_out_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+901,"io_out_r_ready", false,-1);
    tracep->declBit(c+113,"io_out_aw_valid", false,-1);
    tracep->declBus(c+114,"io_out_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_out_w_valid", false,-1);
    tracep->declBus(c+159,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+906,"exec", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+5,"io_bundleControlIn_isALUSrc", false,-1);
    tracep->declBit(c+6,"io_bundleControlIn_isJump", false,-1);
    tracep->declBit(c+7,"io_bundleControlIn_isBranch", false,-1);
    tracep->declBit(c+8,"io_bundleControlIn_isJAL", false,-1);
    tracep->declBit(c+9,"io_bundleControlIn_writeEnable", false,-1);
    tracep->declBit(c+1,"io_bundleControlIn_isLoad", false,-1);
    tracep->declBit(c+3,"io_bundleControlIn_isStore", false,-1);
    tracep->declBit(c+10,"io_bundleControlIn_isUnsigned", false,-1);
    tracep->declBit(c+11,"io_bundleControlIn_isContext", false,-1);
    tracep->declBus(c+12,"io_bundleControlIn_csrType", false,-1, 3,0);
    tracep->declBus(c+13,"io_bundleControlIn_lsuType", false,-1, 3,0);
    tracep->declBus(c+14,"io_bundleControlIn_aluType", false,-1, 3,0);
    tracep->declBit(c+5,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+8,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+7,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+10,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+14,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBit(c+6,"io_bundleControlOut_isJump", false,-1);
    tracep->declBit(c+7,"io_bundleControlOut_isBranch", false,-1);
    tracep->declBit(c+9,"io_bundleControlOut_writeEnable", false,-1);
    tracep->declBit(c+1,"io_bundleControlOut_isLoad", false,-1);
    tracep->declBit(c+3,"io_bundleControlOut_isStore", false,-1);
    tracep->declBit(c+10,"io_bundleControlOut_isUnsigned", false,-1);
    tracep->declBit(c+11,"io_bundleControlOut_isContext", false,-1);
    tracep->declBus(c+12,"io_bundleControlOut_csrType", false,-1, 3,0);
    tracep->declBus(c+13,"io_bundleControlOut_lsuType", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+5,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+8,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+7,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+10,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+14,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBus(c+28,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+27,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+160,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+15,"io_imm", false,-1, 31,0);
    tracep->declBus(c+737,"io_pc", false,-1, 31,0);
    tracep->declBus(c+907,"io_ifuStatus", false,-1, 31,0);
    tracep->declBit(c+38,"io_resBranch", false,-1);
    tracep->declBus(c+157,"io_res", false,-1, 31,0);
    tracep->declBit(c+905,"io_out_aw_valid", false,-1);
    tracep->declBus(c+27,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+161,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+162,"operand1", false,-1, 31,0);
    tracep->declBus(c+163,"operand2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("getPC ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+950,"reset", false,-1);
    tracep->declBus(c+737,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+4,"io_inst", false,-1, 31,0);
    tracep->declBit(c+5,"io_BundleControl_isALUSrc", false,-1);
    tracep->declBit(c+6,"io_BundleControl_isJump", false,-1);
    tracep->declBit(c+7,"io_BundleControl_isBranch", false,-1);
    tracep->declBit(c+8,"io_BundleControl_isJAL", false,-1);
    tracep->declBit(c+9,"io_BundleControl_writeEnable", false,-1);
    tracep->declBit(c+1,"io_BundleControl_isLoad", false,-1);
    tracep->declBit(c+3,"io_BundleControl_isStore", false,-1);
    tracep->declBit(c+10,"io_BundleControl_isUnsigned", false,-1);
    tracep->declBit(c+11,"io_BundleControl_isContext", false,-1);
    tracep->declBus(c+12,"io_BundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+13,"io_BundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+14,"io_BundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+16,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+17,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+18,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+15,"io_imm", false,-1, 31,0);
    tracep->declBit(c+19,"io_isEbreak", false,-1);
    tracep->declBus(c+15,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+950,"reset", false,-1);
    tracep->declBit(c+6,"io_isJump", false,-1);
    tracep->declBit(c+7,"io_isBranch", false,-1);
    tracep->declBit(c+38,"io_resBranch", false,-1);
    tracep->declBus(c+823,"io_addrTarget", false,-1, 31,0);
    tracep->declBus(c+12,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+29,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+738,"io_lsuStatus", false,-1, 31,0);
    tracep->declBit(c+486,"io_out_ar_ready", false,-1);
    tracep->declBus(c+4,"io_out_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+737,"io_pc", false,-1, 31,0);
    tracep->declBus(c+4,"io_inst", false,-1, 31,0);
    tracep->declBit(c+904,"io_isIFU", false,-1);
    tracep->declBus(c+907,"io_status", false,-1, 31,0);
    tracep->declBit(c+902,"io_out_ar_valid", false,-1);
    tracep->declBus(c+737,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+903,"io_out_r_ready", false,-1);
    tracep->declBus(c+908,"state", false,-1, 1,0);
    tracep->declBus(c+737,"pcReg", false,-1, 31,0);
    tracep->declBit(c+739,"resBranch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+950,"reset", false,-1);
    tracep->declBit(c+1,"io_isLoad", false,-1);
    tracep->declBit(c+3,"io_isStore", false,-1);
    tracep->declBus(c+157,"io_addr", false,-1, 31,0);
    tracep->declBus(c+2,"io_len", false,-1, 31,0);
    tracep->declBit(c+905,"io_in_aw_valid", false,-1);
    tracep->declBus(c+27,"io_in_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+823,"io_out_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+823,"io_res", false,-1, 31,0);
    tracep->declBit(c+905,"io_isLSU", false,-1);
    tracep->declBus(c+738,"io_status", false,-1, 31,0);
    tracep->declBit(c+1,"io_out_ar_valid", false,-1);
    tracep->declBus(c+157,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+2,"io_out_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+3,"io_out_aw_valid", false,-1);
    tracep->declBus(c+157,"io_out_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+3,"io_out_w_valid", false,-1);
    tracep->declBus(c+27,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+740,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+117,"io_in_ar_valid", false,-1);
    tracep->declBus(c+118,"io_in_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+158,"io_in_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+113,"io_in_aw_valid", false,-1);
    tracep->declBus(c+159,"io_in_w_bits_data", false,-1, 31,0);
    tracep->declBit(c+904,"io_isIFU", false,-1);
    tracep->declBit(c+905,"io_isLSU", false,-1);
    tracep->declBus(c+4,"io_resIFU", false,-1, 31,0);
    tracep->declBus(c+823,"io_resLSU", false,-1, 31,0);
    tracep->declBus(c+909,"dataSRAM_io_len_r", false,-1, 31,0);
    tracep->declBus(c+910,"dataSRAM_io_wdata_r", false,-1, 31,0);
    tracep->declBus(c+911,"dataSRAM_io_addr_r", false,-1, 31,0);
    tracep->declBit(c+912,"dataSRAM_io_isLoad_r", false,-1);
    tracep->declBit(c+913,"dataSRAM_io_isStore_r", false,-1);
    tracep->declBus(c+741,"instSRAM_io_pc_r", false,-1, 31,0);
    tracep->pushNamePrefix("dataSRAM ");
    tracep->declBit(c+912,"isLoad", false,-1);
    tracep->declBit(c+913,"isStore", false,-1);
    tracep->declBus(c+911,"addr", false,-1, 31,0);
    tracep->declBus(c+909,"len", false,-1, 31,0);
    tracep->declBus(c+910,"wdata", false,-1, 31,0);
    tracep->declBus(c+823,"res", false,-1, 31,0);
    tracep->declBit(c+824,"load_flag", false,-1);
    tracep->declBit(c+825,"store_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instSRAM ");
    tracep->declBus(c+741,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+950,"reset", false,-1);
    tracep->declBit(c+19,"isEbreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+9,"io_writeEnable", false,-1);
    tracep->declBit(c+6,"io_isJump", false,-1);
    tracep->declBit(c+1,"io_isLoad", false,-1);
    tracep->declBit(c+10,"io_isUnsigned", false,-1);
    tracep->declBit(c+11,"io_isContext", false,-1);
    tracep->declBus(c+15,"io_imm", false,-1, 31,0);
    tracep->declBus(c+12,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+13,"io_lsuType", false,-1, 3,0);
    tracep->declBus(c+737,"io_pc", false,-1, 31,0);
    tracep->declBus(c+823,"io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+16,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+17,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+18,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+738,"io_lsuStatus", false,-1, 31,0);
    tracep->declBus(c+28,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+27,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+160,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+29,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+742,"snpc", false,-1, 31,0);
    tracep->declBus(c+951,"dataWrite", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+20,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+984,"R0_en", false,-1);
    tracep->declBit(c+914,"R0_clk", false,-1);
    tracep->declBus(c+988,"R1_addr", false,-1, 9,0);
    tracep->declBit(c+21,"R1_en", false,-1);
    tracep->declBit(c+914,"R1_clk", false,-1);
    tracep->declBus(c+989,"R2_addr", false,-1, 9,0);
    tracep->declBit(c+22,"R2_en", false,-1);
    tracep->declBit(c+914,"R2_clk", false,-1);
    tracep->declBus(c+20,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+23,"W0_en", false,-1);
    tracep->declBit(c+914,"W0_clk", false,-1);
    tracep->declBus(c+951,"W0_data", false,-1, 31,0);
    tracep->declBus(c+20,"W1_addr", false,-1, 9,0);
    tracep->declBit(c+24,"W1_en", false,-1);
    tracep->declBit(c+914,"W1_clk", false,-1);
    tracep->declBus(c+951,"W1_data", false,-1, 31,0);
    tracep->declBus(c+989,"W2_addr", false,-1, 9,0);
    tracep->declBit(c+21,"W2_en", false,-1);
    tracep->declBit(c+914,"W2_clk", false,-1);
    tracep->declBus(c+742,"W2_data", false,-1, 31,0);
    tracep->declBus(c+990,"W3_addr", false,-1, 9,0);
    tracep->declBit(c+21,"W3_en", false,-1);
    tracep->declBit(c+914,"W3_clk", false,-1);
    tracep->declBus(c+991,"W3_data", false,-1, 31,0);
    tracep->declBus(c+992,"W4_addr", false,-1, 9,0);
    tracep->declBit(c+21,"W4_en", false,-1);
    tracep->declBit(c+914,"W4_clk", false,-1);
    tracep->declBus(c+993,"W4_data", false,-1, 31,0);
    tracep->declBus(c+992,"W5_addr", false,-1, 9,0);
    tracep->declBit(c+22,"W5_en", false,-1);
    tracep->declBit(c+914,"W5_clk", false,-1);
    tracep->declBus(c+993,"W5_data", false,-1, 31,0);
    tracep->declBus(c+160,"R0_data", false,-1, 31,0);
    tracep->declBus(c+30,"R1_data", false,-1, 31,0);
    tracep->declBus(c+31,"R2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+16,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+984,"R0_en", false,-1);
    tracep->declBit(c+914,"R0_clk", false,-1);
    tracep->declBus(c+17,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+984,"R1_en", false,-1);
    tracep->declBit(c+914,"R1_clk", false,-1);
    tracep->declBus(c+18,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+164,"W0_en", false,-1);
    tracep->declBit(c+914,"W0_clk", false,-1);
    tracep->declBus(c+742,"W0_data", false,-1, 31,0);
    tracep->declBus(c+18,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+165,"W1_en", false,-1);
    tracep->declBit(c+914,"W1_clk", false,-1);
    tracep->declBus(c+951,"W1_data", false,-1, 31,0);
    tracep->declBus(c+18,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+25,"W2_en", false,-1);
    tracep->declBit(c+914,"W2_clk", false,-1);
    tracep->declBus(c+160,"W2_data", false,-1, 31,0);
    tracep->declBus(c+18,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+26,"W3_en", false,-1);
    tracep->declBit(c+914,"W3_clk", false,-1);
    tracep->declBus(c+160,"W3_data", false,-1, 31,0);
    tracep->declBus(c+28,"R0_data", false,-1, 31,0);
    tracep->declBus(c+27,"R1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+743+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"io_d", false,-1);
    tracep->declBit(c+775,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"io_d", false,-1);
    tracep->declBit(c+775,"io_q", false,-1);
    tracep->declBit(c+775,"sync_0", false,-1);
    tracep->declBit(c+776,"sync_1", false,-1);
    tracep->declBit(c+777,"sync_2", false,-1);
    tracep->declBit(c+778,"sync_3", false,-1);
    tracep->declBit(c+779,"sync_4", false,-1);
    tracep->declBit(c+780,"sync_5", false,-1);
    tracep->declBit(c+781,"sync_6", false,-1);
    tracep->declBit(c+782,"sync_7", false,-1);
    tracep->declBit(c+783,"sync_8", false,-1);
    tracep->declBit(c+784,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+85,"auto_in_psel", false,-1);
    tracep->declBit(c+35,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+84,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+977,"auto_in_pready", false,-1);
    tracep->declBit(c+978,"auto_in_pslverr", false,-1);
    tracep->declBus(c+979,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+916,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+917,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+918,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+919,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+920,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+921,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+922,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+923,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+924,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+925,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+166,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+85,"in_psel", false,-1);
    tracep->declBit(c+35,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+977,"in_pready", false,-1);
    tracep->declBus(c+979,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+978,"in_pslverr", false,-1);
    tracep->declBus(c+916,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+917,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+918,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+919,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+920,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+921,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+922,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+923,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+924,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+925,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+83,"auto_in_psel", false,-1);
    tracep->declBit(c+34,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+84,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"auto_in_pready", false,-1);
    tracep->declBit(c+975,"auto_in_pslverr", false,-1);
    tracep->declBus(c+976,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+926,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+927,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+166,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+83,"in_psel", false,-1);
    tracep->declBit(c+34,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"in_pready", false,-1);
    tracep->declBus(c+976,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+975,"in_pslverr", false,-1);
    tracep->declBit(c+926,"ps2_clk", false,-1);
    tracep->declBit(c+927,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+141,"auto_in_awvalid", false,-1);
    tracep->declBit(c+142,"auto_in_wvalid", false,-1);
    tracep->declBit(c+552,"auto_in_arready", false,-1);
    tracep->declBit(c+143,"auto_in_arvalid", false,-1);
    tracep->declBus(c+472,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+473,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+949,"auto_in_rready", false,-1);
    tracep->declBit(c+553,"auto_in_rvalid", false,-1);
    tracep->declBus(c+554,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+555,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+553,"state", false,-1);
    tracep->declQuad(c+555,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+554,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+167,"raddr", false,-1, 31,0);
    tracep->declBit(c+168,"ren", false,-1);
    tracep->declBus(c+169,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+86,"auto_in_psel", false,-1);
    tracep->declBit(c+36,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+74,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+941,"auto_in_pready", false,-1);
    tracep->declBit(c+970,"auto_in_pslverr", false,-1);
    tracep->declBus(c+467,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+937,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+938,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+198,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+74,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+86,"in_psel", false,-1);
    tracep->declBit(c+36,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+941,"in_pready", false,-1);
    tracep->declBus(c+467,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+970,"in_pslverr", false,-1);
    tracep->declBit(c+937,"qspi_sck", false,-1);
    tracep->declBit(c+938,"qspi_ce_n", false,-1);
    tracep->declBus(c+198,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+198,"din", false,-1, 3,0);
    tracep->declBus(c+282,"dout", false,-1, 3,0);
    tracep->declBus(c+283,"douten", false,-1, 3,0);
    tracep->declBit(c+952,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+914,"clk_i", false,-1);
    tracep->declBit(c+915,"rst_i", false,-1);
    tracep->declBus(c+74,"adr_i", false,-1, 31,0);
    tracep->declBus(c+77,"dat_i", false,-1, 31,0);
    tracep->declBus(c+467,"dat_o", false,-1, 31,0);
    tracep->declBus(c+78,"sel_i", false,-1, 3,0);
    tracep->declBit(c+86,"cyc_i", false,-1);
    tracep->declBit(c+86,"stb_i", false,-1);
    tracep->declBit(c+952,"ack_o", false,-1);
    tracep->declBit(c+76,"we_i", false,-1);
    tracep->declBit(c+937,"sck", false,-1);
    tracep->declBit(c+938,"ce_n", false,-1);
    tracep->declBus(c+198,"din", false,-1, 3,0);
    tracep->declBus(c+282,"dout", false,-1, 3,0);
    tracep->declBus(c+283,"douten", false,-1, 3,0);
    tracep->declBus(c+994,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+995,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+837,"mr_sck", false,-1);
    tracep->declBit(c+307,"mr_ce_n", false,-1);
    tracep->declBus(c+198,"mr_din", false,-1, 3,0);
    tracep->declBus(c+953,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+838,"mr_doe", false,-1);
    tracep->declBit(c+308,"mw_sck", false,-1);
    tracep->declBit(c+309,"mw_ce_n", false,-1);
    tracep->declBus(c+198,"mw_din", false,-1, 3,0);
    tracep->declBus(c+284,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+310,"mw_doe", false,-1);
    tracep->declBit(c+285,"mr_rd", false,-1);
    tracep->declBit(c+839,"mr_done", false,-1);
    tracep->declBit(c+286,"mw_wr", false,-1);
    tracep->declBit(c+287,"mw_done", false,-1);
    tracep->declBit(c+86,"wb_valid", false,-1);
    tracep->declBit(c+170,"wb_we", false,-1);
    tracep->declBit(c+171,"wb_re", false,-1);
    tracep->declBit(c+311,"state", false,-1);
    tracep->declBit(c+288,"nstate", false,-1);
    tracep->declBus(c+172,"size", false,-1, 2,0);
    tracep->declBus(c+173,"byte0", false,-1, 7,0);
    tracep->declBus(c+174,"byte1", false,-1, 7,0);
    tracep->declBus(c+175,"byte2", false,-1, 7,0);
    tracep->declBus(c+176,"byte3", false,-1, 7,0);
    tracep->declBus(c+177,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+954,"rst_n", false,-1);
    tracep->declBus(c+178,"addr", false,-1, 23,0);
    tracep->declBit(c+285,"rd", false,-1);
    tracep->declBus(c+996,"size", false,-1, 2,0);
    tracep->declBit(c+839,"done", false,-1);
    tracep->declBus(c+467,"line", false,-1, 31,0);
    tracep->declBit(c+837,"sck", false,-1);
    tracep->declBit(c+307,"ce_n", false,-1);
    tracep->declBus(c+198,"din", false,-1, 3,0);
    tracep->declBus(c+953,"dout", false,-1, 3,0);
    tracep->declBit(c+838,"douten", false,-1);
    tracep->declBus(c+994,"IDLE", false,-1, 0,0);
    tracep->declBus(c+995,"READ", false,-1, 0,0);
    tracep->declBus(c+997,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+312,"state", false,-1);
    tracep->declBit(c+289,"nstate", false,-1);
    tracep->declBus(c+840,"counter", false,-1, 7,0);
    tracep->declBus(c+313,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+785+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+998,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+841,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+954,"rst_n", false,-1);
    tracep->declBus(c+179,"addr", false,-1, 23,0);
    tracep->declBus(c+177,"line", false,-1, 31,0);
    tracep->declBus(c+172,"size", false,-1, 2,0);
    tracep->declBit(c+286,"wr", false,-1);
    tracep->declBit(c+287,"done", false,-1);
    tracep->declBit(c+308,"sck", false,-1);
    tracep->declBit(c+309,"ce_n", false,-1);
    tracep->declBus(c+198,"din", false,-1, 3,0);
    tracep->declBus(c+284,"dout", false,-1, 3,0);
    tracep->declBit(c+310,"douten", false,-1);
    tracep->declBus(c+994,"IDLE", false,-1, 0,0);
    tracep->declBus(c+995,"WRITE", false,-1, 0,0);
    tracep->declBus(c+180,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+314,"state", false,-1);
    tracep->declBit(c+290,"nstate", false,-1);
    tracep->declBus(c+315,"counter", false,-1, 7,0);
    tracep->declBus(c+316,"saddr", false,-1, 23,0);
    tracep->declBus(c+999,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+80,"auto_in_psel", false,-1);
    tracep->declBit(c+32,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+74,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+834,"auto_in_pready", false,-1);
    tracep->declBit(c+970,"auto_in_pslverr", false,-1);
    tracep->declBus(c+835,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+939,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+298,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+299,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+300,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+301,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+302,"sdram_bundle_we", false,-1);
    tracep->declBus(c+303,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+304,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+305,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+833,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+74,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+80,"in_psel", false,-1);
    tracep->declBit(c+32,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+834,"in_pready", false,-1);
    tracep->declBus(c+835,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+970,"in_pslverr", false,-1);
    tracep->declBit(c+939,"sdram_clk", false,-1);
    tracep->declBit(c+298,"sdram_cke", false,-1);
    tracep->declBit(c+299,"sdram_cs", false,-1);
    tracep->declBit(c+300,"sdram_ras", false,-1);
    tracep->declBit(c+301,"sdram_cas", false,-1);
    tracep->declBit(c+302,"sdram_we", false,-1);
    tracep->declBus(c+303,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+304,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+305,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+833,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+842,"sdram_dout_en", false,-1);
    tracep->declBus(c+843,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+789,"state", false,-1, 1,0);
    tracep->declBit(c+844,"req_accept", false,-1);
    tracep->declBit(c+181,"is_read", false,-1);
    tracep->declBit(c+182,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+914,"clk_i", false,-1);
    tracep->declBit(c+915,"rst_i", false,-1);
    tracep->declBus(c+183,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+181,"inport_rd_i", false,-1);
    tracep->declBus(c+981,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+74,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+77,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+833,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+844,"inport_accept_o", false,-1);
    tracep->declBit(c+834,"inport_ack_o", false,-1);
    tracep->declBit(c+970,"inport_error_o", false,-1);
    tracep->declBus(c+835,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+939,"sdram_clk_o", false,-1);
    tracep->declBit(c+298,"sdram_cke_o", false,-1);
    tracep->declBit(c+299,"sdram_cs_o", false,-1);
    tracep->declBit(c+300,"sdram_ras_o", false,-1);
    tracep->declBit(c+301,"sdram_cas_o", false,-1);
    tracep->declBit(c+302,"sdram_we_o", false,-1);
    tracep->declBus(c+305,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+303,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+304,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+843,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+842,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1000,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1001,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1002,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1003,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1003,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1003,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1004,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1005,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1006,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1007,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1008,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1004,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1009,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1010,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1011,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1012,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1013,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1014,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1015,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+980,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1016,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1004,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+980,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1015,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1014,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1010,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1012,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1011,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1013,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1009,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1017,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1018,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1019,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1019,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1020,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1019,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1003,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1003,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1021,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+74,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+183,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+181,"ram_rd_w", false,-1);
    tracep->declBit(c+844,"ram_accept_w", false,-1);
    tracep->declBus(c+77,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+835,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+834,"ram_ack_w", false,-1);
    tracep->declBit(c+184,"ram_req_w", false,-1);
    tracep->declBus(c+317,"command_q", false,-1, 3,0);
    tracep->declBus(c+303,"addr_q", false,-1, 12,0);
    tracep->declBus(c+843,"data_q", false,-1, 15,0);
    tracep->declBit(c+845,"data_rd_en_q", false,-1);
    tracep->declBus(c+305,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+298,"cke_q", false,-1);
    tracep->declBus(c+304,"bank_q", false,-1, 1,0);
    tracep->declBus(c+846,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+318,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+833,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+319,"refresh_q", false,-1);
    tracep->declBus(c+320,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+321+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+847,"state_q", false,-1, 3,0);
    tracep->declBus(c+291,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+292,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+325,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+326,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+185,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+186,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+187,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1004,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+327,"delay_q", false,-1, 3,0);
    tracep->declBus(c+293,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1022,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+328,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+848,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+849,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+329,"idx", false,-1, 31,0);
    tracep->declBus(c+850,"rd_q", false,-1, 3,0);
    tracep->declBit(c+834,"ack_q", false,-1);
    tracep->declArray(c+851,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+90,"auto_in_psel", false,-1);
    tracep->declBit(c+91,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+82,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+306,"auto_in_pready", false,-1);
    tracep->declBit(c+970,"auto_in_pslverr", false,-1);
    tracep->declBus(c+836,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+296,"spi_bundle_sck", false,-1);
    tracep->declBus(c+297,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+832,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+936,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1023,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1024,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1025,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+188,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+90,"in_psel", false,-1);
    tracep->declBit(c+91,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+306,"in_pready", false,-1);
    tracep->declBus(c+836,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+970,"in_pslverr", false,-1);
    tracep->declBit(c+296,"spi_sck", false,-1);
    tracep->declBus(c+297,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+832,"spi_mosi", false,-1);
    tracep->declBit(c+936,"spi_miso", false,-1);
    tracep->declBit(c+330,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1026,"Tp", false,-1, 31,0);
    tracep->declBit(c+914,"wb_clk_i", false,-1);
    tracep->declBit(c+915,"wb_rst_i", false,-1);
    tracep->declBus(c+189,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+77,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+836,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+78,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+76,"wb_we_i", false,-1);
    tracep->declBit(c+90,"wb_stb_i", false,-1);
    tracep->declBit(c+91,"wb_cyc_i", false,-1);
    tracep->declBit(c+306,"wb_ack_o", false,-1);
    tracep->declBit(c+970,"wb_err_o", false,-1);
    tracep->declBit(c+330,"wb_int_o", false,-1);
    tracep->declBus(c+297,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+296,"sclk_pad_o", false,-1);
    tracep->declBit(c+832,"mosi_pad_o", false,-1);
    tracep->declBit(c+936,"miso_pad_i", false,-1);
    tracep->declBus(c+331,"divider", false,-1, 15,0);
    tracep->declBus(c+332,"ctrl", false,-1, 13,0);
    tracep->declBus(c+333,"ss", false,-1, 7,0);
    tracep->declBus(c+294,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+334,"rx", false,-1, 127,0);
    tracep->declBit(c+338,"rx_negedge", false,-1);
    tracep->declBit(c+339,"tx_negedge", false,-1);
    tracep->declBus(c+340,"char_len", false,-1, 6,0);
    tracep->declBit(c+341,"go", false,-1);
    tracep->declBit(c+342,"lsb", false,-1);
    tracep->declBit(c+343,"ie", false,-1);
    tracep->declBit(c+344,"ass", false,-1);
    tracep->declBit(c+190,"spi_divider_sel", false,-1);
    tracep->declBit(c+191,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+192,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+193,"spi_ss_sel", false,-1);
    tracep->declBit(c+345,"tip", false,-1);
    tracep->declBit(c+346,"pos_edge", false,-1);
    tracep->declBit(c+347,"neg_edge", false,-1);
    tracep->declBit(c+348,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1026,"Tp", false,-1, 31,0);
    tracep->declBit(c+914,"clk_in", false,-1);
    tracep->declBit(c+915,"rst", false,-1);
    tracep->declBit(c+345,"enable", false,-1);
    tracep->declBit(c+341,"go", false,-1);
    tracep->declBit(c+348,"last_clk", false,-1);
    tracep->declBus(c+331,"divider", false,-1, 15,0);
    tracep->declBit(c+296,"clk_out", false,-1);
    tracep->declBit(c+346,"pos_edge", false,-1);
    tracep->declBit(c+347,"neg_edge", false,-1);
    tracep->declBus(c+349,"cnt", false,-1, 15,0);
    tracep->declBit(c+350,"cnt_zero", false,-1);
    tracep->declBit(c+351,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1026,"Tp", false,-1, 31,0);
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+915,"rst", false,-1);
    tracep->declBus(c+194,"latch", false,-1, 3,0);
    tracep->declBus(c+78,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+340,"len", false,-1, 6,0);
    tracep->declBit(c+342,"lsb", false,-1);
    tracep->declBit(c+341,"go", false,-1);
    tracep->declBit(c+346,"pos_edge", false,-1);
    tracep->declBit(c+347,"neg_edge", false,-1);
    tracep->declBit(c+338,"rx_negedge", false,-1);
    tracep->declBit(c+339,"tx_negedge", false,-1);
    tracep->declBit(c+345,"tip", false,-1);
    tracep->declBit(c+348,"last", false,-1);
    tracep->declBus(c+77,"p_in", false,-1, 31,0);
    tracep->declArray(c+334,"p_out", false,-1, 127,0);
    tracep->declBit(c+296,"s_clk", false,-1);
    tracep->declBit(c+936,"s_in", false,-1);
    tracep->declBit(c+832,"s_out", false,-1);
    tracep->declBus(c+352,"cnt", false,-1, 7,0);
    tracep->declArray(c+334,"data", false,-1, 127,0);
    tracep->declBus(c+353,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+354,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+355,"rx_clk", false,-1);
    tracep->declBit(c+356,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+87,"auto_in_psel", false,-1);
    tracep->declBit(c+88,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+84,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+89,"auto_in_pready", false,-1);
    tracep->declBit(c+970,"auto_in_pslverr", false,-1);
    tracep->declBus(c+942,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+934,"uart_rx", false,-1);
    tracep->declBit(c+935,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+87,"in_psel", false,-1);
    tracep->declBit(c+88,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+89,"in_pready", false,-1);
    tracep->declBit(c+970,"in_pslverr", false,-1);
    tracep->declBus(c+166,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+942,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"uart_rx", false,-1);
    tracep->declBit(c+935,"uart_tx", false,-1);
    tracep->declBit(c+357,"rtsn", false,-1);
    tracep->declBit(c+970,"ctsn", false,-1);
    tracep->declBit(c+358,"dtr_pad_o", false,-1);
    tracep->declBit(c+970,"dsr_pad_i", false,-1);
    tracep->declBit(c+970,"ri_pad_i", false,-1);
    tracep->declBit(c+970,"dcd_pad_i", false,-1);
    tracep->declBit(c+359,"interrupt", false,-1);
    tracep->declBit(c+955,"reg_we", false,-1);
    tracep->declBit(c+956,"reg_re", false,-1);
    tracep->declBus(c+195,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+196,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+790,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+295,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+360,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+915,"wb_rst_i", false,-1);
    tracep->declBus(c+195,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+197,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+295,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+955,"wb_we_i", false,-1);
    tracep->declBit(c+956,"wb_re_i", false,-1);
    tracep->declBit(c+935,"stx_pad_o", false,-1);
    tracep->declBit(c+934,"srx_pad_i", false,-1);
    tracep->declBus(c+1017,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+360,"rts_pad_o", false,-1);
    tracep->declBit(c+358,"dtr_pad_o", false,-1);
    tracep->declBit(c+359,"int_o", false,-1);
    tracep->declBit(c+854,"enable", false,-1);
    tracep->declBit(c+361,"srx_pad", false,-1);
    tracep->declBus(c+362,"ier", false,-1, 3,0);
    tracep->declBus(c+363,"iir", false,-1, 3,0);
    tracep->declBus(c+364,"fcr", false,-1, 1,0);
    tracep->declBus(c+365,"mcr", false,-1, 4,0);
    tracep->declBus(c+855,"lcr", false,-1, 7,0);
    tracep->declBus(c+366,"msr", false,-1, 7,0);
    tracep->declBus(c+856,"dl", false,-1, 15,0);
    tracep->declBus(c+367,"scratch", false,-1, 7,0);
    tracep->declBit(c+368,"start_dlc", false,-1);
    tracep->declBit(c+369,"lsr_mask_d", false,-1);
    tracep->declBit(c+370,"msi_reset", false,-1);
    tracep->declBus(c+857,"dlc", false,-1, 15,0);
    tracep->declBus(c+371,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+372,"rx_reset", false,-1);
    tracep->declBit(c+858,"tx_reset", false,-1);
    tracep->declBit(c+859,"dlab", false,-1);
    tracep->declBit(c+984,"cts_pad_i", false,-1);
    tracep->declBit(c+970,"dsr_pad_i", false,-1);
    tracep->declBit(c+970,"ri_pad_i", false,-1);
    tracep->declBit(c+970,"dcd_pad_i", false,-1);
    tracep->declBit(c+373,"loopback", false,-1);
    tracep->declBit(c+970,"cts", false,-1);
    tracep->declBit(c+984,"dsr", false,-1);
    tracep->declBit(c+984,"ri", false,-1);
    tracep->declBit(c+984,"dcd", false,-1);
    tracep->declBit(c+374,"cts_c", false,-1);
    tracep->declBit(c+375,"dsr_c", false,-1);
    tracep->declBit(c+376,"ri_c", false,-1);
    tracep->declBit(c+377,"dcd_c", false,-1);
    tracep->declBus(c+378,"lsr", false,-1, 7,0);
    tracep->declBit(c+860,"lsr0", false,-1);
    tracep->declBit(c+379,"lsr1", false,-1);
    tracep->declBit(c+380,"lsr2", false,-1);
    tracep->declBit(c+381,"lsr3", false,-1);
    tracep->declBit(c+382,"lsr4", false,-1);
    tracep->declBit(c+861,"lsr5", false,-1);
    tracep->declBit(c+862,"lsr6", false,-1);
    tracep->declBit(c+383,"lsr7", false,-1);
    tracep->declBit(c+384,"lsr0r", false,-1);
    tracep->declBit(c+385,"lsr1r", false,-1);
    tracep->declBit(c+386,"lsr2r", false,-1);
    tracep->declBit(c+387,"lsr3r", false,-1);
    tracep->declBit(c+388,"lsr4r", false,-1);
    tracep->declBit(c+389,"lsr5r", false,-1);
    tracep->declBit(c+390,"lsr6r", false,-1);
    tracep->declBit(c+391,"lsr7r", false,-1);
    tracep->declBit(c+957,"lsr_mask", false,-1);
    tracep->declBit(c+392,"rls_int", false,-1);
    tracep->declBit(c+393,"rda_int", false,-1);
    tracep->declBit(c+394,"ti_int", false,-1);
    tracep->declBit(c+395,"thre_int", false,-1);
    tracep->declBit(c+396,"ms_int", false,-1);
    tracep->declBit(c+863,"tf_push", false,-1);
    tracep->declBit(c+397,"rf_pop", false,-1);
    tracep->declBus(c+958,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+398,"rf_error_bit", false,-1);
    tracep->declBit(c+379,"rf_overrun", false,-1);
    tracep->declBit(c+864,"rf_push_pulse", false,-1);
    tracep->declBus(c+399,"rf_count", false,-1, 4,0);
    tracep->declBus(c+865,"tf_count", false,-1, 4,0);
    tracep->declBus(c+866,"tstate", false,-1, 2,0);
    tracep->declBus(c+867,"rstate", false,-1, 3,0);
    tracep->declBus(c+400,"counter_t", false,-1, 9,0);
    tracep->declBit(c+401,"thre_set_en", false,-1);
    tracep->declBus(c+402,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+868,"block_value", false,-1, 7,0);
    tracep->declBit(c+869,"serial_out", false,-1);
    tracep->declBit(c+870,"serial_in", false,-1);
    tracep->declBit(c+959,"lsr_mask_condition", false,-1);
    tracep->declBit(c+960,"iir_read", false,-1);
    tracep->declBit(c+961,"msr_read", false,-1);
    tracep->declBit(c+962,"fifo_read", false,-1);
    tracep->declBit(c+963,"fifo_write", false,-1);
    tracep->declBus(c+403,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+404,"lsr0_d", false,-1);
    tracep->declBit(c+405,"lsr1_d", false,-1);
    tracep->declBit(c+406,"lsr2_d", false,-1);
    tracep->declBit(c+407,"lsr3_d", false,-1);
    tracep->declBit(c+408,"lsr4_d", false,-1);
    tracep->declBit(c+409,"lsr5_d", false,-1);
    tracep->declBit(c+410,"lsr6_d", false,-1);
    tracep->declBit(c+411,"lsr7_d", false,-1);
    tracep->declBit(c+412,"rls_int_d", false,-1);
    tracep->declBit(c+413,"thre_int_d", false,-1);
    tracep->declBit(c+414,"ms_int_d", false,-1);
    tracep->declBit(c+415,"ti_int_d", false,-1);
    tracep->declBit(c+416,"rda_int_d", false,-1);
    tracep->declBit(c+417,"rls_int_rise", false,-1);
    tracep->declBit(c+418,"thre_int_rise", false,-1);
    tracep->declBit(c+419,"ms_int_rise", false,-1);
    tracep->declBit(c+420,"ti_int_rise", false,-1);
    tracep->declBit(c+421,"rda_int_rise", false,-1);
    tracep->declBit(c+422,"rls_int_pnd", false,-1);
    tracep->declBit(c+423,"rda_int_pnd", false,-1);
    tracep->declBit(c+424,"thre_int_pnd", false,-1);
    tracep->declBit(c+425,"ms_int_pnd", false,-1);
    tracep->declBit(c+426,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1026,"Tp", false,-1, 31,0);
    tracep->declBus(c+1026,"width", false,-1, 31,0);
    tracep->declBus(c+995,"init_value", false,-1, 0,0);
    tracep->declBit(c+915,"rst_i", false,-1);
    tracep->declBit(c+914,"clk_i", false,-1);
    tracep->declBit(c+970,"stage1_rst_i", false,-1);
    tracep->declBit(c+984,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+934,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+361,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+427,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+915,"wb_rst_i", false,-1);
    tracep->declBus(c+855,"lcr", false,-1, 7,0);
    tracep->declBit(c+397,"rf_pop", false,-1);
    tracep->declBit(c+870,"srx_pad_i", false,-1);
    tracep->declBit(c+854,"enable", false,-1);
    tracep->declBit(c+372,"rx_reset", false,-1);
    tracep->declBit(c+957,"lsr_mask", false,-1);
    tracep->declBus(c+400,"counter_t", false,-1, 9,0);
    tracep->declBus(c+399,"rf_count", false,-1, 4,0);
    tracep->declBus(c+958,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+379,"rf_overrun", false,-1);
    tracep->declBit(c+398,"rf_error_bit", false,-1);
    tracep->declBus(c+867,"rstate", false,-1, 3,0);
    tracep->declBit(c+864,"rf_push_pulse", false,-1);
    tracep->declBus(c+871,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+872,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+873,"rshift", false,-1, 7,0);
    tracep->declBit(c+874,"rparity", false,-1);
    tracep->declBit(c+875,"rparity_error", false,-1);
    tracep->declBit(c+876,"rframing_error", false,-1);
    tracep->declBit(c+428,"rbit_in", false,-1);
    tracep->declBit(c+877,"rparity_xor", false,-1);
    tracep->declBus(c+878,"counter_b", false,-1, 7,0);
    tracep->declBit(c+429,"rf_push_q", false,-1);
    tracep->declBus(c+879,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+880,"rf_push", false,-1);
    tracep->declBit(c+881,"break_error", false,-1);
    tracep->declBit(c+882,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+883,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+884,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+885,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+980,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1015,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1014,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1010,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1012,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1011,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1013,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1009,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1017,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1018,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1027,"sr_push", false,-1, 3,0);
    tracep->declBus(c+886,"toc_value", false,-1, 9,0);
    tracep->declBus(c+887,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1028,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1020,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1004,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1029,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+915,"wb_rst_i", false,-1);
    tracep->declBit(c+864,"push", false,-1);
    tracep->declBit(c+397,"pop", false,-1);
    tracep->declBus(c+879,"data_in", false,-1, 10,0);
    tracep->declBit(c+372,"fifo_reset", false,-1);
    tracep->declBit(c+957,"reset_status", false,-1);
    tracep->declBus(c+958,"data_out", false,-1, 10,0);
    tracep->declBit(c+379,"overrun", false,-1);
    tracep->declBus(c+399,"count", false,-1, 4,0);
    tracep->declBit(c+398,"error_bit", false,-1);
    tracep->declBus(c+964,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+430+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+888,"top", false,-1, 3,0);
    tracep->declBus(c+446,"bottom", false,-1, 3,0);
    tracep->declBus(c+889,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+447,"word0", false,-1, 2,0);
    tracep->declBus(c+448,"word1", false,-1, 2,0);
    tracep->declBus(c+449,"word2", false,-1, 2,0);
    tracep->declBus(c+450,"word3", false,-1, 2,0);
    tracep->declBus(c+451,"word4", false,-1, 2,0);
    tracep->declBus(c+452,"word5", false,-1, 2,0);
    tracep->declBus(c+453,"word6", false,-1, 2,0);
    tracep->declBus(c+454,"word7", false,-1, 2,0);
    tracep->declBus(c+455,"word8", false,-1, 2,0);
    tracep->declBus(c+456,"word9", false,-1, 2,0);
    tracep->declBus(c+457,"word10", false,-1, 2,0);
    tracep->declBus(c+458,"word11", false,-1, 2,0);
    tracep->declBus(c+459,"word12", false,-1, 2,0);
    tracep->declBus(c+460,"word13", false,-1, 2,0);
    tracep->declBus(c+461,"word14", false,-1, 2,0);
    tracep->declBus(c+462,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1004,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1025,"data_width", false,-1, 31,0);
    tracep->declBus(c+1020,"depth", false,-1, 31,0);
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+864,"we", false,-1);
    tracep->declBus(c+888,"a", false,-1, 3,0);
    tracep->declBus(c+446,"dpra", false,-1, 3,0);
    tracep->declBus(c+890,"di", false,-1, 7,0);
    tracep->declBus(c+964,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+791+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+915,"wb_rst_i", false,-1);
    tracep->declBus(c+855,"lcr", false,-1, 7,0);
    tracep->declBit(c+863,"tf_push", false,-1);
    tracep->declBus(c+197,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+854,"enable", false,-1);
    tracep->declBit(c+858,"tx_reset", false,-1);
    tracep->declBit(c+957,"lsr_mask", false,-1);
    tracep->declBit(c+869,"stx_pad_o", false,-1);
    tracep->declBus(c+866,"tstate", false,-1, 2,0);
    tracep->declBus(c+865,"tf_count", false,-1, 4,0);
    tracep->declBus(c+891,"counter", false,-1, 4,0);
    tracep->declBus(c+892,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+893,"shift_out", false,-1, 6,0);
    tracep->declBit(c+894,"stx_o_tmp", false,-1);
    tracep->declBit(c+895,"parity_xor", false,-1);
    tracep->declBit(c+896,"tf_pop", false,-1);
    tracep->declBit(c+897,"bit_out", false,-1);
    tracep->declBus(c+197,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+965,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+463,"tf_overrun", false,-1);
    tracep->declBus(c+982,"s_idle", false,-1, 2,0);
    tracep->declBus(c+969,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1030,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1031,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+996,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1032,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1025,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1020,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1004,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1029,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+915,"wb_rst_i", false,-1);
    tracep->declBit(c+863,"push", false,-1);
    tracep->declBit(c+896,"pop", false,-1);
    tracep->declBus(c+197,"data_in", false,-1, 7,0);
    tracep->declBit(c+858,"fifo_reset", false,-1);
    tracep->declBit(c+957,"reset_status", false,-1);
    tracep->declBus(c+965,"data_out", false,-1, 7,0);
    tracep->declBit(c+463,"overrun", false,-1);
    tracep->declBus(c+865,"count", false,-1, 4,0);
    tracep->declBus(c+898,"top", false,-1, 3,0);
    tracep->declBus(c+899,"bottom", false,-1, 3,0);
    tracep->declBus(c+900,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1004,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1025,"data_width", false,-1, 31,0);
    tracep->declBus(c+1020,"depth", false,-1, 31,0);
    tracep->declBit(c+914,"clk", false,-1);
    tracep->declBit(c+863,"we", false,-1);
    tracep->declBus(c+898,"a", false,-1, 3,0);
    tracep->declBus(c+899,"dpra", false,-1, 3,0);
    tracep->declBus(c+197,"di", false,-1, 7,0);
    tracep->declBus(c+965,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+807+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBit(c+81,"auto_in_psel", false,-1);
    tracep->declBit(c+33,"auto_in_penable", false,-1);
    tracep->declBit(c+76,"auto_in_pwrite", false,-1);
    tracep->declBus(c+82,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+969,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+77,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+971,"auto_in_pready", false,-1);
    tracep->declBit(c+972,"auto_in_pslverr", false,-1);
    tracep->declBus(c+973,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+928,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+929,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+930,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+931,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+932,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+933,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+914,"clock", false,-1);
    tracep->declBit(c+915,"reset", false,-1);
    tracep->declBus(c+188,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+81,"in_psel", false,-1);
    tracep->declBit(c+33,"in_penable", false,-1);
    tracep->declBus(c+969,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+76,"in_pwrite", false,-1);
    tracep->declBus(c+77,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+78,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+971,"in_pready", false,-1);
    tracep->declBus(c+973,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+972,"in_pslverr", false,-1);
    tracep->declBus(c+928,"vga_r", false,-1, 7,0);
    tracep->declBus(c+929,"vga_g", false,-1, 7,0);
    tracep->declBus(c+930,"vga_b", false,-1, 7,0);
    tracep->declBit(c+931,"vga_hsync", false,-1);
    tracep->declBit(c+932,"vga_vsync", false,-1);
    tracep->declBit(c+933,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+296,"sck", false,-1);
    tracep->declBit(c+464,"ss", false,-1);
    tracep->declBit(c+832,"mosi", false,-1);
    tracep->declBit(c+984,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+296,"sck", false,-1);
    tracep->declBit(c+465,"ss", false,-1);
    tracep->declBit(c+832,"mosi", false,-1);
    tracep->declBit(c+936,"miso", false,-1);
    tracep->declBit(c+465,"reset", false,-1);
    tracep->declBus(c+826,"state", false,-1, 2,0);
    tracep->declBus(c+827,"counter", false,-1, 7,0);
    tracep->declBus(c+828,"cmd", false,-1, 7,0);
    tracep->declBus(c+829,"addr", false,-1, 23,0);
    tracep->declBus(c+830,"data", false,-1, 31,0);
    tracep->declBit(c+831,"ren", false,-1);
    tracep->declBus(c+966,"rdata", false,-1, 31,0);
    tracep->declBus(c+967,"raddr", false,-1, 31,0);
    tracep->declBus(c+968,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+296,"clock", false,-1);
    tracep->declBit(c+831,"valid", false,-1);
    tracep->declBus(c+828,"cmd", false,-1, 7,0);
    tracep->declBus(c+967,"addr", false,-1, 31,0);
    tracep->declBus(c+966,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+937,"sck", false,-1);
    tracep->declBit(c+938,"ce_n", false,-1);
    tracep->declBus(c+198,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+939,"clk", false,-1);
    tracep->declBit(c+298,"cke", false,-1);
    tracep->declBit(c+299,"cs", false,-1);
    tracep->declBit(c+300,"ras", false,-1);
    tracep->declBit(c+301,"cas", false,-1);
    tracep->declBit(c+302,"we", false,-1);
    tracep->declBus(c+303,"a", false,-1, 12,0);
    tracep->declBus(c+304,"ba", false,-1, 1,0);
    tracep->declBus(c+305,"dqm", false,-1, 1,0);
    tracep->declBus(c+833,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_ar_valid));
    bufp->fullIData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_lsuType),32);
    bufp->fullBit(oldp+3,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_hc285b89a__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_5))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_3))));
    bufp->fullIData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU),32);
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isALUSrc));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isJump));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isBranch));
    bufp->fullBit(oldp+8,(((0x37U != (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU)) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_h87db9210__0) 
                              | ((0x67U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5eaebdb1__0))))));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_11) 
                           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_7)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_5) 
                                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_3)) 
                                    & ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                       | ((0x113U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                          | ((0x193U 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                             | ((0x213U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                                | ((0x313U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                                   | ((0x393U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                                      | ((0x93U 
                                                          == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_0) 
                                                         | ((0x293U 
                                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_0) 
                                                            | ((0x8293U 
                                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_0) 
                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_2))))))))))))))));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isUnsigned));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isContext));
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_csrType),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_lsuType),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType),4);
    bufp->fullIData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__casez_tmp),32);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                       >> 7U))),5);
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_isEbreak));
    bufp->fullSData(oldp+20,((0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__casez_tmp)),10);
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_4));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_6));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en) 
                            & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                               >> 7U))))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en) 
                            & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                               >> 7U))))));
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1),32);
    bufp->fullIData(oldp+29,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isContext)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_3)))
                               ? 0U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_csrType))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_4)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csrs_ext__DOT__Memory
                                           [0x305U]
                                            : 0U) : 
                                       ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_csrType))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_6)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csrs_ext__DOT__Memory
                                            [0x341U]
                                             : 0U) : 0U)))),32);
    bufp->fullIData(oldp+30,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_4)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csrs_ext__DOT__Memory
                              [0x305U] : 0U)),32);
    bufp->fullIData(oldp+31,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_6)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csrs_ext__DOT__Memory
                              [0x341U] : 0U)),32);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+37,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                  << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullBit(oldp+38,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
                            & ((~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)) 
                                      | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)) 
                                         | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)) 
                                            | ((4U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)) 
                                               | (5U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)))))))) 
                               & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType))
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isBranch) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isUnsigned)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1 
                                             < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data)
                                          : VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data)))
                                   : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1 
                                          == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data)
                                       : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1 
                                              != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType)) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isUnsigned)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1 
                                                  >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data)
                                                  : 
                                                 VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data))))))))));
    bufp->fullCData(oldp+39,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                         << 0x1eU) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                            << 1U)))))),2);
    bufp->fullBit(oldp+40,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                               << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                             >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+41,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+64,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+73,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+82,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+84,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_out_aw_valid));
    bufp->fullIData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullQData(oldp+115,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_out_w_bits_data))),64);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_out_ar_valid));
    bufp->fullIData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_out_ar_bits_addr),32);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+121,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+132,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+135,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+136,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+137,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullSData(oldp+138,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+143,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+144,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+149,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_ar_bits_addr),32);
    bufp->fullIData(oldp+158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_lsuType))),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_out_w_bits_data),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___csrs_ext_R0_data),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__operand1),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__operand2),32);
    bufp->fullBit(oldp+164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isJump))));
    bufp->fullBit(oldp+165,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isJump)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN))));
    bufp->fullIData(oldp+166,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullIData(oldp+167,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+175,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+176,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+177,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+178,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+179,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+180,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+185,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+186,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+187,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+188,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+189,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+190,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+191,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+192,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+193,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+195,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+198,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+204,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)))));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+254,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+255,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+260,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+261,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+263,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+269,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+272,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+273,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+274,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+299,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+302,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+338,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+339,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+340,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+341,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+342,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+343,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+344,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+348,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+350,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+351,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+353,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+357,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+358,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+360,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+373,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+374,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+375,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+376,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+377,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+378,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+380,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+381,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+382,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+398,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+401,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+417,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+418,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+419,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+420,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+421,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+464,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+466,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+467,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullQData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+487,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+488,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+489,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                >> 8U))));
    bufp->fullWData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+536,((((QData)((IData)((0xffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                 >> 0x38U))
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (0xffU 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                   ? 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                    ? (IData)(
                                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                               >> 0x30U))
                                                                    : 0U)
                                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                      ? 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                       ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x28U))
                                                                       : 0U)
                                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x20U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x18U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x10U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0])
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))),64);
    bufp->fullCData(oldp+538,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullQData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+609,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+613,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+621,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+629,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+633,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+637,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+641,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+645,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+649,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+653,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+657,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+661,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+665,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+669,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+673,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+677,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+681,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+685,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+689,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+693,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+697,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+701,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+705,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+709,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+713,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+717,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+721,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+725,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+729,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+733,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pcReg),32);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),32);
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__resBranch));
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__instSRAM_io_pc_r),32);
    bufp->fullIData(oldp+742,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pcReg)),32);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resLSU),32);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM__DOT__load_flag));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM__DOT__store_flag));
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+831,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullSData(oldp+833,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+835,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+838,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+839,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+841,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+842,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+844,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+859,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+881,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+882,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+883,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+884,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+885,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+887,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+889,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+890,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+900,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+902,((1U & ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))) 
                                   | (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
                                         | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))))))));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___io_out_r_ready_output));
    bufp->fullBit(oldp+904,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))))));
    bufp->fullBit(oldp+905,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))));
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__exec),2);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),32);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_len_r),32);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_wdata_r),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_addr_r),32);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_isLoad_r));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_isStore_r));
    bufp->fullBit(oldp+914,(vlSelf->clock));
    bufp->fullBit(oldp+915,(vlSelf->reset));
    bufp->fullSData(oldp+916,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+917,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+918,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+919,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+920,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+921,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+922,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+923,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+924,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+925,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+926,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+927,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+928,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+929,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+930,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+931,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+932,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+933,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+934,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+935,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+936,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+939,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+940,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                ? (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                : 0U)
                                            : 0U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                             ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [3U] 
                                                 << 0x18U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))
                                             : 0U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                        : 0U)))))))),32);
    bufp->fullBit(oldp+941,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullQData(oldp+943,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                                    : 0U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                               << 8U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                        : 0U)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                          ? 
                                                         ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                           [3U] 
                                                           << 0x18U) 
                                                          | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                              [2U] 
                                                              << 0x10U) 
                                                             | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                 [1U] 
                                                                 << 8U) 
                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                [0U])))
                                                          : 0U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                             : 0U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                                : 0U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                                   : 0U) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                                     ? 
                                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                                     : 0U)))))))
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? 
                                                             (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                                                : 0U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                                                   ? 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                                    ? 
                                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                           << 8U) 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                                    : 0U)
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                                      ? 
                                                                     ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                       [3U] 
                                                                       << 0x18U) 
                                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                          [2U] 
                                                                          << 0x10U) 
                                                                         | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                             [1U] 
                                                                             << 8U) 
                                                                            | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                            [0U])))
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                                         : 0U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                                            : 0U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                                               : 0U) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                                                 ? 
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                                                 : 0U)))))))
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullQData(oldp+945,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                       ? 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                                         : 0U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                             ? 
                                                            (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                 << 0x10U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                             : 0U)
                                                            : 0U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                               ? 
                                                              ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                [3U] 
                                                                << 0x18U) 
                                                               | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                   [2U] 
                                                                   << 0x10U) 
                                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                      [1U] 
                                                                      << 8U) 
                                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                     [0U])))
                                                               : 0U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                                        : 0U) 
                                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                                          ? 
                                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                                          : 0U)))))))
                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                   ? 
                                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                                                        ? 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                                         ? 
                                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                                << 8U) 
                                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                                         : 0U)
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                                           ? 
                                                                          ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                            [3U] 
                                                                            << 0x18U) 
                                                                           | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                               [2U] 
                                                                               << 0x10U) 
                                                                              | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                                [1U] 
                                                                                << 8U) 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                                [0U])))
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                                                 : 0U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                                                 ? 
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                                                 : 0U)))))))
                                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))
                                 : 0ULL) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                              : 0ULL) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x38U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                             ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x30U))
                                                                             : 0U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x28U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x20U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x18U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                                << 0x18U) 
                                                                               | ((0xff0000U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 0x10U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0])
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))
                                                : 0ULL)))),64);
    bufp->fullCData(oldp+947,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+949,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__dataWrite),32);
    bufp->fullBit(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+953,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+954,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullSData(oldp+958,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+967,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+969,(1U),3);
    bufp->fullBit(oldp+970,(0U));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+980,(0U),4);
    bufp->fullCData(oldp+981,(0U),8);
    bufp->fullCData(oldp+982,(0U),3);
    bufp->fullCData(oldp+983,(0U),2);
    bufp->fullBit(oldp+984,(1U));
    bufp->fullIData(oldp+985,(0U),32);
    bufp->fullQData(oldp+986,(0ULL),64);
    bufp->fullSData(oldp+988,(0x305U),10);
    bufp->fullSData(oldp+989,(0x341U),10);
    bufp->fullSData(oldp+990,(0x342U),10);
    bufp->fullIData(oldp+991,(0xbU),32);
    bufp->fullSData(oldp+992,(0x300U),10);
    bufp->fullIData(oldp+993,(0x1800U),32);
    bufp->fullBit(oldp+994,(0U));
    bufp->fullBit(oldp+995,(1U));
    bufp->fullCData(oldp+996,(4U),3);
    bufp->fullCData(oldp+997,(0x1bU),8);
    bufp->fullCData(oldp+998,(0xebU),8);
    bufp->fullCData(oldp+999,(0x38U),8);
    bufp->fullIData(oldp+1000,(0x64U),32);
    bufp->fullIData(oldp+1001,(0x18U),32);
    bufp->fullIData(oldp+1002,(9U),32);
    bufp->fullIData(oldp+1003,(2U),32);
    bufp->fullIData(oldp+1004,(4U),32);
    bufp->fullIData(oldp+1005,(0xdU),32);
    bufp->fullIData(oldp+1006,(0x2000U),32);
    bufp->fullIData(oldp+1007,(0x2710U),32);
    bufp->fullIData(oldp+1008,(0x30cU),32);
    bufp->fullCData(oldp+1009,(7U),4);
    bufp->fullCData(oldp+1010,(3U),4);
    bufp->fullCData(oldp+1011,(5U),4);
    bufp->fullCData(oldp+1012,(4U),4);
    bufp->fullCData(oldp+1013,(6U),4);
    bufp->fullCData(oldp+1014,(2U),4);
    bufp->fullCData(oldp+1015,(1U),4);
    bufp->fullSData(oldp+1016,(0x21U),13);
    bufp->fullCData(oldp+1017,(8U),4);
    bufp->fullCData(oldp+1018,(9U),4);
    bufp->fullIData(oldp+1019,(0xaU),32);
    bufp->fullIData(oldp+1020,(0x10U),32);
    bufp->fullIData(oldp+1021,(6U),32);
    bufp->fullIData(oldp+1022,(0x11U),32);
    bufp->fullIData(oldp+1023,(0x30000000U),32);
    bufp->fullIData(oldp+1024,(0x3fffffffU),32);
    bufp->fullIData(oldp+1025,(8U),32);
    bufp->fullIData(oldp+1026,(1U),32);
    bufp->fullCData(oldp+1027,(0xaU),4);
    bufp->fullIData(oldp+1028,(0xbU),32);
    bufp->fullIData(oldp+1029,(5U),32);
    bufp->fullCData(oldp+1030,(2U),3);
    bufp->fullCData(oldp+1031,(3U),3);
    bufp->fullCData(oldp+1032,(5U),3);
}
