// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux__pi2.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Init
    CData/*0:0*/ __PVT__gen_demux__DOT__slv_aw_ready;
    __PVT__gen_demux__DOT__slv_aw_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__w_fifo_pop;
    __PVT__gen_demux__DOT__w_fifo_pop = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__aw_ready;
    __PVT__gen_demux__DOT__aw_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__slv_ar_ready;
    __PVT__gen_demux__DOT__slv_ar_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__ar_ready;
    __PVT__gen_demux__DOT__ar_ready = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    // Body
    __PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (IData)(
                                                          ((0xa0U 
                                                            == 
                                                            (0xa0U 
                                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U])) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                              >> 0x11U))));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (IData)(
                                                    ((0xa0U 
                                                      == 
                                                      (0xa0U 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U])) 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                        >> 5U)));
    }
    __PVT__gen_demux__DOT__ar_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
                                       & ((0xfbU >= 
                                           ((IData)(0x52U) 
                                            + (0xffU 
                                               & ((IData)(0x54U) 
                                                  * 
                                                  (3U 
                                                   & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                          && (1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                               (((IData)(0x52U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x54U) 
                                                     * 
                                                     (3U 
                                                      & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x52U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))))))));
    __PVT__gen_demux__DOT__aw_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
                                       & ((0xfbU >= 
                                           ((IData)(0x53U) 
                                            + (0xffU 
                                               & ((IData)(0x54U) 
                                                  * 
                                                  (3U 
                                                   & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                          && (1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                               (((IData)(0x53U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x54U) 
                                                     * 
                                                     (3U 
                                                      & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x53U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                     >> 0x11U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                     >> 5U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (IData)(
                                                          ((0xa0U 
                                                            == 
                                                            (0xa0U 
                                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U])) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                              >> 0x19U))));
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                     >> 0x19U));
    }
    vlSelf->__Vcellinp__gen_demux__DOT__i_b_mux__data_i 
        = ((0x1fc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                         >> 3U)) | ((0x3f80U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                 << 0xaU) 
                                                | (0x380U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                                      >> 0x16U)))) 
                                    | (0x7fU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                >> 9U))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[0U];
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[1U];
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
        = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[3U] 
             << 0x14U) | (0xfff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                      >> 0xcU))) | 
           (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U]));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[3U] 
                     >> 0xcU)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                   << 0x14U) | (0xfff00U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[3U] 
                                                   >> 0xcU))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
        = ((0xffff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                           << 8U)) | ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                                >> 0xcU)) 
                                      | (0xff00U & 
                                         (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                          >> 0xcU))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                   >> 0x18U)) | (0xffff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                                                    << 8U)));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                                   >> 0x18U)) | (0xff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                    << 8U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                      >> 0x16U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                           >> 3U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                             >> 0x10U)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                      >> 0xeU)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                            >> 8U)))));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
        vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
        __PVT__gen_demux__DOT__slv_ar_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        if (__PVT__gen_demux__DOT__ar_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
            __PVT__gen_demux__DOT__slv_ar_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
        __PVT__gen_demux__DOT__slv_ar_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__full_o)))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(__PVT__gen_demux__DOT__ar_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                }
                if (__PVT__gen_demux__DOT__ar_ready) {
                    __PVT__gen_demux__DOT__slv_ar_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
                }
            }
        }
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
        vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
        __PVT__gen_demux__DOT__slv_aw_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        if (__PVT__gen_demux__DOT__aw_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
            __PVT__gen_demux__DOT__slv_aw_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
        __PVT__gen_demux__DOT__slv_aw_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        if ((((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__full_o)) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__full_o)))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(__PVT__gen_demux__DOT__aw_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                }
                if (__PVT__gen_demux__DOT__aw_ready) {
                    __PVT__gen_demux__DOT__slv_aw_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                }
            }
        }
    }
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(__PVT__gen_demux__DOT__slv_ar_ready)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(__PVT__gen_demux__DOT__slv_ar_ready));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(__PVT__gen_demux__DOT__slv_aw_ready)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(__PVT__gen_demux__DOT__slv_aw_ready));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2\n"); );
    // Init
    CData/*0:0*/ __PVT__gen_demux__DOT__slv_aw_ready;
    __PVT__gen_demux__DOT__slv_aw_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__w_fifo_pop;
    __PVT__gen_demux__DOT__w_fifo_pop = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__aw_ready;
    __PVT__gen_demux__DOT__aw_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__slv_ar_ready;
    __PVT__gen_demux__DOT__slv_ar_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__ar_ready;
    __PVT__gen_demux__DOT__ar_ready = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    // Body
    __PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (
                                                   ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                     >> 0x1eU) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                       >> 0x11U)) 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (
                                                   ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                     >> 0x1eU) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                       >> 5U)) 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    vlSelf->__Vcellinp__gen_demux__DOT__i_b_mux__data_i 
        = ((0x1fc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                         >> 3U)) | ((0x3f80U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                 << 0xaU) 
                                                | (0x380U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                                      >> 0x16U)))) 
                                    | (0x7fU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                >> 9U))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                      >> 0x16U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                           >> 3U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                             >> 0x10U)))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[0U];
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[1U];
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
        = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[3U] 
             << 0x14U) | (0xfff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                      >> 0xcU))) | 
           (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U]));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[3U] 
                     >> 0xcU)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                   << 0x14U) | (0xfff00U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[3U] 
                                                   >> 0xcU))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
        = ((0xffff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                           << 8U)) | ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                                >> 0xcU)) 
                                      | (0xff00U & 
                                         (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                          >> 0xcU))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                   >> 0x18U)) | (0xffff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                                                    << 8U)));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                                   >> 0x18U)) | (0xff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                    << 8U)));
    __PVT__gen_demux__DOT__ar_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
                                       & ((0xfbU >= 
                                           ((IData)(0x52U) 
                                            + (0xffU 
                                               & ((IData)(0x54U) 
                                                  * 
                                                  (3U 
                                                   & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                          && (1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                               (((IData)(0x52U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x54U) 
                                                     * 
                                                     (3U 
                                                      & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x52U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))))))));
    __PVT__gen_demux__DOT__aw_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
                                       & ((0xfbU >= 
                                           ((IData)(0x53U) 
                                            + (0xffU 
                                               & ((IData)(0x54U) 
                                                  * 
                                                  (3U 
                                                   & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                          && (1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                               (((IData)(0x53U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x54U) 
                                                     * 
                                                     (3U 
                                                      & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x53U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                      >> 0xeU)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                            >> 8U)))));
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                     >> 0x11U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                     >> 5U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (
                                                   ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                     >> 0x1eU) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                       >> 0x19U)) 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U]));
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                     >> 0x19U));
    }
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
        vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
        __PVT__gen_demux__DOT__slv_ar_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        if (__PVT__gen_demux__DOT__ar_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
            __PVT__gen_demux__DOT__slv_ar_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
        __PVT__gen_demux__DOT__slv_ar_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__full_o)))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(__PVT__gen_demux__DOT__ar_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                }
                if (__PVT__gen_demux__DOT__ar_ready) {
                    __PVT__gen_demux__DOT__slv_ar_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
                }
            }
        }
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
        vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
        __PVT__gen_demux__DOT__slv_aw_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        if (__PVT__gen_demux__DOT__aw_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
            __PVT__gen_demux__DOT__slv_aw_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
        __PVT__gen_demux__DOT__slv_aw_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        if ((((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__full_o)) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__full_o)))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(__PVT__gen_demux__DOT__aw_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                }
                if (__PVT__gen_demux__DOT__aw_ready) {
                    __PVT__gen_demux__DOT__slv_aw_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                }
            }
        }
    }
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(__PVT__gen_demux__DOT__slv_ar_ready)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(__PVT__gen_demux__DOT__slv_ar_ready));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(__PVT__gen_demux__DOT__slv_aw_ready)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(__PVT__gen_demux__DOT__slv_aw_ready));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__2\n"); );
    // Init
    CData/*0:0*/ __PVT__gen_demux__DOT__slv_aw_ready;
    __PVT__gen_demux__DOT__slv_aw_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__w_fifo_pop;
    __PVT__gen_demux__DOT__w_fifo_pop = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__aw_ready;
    __PVT__gen_demux__DOT__aw_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__slv_ar_ready;
    __PVT__gen_demux__DOT__slv_ar_ready = 0;
    CData/*0:0*/ __PVT__gen_demux__DOT__ar_ready;
    __PVT__gen_demux__DOT__ar_ready = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    // Body
    __PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (IData)(
                                                          ((0x2800000U 
                                                            == 
                                                            (0x2800000U 
                                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU])) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                              >> 0x11U))));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (IData)(
                                                          ((0x2800000U 
                                                            == 
                                                            (0x2800000U 
                                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU])) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                              >> 5U))));
    }
    __PVT__gen_demux__DOT__ar_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
                                       & ((0xfbU >= 
                                           ((IData)(0x52U) 
                                            + (0xffU 
                                               & ((IData)(0x54U) 
                                                  * 
                                                  (3U 
                                                   & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]))))) 
                                          && (1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                               (((IData)(0x52U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x54U) 
                                                     * 
                                                     (3U 
                                                      & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x52U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))))))));
    __PVT__gen_demux__DOT__aw_ready = ((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
                                       & ((0xfbU >= 
                                           ((IData)(0x53U) 
                                            + (0xffU 
                                               & ((IData)(0x54U) 
                                                  * 
                                                  (3U 
                                                   & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]))))) 
                                          && (1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                               (((IData)(0x53U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x54U) 
                                                     * 
                                                     (3U 
                                                      & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x53U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x54U) 
                                                          * 
                                                          (3U 
                                                           & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))))))));
    vlSelf->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                     >> 0x11U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                     >> 5U));
    }
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        __PVT__gen_demux__DOT__w_fifo_pop = (1U & (IData)(
                                                          ((0x2800000U 
                                                            == 
                                                            (0x2800000U 
                                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU])) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                              >> 0x19U))));
        vlSelf->__PVT__gen_demux__DOT__slv_w_ready 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                     >> 0x19U));
    }
    vlSelf->__Vcellinp__gen_demux__DOT__i_b_mux__data_i 
        = ((0x1fc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                         >> 3U)) | ((0x3f80U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                 << 0xaU) 
                                                | (0x380U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                                      >> 0x16U)))) 
                                    | (0x7fU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                >> 9U))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[0U];
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[1U];
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
        = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[3U] 
             << 0x14U) | (0xfff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                      >> 0xcU))) | 
           (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U]));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[3U] 
                     >> 0xcU)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                   << 0x14U) | (0xfff00U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[3U] 
                                                   >> 0xcU))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
        = ((0xffff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                           << 8U)) | ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                                >> 0xcU)) 
                                      | (0xff00U & 
                                         (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                          >> 0xcU))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                   >> 0x18U)) | (0xffff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                                                    << 8U)));
    vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U] 
        = (((0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                        << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[6U] 
                                   >> 0x18U)) | (0xff0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                    << 8U)));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                      >> 0x16U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                           >> 3U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                             >> 0x10U)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                      >> 0xeU)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                            >> 8U)))));
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
        vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
        __PVT__gen_demux__DOT__slv_ar_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        if (__PVT__gen_demux__DOT__ar_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
            __PVT__gen_demux__DOT__slv_ar_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 0U;
        __PVT__gen_demux__DOT__slv_ar_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__ar_push = 0U;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__full_o)))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(__PVT__gen_demux__DOT__ar_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                }
                if (__PVT__gen_demux__DOT__ar_ready) {
                    __PVT__gen_demux__DOT__slv_ar_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__ar_push = 1U;
                }
            }
        }
    }
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
        vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
        __PVT__gen_demux__DOT__slv_aw_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        if (__PVT__gen_demux__DOT__aw_ready) {
            vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
            __PVT__gen_demux__DOT__slv_aw_ready = 1U;
            vlSelf->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 0U;
        __PVT__gen_demux__DOT__slv_aw_ready = 0U;
        vlSelf->__PVT__gen_demux__DOT__atop_inject = 0U;
        if ((((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__full_o)) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__full_o)))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(__PVT__gen_demux__DOT__aw_ready)))) {
                    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                    vlSelf->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                }
                if (__PVT__gen_demux__DOT__aw_ready) {
                    __PVT__gen_demux__DOT__slv_aw_ready = 1U;
                    vlSelf->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                }
            }
        }
    }
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(__PVT__gen_demux__DOT__slv_ar_ready)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(__PVT__gen_demux__DOT__slv_ar_ready));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(__PVT__gen_demux__DOT__slv_aw_ready)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(__PVT__gen_demux__DOT__slv_aw_ready));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}
