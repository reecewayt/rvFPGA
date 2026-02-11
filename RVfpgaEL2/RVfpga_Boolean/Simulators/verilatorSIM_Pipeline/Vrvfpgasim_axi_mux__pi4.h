// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_AXI_MUX__PI4_H_
#define VERILATED_VRVFPGASIM_AXI_MUX__PI4_H_  // guard

#include "verilated.h"


class Vrvfpgasim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrvfpgasim_axi_mux__pi4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_ni,0,0);
        VL_IN8(__PVT__test_i,0,0);
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_w_valids;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_w_readies;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__aw_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__lock_aw_valid_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__lock_aw_valid_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__load_aw_lock;
        CData/*0:0*/ __PVT__gen_mux__DOT__w_fifo_push;
        CData/*0:0*/ __PVT__gen_mux__DOT__w_fifo_pop;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_w_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__ar_ready;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_ar_readies_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_aw_readies_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_ar_readies_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_aw_readies_o;
        CData/*1:0*/ __Vcellout__gen_mux__DOT__i_w_fifo__data_o;
        CData/*0:0*/ __Vlvbound_h1a7ddbf4__0;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
        SData/*11:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        SData/*11:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
        CData/*1:0*/ gen_mux__DOT__i_w_fifo__DOT____Vlvbound_h6577cc8e__0;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
    };
    struct {
        CData/*7:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain;
        VL_INW(__PVT__slv_reqs_i,650,0,21);
        VL_OUTW(__PVT__slv_resps_o,251,0,8);
        VL_OUTW(__PVT__mst_req_o,220,0,7);
        VL_INW(__PVT__mst_resp_i,87,0,3);
        VlWide<7>/*221:0*/ __Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i;
        VlWide<3>/*73:0*/ __Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i;
        VlWide<7>/*203:0*/ __Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i;
        VlWide<7>/*221:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes;
        VlWide<3>/*73:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q;
        VlWide<3>/*73:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q;
        VlWide<7>/*203:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes;
        VlWide<3>/*67:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q;
        VlWide<3>/*67:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q;
    };

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrvfpgasim_axi_mux__pi4(Vrvfpgasim__Syms* symsp, const char* v__name);
    ~Vrvfpgasim_axi_mux__pi4();
    VL_UNCOPYABLE(Vrvfpgasim_axi_mux__pi4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
