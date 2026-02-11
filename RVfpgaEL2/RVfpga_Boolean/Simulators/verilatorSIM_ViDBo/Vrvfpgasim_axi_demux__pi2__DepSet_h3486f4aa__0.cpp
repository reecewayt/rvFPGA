// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_axi_demux__pi2.h"

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__5(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__5\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__mst_b_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U)))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = ((0x1fc000U & vlSelf->__Vcellinp__gen_demux__DOT__i_b_mux__data_i) 
           | ((0x3f80U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                            ? (vlSelf->__Vcellinp__gen_demux__DOT__i_b_mux__data_i 
                               >> 7U) : vlSelf->__Vcellinp__gen_demux__DOT__i_b_mux__data_i) 
                          << 7U)) | (0x7fU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                               ? (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                  >> 0xeU)
                                               : (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                  >> 7U)))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__mst_r_readies = 
        ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
         | ((0xfffffffeU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                               << 1U))) | (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U)))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__8(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__8\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0x10U)) : 
                     ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x18U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 8U)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                            << 0x18U) | (vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
                                         >> 8U)) : 
                       vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U]) 
                      << 8U) | (0xffU & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0x10U)
                                          : ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 8U)))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x10U) | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0x10U)) : ((vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            << 0x18U) 
                                           | (vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                              >> 8U)));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                  << 0x18U) | (vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U] 
                               >> 8U)) : vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[0U]) 
            >> 0x18U) | (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
                               << 0x18U) | (vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                                            >> 8U))
                           : vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U]) 
                         << 8U));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffff0000U & vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U]) 
           | ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
                     << 0x18U) | (vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[3U] 
                                  >> 8U)) : vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[1U]) 
               >> 0x18U) | (0xff00U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? ((vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U] 
                                             << 0x18U) 
                                            | (vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[4U] 
                                               >> 8U))
                                         : vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[2U]) 
                                       << 8U))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffffU & vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U]) 
           | (0xffff0000U & vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[5U]));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xffffU & vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U]) 
           | (0xff0000U & vlSelf->__Vcellinp__gen_demux__DOT__i_r_mux__data_i[6U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__9(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__9\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17\n"); );
    // Body
    vlSelf->__PVT__slv_resp_o[0U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U];
    vlSelf->__PVT__slv_resp_o[1U] = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[1U];
    vlSelf->__PVT__slv_resp_o[2U] = (((IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                      << 0x13U) | (
                                                   ((IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_w_ready) 
                                                       << 0x11U) 
                                                      | ((0x10000U 
                                                          & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                             << 0x10U)) 
                                                         | ((0xfe00U 
                                                             & (vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                                << 9U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U])))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((IData)(vlSelf->__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
}
