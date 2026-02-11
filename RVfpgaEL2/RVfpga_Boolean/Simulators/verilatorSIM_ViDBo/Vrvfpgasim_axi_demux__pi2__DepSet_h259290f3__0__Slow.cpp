// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux__pi2.h"

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
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
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
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
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux__pi2___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0(Vrvfpgasim_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U)))
            ? (3U & (vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q), 1U))))
            : 0U);
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
    vlSelf->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}
