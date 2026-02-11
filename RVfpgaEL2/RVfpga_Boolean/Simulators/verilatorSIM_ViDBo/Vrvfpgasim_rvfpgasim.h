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
        VL_IN8(i_pb,4,0);
        VL_OUT8(AN,7,0);
        VL_OUT8(CA,0,0);
        VL_OUT8(CB,0,0);
        VL_OUT8(CC,0,0);
        VL_OUT8(CD,0,0);
        VL_OUT8(CE,0,0);
        VL_OUT8(CF,0,0);
        VL_OUT8(CG,0,0);
        VL_OUT8(Enables_Reg,7,0);
        VL_OUT8(tf_push,0,0);
        VL_OUT8(wb_m2s_uart_dat_output,7,0);
        VL_OUT8(LED_B,0,0);
        VL_OUT8(LED_G,0,0);
        VL_OUT8(LED_R,0,0);
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
    };
    struct {
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
        CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
        CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
        VL_IN16(i_sw,15,0);
        VL_OUT16(o_led,15,0);
        VL_OUT16(o_gpio,15,0);
        SData/*15:0*/ __PVT__ram__DOT__read_addr_reg;
        SData/*15:0*/ __PVT__ram__DOT__read_addr_next;
        SData/*15:0*/ __PVT__ram__DOT__write_addr_reg;
        SData/*15:0*/ __PVT__ram__DOT__write_addr_next;
        VL_OUT(Digits_Reg,31,0);
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
