// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mux__pi4.h"

VL_ATTR_COLD void Vrvfpgasim_axi_mux__pi4___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                     >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x17U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x16U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x17U)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
               >> 0x16U)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
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

VL_ATTR_COLD void Vrvfpgasim_axi_mux__pi4___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                     >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xfU));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xeU));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xfU)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
               >> 0xeU)) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain));
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
