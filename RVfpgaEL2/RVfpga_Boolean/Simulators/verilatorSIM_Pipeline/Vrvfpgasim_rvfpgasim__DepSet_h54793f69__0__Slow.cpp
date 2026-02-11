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
    vlSelf->ifu_fetch_data_f = VL_RAND_RESET_I(32);
    vlSelf->q2 = VL_RAND_RESET_I(32);
    vlSelf->q1 = VL_RAND_RESET_I(32);
    vlSelf->q0 = VL_RAND_RESET_I(32);
    vlSelf->i0_inst_d = VL_RAND_RESET_I(32);
    vlSelf->i0_inst_x = VL_RAND_RESET_I(32);
    vlSelf->i0_inst_r = VL_RAND_RESET_I(32);
    vlSelf->i0_inst_wb_in = VL_RAND_RESET_I(32);
    vlSelf->i0_inst_wb = VL_RAND_RESET_I(32);
    vlSelf->dec_i0_rs1_d = VL_RAND_RESET_I(5);
    vlSelf->dec_i0_rs2_d = VL_RAND_RESET_I(5);
    vlSelf->gpr_i0_rs1_d = VL_RAND_RESET_I(32);
    vlSelf->gpr_i0_rs2_d = VL_RAND_RESET_I(32);
    vlSelf->i0_rs1_d = VL_RAND_RESET_I(32);
    vlSelf->i0_rs2_d = VL_RAND_RESET_I(32);
    vlSelf->muldiv_rs1_d = VL_RAND_RESET_I(32);
    vlSelf->exu_i0_result_x = VL_RAND_RESET_I(32);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->mul_valid_x = VL_RAND_RESET_I(1);
    vlSelf->dec_i0_waddr_r = VL_RAND_RESET_I(5);
    vlSelf->dec_i0_wen_r = VL_RAND_RESET_I(1);
    vlSelf->dec_i0_wdata_r = VL_RAND_RESET_I(32);
    vlSelf->rs1_d = VL_RAND_RESET_I(32);
    vlSelf->offset_d = VL_RAND_RESET_I(12);
    vlSelf->full_addr_d = VL_RAND_RESET_I(32);
    vlSelf->i0_rs1_bypass_data_d = VL_RAND_RESET_I(32);
    vlSelf->i0_rs2_bypass_data_d = VL_RAND_RESET_I(32);
    vlSelf->lsu_result_m = VL_RAND_RESET_I(32);
    vlSelf->dec_nonblock_load_waddr = VL_RAND_RESET_I(5);
    vlSelf->dec_nonblock_load_wen = VL_RAND_RESET_I(1);
    vlSelf->lsu_nonblock_load_data = VL_RAND_RESET_I(32);
    vlSelf->exu_div_result = VL_RAND_RESET_I(32);
    vlSelf->exu_div_wren = VL_RAND_RESET_I(1);
    vlSelf->div_waddr_wb = VL_RAND_RESET_I(5);
    vlSelf->i0_rs1_bypass_en_d = VL_RAND_RESET_I(1);
    vlSelf->i0_rs2_bypass_en_d = VL_RAND_RESET_I(1);
    vlSelf->dec_i0_rs1_en_d = VL_RAND_RESET_I(1);
    vlSelf->dec_i0_rs2_en_d = VL_RAND_RESET_I(1);
    vlSelf->alu_instd = VL_RAND_RESET_I(1);
    vlSelf->lsu_instd = VL_RAND_RESET_I(1);
    vlSelf->mul_instd = VL_RAND_RESET_I(1);
    vlSelf->i0_x_data_en = VL_RAND_RESET_I(1);
    vlSelf->alu_instx = VL_RAND_RESET_I(1);
    vlSelf->mul_instx = VL_RAND_RESET_I(1);
    vlSelf->Bypass0_exu_i0_result_x = VL_RAND_RESET_I(1);
    vlSelf->Bypass0_lsu_nonblock_load_data = VL_RAND_RESET_I(1);
    vlSelf->Bypass1_exu_i0_result_x = VL_RAND_RESET_I(1);
    vlSelf->Bypass1_lsu_nonblock_load_data = VL_RAND_RESET_I(1);
    vlSelf->actual_taken = VL_RAND_RESET_I(1);
    vlSelf->any_branch = VL_RAND_RESET_I(1);
    vlSelf->instr_control = VL_RAND_RESET_I(3);
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
