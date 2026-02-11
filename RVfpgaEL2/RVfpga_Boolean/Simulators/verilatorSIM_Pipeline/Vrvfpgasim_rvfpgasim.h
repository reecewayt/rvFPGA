// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_RVFPGASIM_H_
#define VERILATED_VRVFPGASIM_RVFPGASIM_H_  // guard

#include "verilated.h"
class Vrvfpgasim_veerwolf_core__Cbebc20;


class Vrvfpgasim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrvfpgasim_rvfpgasim final : public VerilatedModule {
  public:
    // CELLS
    Vrvfpgasim_veerwolf_core__Cbebc20* veerwolf;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(i_jtag_tck,0,0);
        VL_IN8(i_jtag_trst_n,0,0);
        CData/*0:0*/ __Vcellinp__dmi_wrapper__core_rst_n;
        VL_OUT8(dec_i0_rs1_d,4,0);
        VL_OUT8(dec_i0_rs2_d,4,0);
        VL_OUT8(mul_valid_x,0,0);
        VL_OUT8(dec_i0_waddr_r,4,0);
        VL_OUT8(dec_i0_wen_r,0,0);
        VL_OUT8(dec_nonblock_load_waddr,4,0);
        VL_OUT8(dec_nonblock_load_wen,0,0);
        VL_OUT8(exu_div_wren,0,0);
        VL_OUT8(div_waddr_wb,4,0);
        VL_OUT8(i0_rs1_bypass_en_d,0,0);
        VL_OUT8(i0_rs2_bypass_en_d,0,0);
        VL_OUT8(dec_i0_rs1_en_d,0,0);
        VL_OUT8(dec_i0_rs2_en_d,0,0);
        VL_OUT8(alu_instd,0,0);
        VL_OUT8(lsu_instd,0,0);
        VL_OUT8(mul_instd,0,0);
        VL_OUT8(i0_x_data_en,0,0);
        VL_OUT8(alu_instx,0,0);
        VL_OUT8(mul_instx,0,0);
        VL_OUT8(Bypass0_exu_i0_result_x,0,0);
        VL_OUT8(Bypass0_lsu_nonblock_load_data,0,0);
        VL_OUT8(Bypass1_exu_i0_result_x,0,0);
        VL_OUT8(Bypass1_lsu_nonblock_load_data,0,0);
        VL_OUT8(actual_taken,0,0);
        VL_OUT8(any_branch,0,0);
        VL_OUT8(instr_control,2,0);
        VL_IN8(rst,0,0);
        VL_IN8(i_jtag_tms,0,0);
        VL_IN8(i_jtag_tdi,0,0);
        VL_OUT8(o_jtag_tdo,0,0);
        VL_OUT8(o_uart_tx,0,0);
        CData/*0:0*/ __PVT__dmi_reg_en;
        CData/*0:0*/ __PVT__dmi_reg_wr_en;
        CData/*0:0*/ __PVT__ram__DOT__read_state_reg;
        CData/*0:0*/ __PVT__ram__DOT__read_state_next;
        CData/*1:0*/ __PVT__ram__DOT__write_state_reg;
        CData/*1:0*/ __PVT__ram__DOT__write_state_next;
        CData/*0:0*/ __PVT__ram__DOT__mem_wr_en;
        CData/*0:0*/ __PVT__ram__DOT__mem_rd_en;
        CData/*4:0*/ __PVT__ram__DOT__read_id_reg;
        CData/*4:0*/ __PVT__ram__DOT__read_id_next;
        CData/*7:0*/ __PVT__ram__DOT__read_count_reg;
        CData/*7:0*/ __PVT__ram__DOT__read_count_next;
        CData/*2:0*/ __PVT__ram__DOT__read_size_reg;
        CData/*2:0*/ __PVT__ram__DOT__read_size_next;
        CData/*1:0*/ __PVT__ram__DOT__read_burst_reg;
        CData/*1:0*/ __PVT__ram__DOT__read_burst_next;
        CData/*4:0*/ __PVT__ram__DOT__write_id_reg;
        CData/*4:0*/ __PVT__ram__DOT__write_id_next;
        CData/*7:0*/ __PVT__ram__DOT__write_count_reg;
        CData/*7:0*/ __PVT__ram__DOT__write_count_next;
        CData/*2:0*/ __PVT__ram__DOT__write_size_reg;
        CData/*2:0*/ __PVT__ram__DOT__write_size_next;
        CData/*1:0*/ __PVT__ram__DOT__write_burst_reg;
        CData/*1:0*/ __PVT__ram__DOT__write_burst_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_awready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_awready_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_wready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_wready_next;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_bid_reg;
    };
    struct {
        CData/*4:0*/ __PVT__ram__DOT__s_axi_bid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_bvalid_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_bvalid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_arready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_arready_next;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_rid_reg;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_rid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_next;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
        CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
        CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
        VL_OUT16(offset_d,11,0);
        VL_OUT16(o_gpio,15,0);
        SData/*15:0*/ __PVT__ram__DOT__read_addr_reg;
        SData/*15:0*/ __PVT__ram__DOT__read_addr_next;
        SData/*15:0*/ __PVT__ram__DOT__write_addr_reg;
        SData/*15:0*/ __PVT__ram__DOT__write_addr_next;
        VL_OUT(ifu_fetch_data_f,31,0);
        VL_OUT(q2,31,0);
        VL_OUT(q1,31,0);
        VL_OUT(q0,31,0);
        VL_OUT(i0_inst_d,31,0);
        VL_OUT(i0_inst_x,31,0);
        VL_OUT(i0_inst_r,31,0);
        VL_OUT(i0_inst_wb_in,31,0);
        VL_OUT(i0_inst_wb,31,0);
        VL_OUT(gpr_i0_rs1_d,31,0);
        VL_OUT(gpr_i0_rs2_d,31,0);
        VL_OUT(i0_rs1_d,31,0);
        VL_OUT(i0_rs2_d,31,0);
        VL_OUT(muldiv_rs1_d,31,0);
        VL_OUT(exu_i0_result_x,31,0);
        VL_OUT(result,31,0);
        VL_OUT(dec_i0_wdata_r,31,0);
        VL_OUT(rs1_d,31,0);
        VL_OUT(full_addr_d,31,0);
        VL_OUT(i0_rs1_bypass_data_d,31,0);
        VL_OUT(i0_rs2_bypass_data_d,31,0);
        VL_OUT(lsu_result_m,31,0);
        VL_OUT(lsu_nonblock_load_data,31,0);
        VL_OUT(exu_div_result,31,0);
        VlWide<32>/*1023:0*/ __PVT__ram_init_file;
        VlWide<32>/*1023:0*/ __PVT__rom_init_file;
        QData/*63:0*/ __PVT__gpio_out;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_reg;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
        QData/*40:0*/ __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
        VlUnpacked<QData/*63:0*/, 8192> __PVT__ram__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrvfpgasim_rvfpgasim(Vrvfpgasim__Syms* symsp, const char* v__name);
    ~Vrvfpgasim_rvfpgasim();
    VL_UNCOPYABLE(Vrvfpgasim_rvfpgasim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
