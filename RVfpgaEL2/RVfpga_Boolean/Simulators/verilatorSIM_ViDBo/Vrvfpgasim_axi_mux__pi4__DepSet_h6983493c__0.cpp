// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_axi_mux__pi4.h"

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vrvfpgasim__ConstPool__TABLE_h615ae148_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vrvfpgasim__ConstPool__TABLE_hb72eb4b9_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vrvfpgasim__ConstPool__TABLE_hefdcc1b2_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vrvfpgasim__ConstPool__TABLE_hcb5aa837_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vrvfpgasim__ConstPool__TABLE_h62117ac8_0;

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_valid;
    __PVT__gen_mux__DOT__mst_aw_valid = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx1 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((6U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vrvfpgasim__ConstPool__TABLE_h615ae148_0[__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vrvfpgasim__ConstPool__TABLE_hb72eb4b9_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vrvfpgasim__ConstPool__TABLE_hefdcc1b2_0
        [__Vtableidx1];
    __PVT__gen_mux__DOT__mst_aw_valid = Vrvfpgasim__ConstPool__TABLE_hcb5aa837_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vrvfpgasim__ConstPool__TABLE_h62117ac8_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x18U) | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 8U)) : ((
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                     >> 4U)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                            << 0x1cU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
                                         >> 4U)) : 
                       vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U]) 
                      << 4U) | (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 8U) : 
                                        ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 4U)))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x18U) | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 8U)) : ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0x1cU) 
                                        | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 4U)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                  << 0x1cU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
                               >> 4U)) : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U]) 
            >> 0x1cU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                               << 0x1cU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                                            >> 4U))
                           : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U]) 
                         << 4U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffff00U & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U]) 
           | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                     << 0x1cU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                                  >> 4U)) : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U]) 
               >> 0x1cU) | (0xf0U & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                       ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
                                           << 0x1cU) 
                                          | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                                             >> 4U))
                                       : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U]) 
                                     << 4U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffU & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U]) 
           | (0xffffff00U & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U]));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xffU & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U]) 
           | (0xf00U & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6\n"); );
    // Body
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_ar_readies_o 
        = (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
            >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_ar_readies_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0xcU) | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                      >> 0x14U)) : 
                     ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x16U) | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 0xaU)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                            << 0x16U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
                                         >> 0xaU)) : 
                       vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U]) 
                      << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                >> 0x14U)
                                             : ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                 << 0x16U) 
                                                | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                   >> 0xaU)))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0xcU) | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                            >> 0x14U)) : ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x16U) 
                                          | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 0xaU)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                  << 0x16U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
                               >> 0xaU)) : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U]) 
            >> 0x16U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                               << 0x16U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                                            >> 0xaU))
                           : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U]) 
                         << 0xaU));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xfff00000U & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U]) 
           | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                 ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                     << 0x16U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                                  >> 0xaU)) : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U]) 
               >> 0x16U) | (0xffc00U & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
                                              << 0x16U) 
                                             | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                                                >> 0xaU))
                                          : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U]) 
                                        << 0xaU))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xfffffU & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U]) 
           | (0xfff00000U & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U]));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xfffffU & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U]) 
           | (0x3ff00000U & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U]));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->gen_mux__DOT__i_w_fifo__DOT____Vlvbound_h6577cc8e__0 
            = (3U & (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                     >> 8U));
        if ((0xbU >= (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                    & (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
                   | (0xfffU & ((IData)(vlSelf->gen_mux__DOT__i_w_fifo__DOT____Vlvbound_h6577cc8e__0) 
                                << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8\n"); );
    // Body
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__slv_aw_readies_o 
        = (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
            >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__slv_aw_readies_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__10(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__10\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__12(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__12\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__14(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__14\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__16(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__16\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__18(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__18\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__19(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__19\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__21(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__21\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_valid;
    __PVT__gen_mux__DOT__mst_aw_valid = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx2 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((6U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vrvfpgasim__ConstPool__TABLE_h615ae148_0[__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vrvfpgasim__ConstPool__TABLE_hb72eb4b9_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vrvfpgasim__ConstPool__TABLE_hefdcc1b2_0
        [__Vtableidx2];
    __PVT__gen_mux__DOT__mst_aw_valid = Vrvfpgasim__ConstPool__TABLE_hcb5aa837_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vrvfpgasim__ConstPool__TABLE_h62117ac8_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
}
