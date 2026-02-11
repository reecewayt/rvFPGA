// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mux__pi4.h"

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__2(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__2\n"); );
    // Init
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o);
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] = 0U;
    }
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = ((4U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                     >> 0x15U)) 
                                                 | ((2U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                        >> 0x1dU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                          >> 5U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = (
                                                   (((2U 
                                                      >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                                                            >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 0x15U)) 
                                                   & (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                                      >> 1U));
        vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 
            ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
             && (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                       >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
    }
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__mst_req_o[0U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 2U) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                << 1U) 
                                               | ((2U 
                                                   >= 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 8U))) 
                                                  && (1U 
                                                      & (((4U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                              >> 0x10U)) 
                                                          | ((2U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                                 >> 0x18U)) 
                                                             | (1U 
                                                                & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                                         >> 
                                                         (3U 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                             >> 8U)))))));
    vlSelf->__PVT__mst_req_o[1U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0x1eU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U));
    vlSelf->__PVT__mst_req_o[2U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     << 8U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                                << 7U) 
                                               | ((((2U 
                                                     >= 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 0x12U))) 
                                                    && (1U 
                                                        & (((4U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                                >> 0x14U)) 
                                                            | ((2U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                                   >> 0x1cU)) 
                                                               | (1U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                     >> 4U)))) 
                                                           >> 
                                                           (3U 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                               >> 0x12U))))) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                        : 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                      >> 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                          : 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                        << 2U)))));
    vlSelf->__PVT__mst_req_o[3U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     >> 0x18U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                  << 8U));
    vlSelf->__PVT__mst_req_o[4U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0x12U) 
                                                  | ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                      >> 0x18U) 
                                                     | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
                                                        << 8U))));
    vlSelf->__PVT__mst_req_o[5U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 << 0x13U));
    vlSelf->__PVT__mst_req_o[6U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 0x13U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17\n"); );
    // Body
    vlSelf->__PVT__slv_resps_o[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
    vlSelf->__PVT__slv_resps_o[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
    vlSelf->__PVT__slv_resps_o[2U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                       << 0x14U) | 
                                      (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_aw_readies_o) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_ar_readies_o) 
                                         << 0x12U) 
                                        | ((0x20000U 
                                            & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                               << 0x11U)) 
                                           | ((0x10000U 
                                               & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 4U) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                          >> 0x12U))) 
                                                     << 0x10U))) 
                                              | ((0xfe00U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 2U)) 
                                                 | ((0x100U 
                                                     & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 2U) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (3U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                                >> 8U))) 
                                                           << 8U))) 
                                                    | (0xffU 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]))))))));
    vlSelf->__PVT__slv_resps_o[3U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                       >> 0xcU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                                   << 0x14U));
    vlSelf->__PVT__slv_resps_o[4U] = ((0xe0000000U 
                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                          << 0x12U)) 
                                      | ((0x10000000U 
                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                              << 0x12U) 
                                             & (((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 8U))) 
                                                << 0x1bU))) 
                                         | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                             >> 0xcU) 
                                            | (0xff00000U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  << 0x14U)))));
    vlSelf->__PVT__slv_resps_o[5U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                       << 8U) | (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_aw_readies_o) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_ar_readies_o) 
                                                     << 6U) 
                                                    | ((0x20U 
                                                        & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                               >> 0x10U) 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (3U 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                                      >> 0x12U))) 
                                                                 << 3U))) 
                                                          | (0xfU 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                                >> 0xeU)))))));
    vlSelf->__PVT__slv_resps_o[6U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                       >> 0x18U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                       << 8U));
    vlSelf->__PVT__slv_resps_o[7U] = ((0x8000000U & 
                                       ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        << 0x19U)) 
                                      | ((0x4000000U 
                                          & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             << 0x18U)) 
                                         | ((0x2000000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                << 0x17U)) 
                                            | ((0x1000000U 
                                                & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    << 4U) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                           >> 0x12U))) 
                                                      << 0x16U))) 
                                               | ((0xfe0000U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                      << 6U)) 
                                                  | ((0x10000U 
                                                      & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                          << 6U) 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (3U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                                 >> 8U))) 
                                                            << 0xeU))) 
                                                     | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                                         >> 0x18U) 
                                                        | (0xff00U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                              << 8U)))))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
         && ((IData)(vlSelf->__PVT__gen_mux__DOT__load_aw_lock)
              ? (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d)
              : (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xfU & vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x3ffU & vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready)) 
                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready)) 
                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                     >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x17U)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x17U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x16U)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x16U));
    vlSelf->__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__Vlvbound_h1a7ddbf4__0 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 0x15U));
        if ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) {
            vlSelf->__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                    & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies)) 
                   | (7U & ((IData)(vlSelf->__Vlvbound_h1a7ddbf4__0) 
                            << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    // Init
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o);
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] = 0U;
    }
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = ((4U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                     >> 0x15U)) 
                                                 | ((2U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                        >> 0x1dU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                          >> 5U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 
            ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
             && (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                       >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
    }
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = (
                                                   (((2U 
                                                      >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                                                            >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 0x15U)) 
                                                   & (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                                      >> 1U));
    }
    vlSelf->__PVT__mst_req_o[0U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 2U) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                << 1U) 
                                               | ((2U 
                                                   >= 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 8U))) 
                                                  && (1U 
                                                      & (((4U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                              >> 0x10U)) 
                                                          | ((2U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                                 >> 0x18U)) 
                                                             | (1U 
                                                                & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                                         >> 
                                                         (3U 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                             >> 8U)))))));
    vlSelf->__PVT__mst_req_o[1U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0x1eU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U));
    vlSelf->__PVT__mst_req_o[2U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     << 8U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                                << 7U) 
                                               | ((((2U 
                                                     >= 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 0x12U))) 
                                                    && (1U 
                                                        & (((4U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                                >> 0x14U)) 
                                                            | ((2U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                                   >> 0x1cU)) 
                                                               | (1U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                     >> 4U)))) 
                                                           >> 
                                                           (3U 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                               >> 0x12U))))) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                        : 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                      >> 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                          : 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                        << 2U)))));
    vlSelf->__PVT__mst_req_o[3U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     >> 0x18U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                  << 8U));
    vlSelf->__PVT__mst_req_o[4U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0x12U) 
                                                  | ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                      >> 0x18U) 
                                                     | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
                                                        << 8U))));
    vlSelf->__PVT__mst_req_o[5U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 << 0x13U));
    vlSelf->__PVT__mst_req_o[6U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 0x13U));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__2(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__2\n"); );
    // Init
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o);
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] = 0U;
    }
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = ((4U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                     >> 0x15U)) 
                                                 | ((2U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                        >> 0x1dU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                          >> 5U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = (
                                                   (((2U 
                                                      >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                                                            >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                       >> 0xdU)) 
                                                   & (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                                      >> 1U));
        vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 
            ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
             && (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                       >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
    }
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__mst_req_o[0U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 2U) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                << 1U) 
                                               | ((2U 
                                                   >= 
                                                   (3U 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                  && (1U 
                                                      & (((4U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                              >> 0x10U)) 
                                                          | ((2U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                                 >> 0x18U)) 
                                                             | (1U 
                                                                & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                                         >> 
                                                         (3U 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))))));
    vlSelf->__PVT__mst_req_o[1U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0x1eU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U));
    vlSelf->__PVT__mst_req_o[2U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     << 8U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                                << 7U) 
                                               | ((((2U 
                                                     >= 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                         >> 0xaU))) 
                                                    && (1U 
                                                        & (((4U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                                >> 0x14U)) 
                                                            | ((2U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                                   >> 0x1cU)) 
                                                               | (1U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                     >> 4U)))) 
                                                           >> 
                                                           (3U 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                               >> 0xaU))))) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                        : 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                      >> 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                          : 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                        << 2U)))));
    vlSelf->__PVT__mst_req_o[3U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     >> 0x18U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                  << 8U));
    vlSelf->__PVT__mst_req_o[4U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0x12U) 
                                                  | ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                      >> 0x18U) 
                                                     | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
                                                        << 8U))));
    vlSelf->__PVT__mst_req_o[5U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 << 0x13U));
    vlSelf->__PVT__mst_req_o[6U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 0x13U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__17(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__17\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<8>/*255:0*/ __Vtemp_27;
    // Body
    __Vtemp_16[2U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 4U))) 
                      | (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_aw_readies_o) 
                          << 0x13U) | (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_ar_readies_o) 
                                        << 0x12U) | 
                                       ((0x20000U & 
                                         ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                          << 0x11U)) 
                                        | ((0x10000U 
                                            & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                << 4U) 
                                               & (((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                       >> 0xaU))) 
                                                  << 0x10U))) 
                                           | ((0xfe00U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                  << 6U)) 
                                              | ((0x100U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                      << 6U) 
                                                     & (((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                        << 8U))) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                    >> 0x18U))))))));
    __Vtemp_27[7U] = ((0x2000000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                     << 0x17U)) | (
                                                   (0x1000000U 
                                                    & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        << 0xcU) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                               >> 0xaU))) 
                                                          << 0x16U))) 
                                                   | ((0xfe0000U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                          << 0xeU)) 
                                                      | ((0x10000U 
                                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                              & ((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))) 
                                                             << 0xeU)) 
                                                         | ((0xffU 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                                >> 0x10U)) 
                                                            | (0xff00U 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                                  >> 0x10U)))))));
    vlSelf->__PVT__slv_resps_o[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                       << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 0x18U));
    vlSelf->__PVT__slv_resps_o[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                       << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 >> 0x18U));
    vlSelf->__PVT__slv_resps_o[2U] = __Vtemp_16[2U];
    vlSelf->__PVT__slv_resps_o[3U] = ((0xfffffU & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                   >> 4U)) 
                                      | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                          << 0x1cU) 
                                         | (0xff00000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               >> 4U))));
    vlSelf->__PVT__slv_resps_o[4U] = ((0xe0000000U 
                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                          << 0x1aU)) 
                                      | ((0x10000000U 
                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                              << 0x1aU) 
                                             & (((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                << 0x1bU))) 
                                         | ((0xfffffU 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                >> 4U)) 
                                            | (0xff00000U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                  >> 4U)))));
    vlSelf->__PVT__slv_resps_o[5U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                        << 0x10U) | 
                                       (0xff00U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x10U))) 
                                      | (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_aw_readies_o) 
                                          << 7U) | 
                                         (((IData)(vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_ar_readies_o) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                             << 4U)) 
                                           | ((0x10U 
                                               & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                   >> 8U) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                          >> 0xaU))) 
                                                     << 3U))) 
                                              | (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                    >> 6U)))))));
    vlSelf->__PVT__slv_resps_o[6U] = ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                >> 0x10U)) 
                                      | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                          << 0x10U) 
                                         | (0xff00U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               >> 0x10U))));
    vlSelf->__PVT__slv_resps_o[7U] = ((0x8000000U & 
                                       ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        << 0x19U)) 
                                      | ((0x4000000U 
                                          & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             << 0x18U)) 
                                         | __Vtemp_27[7U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
         && ((IData)(vlSelf->__PVT__gen_mux__DOT__load_aw_lock)
              ? (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d)
              : (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xfU & vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x3ffU & vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready)) 
                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready)) 
                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                     >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__4(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__4\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xfU)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xfU));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xeU)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xeU));
    vlSelf->__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__Vlvbound_h1a7ddbf4__0 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                 >> 0xdU));
        if ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) {
            vlSelf->__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                    & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies)) 
                   | (7U & ((IData)(vlSelf->__Vlvbound_h1a7ddbf4__0) 
                            << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__5(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__5\n"); );
    // Init
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VlWide<3>/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o;
    VL_ZERO_W(68, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VlWide<3>/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o;
    VL_ZERO_W(74, __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o);
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 = 0;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0;
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_30;
    // Body
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
            << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
                         >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
              << 0x1eU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                 >> 2U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
            << 5U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
                      >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                 >> 0x1bU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                             << 5U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                               >> 0x1bU))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
                        >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                 >> 0x14U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                             << 0xcU)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                               >> 0x14U))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
            << 0xfU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
                        >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                    >> 0x11U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                       >> 0x11U)));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
            << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
                         >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                    >> 0xaU));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                           >> 0xaU)))));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
            << 0x1dU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
                         >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                    >> 3U));
    __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
                                           >> 3U)))));
    __Vtemp_30[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                    >> 6U));
    __Vtemp_30[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
                                    >> 6U));
    __Vtemp_30[2U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                        << 0xbU) | (0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                              >> 0x15U))) 
                      | (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                   >> 6U)));
    __Vtemp_30[3U] = ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                 >> 0x15U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                << 0xbU) 
                                               | (0x400U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
                                                     >> 0x15U))));
    __Vtemp_30[4U] = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                        << 0x1cU) | (0xff00000U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                   >> 4U))) 
                      | ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                    >> 0x15U)) | (0xffc00U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                                                      << 0xbU) 
                                                     | (0x400U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
                                                           >> 0x15U))))));
    __Vtemp_30[5U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                   >> 4U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
                                                    >> 4U))));
    __Vtemp_30[6U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                   >> 4U)) | (0x3ff00000U 
                                              & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
                                                       >> 4U)))));
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(1U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[(7U & (((IData)(0x4aU) 
                                     * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (__Vtemp_30[((IData)(2U) + 
                                     (7U & (((IData)(0x4aU) 
                                             * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                            >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (__Vtemp_30[((IData)(1U) + (7U & (
                                                   ((IData)(0x4aU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x4aU) * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                           ? 0U : (__Vtemp_30[((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x4aU) 
                                                      * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                         | (__Vtemp_30[((IData)(2U) 
                                        + (7U & (((IData)(0x4aU) 
                                                  * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] = 0U;
        vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] = 0U;
    }
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = ((4U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                     >> 0x15U)) 
                                                 | ((2U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                        >> 0x1dU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                          >> 5U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                      >> 0x11U)) | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x19U)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
                                             >> 1U)))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U]) 
               | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
                         >> 8U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
                                          >> 0x10U)))));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 4U) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 4U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 8U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       >> 0x1cU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                    << 4U)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x18U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 8U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U] 
        = __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0xaU) | __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 0xaU));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 0x14U) | ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x16U) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0xaU)));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        << 0x14U));
    vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U] 
        = ((__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0xcU) | (__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                        << 0x14U));
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__mst_w_valid = 
            ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
             && (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                       >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
    }
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 2U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & (IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 1U));
    gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0 
        = (1U & ((IData)(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_he76ad6e9__0) 
              << 2U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = (
                                                   (((2U 
                                                      >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                                                            >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                       >> 0xdU)) 
                                                   & (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                                      >> 1U));
    }
    vlSelf->__PVT__mst_req_o[0U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 2U) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                << 1U) 
                                               | ((2U 
                                                   >= 
                                                   (3U 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                  && (1U 
                                                      & (((4U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                                              >> 0x10U)) 
                                                          | ((2U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                                                 >> 0x18U)) 
                                                             | (1U 
                                                                & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                                         >> 
                                                         (3U 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U]))))));
    vlSelf->__PVT__mst_req_o[1U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0x1eU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U));
    vlSelf->__PVT__mst_req_o[2U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     << 8U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                                << 7U) 
                                               | ((((2U 
                                                     >= 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                         >> 0xaU))) 
                                                    && (1U 
                                                        & (((4U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                                                >> 0x14U)) 
                                                            | ((2U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                                                   >> 0x1cU)) 
                                                               | (1U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                                                     >> 4U)))) 
                                                           >> 
                                                           (3U 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                               >> 0xaU))))) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                        : 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                      >> 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                          : 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                        << 2U)))));
    vlSelf->__PVT__mst_req_o[3U] = ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[0U] 
                                     >> 0x18U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                  << 8U));
    vlSelf->__PVT__mst_req_o[4U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0x12U) 
                                                  | ((vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[1U] 
                                                      >> 0x18U) 
                                                     | (vlSelf->__Vcellinp__gen_mux__DOT__i_w_spill_reg__data_i[2U] 
                                                        << 8U))));
    vlSelf->__PVT__mst_req_o[5U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 << 0x13U));
    vlSelf->__PVT__mst_req_o[6U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 0x13U));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
}
