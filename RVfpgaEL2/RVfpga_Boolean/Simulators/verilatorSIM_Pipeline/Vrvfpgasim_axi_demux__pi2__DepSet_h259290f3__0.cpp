// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux__pi2.h"

extern const VlWide<21>/*671:0*/ Vrvfpgasim__ConstPool__CONST_h1b90c464_0;

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h2511e72f__0;
    VL_ZERO_W(72, __Vlvbound_h2511e72f__0);
    VlWide<3>/*73:0*/ __Vlvbound_h39e310ea__0;
    VL_ZERO_W(74, __Vlvbound_h39e310ea__0);
    CData/*0:0*/ __Vlvbound_hdfe5807e__0;
    __Vlvbound_hdfe5807e__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h3d795244__0;
    VL_ZERO_W(66, __Vlvbound_h3d795244__0);
    CData/*0:0*/ __Vlvbound_h347fc14c__0;
    __Vlvbound_h347fc14c__0 = 0;
    // Body
    vlSelf->__PVT__mst_reqs_o[0U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0U];
    vlSelf->__PVT__mst_reqs_o[1U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[1U];
    vlSelf->__PVT__mst_reqs_o[2U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[2U];
    vlSelf->__PVT__mst_reqs_o[3U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[3U];
    vlSelf->__PVT__mst_reqs_o[4U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[4U];
    vlSelf->__PVT__mst_reqs_o[5U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[5U];
    vlSelf->__PVT__mst_reqs_o[6U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[6U];
    vlSelf->__PVT__mst_reqs_o[7U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[7U];
    vlSelf->__PVT__mst_reqs_o[8U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[8U];
    vlSelf->__PVT__mst_reqs_o[9U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[9U];
    vlSelf->__PVT__mst_reqs_o[0xaU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelf->__PVT__mst_reqs_o[0xbU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelf->__PVT__mst_reqs_o[0xcU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelf->__PVT__mst_reqs_o[0xdU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelf->__PVT__mst_reqs_o[0xeU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelf->__PVT__mst_reqs_o[0xfU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelf->__PVT__mst_reqs_o[0x10U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelf->__PVT__mst_reqs_o[0x11U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelf->__PVT__mst_reqs_o[0x12U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelf->__PVT__mst_reqs_o[0x13U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelf->__PVT__mst_reqs_o[0x14U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | (__Vlvbound_h2511e72f__0[0U] 
                                        << 0x11U));
    vlSelf->__PVT__mst_reqs_o[5U] = ((0xffffU & (__Vlvbound_h2511e72f__0[0U] 
                                                 >> 0xfU)) 
                                     | ((0x10000U & 
                                         (__Vlvbound_h2511e72f__0[0U] 
                                          >> 0xfU)) 
                                        | (__Vlvbound_h2511e72f__0[1U] 
                                           << 0x11U)));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfe000000U & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((0xffffU & 
                                         (__Vlvbound_h2511e72f__0[1U] 
                                          >> 0xfU)) 
                                        | ((0x10000U 
                                            & (__Vlvbound_h2511e72f__0[1U] 
                                               >> 0xfU)) 
                                           | (__Vlvbound_h2511e72f__0[2U] 
                                              << 0x11U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[4U] = (0x10000U | 
                                         vlSelf->__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | (__Vlvbound_h39e310ea__0[0U] 
                                        << 6U));
    vlSelf->__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h39e310ea__0[0U] 
                                               >> 0x1aU)) 
                                     | ((0x20U & (__Vlvbound_h39e310ea__0[0U] 
                                                  >> 0x1aU)) 
                                        | (__Vlvbound_h39e310ea__0[1U] 
                                           << 6U)));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffff0000U & 
                                      vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | ((0x1fU & (__Vlvbound_h39e310ea__0[1U] 
                                                  >> 0x1aU)) 
                                        | ((0x20U & 
                                            (__Vlvbound_h39e310ea__0[1U] 
                                             >> 0x1aU)) 
                                           | (__Vlvbound_h39e310ea__0[2U] 
                                              << 6U))));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 5U));
        vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                          & vlSelf->__PVT__mst_reqs_o[2U]) 
                                         | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                            << 5U));
    }
    __Vlvbound_hdfe5807e__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffefU & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((IData)(__Vlvbound_hdfe5807e__0) 
                                        << 4U));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0U] = ((1U & vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (__Vlvbound_h3d795244__0[0U] 
                                        << 2U));
    vlSelf->__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h3d795244__0[0U] 
                                            >> 0x1eU)) 
                                     | ((2U & (__Vlvbound_h3d795244__0[0U] 
                                               >> 0x1eU)) 
                                        | (__Vlvbound_h3d795244__0[1U] 
                                           << 2U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((1U & (__Vlvbound_h3d795244__0[1U] 
                                               >> 0x1eU)) 
                                        | ((2U & (__Vlvbound_h3d795244__0[1U] 
                                                  >> 0x1eU)) 
                                           | (__Vlvbound_h3d795244__0[2U] 
                                              << 2U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0U] = (2U | vlSelf->__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_h347fc14c__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies));
    vlSelf->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & 
                                      vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (IData)(__Vlvbound_h347fc14c__0));
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0x1ffU & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (__Vlvbound_h2511e72f__0[0U] 
                                          << 0xaU));
    vlSelf->__PVT__mst_reqs_o[0xcU] = ((0x1ffU & (__Vlvbound_h2511e72f__0[0U] 
                                                  >> 0x16U)) 
                                       | ((0x200U & 
                                           (__Vlvbound_h2511e72f__0[0U] 
                                            >> 0x16U)) 
                                          | (__Vlvbound_h2511e72f__0[1U] 
                                             << 0xaU)));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((0x1ffU & 
                                           (__Vlvbound_h2511e72f__0[1U] 
                                            >> 0x16U)) 
                                          | ((0x200U 
                                              & (__Vlvbound_h2511e72f__0[1U] 
                                                 >> 0x16U)) 
                                             | (__Vlvbound_h2511e72f__0[2U] 
                                                << 0xaU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xbU] = (0x200U | 
                                           vlSelf->__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0x3fffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | (__Vlvbound_h39e310ea__0[0U] 
                                        << 0x1fU));
    vlSelf->__PVT__mst_reqs_o[9U] = ((0x3fffffffU & 
                                      (__Vlvbound_h39e310ea__0[0U] 
                                       >> 1U)) | ((0x40000000U 
                                                   & (__Vlvbound_h39e310ea__0[0U] 
                                                      >> 1U)) 
                                                  | (__Vlvbound_h39e310ea__0[1U] 
                                                     << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                        & (__Vlvbound_h39e310ea__0[1U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h39e310ea__0[1U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h39e310ea__0[2U] 
                                             << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                        & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (0x3fffffffU 
                                          & (__Vlvbound_h39e310ea__0[2U] 
                                             >> 1U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 5U));
        vlSelf->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                          & vlSelf->__PVT__mst_reqs_o[8U]) 
                                         | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                            << 0x1eU));
    }
    __Vlvbound_hdfe5807e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((IData)(__Vlvbound_hdfe5807e__0) 
                                        << 0x1dU));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0x3ffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | (__Vlvbound_h3d795244__0[0U] 
                                        << 0x1bU));
    vlSelf->__PVT__mst_reqs_o[7U] = ((0x3ffffffU & 
                                      (__Vlvbound_h3d795244__0[0U] 
                                       >> 5U)) | ((0x4000000U 
                                                   & (__Vlvbound_h3d795244__0[0U] 
                                                      >> 5U)) 
                                                  | (__Vlvbound_h3d795244__0[1U] 
                                                     << 0x1bU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xe0000000U & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((0x3ffffffU 
                                         & (__Vlvbound_h3d795244__0[1U] 
                                            >> 5U)) 
                                        | ((0x4000000U 
                                            & (__Vlvbound_h3d795244__0[1U] 
                                               >> 5U)) 
                                           | (__Vlvbound_h3d795244__0[2U] 
                                              << 0x1bU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[6U] = (0x4000000U 
                                         | vlSelf->__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_h347fc14c__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((IData)(__Vlvbound_h347fc14c__0) 
                                        << 0x19U));
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((3U & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (__Vlvbound_h2511e72f__0[0U] 
                                           << 3U));
    vlSelf->__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h2511e72f__0[0U] 
                                               >> 0x1dU)) 
                                        | ((4U & (__Vlvbound_h2511e72f__0[0U] 
                                                  >> 0x1dU)) 
                                           | (__Vlvbound_h2511e72f__0[1U] 
                                              << 3U)));
    vlSelf->__PVT__mst_reqs_o[0x14U] = (0x7ffU & ((3U 
                                                   & (__Vlvbound_h2511e72f__0[1U] 
                                                      >> 0x1dU)) 
                                                  | ((4U 
                                                      & (__Vlvbound_h2511e72f__0[1U] 
                                                         >> 0x1dU)) 
                                                     | (__Vlvbound_h2511e72f__0[2U] 
                                                        << 3U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0x12U] = (4U | vlSelf->__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 6U));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                    << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                                 >> 6U));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                             >> 6U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0x7fffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | (__Vlvbound_h39e310ea__0[0U] 
                                          << 0x18U));
    vlSelf->__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                         & (__Vlvbound_h39e310ea__0[0U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h39e310ea__0[0U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h39e310ea__0[1U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                         & (__Vlvbound_h39e310ea__0[1U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h39e310ea__0[1U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h39e310ea__0[2U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                         & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (0x7fffffU 
                                           & (__Vlvbound_h39e310ea__0[2U] 
                                              >> 8U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                 >> 5U));
        vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                            & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                           | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                              << 0x17U));
    }
    __Vlvbound_hdfe5807e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((IData)(__Vlvbound_hdfe5807e__0) 
                                          << 0x16U));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0x7ffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | (__Vlvbound_h3d795244__0[0U] 
                                          << 0x14U));
    vlSelf->__PVT__mst_reqs_o[0xeU] = ((0x7ffffU & 
                                        (__Vlvbound_h3d795244__0[0U] 
                                         >> 0xcU)) 
                                       | ((0x80000U 
                                           & (__Vlvbound_h3d795244__0[0U] 
                                              >> 0xcU)) 
                                          | (__Vlvbound_h3d795244__0[1U] 
                                             << 0x14U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((0x7ffffU 
                                           & (__Vlvbound_h3d795244__0[1U] 
                                              >> 0xcU)) 
                                          | ((0x80000U 
                                              & (__Vlvbound_h3d795244__0[1U] 
                                                 >> 0xcU)) 
                                             | (__Vlvbound_h3d795244__0[2U] 
                                                << 0x14U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                           | vlSelf->__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_h347fc14c__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((IData)(__Vlvbound_h347fc14c__0) 
                                          << 0x12U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                              >> 4U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U])));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i 
        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                  >> 4U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                        & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelf->__PVT__gen_demux__DOT__load_ar_lock)
                ? (IData)(vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d)
                : (IData)(vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q)));
    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelf->__PVT__gen_demux__DOT__load_aw_lock)
                ? (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d)
                : (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                       ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o)));
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
                   | (0xfffffffcU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[1U]));
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U]) 
                   | (0xcU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U]));
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                     << 0x11U) | (0x1fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                              >> 0xfU))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                       ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o)));
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                          >> 0xfU)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                        << 0x11U) | 
                                       (0x1fffcU & 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                         >> 0xfU))));
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                          >> 0xfU)) | (0x3fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                                 >> 0xfU)));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                         >> 4U)) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                     & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2\n"); );
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h2511e72f__0;
    VL_ZERO_W(72, __Vlvbound_h2511e72f__0);
    VlWide<3>/*73:0*/ __Vlvbound_h39e310ea__0;
    VL_ZERO_W(74, __Vlvbound_h39e310ea__0);
    CData/*0:0*/ __Vlvbound_hdfe5807e__0;
    __Vlvbound_hdfe5807e__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h3d795244__0;
    VL_ZERO_W(66, __Vlvbound_h3d795244__0);
    CData/*0:0*/ __Vlvbound_h347fc14c__0;
    __Vlvbound_h347fc14c__0 = 0;
    // Body
    vlSelf->__PVT__mst_reqs_o[0U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0U];
    vlSelf->__PVT__mst_reqs_o[1U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[1U];
    vlSelf->__PVT__mst_reqs_o[2U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[2U];
    vlSelf->__PVT__mst_reqs_o[3U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[3U];
    vlSelf->__PVT__mst_reqs_o[4U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[4U];
    vlSelf->__PVT__mst_reqs_o[5U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[5U];
    vlSelf->__PVT__mst_reqs_o[6U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[6U];
    vlSelf->__PVT__mst_reqs_o[7U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[7U];
    vlSelf->__PVT__mst_reqs_o[8U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[8U];
    vlSelf->__PVT__mst_reqs_o[9U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[9U];
    vlSelf->__PVT__mst_reqs_o[0xaU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelf->__PVT__mst_reqs_o[0xbU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelf->__PVT__mst_reqs_o[0xcU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelf->__PVT__mst_reqs_o[0xdU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelf->__PVT__mst_reqs_o[0xeU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelf->__PVT__mst_reqs_o[0xfU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelf->__PVT__mst_reqs_o[0x10U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelf->__PVT__mst_reqs_o[0x11U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelf->__PVT__mst_reqs_o[0x12U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelf->__PVT__mst_reqs_o[0x13U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelf->__PVT__mst_reqs_o[0x14U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | (__Vlvbound_h2511e72f__0[0U] 
                                        << 0x11U));
    vlSelf->__PVT__mst_reqs_o[5U] = ((0xffffU & (__Vlvbound_h2511e72f__0[0U] 
                                                 >> 0xfU)) 
                                     | ((0x10000U & 
                                         (__Vlvbound_h2511e72f__0[0U] 
                                          >> 0xfU)) 
                                        | (__Vlvbound_h2511e72f__0[1U] 
                                           << 0x11U)));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfe000000U & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((0xffffU & 
                                         (__Vlvbound_h2511e72f__0[1U] 
                                          >> 0xfU)) 
                                        | ((0x10000U 
                                            & (__Vlvbound_h2511e72f__0[1U] 
                                               >> 0xfU)) 
                                           | (__Vlvbound_h2511e72f__0[2U] 
                                              << 0x11U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[4U] = (0x10000U | 
                                         vlSelf->__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | (__Vlvbound_h39e310ea__0[0U] 
                                        << 6U));
    vlSelf->__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h39e310ea__0[0U] 
                                               >> 0x1aU)) 
                                     | ((0x20U & (__Vlvbound_h39e310ea__0[0U] 
                                                  >> 0x1aU)) 
                                        | (__Vlvbound_h39e310ea__0[1U] 
                                           << 6U)));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffff0000U & 
                                      vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | ((0x1fU & (__Vlvbound_h39e310ea__0[1U] 
                                                  >> 0x1aU)) 
                                        | ((0x20U & 
                                            (__Vlvbound_h39e310ea__0[1U] 
                                             >> 0x1aU)) 
                                           | (__Vlvbound_h39e310ea__0[2U] 
                                              << 6U))));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                 >> 0x1eU));
        vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                          & vlSelf->__PVT__mst_reqs_o[2U]) 
                                         | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                            << 5U));
    }
    __Vlvbound_hdfe5807e__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffefU & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((IData)(__Vlvbound_hdfe5807e__0) 
                                        << 4U));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0U] = ((1U & vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (__Vlvbound_h3d795244__0[0U] 
                                        << 2U));
    vlSelf->__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h3d795244__0[0U] 
                                            >> 0x1eU)) 
                                     | ((2U & (__Vlvbound_h3d795244__0[0U] 
                                               >> 0x1eU)) 
                                        | (__Vlvbound_h3d795244__0[1U] 
                                           << 2U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((1U & (__Vlvbound_h3d795244__0[1U] 
                                               >> 0x1eU)) 
                                        | ((2U & (__Vlvbound_h3d795244__0[1U] 
                                                  >> 0x1eU)) 
                                           | (__Vlvbound_h3d795244__0[2U] 
                                              << 2U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0U] = (2U | vlSelf->__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_h347fc14c__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies));
    vlSelf->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & 
                                      vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (IData)(__Vlvbound_h347fc14c__0));
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0x1ffU & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (__Vlvbound_h2511e72f__0[0U] 
                                          << 0xaU));
    vlSelf->__PVT__mst_reqs_o[0xcU] = ((0x1ffU & (__Vlvbound_h2511e72f__0[0U] 
                                                  >> 0x16U)) 
                                       | ((0x200U & 
                                           (__Vlvbound_h2511e72f__0[0U] 
                                            >> 0x16U)) 
                                          | (__Vlvbound_h2511e72f__0[1U] 
                                             << 0xaU)));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((0x1ffU & 
                                           (__Vlvbound_h2511e72f__0[1U] 
                                            >> 0x16U)) 
                                          | ((0x200U 
                                              & (__Vlvbound_h2511e72f__0[1U] 
                                                 >> 0x16U)) 
                                             | (__Vlvbound_h2511e72f__0[2U] 
                                                << 0xaU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xbU] = (0x200U | 
                                           vlSelf->__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0x3fffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | (__Vlvbound_h39e310ea__0[0U] 
                                        << 0x1fU));
    vlSelf->__PVT__mst_reqs_o[9U] = ((0x3fffffffU & 
                                      (__Vlvbound_h39e310ea__0[0U] 
                                       >> 1U)) | ((0x40000000U 
                                                   & (__Vlvbound_h39e310ea__0[0U] 
                                                      >> 1U)) 
                                                  | (__Vlvbound_h39e310ea__0[1U] 
                                                     << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                        & (__Vlvbound_h39e310ea__0[1U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h39e310ea__0[1U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h39e310ea__0[2U] 
                                             << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                        & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (0x3fffffffU 
                                          & (__Vlvbound_h39e310ea__0[2U] 
                                             >> 1U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                 >> 0x1eU));
        vlSelf->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                          & vlSelf->__PVT__mst_reqs_o[8U]) 
                                         | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                            << 0x1eU));
    }
    __Vlvbound_hdfe5807e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((IData)(__Vlvbound_hdfe5807e__0) 
                                        << 0x1dU));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0x3ffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | (__Vlvbound_h3d795244__0[0U] 
                                        << 0x1bU));
    vlSelf->__PVT__mst_reqs_o[7U] = ((0x3ffffffU & 
                                      (__Vlvbound_h3d795244__0[0U] 
                                       >> 5U)) | ((0x4000000U 
                                                   & (__Vlvbound_h3d795244__0[0U] 
                                                      >> 5U)) 
                                                  | (__Vlvbound_h3d795244__0[1U] 
                                                     << 0x1bU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xe0000000U & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((0x3ffffffU 
                                         & (__Vlvbound_h3d795244__0[1U] 
                                            >> 5U)) 
                                        | ((0x4000000U 
                                            & (__Vlvbound_h3d795244__0[1U] 
                                               >> 5U)) 
                                           | (__Vlvbound_h3d795244__0[2U] 
                                              << 0x1bU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[6U] = (0x4000000U 
                                         | vlSelf->__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_h347fc14c__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((IData)(__Vlvbound_h347fc14c__0) 
                                        << 0x19U));
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((3U & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (__Vlvbound_h2511e72f__0[0U] 
                                           << 3U));
    vlSelf->__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h2511e72f__0[0U] 
                                               >> 0x1dU)) 
                                        | ((4U & (__Vlvbound_h2511e72f__0[0U] 
                                                  >> 0x1dU)) 
                                           | (__Vlvbound_h2511e72f__0[1U] 
                                              << 3U)));
    vlSelf->__PVT__mst_reqs_o[0x14U] = (0x7ffU & ((3U 
                                                   & (__Vlvbound_h2511e72f__0[1U] 
                                                      >> 0x1dU)) 
                                                  | ((4U 
                                                      & (__Vlvbound_h2511e72f__0[1U] 
                                                         >> 0x1dU)) 
                                                     | (__Vlvbound_h2511e72f__0[2U] 
                                                        << 3U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0x12U] = (4U | vlSelf->__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1fU));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                              >> 0x1fU));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                              << 1U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                >> 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0x7fffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | (__Vlvbound_h39e310ea__0[0U] 
                                          << 0x18U));
    vlSelf->__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                         & (__Vlvbound_h39e310ea__0[0U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h39e310ea__0[0U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h39e310ea__0[1U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                         & (__Vlvbound_h39e310ea__0[1U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h39e310ea__0[1U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h39e310ea__0[2U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                         & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (0x7fffffU 
                                           & (__Vlvbound_h39e310ea__0[2U] 
                                              >> 8U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                 >> 0x1eU));
        vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                            & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                           | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                              << 0x17U));
    }
    __Vlvbound_hdfe5807e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((IData)(__Vlvbound_hdfe5807e__0) 
                                          << 0x16U));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0x7ffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | (__Vlvbound_h3d795244__0[0U] 
                                          << 0x14U));
    vlSelf->__PVT__mst_reqs_o[0xeU] = ((0x7ffffU & 
                                        (__Vlvbound_h3d795244__0[0U] 
                                         >> 0xcU)) 
                                       | ((0x80000U 
                                           & (__Vlvbound_h3d795244__0[0U] 
                                              >> 0xcU)) 
                                          | (__Vlvbound_h3d795244__0[1U] 
                                             << 0x14U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((0x7ffffU 
                                           & (__Vlvbound_h3d795244__0[1U] 
                                              >> 0xcU)) 
                                          | ((0x80000U 
                                              & (__Vlvbound_h3d795244__0[1U] 
                                                 >> 0xcU)) 
                                             | (__Vlvbound_h3d795244__0[2U] 
                                                << 0x14U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                           | vlSelf->__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_h347fc14c__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((IData)(__Vlvbound_h347fc14c__0) 
                                          << 0x12U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                              >> 0x1dU))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__1(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                              >> 0x19U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__3(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__3\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i 
        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                  >> 0x1dU) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__19(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__19\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                         >> 0x19U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelf->__PVT__gen_demux__DOT__load_ar_lock)
                ? (IData)(vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d)
                : (IData)(vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q)));
    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelf->__PVT__gen_demux__DOT__load_aw_lock)
                ? (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d)
                : (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                     << 7U) | (0x7cU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                        >> 0x19U))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                       ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o)));
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                          >> 0x19U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                                      >> 0x19U))));
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                          >> 0x19U)) | (0xcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                >> 0x19U)));
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                     << 0x18U) | (0xfffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                               >> 8U))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                       ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o)));
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                          >> 8U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                      << 0x18U) | (0xfffffcU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                                      >> 8U))));
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                          >> 8U)) | (0x3fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                               >> 8U)));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                         >> 0x1dU)) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                         >> 0x19U)) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__2\n"); );
    // Init
    VlWide<3>/*71:0*/ __Vlvbound_h2511e72f__0;
    VL_ZERO_W(72, __Vlvbound_h2511e72f__0);
    VlWide<3>/*73:0*/ __Vlvbound_h39e310ea__0;
    VL_ZERO_W(74, __Vlvbound_h39e310ea__0);
    CData/*0:0*/ __Vlvbound_hdfe5807e__0;
    __Vlvbound_hdfe5807e__0 = 0;
    VlWide<3>/*65:0*/ __Vlvbound_h3d795244__0;
    VL_ZERO_W(66, __Vlvbound_h3d795244__0);
    CData/*0:0*/ __Vlvbound_h347fc14c__0;
    __Vlvbound_h347fc14c__0 = 0;
    // Body
    vlSelf->__PVT__mst_reqs_o[0U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0U];
    vlSelf->__PVT__mst_reqs_o[1U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[1U];
    vlSelf->__PVT__mst_reqs_o[2U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[2U];
    vlSelf->__PVT__mst_reqs_o[3U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[3U];
    vlSelf->__PVT__mst_reqs_o[4U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[4U];
    vlSelf->__PVT__mst_reqs_o[5U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[5U];
    vlSelf->__PVT__mst_reqs_o[6U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[6U];
    vlSelf->__PVT__mst_reqs_o[7U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[7U];
    vlSelf->__PVT__mst_reqs_o[8U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[8U];
    vlSelf->__PVT__mst_reqs_o[9U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[9U];
    vlSelf->__PVT__mst_reqs_o[0xaU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xaU];
    vlSelf->__PVT__mst_reqs_o[0xbU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xbU];
    vlSelf->__PVT__mst_reqs_o[0xcU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xcU];
    vlSelf->__PVT__mst_reqs_o[0xdU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xdU];
    vlSelf->__PVT__mst_reqs_o[0xeU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xeU];
    vlSelf->__PVT__mst_reqs_o[0xfU] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0xfU];
    vlSelf->__PVT__mst_reqs_o[0x10U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x10U];
    vlSelf->__PVT__mst_reqs_o[0x11U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x11U];
    vlSelf->__PVT__mst_reqs_o[0x12U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x12U];
    vlSelf->__PVT__mst_reqs_o[0x13U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x13U];
    vlSelf->__PVT__mst_reqs_o[0x14U] = Vrvfpgasim__ConstPool__CONST_h1b90c464_0[0x14U];
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffffU & vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | (__Vlvbound_h2511e72f__0[0U] 
                                        << 0x11U));
    vlSelf->__PVT__mst_reqs_o[5U] = ((0xffffU & (__Vlvbound_h2511e72f__0[0U] 
                                                 >> 0xfU)) 
                                     | ((0x10000U & 
                                         (__Vlvbound_h2511e72f__0[0U] 
                                          >> 0xfU)) 
                                        | (__Vlvbound_h2511e72f__0[1U] 
                                           << 0x11U)));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfe000000U & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((0xffffU & 
                                         (__Vlvbound_h2511e72f__0[1U] 
                                          >> 0xfU)) 
                                        | ((0x10000U 
                                            & (__Vlvbound_h2511e72f__0[1U] 
                                               >> 0xfU)) 
                                           | (__Vlvbound_h2511e72f__0[2U] 
                                              << 0x11U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[4U] = (0x10000U | 
                                         vlSelf->__PVT__mst_reqs_o[4U]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0x1fU & vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | (__Vlvbound_h39e310ea__0[0U] 
                                        << 6U));
    vlSelf->__PVT__mst_reqs_o[3U] = ((0x1fU & (__Vlvbound_h39e310ea__0[0U] 
                                               >> 0x1aU)) 
                                     | ((0x20U & (__Vlvbound_h39e310ea__0[0U] 
                                                  >> 0x1aU)) 
                                        | (__Vlvbound_h39e310ea__0[1U] 
                                           << 6U)));
    vlSelf->__PVT__mst_reqs_o[4U] = ((0xffff0000U & 
                                      vlSelf->__PVT__mst_reqs_o[4U]) 
                                     | ((0x1fU & (__Vlvbound_h39e310ea__0[1U] 
                                                  >> 0x1aU)) 
                                        | ((0x20U & 
                                            (__Vlvbound_h39e310ea__0[1U] 
                                             >> 0x1aU)) 
                                           | (__Vlvbound_h39e310ea__0[2U] 
                                              << 6U))));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                 >> 0x17U));
        vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                          & vlSelf->__PVT__mst_reqs_o[2U]) 
                                         | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                            << 5U));
    }
    __Vlvbound_hdfe5807e__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xffffffefU & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((IData)(__Vlvbound_hdfe5807e__0) 
                                        << 4U));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0U] = ((1U & vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (__Vlvbound_h3d795244__0[0U] 
                                        << 2U));
    vlSelf->__PVT__mst_reqs_o[1U] = ((1U & (__Vlvbound_h3d795244__0[0U] 
                                            >> 0x1eU)) 
                                     | ((2U & (__Vlvbound_h3d795244__0[0U] 
                                               >> 0x1eU)) 
                                        | (__Vlvbound_h3d795244__0[1U] 
                                           << 2U)));
    vlSelf->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & 
                                      vlSelf->__PVT__mst_reqs_o[2U]) 
                                     | ((1U & (__Vlvbound_h3d795244__0[1U] 
                                               >> 0x1eU)) 
                                        | ((2U & (__Vlvbound_h3d795244__0[1U] 
                                                  >> 0x1eU)) 
                                           | (__Vlvbound_h3d795244__0[2U] 
                                              << 2U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0U] = (2U | vlSelf->__PVT__mst_reqs_o[0U]);
    }
    __Vlvbound_h347fc14c__0 = (1U & (IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies));
    vlSelf->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & 
                                      vlSelf->__PVT__mst_reqs_o[0U]) 
                                     | (IData)(__Vlvbound_h347fc14c__0));
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0x1ffU & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (__Vlvbound_h2511e72f__0[0U] 
                                          << 0xaU));
    vlSelf->__PVT__mst_reqs_o[0xcU] = ((0x1ffU & (__Vlvbound_h2511e72f__0[0U] 
                                                  >> 0x16U)) 
                                       | ((0x200U & 
                                           (__Vlvbound_h2511e72f__0[0U] 
                                            >> 0x16U)) 
                                          | (__Vlvbound_h2511e72f__0[1U] 
                                             << 0xaU)));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((0x1ffU & 
                                           (__Vlvbound_h2511e72f__0[1U] 
                                            >> 0x16U)) 
                                          | ((0x200U 
                                              & (__Vlvbound_h2511e72f__0[1U] 
                                                 >> 0x16U)) 
                                             | (__Vlvbound_h2511e72f__0[2U] 
                                                << 0xaU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xbU] = (0x200U | 
                                           vlSelf->__PVT__mst_reqs_o[0xbU]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0x3fffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | (__Vlvbound_h39e310ea__0[0U] 
                                        << 0x1fU));
    vlSelf->__PVT__mst_reqs_o[9U] = ((0x3fffffffU & 
                                      (__Vlvbound_h39e310ea__0[0U] 
                                       >> 1U)) | ((0x40000000U 
                                                   & (__Vlvbound_h39e310ea__0[0U] 
                                                      >> 1U)) 
                                                  | (__Vlvbound_h39e310ea__0[1U] 
                                                     << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xaU] = ((0x3fffffffU 
                                        & (__Vlvbound_h39e310ea__0[1U] 
                                           >> 1U)) 
                                       | ((0x40000000U 
                                           & (__Vlvbound_h39e310ea__0[1U] 
                                              >> 1U)) 
                                          | (__Vlvbound_h39e310ea__0[2U] 
                                             << 0x1fU)));
    vlSelf->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U 
                                        & vlSelf->__PVT__mst_reqs_o[0xbU]) 
                                       | (0x3fffffffU 
                                          & (__Vlvbound_h39e310ea__0[2U] 
                                             >> 1U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                 >> 0x17U));
        vlSelf->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                          & vlSelf->__PVT__mst_reqs_o[8U]) 
                                         | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                            << 0x1eU));
    }
    __Vlvbound_hdfe5807e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((IData)(__Vlvbound_hdfe5807e__0) 
                                        << 0x1dU));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0x3ffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | (__Vlvbound_h3d795244__0[0U] 
                                        << 0x1bU));
    vlSelf->__PVT__mst_reqs_o[7U] = ((0x3ffffffU & 
                                      (__Vlvbound_h3d795244__0[0U] 
                                       >> 5U)) | ((0x4000000U 
                                                   & (__Vlvbound_h3d795244__0[0U] 
                                                      >> 5U)) 
                                                  | (__Vlvbound_h3d795244__0[1U] 
                                                     << 0x1bU)));
    vlSelf->__PVT__mst_reqs_o[8U] = ((0xe0000000U & 
                                      vlSelf->__PVT__mst_reqs_o[8U]) 
                                     | ((0x3ffffffU 
                                         & (__Vlvbound_h3d795244__0[1U] 
                                            >> 5U)) 
                                        | ((0x4000000U 
                                            & (__Vlvbound_h3d795244__0[1U] 
                                               >> 5U)) 
                                           | (__Vlvbound_h3d795244__0[2U] 
                                              << 0x1bU))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[6U] = (0x4000000U 
                                         | vlSelf->__PVT__mst_reqs_o[6U]);
    }
    __Vlvbound_h347fc14c__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 1U));
    vlSelf->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & 
                                      vlSelf->__PVT__mst_reqs_o[6U]) 
                                     | ((IData)(__Vlvbound_h347fc14c__0) 
                                        << 0x19U));
    __Vlvbound_h2511e72f__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h2511e72f__0[2U] = (0xffU & (vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                            >> 2U));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((3U & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (__Vlvbound_h2511e72f__0[0U] 
                                           << 3U));
    vlSelf->__PVT__mst_reqs_o[0x13U] = ((3U & (__Vlvbound_h2511e72f__0[0U] 
                                               >> 0x1dU)) 
                                        | ((4U & (__Vlvbound_h2511e72f__0[0U] 
                                                  >> 0x1dU)) 
                                           | (__Vlvbound_h2511e72f__0[1U] 
                                              << 3U)));
    vlSelf->__PVT__mst_reqs_o[0x14U] = (0x7ffU & ((3U 
                                                   & (__Vlvbound_h2511e72f__0[1U] 
                                                      >> 0x1dU)) 
                                                  | ((4U 
                                                      & (__Vlvbound_h2511e72f__0[1U] 
                                                         >> 0x1dU)) 
                                                     | (__Vlvbound_h2511e72f__0[2U] 
                                                        << 3U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0x12U] = (4U | vlSelf->__PVT__mst_reqs_o[0x12U]);
    }
    __Vlvbound_h39e310ea__0[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x18U));
    __Vlvbound_h39e310ea__0[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                    << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                              >> 0x18U));
    __Vlvbound_h39e310ea__0[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                >> 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0x7fffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | (__Vlvbound_h39e310ea__0[0U] 
                                          << 0x18U));
    vlSelf->__PVT__mst_reqs_o[0x10U] = ((0x7fffffU 
                                         & (__Vlvbound_h39e310ea__0[0U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h39e310ea__0[0U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h39e310ea__0[1U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x11U] = ((0x7fffffU 
                                         & (__Vlvbound_h39e310ea__0[1U] 
                                            >> 8U)) 
                                        | ((0x800000U 
                                            & (__Vlvbound_h39e310ea__0[1U] 
                                               >> 8U)) 
                                           | (__Vlvbound_h39e310ea__0[2U] 
                                              << 0x18U)));
    vlSelf->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                         & vlSelf->__PVT__mst_reqs_o[0x12U]) 
                                        | (0x7fffffU 
                                           & (__Vlvbound_h39e310ea__0[2U] 
                                              >> 8U)));
    if (((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        vlSelf->__Vlvbound_he091f6d1__1 = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                 >> 0x17U));
        vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                            & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                           | ((IData)(vlSelf->__Vlvbound_he091f6d1__1) 
                                              << 0x17U));
    }
    __Vlvbound_hdfe5807e__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_b_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((IData)(__Vlvbound_hdfe5807e__0) 
                                          << 0x16U));
    __Vlvbound_h3d795244__0[0U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[1U] = ((vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                    << 0x1eU) | (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                                 >> 2U));
    __Vlvbound_h3d795244__0[2U] = (3U & (vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                         >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0x7ffffU & 
                                        vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | (__Vlvbound_h3d795244__0[0U] 
                                          << 0x14U));
    vlSelf->__PVT__mst_reqs_o[0xeU] = ((0x7ffffU & 
                                        (__Vlvbound_h3d795244__0[0U] 
                                         >> 0xcU)) 
                                       | ((0x80000U 
                                           & (__Vlvbound_h3d795244__0[0U] 
                                              >> 0xcU)) 
                                          | (__Vlvbound_h3d795244__0[1U] 
                                             << 0x14U)));
    vlSelf->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U 
                                        & vlSelf->__PVT__mst_reqs_o[0xfU]) 
                                       | ((0x7ffffU 
                                           & (__Vlvbound_h3d795244__0[1U] 
                                              >> 0xcU)) 
                                          | ((0x80000U 
                                              & (__Vlvbound_h3d795244__0[1U] 
                                                 >> 0xcU)) 
                                             | (__Vlvbound_h3d795244__0[2U] 
                                                << 0x14U))));
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        vlSelf->__PVT__mst_reqs_o[0xdU] = (0x80000U 
                                           | vlSelf->__PVT__mst_reqs_o[0xdU]);
    }
    __Vlvbound_h347fc14c__0 = (1U & ((IData)(vlSelf->__PVT__gen_demux__DOT__mst_r_readies) 
                                     >> 2U));
    vlSelf->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU 
                                        & vlSelf->__PVT__mst_reqs_o[0xdU]) 
                                       | ((IData)(__Vlvbound_h347fc14c__0) 
                                          << 0x12U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                              >> 0x16U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__1(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                              >> 0x12U))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__3(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__3\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i 
        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                  >> 0x16U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__19(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___act_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__19\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                         >> 0x12U) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelf->__PVT__gen_demux__DOT__load_ar_lock)
                ? (IData)(vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_d)
                : (IData)(vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q)));
    vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && ((IData)(vlSelf->__PVT__gen_demux__DOT__load_aw_lock)
                ? (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_d)
                : (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                     << 0xeU) | (0x3ffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                            >> 0x12U))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                       ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o)));
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                          >> 0x12U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                         << 0xeU) | 
                                        (0x3ffcU & 
                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                          >> 0x12U))));
            vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                          >> 0x12U)) | (0xcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                >> 0x12U)));
        }
        if (vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                     << 0x1fU) | (0x7ffffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                                 >> 1U))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                       ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o)));
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                          >> 1U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                      << 0x1fU) | (0x7ffffffcU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                                      >> 1U))));
            vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          >> 1U)) | (0x3fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                               >> 1U)));
        }
    } else {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                         >> 0x16U)) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           && (1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                         >> 0x12U)) & (IData)(vlSelf->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi2___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__2(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___nba_comb__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}
