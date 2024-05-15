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
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+881,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+882,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+883,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+884,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+885,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+886,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+887,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+888,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+889,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+890,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+891,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+892,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+893,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+894,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+895,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+896,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+897,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+898,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+899,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+900,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+881,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+882,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+883,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+884,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+885,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+886,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+887,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+888,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+889,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+890,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+891,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+892,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+893,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+894,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+895,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+896,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+897,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+898,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+899,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+900,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+500,"spi_sck", false,-1);
    tracep->declBus(c+501,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+901,"spi_mosi", false,-1);
    tracep->declBit(c+902,"spi_miso", false,-1);
    tracep->declBit(c+899,"uart_rx", false,-1);
    tracep->declBit(c+900,"uart_tx", false,-1);
    tracep->declBit(c+903,"psram_sck", false,-1);
    tracep->declBit(c+904,"psram_ce_n", false,-1);
    tracep->declBus(c+809,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+905,"sdram_clk", false,-1);
    tracep->declBit(c+502,"sdram_cke", false,-1);
    tracep->declBit(c+503,"sdram_cs", false,-1);
    tracep->declBit(c+504,"sdram_ras", false,-1);
    tracep->declBit(c+505,"sdram_cas", false,-1);
    tracep->declBit(c+506,"sdram_we", false,-1);
    tracep->declBus(c+507,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+509,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+881,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+882,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+883,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+884,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+885,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+886,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+887,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+888,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+889,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+890,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+891,"ps2_clk", false,-1);
    tracep->declBit(c+892,"ps2_data", false,-1);
    tracep->declBus(c+893,"vga_r", false,-1, 7,0);
    tracep->declBus(c+894,"vga_g", false,-1, 7,0);
    tracep->declBus(c+895,"vga_b", false,-1, 7,0);
    tracep->declBit(c+896,"vga_hsync", false,-1);
    tracep->declBit(c+897,"vga_vsync", false,-1);
    tracep->declBit(c+898,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+748,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+45,"in_psel", false,-1);
    tracep->declBit(c+46,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+810,"in_pready", false,-1);
    tracep->declBus(c+906,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+752,"in_pslverr", false,-1);
    tracep->declBus(c+748,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+45,"out_psel", false,-1);
    tracep->declBit(c+46,"out_penable", false,-1);
    tracep->declBus(c+932,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"out_pwrite", false,-1);
    tracep->declBus(c+750,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+810,"out_pready", false,-1);
    tracep->declBus(c+906,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+752,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+45,"auto_in_psel", false,-1);
    tracep->declBit(c+46,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+748,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+810,"auto_in_pready", false,-1);
    tracep->declBit(c+752,"auto_in_pslverr", false,-1);
    tracep->declBus(c+906,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+468,"auto_out_6_psel", false,-1);
    tracep->declBit(c+469,"auto_out_6_penable", false,-1);
    tracep->declBit(c+749,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+748,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+932,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"auto_out_6_pready", false,-1);
    tracep->declBit(c+933,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+512,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+470,"auto_out_5_psel", false,-1);
    tracep->declBit(c+471,"auto_out_5_penable", false,-1);
    tracep->declBit(c+749,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+753,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+932,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"auto_out_5_pready", false,-1);
    tracep->declBit(c+935,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+936,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+472,"auto_out_4_psel", false,-1);
    tracep->declBit(c+473,"auto_out_4_penable", false,-1);
    tracep->declBit(c+749,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+754,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+932,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+937,"auto_out_4_pready", false,-1);
    tracep->declBit(c+938,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+939,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+474,"auto_out_3_psel", false,-1);
    tracep->declBit(c+475,"auto_out_3_penable", false,-1);
    tracep->declBit(c+749,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+754,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+932,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+940,"auto_out_3_pready", false,-1);
    tracep->declBit(c+941,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+942,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+755,"auto_out_2_psel", false,-1);
    tracep->declBit(c+476,"auto_out_2_penable", false,-1);
    tracep->declBit(c+749,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+748,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+932,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+907,"auto_out_2_pready", false,-1);
    tracep->declBit(c+933,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+47,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+756,"auto_out_1_psel", false,-1);
    tracep->declBit(c+757,"auto_out_1_penable", false,-1);
    tracep->declBit(c+749,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+754,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+932,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+758,"auto_out_1_pready", false,-1);
    tracep->declBit(c+933,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+908,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+759,"auto_out_0_psel", false,-1);
    tracep->declBit(c+760,"auto_out_0_penable", false,-1);
    tracep->declBit(c+749,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+753,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+932,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"auto_out_0_pready", false,-1);
    tracep->declBit(c+933,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+514,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+761,"sel_0", false,-1);
    tracep->declBit(c+762,"sel_1", false,-1);
    tracep->declBit(c+763,"sel_2", false,-1);
    tracep->declBit(c+764,"sel_3", false,-1);
    tracep->declBit(c+765,"sel_4", false,-1);
    tracep->declBit(c+766,"sel_5", false,-1);
    tracep->declBit(c+767,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+48,"auto_in_awready", false,-1);
    tracep->declBit(c+49,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+48,"auto_in_wready", false,-1);
    tracep->declBit(c+53,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+811,"auto_in_bready", false,-1);
    tracep->declBit(c+812,"auto_in_bvalid", false,-1);
    tracep->declBus(c+57,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+477,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"auto_in_arready", false,-1);
    tracep->declBit(c+59,"auto_in_arvalid", false,-1);
    tracep->declBus(c+60,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+813,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+909,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+477,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+45,"auto_out_psel", false,-1);
    tracep->declBit(c+46,"auto_out_penable", false,-1);
    tracep->declBit(c+749,"auto_out_pwrite", false,-1);
    tracep->declBus(c+748,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+750,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+810,"auto_out_pready", false,-1);
    tracep->declBit(c+752,"auto_out_pslverr", false,-1);
    tracep->declBus(c+906,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+46,"nodeOut_penable", false,-1);
    tracep->declBus(c+64,"state", false,-1, 1,0);
    tracep->declBit(c+58,"accept_read", false,-1);
    tracep->declBit(c+48,"accept_write", false,-1);
    tracep->declBit(c+65,"is_write_r", false,-1);
    tracep->declBit(c+749,"is_write", false,-1);
    tracep->declBus(c+63,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+57,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+66,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+67,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+68,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+69,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+71,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+73,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+74,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+768,"resp", false,-1, 1,0);
    tracep->declBus(c+75,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+477,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+813,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+76,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+812,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+77,"auto_in_awready", false,-1);
    tracep->declBit(c+933,"auto_in_awvalid", false,-1);
    tracep->declBus(c+943,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+78,"auto_in_wready", false,-1);
    tracep->declBit(c+933,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+948,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+945,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"auto_in_wlast", false,-1);
    tracep->declBit(c+933,"auto_in_bready", false,-1);
    tracep->declBit(c+814,"auto_in_bvalid", false,-1);
    tracep->declBus(c+815,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+478,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+79,"auto_in_arready", false,-1);
    tracep->declBit(c+933,"auto_in_arvalid", false,-1);
    tracep->declBus(c+943,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+816,"auto_in_rvalid", false,-1);
    tracep->declBus(c+817,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_in_rlast", false,-1);
    tracep->declBit(c+818,"auto_out_awready", false,-1);
    tracep->declBit(c+80,"auto_out_awvalid", false,-1);
    tracep->declBus(c+50,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+81,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+819,"auto_out_wready", false,-1);
    tracep->declBit(c+82,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+83,"auto_out_wlast", false,-1);
    tracep->declBit(c+820,"auto_out_bready", false,-1);
    tracep->declBit(c+821,"auto_out_bvalid", false,-1);
    tracep->declBus(c+815,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+822,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+823,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+84,"auto_out_arready", false,-1);
    tracep->declBit(c+85,"auto_out_arvalid", false,-1);
    tracep->declBus(c+60,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+86,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+933,"auto_out_rready", false,-1);
    tracep->declBit(c+816,"auto_out_rvalid", false,-1);
    tracep->declBus(c+817,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+480,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+824,"auto_out_rlast", false,-1);
    tracep->declBit(c+82,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+87,"w_idle", false,-1);
    tracep->declBit(c+825,"in_awready", false,-1);
    tracep->declBit(c+88,"busy", false,-1);
    tracep->declBus(c+89,"r_addr", false,-1, 31,0);
    tracep->declBus(c+90,"r_len", false,-1, 7,0);
    tracep->declBus(c+91,"len", false,-1, 7,0);
    tracep->declBus(c+92,"addr", false,-1, 31,0);
    tracep->declBit(c+93,"busy_1", false,-1);
    tracep->declBus(c+94,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+95,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+96,"len_1", false,-1, 7,0);
    tracep->declBus(c+97,"addr_1", false,-1, 31,0);
    tracep->declBit(c+98,"wbeats_latched", false,-1);
    tracep->declBit(c+80,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+99,"wbeats_valid", false,-1);
    tracep->declBus(c+100,"w_counter", false,-1, 8,0);
    tracep->declBus(c+101,"w_todo", false,-1, 8,0);
    tracep->declBit(c+83,"w_last", false,-1);
    tracep->declBit(c+820,"nodeOut_bready", false,-1);
    tracep->declBus(c+102,"error_0", false,-1, 1,0);
    tracep->declBus(c+103,"error_1", false,-1, 1,0);
    tracep->declBus(c+104,"error_2", false,-1, 1,0);
    tracep->declBus(c+105,"error_3", false,-1, 1,0);
    tracep->declBus(c+106,"error_4", false,-1, 1,0);
    tracep->declBus(c+107,"error_5", false,-1, 1,0);
    tracep->declBus(c+108,"error_6", false,-1, 1,0);
    tracep->declBus(c+109,"error_7", false,-1, 1,0);
    tracep->declBus(c+110,"error_8", false,-1, 1,0);
    tracep->declBus(c+111,"error_9", false,-1, 1,0);
    tracep->declBus(c+112,"error_10", false,-1, 1,0);
    tracep->declBus(c+113,"error_11", false,-1, 1,0);
    tracep->declBus(c+114,"error_12", false,-1, 1,0);
    tracep->declBus(c+115,"error_13", false,-1, 1,0);
    tracep->declBus(c+116,"error_14", false,-1, 1,0);
    tracep->declBus(c+117,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+79,"io_enq_ready", false,-1);
    tracep->declBit(c+933,"io_enq_valid", false,-1);
    tracep->declBus(c+943,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+944,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+945,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+946,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+947,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+118,"io_deq_ready", false,-1);
    tracep->declBit(c+85,"io_deq_valid", false,-1);
    tracep->declBus(c+60,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+119,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+120,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+62,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+121,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+950,"ram", false,-1, 48,0);
    tracep->declBit(c+85,"full", false,-1);
    tracep->declBit(c+85,"io_deq_valid_0", false,-1);
    tracep->declBit(c+933,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+77,"io_enq_ready", false,-1);
    tracep->declBit(c+933,"io_enq_valid", false,-1);
    tracep->declBus(c+943,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+944,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+945,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+946,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+947,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+481,"io_deq_ready", false,-1);
    tracep->declBit(c+122,"io_deq_valid", false,-1);
    tracep->declBus(c+50,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+123,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+124,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+52,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+125,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+952,"ram", false,-1, 48,0);
    tracep->declBit(c+122,"full", false,-1);
    tracep->declBit(c+122,"io_deq_valid_0", false,-1);
    tracep->declBit(c+933,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+78,"io_enq_ready", false,-1);
    tracep->declBit(c+933,"io_enq_valid", false,-1);
    tracep->declQuad(c+948,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+945,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+933,"io_enq_bits_last", false,-1);
    tracep->declBit(c+482,"io_deq_ready", false,-1);
    tracep->declBit(c+126,"io_deq_valid", false,-1);
    tracep->declQuad(c+54,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+56,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+127,"io_deq_bits_last", false,-1);
    tracep->declArray(c+954,"ram", false,-1, 72,0);
    tracep->declBit(c+126,"full", false,-1);
    tracep->declBit(c+126,"io_deq_valid_0", false,-1);
    tracep->declBit(c+933,"do_enq", false,-1);
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
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+826,"auto_in_awready", false,-1);
    tracep->declBit(c+128,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+129,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+483,"auto_in_wready", false,-1);
    tracep->declBit(c+130,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+827,"auto_in_bready", false,-1);
    tracep->declBit(c+131,"auto_in_bvalid", false,-1);
    tracep->declBus(c+132,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+133,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_in_arready", false,-1);
    tracep->declBit(c+135,"auto_in_arvalid", false,-1);
    tracep->declBus(c+60,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+137,"auto_in_rvalid", false,-1);
    tracep->declBus(c+138,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+139,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+141,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"nodeIn_arready", false,-1);
    tracep->declBit(c+826,"nodeIn_awready", false,-1);
    tracep->declBit(c+142,"w_sel0", false,-1);
    tracep->declBit(c+131,"w_full", false,-1);
    tracep->declBus(c+132,"w_id", false,-1, 3,0);
    tracep->declBit(c+143,"r_sel1", false,-1);
    tracep->declBit(c+144,"w_sel1", false,-1);
    tracep->declBit(c+137,"r_full", false,-1);
    tracep->declBus(c+138,"r_id", false,-1, 3,0);
    tracep->declBit(c+145,"ren", false,-1);
    tracep->declBit(c+146,"rdata_REG", false,-1);
    tracep->declBus(c+147,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+148,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+149,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+150,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+151,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+152,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+153,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+154,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+155,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+145,"R0_en", false,-1);
    tracep->declBit(c+879,"R0_clk", false,-1);
    tracep->declQuad(c+156,"R0_data", false,-1, 63,0);
    tracep->declBus(c+158,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+828,"W0_en", false,-1);
    tracep->declBit(c+879,"W0_clk", false,-1);
    tracep->declQuad(c+54,"W0_data", false,-1, 63,0);
    tracep->declBus(c+56,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+77,"auto_in_awready", false,-1);
    tracep->declBit(c+933,"auto_in_awvalid", false,-1);
    tracep->declBus(c+943,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+78,"auto_in_wready", false,-1);
    tracep->declBit(c+933,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+948,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+945,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"auto_in_wlast", false,-1);
    tracep->declBit(c+933,"auto_in_bready", false,-1);
    tracep->declBit(c+814,"auto_in_bvalid", false,-1);
    tracep->declBus(c+815,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+478,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+79,"auto_in_arready", false,-1);
    tracep->declBit(c+933,"auto_in_arvalid", false,-1);
    tracep->declBus(c+943,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+816,"auto_in_rvalid", false,-1);
    tracep->declBus(c+817,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_in_rlast", false,-1);
    tracep->declBit(c+77,"auto_out_awready", false,-1);
    tracep->declBit(c+933,"auto_out_awvalid", false,-1);
    tracep->declBus(c+943,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+78,"auto_out_wready", false,-1);
    tracep->declBit(c+933,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+948,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+945,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"auto_out_wlast", false,-1);
    tracep->declBit(c+933,"auto_out_bready", false,-1);
    tracep->declBit(c+814,"auto_out_bvalid", false,-1);
    tracep->declBus(c+815,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+478,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+79,"auto_out_arready", false,-1);
    tracep->declBit(c+933,"auto_out_arvalid", false,-1);
    tracep->declBus(c+943,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+933,"auto_out_rready", false,-1);
    tracep->declBit(c+816,"auto_out_rvalid", false,-1);
    tracep->declBus(c+817,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+829,"auto_in_awready", false,-1);
    tracep->declBit(c+159,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+819,"auto_in_wready", false,-1);
    tracep->declBit(c+82,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+83,"auto_in_wlast", false,-1);
    tracep->declBit(c+820,"auto_in_bready", false,-1);
    tracep->declBit(c+821,"auto_in_bvalid", false,-1);
    tracep->declBus(c+815,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+822,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+160,"auto_in_arready", false,-1);
    tracep->declBit(c+161,"auto_in_arvalid", false,-1);
    tracep->declBus(c+60,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+816,"auto_in_rvalid", false,-1);
    tracep->declBus(c+817,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+824,"auto_in_rlast", false,-1);
    tracep->declBit(c+826,"auto_out_2_awready", false,-1);
    tracep->declBit(c+128,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+50,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+129,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+483,"auto_out_2_wready", false,-1);
    tracep->declBit(c+130,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+827,"auto_out_2_bready", false,-1);
    tracep->declBit(c+131,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+132,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+133,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_out_2_arready", false,-1);
    tracep->declBit(c+135,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+60,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+933,"auto_out_2_rready", false,-1);
    tracep->declBit(c+137,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+138,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+139,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+141,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+163,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+164,"auto_out_1_arready", false,-1);
    tracep->declBit(c+165,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+60,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+62,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+933,"auto_out_1_rready", false,-1);
    tracep->declBit(c+167,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+168,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+169,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+48,"auto_out_0_awready", false,-1);
    tracep->declBit(c+49,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+50,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+48,"auto_out_0_wready", false,-1);
    tracep->declBit(c+53,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+811,"auto_out_0_bready", false,-1);
    tracep->declBit(c+812,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+57,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+477,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"auto_out_0_arready", false,-1);
    tracep->declBit(c+59,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+60,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+933,"auto_out_0_rready", false,-1);
    tracep->declBit(c+813,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+63,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+909,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+477,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+821,"in_0_bvalid", false,-1);
    tracep->declBit(c+816,"in_0_rvalid", false,-1);
    tracep->declBit(c+829,"nodeIn_awready", false,-1);
    tracep->declBit(c+171,"requestARIO_0_0", false,-1);
    tracep->declBit(c+172,"requestARIO_0_1", false,-1);
    tracep->declBit(c+173,"requestARIO_0_2", false,-1);
    tracep->declBit(c+174,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+175,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+176,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+177,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+187,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+188,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+189,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+190,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+191,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+192,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+193,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+194,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+195,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+196,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+197,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+198,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+199,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+200,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+201,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+202,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+203,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+204,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+205,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+206,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+207,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+208,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+209,"latched", false,-1);
    tracep->declBit(c+210,"in_0_awvalid", false,-1);
    tracep->declBit(c+211,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+212,"in_0_wvalid", false,-1);
    tracep->declBit(c+213,"idle_3", false,-1);
    tracep->declBit(c+830,"anyValid", false,-1);
    tracep->declBus(c+831,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+214,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+832,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+833,"prefixOR_1", false,-1);
    tracep->declBit(c+834,"winner_3_1", false,-1);
    tracep->declBit(c+835,"winner_3_2", false,-1);
    tracep->declBit(c+215,"state_3_0", false,-1);
    tracep->declBit(c+216,"state_3_1", false,-1);
    tracep->declBit(c+217,"state_3_2", false,-1);
    tracep->declBit(c+836,"muxState_3_0", false,-1);
    tracep->declBit(c+837,"muxState_3_1", false,-1);
    tracep->declBit(c+838,"muxState_3_2", false,-1);
    tracep->declBit(c+218,"idle_4", false,-1);
    tracep->declBit(c+839,"anyValid_1", false,-1);
    tracep->declBus(c+840,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+219,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+841,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+842,"winner_4_0", false,-1);
    tracep->declBit(c+843,"winner_4_2", false,-1);
    tracep->declBit(c+220,"state_4_0", false,-1);
    tracep->declBit(c+221,"state_4_2", false,-1);
    tracep->declBit(c+844,"muxState_4_0", false,-1);
    tracep->declBit(c+845,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+211,"io_enq_valid", false,-1);
    tracep->declBus(c+223,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+846,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBus(c+225,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+226,"wrap", false,-1);
    tracep->declBit(c+227,"wrap_1", false,-1);
    tracep->declBit(c+228,"maybe_full", false,-1);
    tracep->declBit(c+229,"ptr_match", false,-1);
    tracep->declBit(c+230,"empty", false,-1);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+224,"io_deq_valid_0", false,-1);
    tracep->declBit(c+847,"do_deq", false,-1);
    tracep->declBit(c+848,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+227,"R0_addr", false,-1);
    tracep->declBit(c+957,"R0_en", false,-1);
    tracep->declBit(c+879,"R0_clk", false,-1);
    tracep->declBus(c+232,"R0_data", false,-1, 2,0);
    tracep->declBit(c+226,"W0_addr", false,-1);
    tracep->declBit(c+848,"W0_en", false,-1);
    tracep->declBit(c+879,"W0_clk", false,-1);
    tracep->declBus(c+223,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+233+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+818,"auto_in_awready", false,-1);
    tracep->declBit(c+80,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+81,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+819,"auto_in_wready", false,-1);
    tracep->declBit(c+82,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+83,"auto_in_wlast", false,-1);
    tracep->declBit(c+820,"auto_in_bready", false,-1);
    tracep->declBit(c+821,"auto_in_bvalid", false,-1);
    tracep->declBus(c+815,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+822,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+823,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+84,"auto_in_arready", false,-1);
    tracep->declBit(c+85,"auto_in_arvalid", false,-1);
    tracep->declBus(c+60,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+86,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+816,"auto_in_rvalid", false,-1);
    tracep->declBus(c+817,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+480,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+824,"auto_in_rlast", false,-1);
    tracep->declBit(c+829,"auto_out_awready", false,-1);
    tracep->declBit(c+159,"auto_out_awvalid", false,-1);
    tracep->declBus(c+50,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+819,"auto_out_wready", false,-1);
    tracep->declBit(c+82,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+54,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+56,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+83,"auto_out_wlast", false,-1);
    tracep->declBit(c+820,"auto_out_bready", false,-1);
    tracep->declBit(c+821,"auto_out_bvalid", false,-1);
    tracep->declBus(c+815,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+822,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+160,"auto_out_arready", false,-1);
    tracep->declBit(c+161,"auto_out_arvalid", false,-1);
    tracep->declBus(c+60,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+933,"auto_out_rready", false,-1);
    tracep->declBit(c+816,"auto_out_rvalid", false,-1);
    tracep->declBus(c+817,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+824,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+236,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+241,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+246,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+247,"io_deq_valid", false,-1);
    tracep->declBit(c+248,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"ram_real_last", false,-1);
    tracep->declBit(c+247,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+250,"io_enq_ready", false,-1);
    tracep->declBit(c+251,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+256,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+261,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBit(c+263,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+263,"ram_real_last", false,-1);
    tracep->declBit(c+262,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+264,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+266,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+267,"io_deq_valid", false,-1);
    tracep->declBit(c+268,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+268,"ram_real_last", false,-1);
    tracep->declBit(c+267,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+269,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+270,"io_enq_ready", false,-1);
    tracep->declBit(c+271,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+484,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+849,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+485,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+850,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+486,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+851,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+487,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+852,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+292,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+488,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+853,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+489,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+854,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+490,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+855,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+491,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+856,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+492,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+857,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+493,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+858,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+494,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+859,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+495,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+860,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+496,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+861,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+497,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+862,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+337,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+341,"io_enq_ready", false,-1);
    tracep->declBit(c+498,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+863,"io_deq_ready", false,-1);
    tracep->declBit(c+342,"io_deq_valid", false,-1);
    tracep->declBit(c+343,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+343,"ram_real_last", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+344,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+345,"io_enq_ready", false,-1);
    tracep->declBit(c+499,"io_enq_valid", false,-1);
    tracep->declBit(c+81,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+864,"io_deq_ready", false,-1);
    tracep->declBit(c+346,"io_deq_valid", false,-1);
    tracep->declBit(c+347,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+347,"ram_real_last", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+348,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+349,"io_enq_ready", false,-1);
    tracep->declBit(c+350,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+351,"io_deq_valid", false,-1);
    tracep->declBit(c+352,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"ram_real_last", false,-1);
    tracep->declBit(c+351,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+353,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+354,"io_enq_ready", false,-1);
    tracep->declBit(c+355,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+360,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+365,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+366,"io_deq_valid", false,-1);
    tracep->declBit(c+367,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+367,"ram_real_last", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+370,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+371,"io_deq_valid", false,-1);
    tracep->declBit(c+372,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"ram_real_last", false,-1);
    tracep->declBit(c+371,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+373,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+374,"io_enq_ready", false,-1);
    tracep->declBit(c+375,"io_enq_valid", false,-1);
    tracep->declBit(c+86,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+914,"reset", false,-1);
    tracep->declBit(c+77,"auto_master_out_awready", false,-1);
    tracep->declBit(c+933,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+943,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+78,"auto_master_out_wready", false,-1);
    tracep->declBit(c+933,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+948,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+945,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+933,"auto_master_out_bready", false,-1);
    tracep->declBit(c+814,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+815,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+478,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+79,"auto_master_out_arready", false,-1);
    tracep->declBit(c+933,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+943,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+944,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+945,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+946,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+933,"auto_master_out_rready", false,-1);
    tracep->declBit(c+816,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+817,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+911,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+913,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+914,"reset", false,-1);
    tracep->declBit(c+77,"io_master_awready", false,-1);
    tracep->declBit(c+78,"io_master_wready", false,-1);
    tracep->declBit(c+814,"io_master_bvalid", false,-1);
    tracep->declBus(c+478,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+815,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+79,"io_master_arready", false,-1);
    tracep->declBit(c+816,"io_master_rvalid", false,-1);
    tracep->declBus(c+913,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+911,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+479,"io_master_rlast", false,-1);
    tracep->declBus(c+817,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+933,"io_slave_awvalid", false,-1);
    tracep->declBus(c+944,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+945,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+946,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+947,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+933,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+948,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+945,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"io_slave_wlast", false,-1);
    tracep->declBit(c+933,"io_slave_bready", false,-1);
    tracep->declBit(c+933,"io_slave_arvalid", false,-1);
    tracep->declBus(c+944,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+943,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+945,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+946,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+933,"io_slave_rready", false,-1);
    tracep->declBit(c+933,"io_interrupt", false,-1);
    tracep->declBit(c+933,"io_master_awvalid", false,-1);
    tracep->declBus(c+944,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+945,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+946,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+947,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+933,"io_master_wvalid", false,-1);
    tracep->declQuad(c+948,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+945,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"io_master_wlast", false,-1);
    tracep->declBit(c+933,"io_master_bready", false,-1);
    tracep->declBit(c+933,"io_master_arvalid", false,-1);
    tracep->declBus(c+944,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+943,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+945,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+946,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+933,"io_master_rready", false,-1);
    tracep->declBit(c+933,"io_slave_awready", false,-1);
    tracep->declBit(c+933,"io_slave_wready", false,-1);
    tracep->declBit(c+933,"io_slave_bvalid", false,-1);
    tracep->declBus(c+947,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+943,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+933,"io_slave_arready", false,-1);
    tracep->declBit(c+933,"io_slave_rvalid", false,-1);
    tracep->declBus(c+947,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+948,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+933,"io_slave_rlast", false,-1);
    tracep->declBus(c+943,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+769,"io_in2ifu_ar_valid", false,-1);
    tracep->declBus(c+379,"io_in2ifu_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_in2lsu_ar_valid", false,-1);
    tracep->declBus(c+915,"io_in2lsu_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+8,"io_in2lsu_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+9,"io_in2lsu_aw_valid", false,-1);
    tracep->declBus(c+33,"io_in2lsu_w_bits_data", false,-1, 31,0);
    tracep->declBit(c+770,"io_isIFU", false,-1);
    tracep->declBit(c+771,"io_isLSU", false,-1);
    tracep->declBus(c+10,"io_resIFU", false,-1, 31,0);
    tracep->declBus(c+739,"io_resLSU", false,-1, 31,0);
    tracep->declBus(c+10,"io_in2ifu_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+739,"io_in2lsu_r_bits_data", false,-1, 31,0);
    tracep->declBit(c+34,"io_out_ar_valid", false,-1);
    tracep->declBus(c+39,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+35,"io_out_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+36,"io_out_aw_valid", false,-1);
    tracep->declBus(c+37,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+772,"exec", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+11,"io_bundleControlIn_isALUSrc", false,-1);
    tracep->declBit(c+12,"io_bundleControlIn_isJump", false,-1);
    tracep->declBit(c+13,"io_bundleControlIn_isBranch", false,-1);
    tracep->declBit(c+14,"io_bundleControlIn_isJAL", false,-1);
    tracep->declBit(c+15,"io_bundleControlIn_writeEnable", false,-1);
    tracep->declBit(c+7,"io_bundleControlIn_isLoad", false,-1);
    tracep->declBit(c+9,"io_bundleControlIn_isStore", false,-1);
    tracep->declBit(c+16,"io_bundleControlIn_isUnsigned", false,-1);
    tracep->declBit(c+17,"io_bundleControlIn_isContext", false,-1);
    tracep->declBus(c+18,"io_bundleControlIn_csrType", false,-1, 3,0);
    tracep->declBus(c+19,"io_bundleControlIn_lsuType", false,-1, 3,0);
    tracep->declBus(c+20,"io_bundleControlIn_aluType", false,-1, 3,0);
    tracep->declBit(c+11,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+14,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+13,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+16,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+20,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBit(c+12,"io_bundleControlOut_isJump", false,-1);
    tracep->declBit(c+13,"io_bundleControlOut_isBranch", false,-1);
    tracep->declBit(c+15,"io_bundleControlOut_writeEnable", false,-1);
    tracep->declBit(c+7,"io_bundleControlOut_isLoad", false,-1);
    tracep->declBit(c+9,"io_bundleControlOut_isStore", false,-1);
    tracep->declBit(c+16,"io_bundleControlOut_isUnsigned", false,-1);
    tracep->declBit(c+17,"io_bundleControlOut_isContext", false,-1);
    tracep->declBus(c+18,"io_bundleControlOut_csrType", false,-1, 3,0);
    tracep->declBus(c+19,"io_bundleControlOut_lsuType", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+11,"io_bundleEXControl_isALUSrc", false,-1);
    tracep->declBit(c+14,"io_bundleEXControl_isJAL", false,-1);
    tracep->declBit(c+13,"io_bundleEXControl_isBranch", false,-1);
    tracep->declBit(c+16,"io_bundleEXControl_isUnsigned", false,-1);
    tracep->declBus(c+20,"io_bundleEXControl_aluType", false,-1, 3,0);
    tracep->declBus(c+916,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+33,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+40,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+21,"io_imm", false,-1, 31,0);
    tracep->declBus(c+379,"io_pc", false,-1, 31,0);
    tracep->declBus(c+773,"io_ifuStatus", false,-1, 31,0);
    tracep->declBit(c+917,"io_resBranch", false,-1);
    tracep->declBus(c+915,"io_res", false,-1, 31,0);
    tracep->declBit(c+771,"io_out_aw_valid", false,-1);
    tracep->declBus(c+33,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+41,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+38,"operand1", false,-1, 31,0);
    tracep->declBus(c+42,"operand2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("getPC ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+914,"reset", false,-1);
    tracep->declBus(c+379,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+10,"io_inst", false,-1, 31,0);
    tracep->declBit(c+11,"io_BundleControl_isALUSrc", false,-1);
    tracep->declBit(c+12,"io_BundleControl_isJump", false,-1);
    tracep->declBit(c+13,"io_BundleControl_isBranch", false,-1);
    tracep->declBit(c+14,"io_BundleControl_isJAL", false,-1);
    tracep->declBit(c+15,"io_BundleControl_writeEnable", false,-1);
    tracep->declBit(c+7,"io_BundleControl_isLoad", false,-1);
    tracep->declBit(c+9,"io_BundleControl_isStore", false,-1);
    tracep->declBit(c+16,"io_BundleControl_isUnsigned", false,-1);
    tracep->declBit(c+17,"io_BundleControl_isContext", false,-1);
    tracep->declBus(c+18,"io_BundleControl_csrType", false,-1, 3,0);
    tracep->declBus(c+19,"io_BundleControl_lsuType", false,-1, 3,0);
    tracep->declBus(c+20,"io_BundleControl_aluType", false,-1, 3,0);
    tracep->declBus(c+22,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+23,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+24,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+21,"io_imm", false,-1, 31,0);
    tracep->declBit(c+25,"io_isEbreak", false,-1);
    tracep->declBus(c+21,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+914,"reset", false,-1);
    tracep->declBit(c+12,"io_isJump", false,-1);
    tracep->declBit(c+13,"io_isBranch", false,-1);
    tracep->declBit(c+917,"io_resBranch", false,-1);
    tracep->declBus(c+739,"io_addrTarget", false,-1, 31,0);
    tracep->declBus(c+18,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+918,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+380,"io_lsuStatus", false,-1, 31,0);
    tracep->declBus(c+10,"io_out_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+379,"io_pc", false,-1, 31,0);
    tracep->declBus(c+10,"io_inst", false,-1, 31,0);
    tracep->declBit(c+770,"io_isIFU", false,-1);
    tracep->declBus(c+773,"io_status", false,-1, 31,0);
    tracep->declBit(c+769,"io_out_ar_valid", false,-1);
    tracep->declBus(c+379,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+379,"pcReg", false,-1, 31,0);
    tracep->declBit(c+381,"resBranch", false,-1);
    tracep->declBus(c+774,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+914,"reset", false,-1);
    tracep->declBit(c+7,"io_isLoad", false,-1);
    tracep->declBit(c+9,"io_isStore", false,-1);
    tracep->declBus(c+915,"io_addr", false,-1, 31,0);
    tracep->declBus(c+8,"io_len", false,-1, 31,0);
    tracep->declBit(c+771,"io_in_aw_valid", false,-1);
    tracep->declBus(c+33,"io_in_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+739,"io_out_r_bits_data", false,-1, 31,0);
    tracep->declBus(c+739,"io_res", false,-1, 31,0);
    tracep->declBit(c+771,"io_isLSU", false,-1);
    tracep->declBus(c+380,"io_status", false,-1, 31,0);
    tracep->declBit(c+7,"io_out_ar_valid", false,-1);
    tracep->declBus(c+915,"io_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+8,"io_out_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+9,"io_out_aw_valid", false,-1);
    tracep->declBus(c+33,"io_out_w_bits_data", false,-1, 31,0);
    tracep->declBus(c+382,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+34,"io_in_ar_valid", false,-1);
    tracep->declBus(c+39,"io_in_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+35,"io_in_ar_bits_len", false,-1, 31,0);
    tracep->declBit(c+36,"io_in_aw_valid", false,-1);
    tracep->declBus(c+37,"io_in_w_bits_data", false,-1, 31,0);
    tracep->declBit(c+770,"io_isIFU", false,-1);
    tracep->declBit(c+771,"io_isLSU", false,-1);
    tracep->declBus(c+10,"io_resIFU", false,-1, 31,0);
    tracep->declBus(c+739,"io_resLSU", false,-1, 31,0);
    tracep->declBus(c+775,"dataSRAM_io_len_r", false,-1, 31,0);
    tracep->declBus(c+776,"dataSRAM_io_wdata_r", false,-1, 31,0);
    tracep->declBus(c+777,"dataSRAM_io_addr_r", false,-1, 31,0);
    tracep->declBit(c+778,"dataSRAM_io_isLoad_r", false,-1);
    tracep->declBit(c+779,"dataSRAM_io_isStore_r", false,-1);
    tracep->declBus(c+383,"instSRAM_io_pc_r", false,-1, 31,0);
    tracep->pushNamePrefix("dataSRAM ");
    tracep->declBit(c+778,"isLoad", false,-1);
    tracep->declBit(c+779,"isStore", false,-1);
    tracep->declBus(c+777,"addr", false,-1, 31,0);
    tracep->declBus(c+775,"len", false,-1, 31,0);
    tracep->declBus(c+776,"wdata", false,-1, 31,0);
    tracep->declBus(c+739,"res", false,-1, 31,0);
    tracep->declBit(c+740,"load_flag", false,-1);
    tracep->declBit(c+741,"store_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instSRAM ");
    tracep->declBus(c+383,"pc", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+914,"reset", false,-1);
    tracep->declBit(c+25,"isEbreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+15,"io_writeEnable", false,-1);
    tracep->declBit(c+12,"io_isJump", false,-1);
    tracep->declBit(c+7,"io_isLoad", false,-1);
    tracep->declBit(c+16,"io_isUnsigned", false,-1);
    tracep->declBit(c+17,"io_isContext", false,-1);
    tracep->declBus(c+21,"io_imm", false,-1, 31,0);
    tracep->declBus(c+18,"io_csrType", false,-1, 3,0);
    tracep->declBus(c+19,"io_lsuType", false,-1, 3,0);
    tracep->declBus(c+379,"io_pc", false,-1, 31,0);
    tracep->declBus(c+739,"io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+22,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+23,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+24,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+380,"io_lsuStatus", false,-1, 31,0);
    tracep->declBus(c+916,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+33,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+40,"io_csrData", false,-1, 31,0);
    tracep->declBus(c+918,"io_resCSR", false,-1, 31,0);
    tracep->declBus(c+384,"snpc", false,-1, 31,0);
    tracep->declBus(c+919,"dataWrite", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+26,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+957,"R0_en", false,-1);
    tracep->declBit(c+879,"R0_clk", false,-1);
    tracep->declBus(c+958,"R1_addr", false,-1, 9,0);
    tracep->declBit(c+27,"R1_en", false,-1);
    tracep->declBit(c+879,"R1_clk", false,-1);
    tracep->declBus(c+959,"R2_addr", false,-1, 9,0);
    tracep->declBit(c+28,"R2_en", false,-1);
    tracep->declBit(c+879,"R2_clk", false,-1);
    tracep->declBus(c+26,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+29,"W0_en", false,-1);
    tracep->declBit(c+879,"W0_clk", false,-1);
    tracep->declBus(c+919,"W0_data", false,-1, 31,0);
    tracep->declBus(c+26,"W1_addr", false,-1, 9,0);
    tracep->declBit(c+30,"W1_en", false,-1);
    tracep->declBit(c+879,"W1_clk", false,-1);
    tracep->declBus(c+919,"W1_data", false,-1, 31,0);
    tracep->declBus(c+959,"W2_addr", false,-1, 9,0);
    tracep->declBit(c+27,"W2_en", false,-1);
    tracep->declBit(c+879,"W2_clk", false,-1);
    tracep->declBus(c+384,"W2_data", false,-1, 31,0);
    tracep->declBus(c+960,"W3_addr", false,-1, 9,0);
    tracep->declBit(c+27,"W3_en", false,-1);
    tracep->declBit(c+879,"W3_clk", false,-1);
    tracep->declBus(c+961,"W3_data", false,-1, 31,0);
    tracep->declBus(c+962,"W4_addr", false,-1, 9,0);
    tracep->declBit(c+27,"W4_en", false,-1);
    tracep->declBit(c+879,"W4_clk", false,-1);
    tracep->declBus(c+963,"W4_data", false,-1, 31,0);
    tracep->declBus(c+962,"W5_addr", false,-1, 9,0);
    tracep->declBit(c+28,"W5_en", false,-1);
    tracep->declBit(c+879,"W5_clk", false,-1);
    tracep->declBus(c+963,"W5_data", false,-1, 31,0);
    tracep->declBus(c+40,"R0_data", false,-1, 31,0);
    tracep->declBus(c+920,"R1_data", false,-1, 31,0);
    tracep->declBus(c+921,"R2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+22,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+957,"R0_en", false,-1);
    tracep->declBit(c+879,"R0_clk", false,-1);
    tracep->declBus(c+23,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+957,"R1_en", false,-1);
    tracep->declBit(c+879,"R1_clk", false,-1);
    tracep->declBus(c+24,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+43,"W0_en", false,-1);
    tracep->declBit(c+879,"W0_clk", false,-1);
    tracep->declBus(c+384,"W0_data", false,-1, 31,0);
    tracep->declBus(c+24,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+44,"W1_en", false,-1);
    tracep->declBit(c+879,"W1_clk", false,-1);
    tracep->declBus(c+919,"W1_data", false,-1, 31,0);
    tracep->declBus(c+24,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+31,"W2_en", false,-1);
    tracep->declBit(c+879,"W2_clk", false,-1);
    tracep->declBus(c+40,"W2_data", false,-1, 31,0);
    tracep->declBus(c+24,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+32,"W3_en", false,-1);
    tracep->declBit(c+879,"W3_clk", false,-1);
    tracep->declBus(c+40,"W3_data", false,-1, 31,0);
    tracep->declBus(c+916,"R0_data", false,-1, 31,0);
    tracep->declBus(c+33,"R1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+385+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"io_d", false,-1);
    tracep->declBit(c+417,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"io_d", false,-1);
    tracep->declBit(c+417,"io_q", false,-1);
    tracep->declBit(c+417,"sync_0", false,-1);
    tracep->declBit(c+418,"sync_1", false,-1);
    tracep->declBit(c+419,"sync_2", false,-1);
    tracep->declBit(c+420,"sync_3", false,-1);
    tracep->declBit(c+421,"sync_4", false,-1);
    tracep->declBit(c+422,"sync_5", false,-1);
    tracep->declBit(c+423,"sync_6", false,-1);
    tracep->declBit(c+424,"sync_7", false,-1);
    tracep->declBit(c+425,"sync_8", false,-1);
    tracep->declBit(c+426,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+474,"auto_in_psel", false,-1);
    tracep->declBit(c+475,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+754,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+940,"auto_in_pready", false,-1);
    tracep->declBit(c+941,"auto_in_pslverr", false,-1);
    tracep->declBus(c+942,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+881,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+882,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+883,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+884,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+885,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+886,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+887,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+888,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+889,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+890,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+780,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+474,"in_psel", false,-1);
    tracep->declBit(c+475,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+940,"in_pready", false,-1);
    tracep->declBus(c+942,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+941,"in_pslverr", false,-1);
    tracep->declBus(c+881,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+882,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+883,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+884,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+885,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+886,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+887,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+888,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+889,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+890,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+472,"auto_in_psel", false,-1);
    tracep->declBit(c+473,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+754,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+937,"auto_in_pready", false,-1);
    tracep->declBit(c+938,"auto_in_pslverr", false,-1);
    tracep->declBus(c+939,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+891,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+892,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+780,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+472,"in_psel", false,-1);
    tracep->declBit(c+473,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+937,"in_pready", false,-1);
    tracep->declBus(c+939,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+938,"in_pslverr", false,-1);
    tracep->declBit(c+891,"ps2_clk", false,-1);
    tracep->declBit(c+892,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+162,"auto_in_awvalid", false,-1);
    tracep->declBit(c+163,"auto_in_wvalid", false,-1);
    tracep->declBit(c+164,"auto_in_arready", false,-1);
    tracep->declBit(c+165,"auto_in_arvalid", false,-1);
    tracep->declBus(c+60,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+62,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+167,"auto_in_rvalid", false,-1);
    tracep->declBus(c+168,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+169,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+167,"state", false,-1);
    tracep->declQuad(c+169,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+168,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+427,"raddr", false,-1, 31,0);
    tracep->declBit(c+428,"ren", false,-1);
    tracep->declBus(c+429,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+755,"auto_in_psel", false,-1);
    tracep->declBit(c+476,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+748,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+907,"auto_in_pready", false,-1);
    tracep->declBit(c+933,"auto_in_pslverr", false,-1);
    tracep->declBus(c+47,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+903,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+904,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+809,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+748,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+755,"in_psel", false,-1);
    tracep->declBit(c+476,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+907,"in_pready", false,-1);
    tracep->declBus(c+47,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+933,"in_pslverr", false,-1);
    tracep->declBit(c+903,"qspi_sck", false,-1);
    tracep->declBit(c+904,"qspi_ce_n", false,-1);
    tracep->declBus(c+809,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+809,"din", false,-1, 3,0);
    tracep->declBus(c+865,"dout", false,-1, 3,0);
    tracep->declBus(c+866,"douten", false,-1, 3,0);
    tracep->declBit(c+922,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+879,"clk_i", false,-1);
    tracep->declBit(c+880,"rst_i", false,-1);
    tracep->declBus(c+748,"adr_i", false,-1, 31,0);
    tracep->declBus(c+750,"dat_i", false,-1, 31,0);
    tracep->declBus(c+47,"dat_o", false,-1, 31,0);
    tracep->declBus(c+751,"sel_i", false,-1, 3,0);
    tracep->declBit(c+755,"cyc_i", false,-1);
    tracep->declBit(c+755,"stb_i", false,-1);
    tracep->declBit(c+922,"ack_o", false,-1);
    tracep->declBit(c+749,"we_i", false,-1);
    tracep->declBit(c+903,"sck", false,-1);
    tracep->declBit(c+904,"ce_n", false,-1);
    tracep->declBus(c+809,"din", false,-1, 3,0);
    tracep->declBus(c+865,"dout", false,-1, 3,0);
    tracep->declBus(c+866,"douten", false,-1, 3,0);
    tracep->declBus(c+964,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+965,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+515,"mr_sck", false,-1);
    tracep->declBit(c+516,"mr_ce_n", false,-1);
    tracep->declBus(c+809,"mr_din", false,-1, 3,0);
    tracep->declBus(c+517,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+518,"mr_doe", false,-1);
    tracep->declBit(c+519,"mw_sck", false,-1);
    tracep->declBit(c+520,"mw_ce_n", false,-1);
    tracep->declBus(c+809,"mw_din", false,-1, 3,0);
    tracep->declBus(c+867,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+521,"mw_doe", false,-1);
    tracep->declBit(c+868,"mr_rd", false,-1);
    tracep->declBit(c+522,"mr_done", false,-1);
    tracep->declBit(c+869,"mw_wr", false,-1);
    tracep->declBit(c+870,"mw_done", false,-1);
    tracep->declBit(c+755,"wb_valid", false,-1);
    tracep->declBit(c+781,"wb_we", false,-1);
    tracep->declBit(c+782,"wb_re", false,-1);
    tracep->declBit(c+523,"state", false,-1);
    tracep->declBit(c+871,"nstate", false,-1);
    tracep->declBus(c+783,"size", false,-1, 2,0);
    tracep->declBus(c+784,"byte0", false,-1, 7,0);
    tracep->declBus(c+785,"byte1", false,-1, 7,0);
    tracep->declBus(c+786,"byte2", false,-1, 7,0);
    tracep->declBus(c+787,"byte3", false,-1, 7,0);
    tracep->declBus(c+788,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+923,"rst_n", false,-1);
    tracep->declBus(c+789,"addr", false,-1, 23,0);
    tracep->declBit(c+868,"rd", false,-1);
    tracep->declBus(c+966,"size", false,-1, 2,0);
    tracep->declBit(c+522,"done", false,-1);
    tracep->declBus(c+47,"line", false,-1, 31,0);
    tracep->declBit(c+515,"sck", false,-1);
    tracep->declBit(c+516,"ce_n", false,-1);
    tracep->declBus(c+809,"din", false,-1, 3,0);
    tracep->declBus(c+517,"dout", false,-1, 3,0);
    tracep->declBit(c+518,"douten", false,-1);
    tracep->declBus(c+964,"IDLE", false,-1, 0,0);
    tracep->declBus(c+965,"READ", false,-1, 0,0);
    tracep->declBus(c+967,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+524,"state", false,-1);
    tracep->declBit(c+872,"nstate", false,-1);
    tracep->declBus(c+525,"counter", false,-1, 7,0);
    tracep->declBus(c+526,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+430+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+968,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+527,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+923,"rst_n", false,-1);
    tracep->declBus(c+790,"addr", false,-1, 23,0);
    tracep->declBus(c+788,"line", false,-1, 31,0);
    tracep->declBus(c+783,"size", false,-1, 2,0);
    tracep->declBit(c+869,"wr", false,-1);
    tracep->declBit(c+870,"done", false,-1);
    tracep->declBit(c+519,"sck", false,-1);
    tracep->declBit(c+520,"ce_n", false,-1);
    tracep->declBus(c+809,"din", false,-1, 3,0);
    tracep->declBus(c+867,"dout", false,-1, 3,0);
    tracep->declBit(c+521,"douten", false,-1);
    tracep->declBus(c+964,"IDLE", false,-1, 0,0);
    tracep->declBus(c+965,"WRITE", false,-1, 0,0);
    tracep->declBus(c+791,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+528,"state", false,-1);
    tracep->declBit(c+873,"nstate", false,-1);
    tracep->declBus(c+529,"counter", false,-1, 7,0);
    tracep->declBus(c+530,"saddr", false,-1, 23,0);
    tracep->declBus(c+969,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+468,"auto_in_psel", false,-1);
    tracep->declBit(c+469,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+748,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"auto_in_pready", false,-1);
    tracep->declBit(c+933,"auto_in_pslverr", false,-1);
    tracep->declBus(c+512,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+905,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+502,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+503,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+504,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+505,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+506,"sdram_bundle_we", false,-1);
    tracep->declBus(c+507,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+509,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+748,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+468,"in_psel", false,-1);
    tracep->declBit(c+469,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"in_pready", false,-1);
    tracep->declBus(c+512,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+933,"in_pslverr", false,-1);
    tracep->declBit(c+905,"sdram_clk", false,-1);
    tracep->declBit(c+502,"sdram_cke", false,-1);
    tracep->declBit(c+503,"sdram_cs", false,-1);
    tracep->declBit(c+504,"sdram_ras", false,-1);
    tracep->declBit(c+505,"sdram_cas", false,-1);
    tracep->declBit(c+506,"sdram_we", false,-1);
    tracep->declBus(c+507,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+509,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+531,"sdram_dout_en", false,-1);
    tracep->declBus(c+532,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+434,"state", false,-1, 1,0);
    tracep->declBit(c+533,"req_accept", false,-1);
    tracep->declBit(c+792,"is_read", false,-1);
    tracep->declBit(c+793,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+879,"clk_i", false,-1);
    tracep->declBit(c+880,"rst_i", false,-1);
    tracep->declBus(c+794,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+792,"inport_rd_i", false,-1);
    tracep->declBus(c+945,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+748,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+750,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+510,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+533,"inport_accept_o", false,-1);
    tracep->declBit(c+511,"inport_ack_o", false,-1);
    tracep->declBit(c+933,"inport_error_o", false,-1);
    tracep->declBus(c+512,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+905,"sdram_clk_o", false,-1);
    tracep->declBit(c+502,"sdram_cke_o", false,-1);
    tracep->declBit(c+503,"sdram_cs_o", false,-1);
    tracep->declBit(c+504,"sdram_ras_o", false,-1);
    tracep->declBit(c+505,"sdram_cas_o", false,-1);
    tracep->declBit(c+506,"sdram_we_o", false,-1);
    tracep->declBus(c+509,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+507,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+532,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+531,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+970,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+971,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+972,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+973,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+973,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+973,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+974,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+975,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+976,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+977,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+978,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+974,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+979,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+980,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+981,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+982,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+983,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+984,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+985,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+943,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+986,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+974,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+943,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+985,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+984,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+980,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+982,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+981,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+983,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+979,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+987,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+988,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+989,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+989,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+990,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+989,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+973,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+973,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+991,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+748,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+794,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+792,"ram_rd_w", false,-1);
    tracep->declBit(c+533,"ram_accept_w", false,-1);
    tracep->declBus(c+750,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+512,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+511,"ram_ack_w", false,-1);
    tracep->declBit(c+795,"ram_req_w", false,-1);
    tracep->declBus(c+534,"command_q", false,-1, 3,0);
    tracep->declBus(c+507,"addr_q", false,-1, 12,0);
    tracep->declBus(c+532,"data_q", false,-1, 15,0);
    tracep->declBit(c+535,"data_rd_en_q", false,-1);
    tracep->declBus(c+509,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+502,"cke_q", false,-1);
    tracep->declBus(c+508,"bank_q", false,-1, 1,0);
    tracep->declBus(c+536,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+537,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+538,"refresh_q", false,-1);
    tracep->declBus(c+539,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+540+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+544,"state_q", false,-1, 3,0);
    tracep->declBus(c+874,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+875,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+545,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+546,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+796,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+797,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+798,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+974,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+547,"delay_q", false,-1, 3,0);
    tracep->declBus(c+876,"delay_r", false,-1, 3,0);
    tracep->declBus(c+992,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+548,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+549,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+550,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+551,"idx", false,-1, 31,0);
    tracep->declBus(c+552,"rd_q", false,-1, 3,0);
    tracep->declBit(c+511,"ack_q", false,-1);
    tracep->declArray(c+553,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+759,"auto_in_psel", false,-1);
    tracep->declBit(c+760,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+753,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"auto_in_pready", false,-1);
    tracep->declBit(c+933,"auto_in_pslverr", false,-1);
    tracep->declBus(c+514,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+500,"spi_bundle_sck", false,-1);
    tracep->declBus(c+501,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+901,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+902,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+993,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+994,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+995,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+799,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+759,"in_psel", false,-1);
    tracep->declBit(c+760,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"in_pready", false,-1);
    tracep->declBus(c+514,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+933,"in_pslverr", false,-1);
    tracep->declBit(c+500,"spi_sck", false,-1);
    tracep->declBus(c+501,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+901,"spi_mosi", false,-1);
    tracep->declBit(c+902,"spi_miso", false,-1);
    tracep->declBit(c+556,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+996,"Tp", false,-1, 31,0);
    tracep->declBit(c+879,"wb_clk_i", false,-1);
    tracep->declBit(c+880,"wb_rst_i", false,-1);
    tracep->declBus(c+800,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+750,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+514,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+751,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+749,"wb_we_i", false,-1);
    tracep->declBit(c+759,"wb_stb_i", false,-1);
    tracep->declBit(c+760,"wb_cyc_i", false,-1);
    tracep->declBit(c+513,"wb_ack_o", false,-1);
    tracep->declBit(c+933,"wb_err_o", false,-1);
    tracep->declBit(c+556,"wb_int_o", false,-1);
    tracep->declBus(c+501,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+500,"sclk_pad_o", false,-1);
    tracep->declBit(c+901,"mosi_pad_o", false,-1);
    tracep->declBit(c+902,"miso_pad_i", false,-1);
    tracep->declBus(c+557,"divider", false,-1, 15,0);
    tracep->declBus(c+558,"ctrl", false,-1, 13,0);
    tracep->declBus(c+559,"ss", false,-1, 7,0);
    tracep->declBus(c+877,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+560,"rx", false,-1, 127,0);
    tracep->declBit(c+564,"rx_negedge", false,-1);
    tracep->declBit(c+565,"tx_negedge", false,-1);
    tracep->declBus(c+566,"char_len", false,-1, 6,0);
    tracep->declBit(c+567,"go", false,-1);
    tracep->declBit(c+568,"lsb", false,-1);
    tracep->declBit(c+569,"ie", false,-1);
    tracep->declBit(c+570,"ass", false,-1);
    tracep->declBit(c+801,"spi_divider_sel", false,-1);
    tracep->declBit(c+802,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+803,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+804,"spi_ss_sel", false,-1);
    tracep->declBit(c+571,"tip", false,-1);
    tracep->declBit(c+572,"pos_edge", false,-1);
    tracep->declBit(c+573,"neg_edge", false,-1);
    tracep->declBit(c+574,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+996,"Tp", false,-1, 31,0);
    tracep->declBit(c+879,"clk_in", false,-1);
    tracep->declBit(c+880,"rst", false,-1);
    tracep->declBit(c+571,"enable", false,-1);
    tracep->declBit(c+567,"go", false,-1);
    tracep->declBit(c+574,"last_clk", false,-1);
    tracep->declBus(c+557,"divider", false,-1, 15,0);
    tracep->declBit(c+500,"clk_out", false,-1);
    tracep->declBit(c+572,"pos_edge", false,-1);
    tracep->declBit(c+573,"neg_edge", false,-1);
    tracep->declBus(c+575,"cnt", false,-1, 15,0);
    tracep->declBit(c+576,"cnt_zero", false,-1);
    tracep->declBit(c+577,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+996,"Tp", false,-1, 31,0);
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+880,"rst", false,-1);
    tracep->declBus(c+805,"latch", false,-1, 3,0);
    tracep->declBus(c+751,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+566,"len", false,-1, 6,0);
    tracep->declBit(c+568,"lsb", false,-1);
    tracep->declBit(c+567,"go", false,-1);
    tracep->declBit(c+572,"pos_edge", false,-1);
    tracep->declBit(c+573,"neg_edge", false,-1);
    tracep->declBit(c+564,"rx_negedge", false,-1);
    tracep->declBit(c+565,"tx_negedge", false,-1);
    tracep->declBit(c+571,"tip", false,-1);
    tracep->declBit(c+574,"last", false,-1);
    tracep->declBus(c+750,"p_in", false,-1, 31,0);
    tracep->declArray(c+560,"p_out", false,-1, 127,0);
    tracep->declBit(c+500,"s_clk", false,-1);
    tracep->declBit(c+902,"s_in", false,-1);
    tracep->declBit(c+901,"s_out", false,-1);
    tracep->declBus(c+578,"cnt", false,-1, 7,0);
    tracep->declArray(c+560,"data", false,-1, 127,0);
    tracep->declBus(c+579,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+580,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+581,"rx_clk", false,-1);
    tracep->declBit(c+582,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+756,"auto_in_psel", false,-1);
    tracep->declBit(c+757,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+754,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+758,"auto_in_pready", false,-1);
    tracep->declBit(c+933,"auto_in_pslverr", false,-1);
    tracep->declBus(c+908,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+899,"uart_rx", false,-1);
    tracep->declBit(c+900,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+756,"in_psel", false,-1);
    tracep->declBit(c+757,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+758,"in_pready", false,-1);
    tracep->declBit(c+933,"in_pslverr", false,-1);
    tracep->declBus(c+780,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+899,"uart_rx", false,-1);
    tracep->declBit(c+900,"uart_tx", false,-1);
    tracep->declBit(c+583,"rtsn", false,-1);
    tracep->declBit(c+933,"ctsn", false,-1);
    tracep->declBit(c+584,"dtr_pad_o", false,-1);
    tracep->declBit(c+933,"dsr_pad_i", false,-1);
    tracep->declBit(c+933,"ri_pad_i", false,-1);
    tracep->declBit(c+933,"dcd_pad_i", false,-1);
    tracep->declBit(c+585,"interrupt", false,-1);
    tracep->declBit(c+924,"reg_we", false,-1);
    tracep->declBit(c+925,"reg_re", false,-1);
    tracep->declBus(c+806,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+807,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+435,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+878,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+586,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+880,"wb_rst_i", false,-1);
    tracep->declBus(c+806,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+808,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+878,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+924,"wb_we_i", false,-1);
    tracep->declBit(c+925,"wb_re_i", false,-1);
    tracep->declBit(c+900,"stx_pad_o", false,-1);
    tracep->declBit(c+899,"srx_pad_i", false,-1);
    tracep->declBus(c+987,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+586,"rts_pad_o", false,-1);
    tracep->declBit(c+584,"dtr_pad_o", false,-1);
    tracep->declBit(c+585,"int_o", false,-1);
    tracep->declBit(c+587,"enable", false,-1);
    tracep->declBit(c+588,"srx_pad", false,-1);
    tracep->declBus(c+589,"ier", false,-1, 3,0);
    tracep->declBus(c+590,"iir", false,-1, 3,0);
    tracep->declBus(c+591,"fcr", false,-1, 1,0);
    tracep->declBus(c+592,"mcr", false,-1, 4,0);
    tracep->declBus(c+593,"lcr", false,-1, 7,0);
    tracep->declBus(c+594,"msr", false,-1, 7,0);
    tracep->declBus(c+595,"dl", false,-1, 15,0);
    tracep->declBus(c+596,"scratch", false,-1, 7,0);
    tracep->declBit(c+597,"start_dlc", false,-1);
    tracep->declBit(c+598,"lsr_mask_d", false,-1);
    tracep->declBit(c+599,"msi_reset", false,-1);
    tracep->declBus(c+600,"dlc", false,-1, 15,0);
    tracep->declBus(c+601,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+602,"rx_reset", false,-1);
    tracep->declBit(c+603,"tx_reset", false,-1);
    tracep->declBit(c+604,"dlab", false,-1);
    tracep->declBit(c+957,"cts_pad_i", false,-1);
    tracep->declBit(c+933,"dsr_pad_i", false,-1);
    tracep->declBit(c+933,"ri_pad_i", false,-1);
    tracep->declBit(c+933,"dcd_pad_i", false,-1);
    tracep->declBit(c+605,"loopback", false,-1);
    tracep->declBit(c+933,"cts", false,-1);
    tracep->declBit(c+957,"dsr", false,-1);
    tracep->declBit(c+957,"ri", false,-1);
    tracep->declBit(c+957,"dcd", false,-1);
    tracep->declBit(c+606,"cts_c", false,-1);
    tracep->declBit(c+607,"dsr_c", false,-1);
    tracep->declBit(c+608,"ri_c", false,-1);
    tracep->declBit(c+609,"dcd_c", false,-1);
    tracep->declBus(c+610,"lsr", false,-1, 7,0);
    tracep->declBit(c+611,"lsr0", false,-1);
    tracep->declBit(c+612,"lsr1", false,-1);
    tracep->declBit(c+613,"lsr2", false,-1);
    tracep->declBit(c+614,"lsr3", false,-1);
    tracep->declBit(c+615,"lsr4", false,-1);
    tracep->declBit(c+616,"lsr5", false,-1);
    tracep->declBit(c+617,"lsr6", false,-1);
    tracep->declBit(c+618,"lsr7", false,-1);
    tracep->declBit(c+619,"lsr0r", false,-1);
    tracep->declBit(c+620,"lsr1r", false,-1);
    tracep->declBit(c+621,"lsr2r", false,-1);
    tracep->declBit(c+622,"lsr3r", false,-1);
    tracep->declBit(c+623,"lsr4r", false,-1);
    tracep->declBit(c+624,"lsr5r", false,-1);
    tracep->declBit(c+625,"lsr6r", false,-1);
    tracep->declBit(c+626,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+627,"rls_int", false,-1);
    tracep->declBit(c+628,"rda_int", false,-1);
    tracep->declBit(c+629,"ti_int", false,-1);
    tracep->declBit(c+630,"thre_int", false,-1);
    tracep->declBit(c+631,"ms_int", false,-1);
    tracep->declBit(c+632,"tf_push", false,-1);
    tracep->declBit(c+633,"rf_pop", false,-1);
    tracep->declBus(c+926,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+634,"rf_error_bit", false,-1);
    tracep->declBit(c+612,"rf_overrun", false,-1);
    tracep->declBit(c+635,"rf_push_pulse", false,-1);
    tracep->declBus(c+636,"rf_count", false,-1, 4,0);
    tracep->declBus(c+637,"tf_count", false,-1, 4,0);
    tracep->declBus(c+638,"tstate", false,-1, 2,0);
    tracep->declBus(c+639,"rstate", false,-1, 3,0);
    tracep->declBus(c+640,"counter_t", false,-1, 9,0);
    tracep->declBit(c+641,"thre_set_en", false,-1);
    tracep->declBus(c+642,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+643,"block_value", false,-1, 7,0);
    tracep->declBit(c+644,"serial_out", false,-1);
    tracep->declBit(c+645,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+646,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+647,"lsr0_d", false,-1);
    tracep->declBit(c+648,"lsr1_d", false,-1);
    tracep->declBit(c+649,"lsr2_d", false,-1);
    tracep->declBit(c+650,"lsr3_d", false,-1);
    tracep->declBit(c+651,"lsr4_d", false,-1);
    tracep->declBit(c+652,"lsr5_d", false,-1);
    tracep->declBit(c+653,"lsr6_d", false,-1);
    tracep->declBit(c+654,"lsr7_d", false,-1);
    tracep->declBit(c+655,"rls_int_d", false,-1);
    tracep->declBit(c+656,"thre_int_d", false,-1);
    tracep->declBit(c+657,"ms_int_d", false,-1);
    tracep->declBit(c+658,"ti_int_d", false,-1);
    tracep->declBit(c+659,"rda_int_d", false,-1);
    tracep->declBit(c+660,"rls_int_rise", false,-1);
    tracep->declBit(c+661,"thre_int_rise", false,-1);
    tracep->declBit(c+662,"ms_int_rise", false,-1);
    tracep->declBit(c+663,"ti_int_rise", false,-1);
    tracep->declBit(c+664,"rda_int_rise", false,-1);
    tracep->declBit(c+665,"rls_int_pnd", false,-1);
    tracep->declBit(c+666,"rda_int_pnd", false,-1);
    tracep->declBit(c+667,"thre_int_pnd", false,-1);
    tracep->declBit(c+668,"ms_int_pnd", false,-1);
    tracep->declBit(c+669,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+996,"Tp", false,-1, 31,0);
    tracep->declBus(c+996,"width", false,-1, 31,0);
    tracep->declBus(c+965,"init_value", false,-1, 0,0);
    tracep->declBit(c+880,"rst_i", false,-1);
    tracep->declBit(c+879,"clk_i", false,-1);
    tracep->declBit(c+933,"stage1_rst_i", false,-1);
    tracep->declBit(c+957,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+899,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+588,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+670,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+880,"wb_rst_i", false,-1);
    tracep->declBus(c+593,"lcr", false,-1, 7,0);
    tracep->declBit(c+633,"rf_pop", false,-1);
    tracep->declBit(c+645,"srx_pad_i", false,-1);
    tracep->declBit(c+587,"enable", false,-1);
    tracep->declBit(c+602,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+640,"counter_t", false,-1, 9,0);
    tracep->declBus(c+636,"rf_count", false,-1, 4,0);
    tracep->declBus(c+926,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+612,"rf_overrun", false,-1);
    tracep->declBit(c+634,"rf_error_bit", false,-1);
    tracep->declBus(c+639,"rstate", false,-1, 3,0);
    tracep->declBit(c+635,"rf_push_pulse", false,-1);
    tracep->declBus(c+671,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+672,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+673,"rshift", false,-1, 7,0);
    tracep->declBit(c+674,"rparity", false,-1);
    tracep->declBit(c+675,"rparity_error", false,-1);
    tracep->declBit(c+676,"rframing_error", false,-1);
    tracep->declBit(c+677,"rbit_in", false,-1);
    tracep->declBit(c+678,"rparity_xor", false,-1);
    tracep->declBus(c+679,"counter_b", false,-1, 7,0);
    tracep->declBit(c+680,"rf_push_q", false,-1);
    tracep->declBus(c+681,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+682,"rf_push", false,-1);
    tracep->declBit(c+683,"break_error", false,-1);
    tracep->declBit(c+684,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+685,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+686,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+687,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+943,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+985,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+984,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+980,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+982,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+981,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+983,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+979,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+987,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+988,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+997,"sr_push", false,-1, 3,0);
    tracep->declBus(c+688,"toc_value", false,-1, 9,0);
    tracep->declBus(c+689,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+998,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+990,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+974,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+999,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+880,"wb_rst_i", false,-1);
    tracep->declBit(c+635,"push", false,-1);
    tracep->declBit(c+633,"pop", false,-1);
    tracep->declBus(c+681,"data_in", false,-1, 10,0);
    tracep->declBit(c+602,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+926,"data_out", false,-1, 10,0);
    tracep->declBit(c+612,"overrun", false,-1);
    tracep->declBus(c+636,"count", false,-1, 4,0);
    tracep->declBit(c+634,"error_bit", false,-1);
    tracep->declBus(c+927,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+690+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+706,"top", false,-1, 3,0);
    tracep->declBus(c+707,"bottom", false,-1, 3,0);
    tracep->declBus(c+708,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+709,"word0", false,-1, 2,0);
    tracep->declBus(c+710,"word1", false,-1, 2,0);
    tracep->declBus(c+711,"word2", false,-1, 2,0);
    tracep->declBus(c+712,"word3", false,-1, 2,0);
    tracep->declBus(c+713,"word4", false,-1, 2,0);
    tracep->declBus(c+714,"word5", false,-1, 2,0);
    tracep->declBus(c+715,"word6", false,-1, 2,0);
    tracep->declBus(c+716,"word7", false,-1, 2,0);
    tracep->declBus(c+717,"word8", false,-1, 2,0);
    tracep->declBus(c+718,"word9", false,-1, 2,0);
    tracep->declBus(c+719,"word10", false,-1, 2,0);
    tracep->declBus(c+720,"word11", false,-1, 2,0);
    tracep->declBus(c+721,"word12", false,-1, 2,0);
    tracep->declBus(c+722,"word13", false,-1, 2,0);
    tracep->declBus(c+723,"word14", false,-1, 2,0);
    tracep->declBus(c+724,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+974,"addr_width", false,-1, 31,0);
    tracep->declBus(c+995,"data_width", false,-1, 31,0);
    tracep->declBus(c+990,"depth", false,-1, 31,0);
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+635,"we", false,-1);
    tracep->declBus(c+706,"a", false,-1, 3,0);
    tracep->declBus(c+707,"dpra", false,-1, 3,0);
    tracep->declBus(c+725,"di", false,-1, 7,0);
    tracep->declBus(c+927,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+436+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+880,"wb_rst_i", false,-1);
    tracep->declBus(c+593,"lcr", false,-1, 7,0);
    tracep->declBit(c+632,"tf_push", false,-1);
    tracep->declBus(c+808,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+587,"enable", false,-1);
    tracep->declBit(c+603,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+644,"stx_pad_o", false,-1);
    tracep->declBus(c+638,"tstate", false,-1, 2,0);
    tracep->declBus(c+637,"tf_count", false,-1, 4,0);
    tracep->declBus(c+726,"counter", false,-1, 4,0);
    tracep->declBus(c+727,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+728,"shift_out", false,-1, 6,0);
    tracep->declBit(c+729,"stx_o_tmp", false,-1);
    tracep->declBit(c+730,"parity_xor", false,-1);
    tracep->declBit(c+731,"tf_pop", false,-1);
    tracep->declBit(c+732,"bit_out", false,-1);
    tracep->declBus(c+808,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+928,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+733,"tf_overrun", false,-1);
    tracep->declBus(c+946,"s_idle", false,-1, 2,0);
    tracep->declBus(c+932,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1000,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1001,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+966,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1002,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+995,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+990,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+974,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+999,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+880,"wb_rst_i", false,-1);
    tracep->declBit(c+632,"push", false,-1);
    tracep->declBit(c+731,"pop", false,-1);
    tracep->declBus(c+808,"data_in", false,-1, 7,0);
    tracep->declBit(c+603,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+928,"data_out", false,-1, 7,0);
    tracep->declBit(c+733,"overrun", false,-1);
    tracep->declBus(c+637,"count", false,-1, 4,0);
    tracep->declBus(c+734,"top", false,-1, 3,0);
    tracep->declBus(c+735,"bottom", false,-1, 3,0);
    tracep->declBus(c+736,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+974,"addr_width", false,-1, 31,0);
    tracep->declBus(c+995,"data_width", false,-1, 31,0);
    tracep->declBus(c+990,"depth", false,-1, 31,0);
    tracep->declBit(c+879,"clk", false,-1);
    tracep->declBit(c+632,"we", false,-1);
    tracep->declBus(c+734,"a", false,-1, 3,0);
    tracep->declBus(c+735,"dpra", false,-1, 3,0);
    tracep->declBus(c+808,"di", false,-1, 7,0);
    tracep->declBus(c+928,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+452+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBit(c+470,"auto_in_psel", false,-1);
    tracep->declBit(c+471,"auto_in_penable", false,-1);
    tracep->declBit(c+749,"auto_in_pwrite", false,-1);
    tracep->declBus(c+753,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+932,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+750,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"auto_in_pready", false,-1);
    tracep->declBit(c+935,"auto_in_pslverr", false,-1);
    tracep->declBus(c+936,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+893,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+894,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+895,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+896,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+897,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+898,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+879,"clock", false,-1);
    tracep->declBit(c+880,"reset", false,-1);
    tracep->declBus(c+799,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+470,"in_psel", false,-1);
    tracep->declBit(c+471,"in_penable", false,-1);
    tracep->declBus(c+932,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+749,"in_pwrite", false,-1);
    tracep->declBus(c+750,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+751,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"in_pready", false,-1);
    tracep->declBus(c+936,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+935,"in_pslverr", false,-1);
    tracep->declBus(c+893,"vga_r", false,-1, 7,0);
    tracep->declBus(c+894,"vga_g", false,-1, 7,0);
    tracep->declBus(c+895,"vga_b", false,-1, 7,0);
    tracep->declBit(c+896,"vga_hsync", false,-1);
    tracep->declBit(c+897,"vga_vsync", false,-1);
    tracep->declBit(c+898,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+500,"sck", false,-1);
    tracep->declBit(c+737,"ss", false,-1);
    tracep->declBit(c+901,"mosi", false,-1);
    tracep->declBit(c+957,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+500,"sck", false,-1);
    tracep->declBit(c+738,"ss", false,-1);
    tracep->declBit(c+901,"mosi", false,-1);
    tracep->declBit(c+902,"miso", false,-1);
    tracep->declBit(c+738,"reset", false,-1);
    tracep->declBus(c+742,"state", false,-1, 2,0);
    tracep->declBus(c+743,"counter", false,-1, 7,0);
    tracep->declBus(c+744,"cmd", false,-1, 7,0);
    tracep->declBus(c+745,"addr", false,-1, 23,0);
    tracep->declBus(c+746,"data", false,-1, 31,0);
    tracep->declBit(c+747,"ren", false,-1);
    tracep->declBus(c+929,"rdata", false,-1, 31,0);
    tracep->declBus(c+930,"raddr", false,-1, 31,0);
    tracep->declBus(c+931,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+500,"clock", false,-1);
    tracep->declBit(c+747,"valid", false,-1);
    tracep->declBus(c+744,"cmd", false,-1, 7,0);
    tracep->declBus(c+930,"addr", false,-1, 31,0);
    tracep->declBus(c+929,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+903,"sck", false,-1);
    tracep->declBit(c+904,"ce_n", false,-1);
    tracep->declBus(c+809,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+905,"clk", false,-1);
    tracep->declBit(c+502,"cke", false,-1);
    tracep->declBit(c+503,"cs", false,-1);
    tracep->declBit(c+504,"ras", false,-1);
    tracep->declBit(c+505,"cas", false,-1);
    tracep->declBit(c+506,"we", false,-1);
    tracep->declBus(c+507,"a", false,-1, 12,0);
    tracep->declBus(c+508,"ba", false,-1, 1,0);
    tracep->declBus(c+509,"dqm", false,-1, 1,0);
    tracep->declBus(c+510,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_ar_valid));
    bufp->fullIData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_lsuType),32);
    bufp->fullBit(oldp+9,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_hc285b89a__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_5))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_3))));
    bufp->fullIData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isALUSrc));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isJump));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isBranch));
    bufp->fullBit(oldp+14,(((0x37U != (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_h87db9210__0) 
                               | ((0x67U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5eaebdb1__0))))));
    bufp->fullBit(oldp+15,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_11) 
                            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_7)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_5) 
                                  | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_3)) 
                                     & ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
                                        | ((0x113U 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN)) 
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
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_isUnsigned));
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isContext));
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_csrType),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_lsuType),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleEXControl_aluType),4);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__casez_tmp),32);
    bufp->fullCData(oldp+22,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                       >> 7U))),5);
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_isEbreak));
    bufp->fullSData(oldp+26,((0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__casez_tmp)),10);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_4));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_6));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W0_en) 
                            & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                               >> 7U))))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____Vcellinp__csrs_ext__W1_en) 
                            & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resIFU 
                                               >> 7U))))));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data),32);
    bufp->fullBit(oldp+34,((1U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__exec))
                                   ? ((~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))) 
                                      | (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
                                            | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))))
                                   : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__exec)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_ar_valid))))));
    bufp->fullIData(oldp+35,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1)
                               ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_lsuType))),32);
    bufp->fullBit(oldp+36,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__exec)) 
                            & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__exec)) 
                               & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____VdfgTmp_hc285b89a__0) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_5))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_3))))));
    bufp->fullIData(oldp+37,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1)
                               ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_w_bits_data)),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__operand1),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_out_ar_bits_addr),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___csrs_ext_R0_data),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__operand2),32);
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isJump))));
    bufp->fullBit(oldp+44,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isJump)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN))));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+46,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+47,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+77,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+78,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+81,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+83,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+86,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+87,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+118,(((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready))));
    bufp->fullIData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                >> 8U))));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+129,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)))));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+136,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+139,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+141,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+142,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+155,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+158,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+164,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+166,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+175,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+261,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+337,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+341,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+345,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+350,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+354,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+370,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+375,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pcReg),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),32);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__resBranch));
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__instSRAM_io_pc_r),32);
    bufp->fullIData(oldp+384,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pcReg)),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+427,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+468,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+469,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+470,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+471,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+477,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullCData(oldp+478,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+479,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+480,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+481,(((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready))));
    bufp->fullBit(oldp+482,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0))));
    bufp->fullBit(oldp+483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+485,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+489,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+490,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+504,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+506,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+510,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+512,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+517,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+518,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+522,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+527,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+533,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+565,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+566,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+567,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+568,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+570,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+574,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+576,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+577,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+579,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+583,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+584,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+586,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+605,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+606,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+607,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+608,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+609,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+610,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+613,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+614,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+615,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+634,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+641,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+660,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+661,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+662,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+663,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+664,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+683,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+684,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+685,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+686,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+687,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+689,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+708,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+725,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+736,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+737,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___sram_io_resLSU),32);
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM__DOT__load_flag));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM__DOT__store_flag));
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+747,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+753,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+754,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+758,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+768,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+769,((1U & ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))) 
                                   | (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
                                         | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))))))));
    bufp->fullBit(oldp+770,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))))));
    bufp->fullBit(oldp+771,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))));
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__exec),2);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),32);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_len_r),32);
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_wdata_r),32);
    bufp->fullIData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_addr_r),32);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_isLoad_r));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__dataSRAM_io_isStore_r));
    bufp->fullIData(oldp+780,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+786,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+787,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+788,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+789,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+790,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+791,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+796,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+797,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+798,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+799,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+800,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+803,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+806,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+809,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+814,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+820,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)))));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+849,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+850,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+851,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+852,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+853,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+854,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+857,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+858,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+859,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+860,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+861,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+862,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+863,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+864,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+879,(vlSelf->clock));
    bufp->fullBit(oldp+880,(vlSelf->reset));
    bufp->fullSData(oldp+881,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+882,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+883,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+884,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+885,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+886,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+887,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+888,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+889,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+890,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+891,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+892,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+893,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+894,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+895,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+896,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+897,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+898,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+899,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+900,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+902,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+904,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+905,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+906,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+907,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+908,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullQData(oldp+909,((((QData)((IData)(((1U 
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
    bufp->fullQData(oldp+911,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+913,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+915,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__casez_tmp
                                : 0U)),32);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_dataRead1),32);
    bufp->fullBit(oldp+917,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)) 
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
    bufp->fullIData(oldp+918,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___controller_io_bundleControlOut_isContext)) 
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
                                              : 0U)
                                          : 0U)))),32);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__dataWrite),32);
    bufp->fullIData(oldp+920,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_4)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csrs_ext__DOT__Memory
                               [0x305U] : 0U)),32);
    bufp->fullIData(oldp+921,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_6)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csrs_ext__DOT__Memory
                               [0x341U] : 0U)),32);
    bufp->fullBit(oldp+922,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+923,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+926,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+930,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+932,(1U),3);
    bufp->fullBit(oldp+933,(0U));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+943,(0U),4);
    bufp->fullIData(oldp+944,(0U),32);
    bufp->fullCData(oldp+945,(0U),8);
    bufp->fullCData(oldp+946,(0U),3);
    bufp->fullCData(oldp+947,(0U),2);
    bufp->fullQData(oldp+948,(0ULL),64);
    bufp->fullQData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullQData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullWData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+957,(1U));
    bufp->fullSData(oldp+958,(0x305U),10);
    bufp->fullSData(oldp+959,(0x341U),10);
    bufp->fullSData(oldp+960,(0x342U),10);
    bufp->fullIData(oldp+961,(0xbU),32);
    bufp->fullSData(oldp+962,(0x300U),10);
    bufp->fullIData(oldp+963,(0x1800U),32);
    bufp->fullBit(oldp+964,(0U));
    bufp->fullBit(oldp+965,(1U));
    bufp->fullCData(oldp+966,(4U),3);
    bufp->fullCData(oldp+967,(0x1bU),8);
    bufp->fullCData(oldp+968,(0xebU),8);
    bufp->fullCData(oldp+969,(0x38U),8);
    bufp->fullIData(oldp+970,(0x64U),32);
    bufp->fullIData(oldp+971,(0x18U),32);
    bufp->fullIData(oldp+972,(9U),32);
    bufp->fullIData(oldp+973,(2U),32);
    bufp->fullIData(oldp+974,(4U),32);
    bufp->fullIData(oldp+975,(0xdU),32);
    bufp->fullIData(oldp+976,(0x2000U),32);
    bufp->fullIData(oldp+977,(0x2710U),32);
    bufp->fullIData(oldp+978,(0x30cU),32);
    bufp->fullCData(oldp+979,(7U),4);
    bufp->fullCData(oldp+980,(3U),4);
    bufp->fullCData(oldp+981,(5U),4);
    bufp->fullCData(oldp+982,(4U),4);
    bufp->fullCData(oldp+983,(6U),4);
    bufp->fullCData(oldp+984,(2U),4);
    bufp->fullCData(oldp+985,(1U),4);
    bufp->fullSData(oldp+986,(0x21U),13);
    bufp->fullCData(oldp+987,(8U),4);
    bufp->fullCData(oldp+988,(9U),4);
    bufp->fullIData(oldp+989,(0xaU),32);
    bufp->fullIData(oldp+990,(0x10U),32);
    bufp->fullIData(oldp+991,(6U),32);
    bufp->fullIData(oldp+992,(0x11U),32);
    bufp->fullIData(oldp+993,(0x30000000U),32);
    bufp->fullIData(oldp+994,(0x3fffffffU),32);
    bufp->fullIData(oldp+995,(8U),32);
    bufp->fullIData(oldp+996,(1U),32);
    bufp->fullCData(oldp+997,(0xaU),4);
    bufp->fullIData(oldp+998,(0xbU),32);
    bufp->fullIData(oldp+999,(5U),32);
    bufp->fullCData(oldp+1000,(2U),3);
    bufp->fullCData(oldp+1001,(3U),3);
    bufp->fullCData(oldp+1002,(5U),3);
}
