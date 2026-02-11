// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_rvfpgasim.h"

VL_ATTR_COLD void Vrvfpgasim_rvfpgasim___eval_static__TOP__rvfpgasim(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___eval_static__TOP__rvfpgasim\n"); );
    // Body
    vlSelf->__PVT__ram__DOT__read_state_reg = 0U;
    vlSelf->__PVT__ram__DOT__write_state_reg = 0U;
    vlSelf->__PVT__ram__DOT__read_id_reg = 0U;
    vlSelf->__PVT__ram__DOT__read_addr_reg = 0U;
    vlSelf->__PVT__ram__DOT__read_count_reg = 0U;
    vlSelf->__PVT__ram__DOT__read_size_reg = 0U;
    vlSelf->__PVT__ram__DOT__read_burst_reg = 0U;
    vlSelf->__PVT__ram__DOT__write_id_reg = 0U;
    vlSelf->__PVT__ram__DOT__write_addr_reg = 0U;
    vlSelf->__PVT__ram__DOT__write_count_reg = 0U;
    vlSelf->__PVT__ram__DOT__write_size_reg = 0U;
    vlSelf->__PVT__ram__DOT__write_burst_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_awready_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_wready_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_bid_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_arready_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_rid_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_rdata_reg = 0ULL;
    vlSelf->__PVT__ram__DOT__s_axi_rlast_reg = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg = 0U;
}

VL_ATTR_COLD void Vrvfpgasim_rvfpgasim___ctor_var_reset(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___ctor_var_reset\n"); );
    // Body
    vlSelf->i_sw = VL_RAND_RESET_I(16);
    vlSelf->o_led = VL_RAND_RESET_I(16);
    vlSelf->i_pb = VL_RAND_RESET_I(5);
    vlSelf->AN = VL_RAND_RESET_I(8);
    vlSelf->CA = VL_RAND_RESET_I(1);
    vlSelf->CB = VL_RAND_RESET_I(1);
    vlSelf->CC = VL_RAND_RESET_I(1);
    vlSelf->CD = VL_RAND_RESET_I(1);
    vlSelf->CE = VL_RAND_RESET_I(1);
    vlSelf->CF = VL_RAND_RESET_I(1);
    vlSelf->CG = VL_RAND_RESET_I(1);
    vlSelf->Enables_Reg = VL_RAND_RESET_I(8);
    vlSelf->Digits_Reg = VL_RAND_RESET_I(32);
    vlSelf->tf_push = VL_RAND_RESET_I(1);
    vlSelf->wb_m2s_uart_dat_output = VL_RAND_RESET_I(8);
    vlSelf->LED_B = VL_RAND_RESET_I(1);
    vlSelf->LED_G = VL_RAND_RESET_I(1);
    vlSelf->LED_R = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_tck = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_tms = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_tdi = VL_RAND_RESET_I(1);
    vlSelf->i_jtag_trst_n = VL_RAND_RESET_I(1);
    vlSelf->o_jtag_tdo = VL_RAND_RESET_I(1);
    vlSelf->o_uart_tx = VL_RAND_RESET_I(1);
    vlSelf->o_gpio = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__ram_init_file);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__rom_init_file);
    vlSelf->__PVT__gpio_out = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__dmi_reg_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmi_reg_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__dmi_wrapper__core_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__read_state_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__read_state_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__write_state_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram__DOT__write_state_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__read_id_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__read_id_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__read_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__ram__DOT__read_addr_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__ram__DOT__read_count_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__read_count_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__read_size_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ram__DOT__read_size_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ram__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram__DOT__read_burst_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram__DOT__write_id_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__write_id_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__write_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__ram__DOT__write_addr_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__ram__DOT__write_count_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__write_count_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__write_size_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ram__DOT__write_size_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ram__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram__DOT__write_burst_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_bid_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__s_axi_bid_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_rid_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__s_axi_rid_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ram__DOT__s_axi_rdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ram__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__ram__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
}
