// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_veerwolf_core__Cbebc20.h"

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___ico_sequent__TOP__rvfpgasim__veerwolf__0(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___ico_sequent__TOP__rvfpgasim__veerwolf__0\n"); );
    // Body
    if ((0x100U & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))) {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSelf->__PVT__timer_ptc__DOT__capt_pad_i;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (~ (IData)(vlSelf->__PVT__timer_ptc__DOT__capt_pad_i)));
    } else {
        vlSelf->__PVT__timer_ptc__DOT__hrc_clk = vlSymsp->TOP.clk;
        vlSelf->__PVT__timer_ptc__DOT__lrc_clk = (1U 
                                                  & (IData)(vlSymsp->TOP.clk));
    }
    vlSelf->__PVT__timer_ptc__DOT__cntr_clk = ((2U 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl))
                                                ? (IData)(vlSelf->__PVT__timer_ptc__DOT__eclk_gate)
                                                : (IData)(vlSymsp->TOP.clk));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___ico_sequent__TOP__rvfpgasim__veerwolf__1(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___ico_sequent__TOP__rvfpgasim__veerwolf__1\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__core_rst_l = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__core_rst_l));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__13(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__13\n"); );
    // Init
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0;
    CData/*3:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o = 0;
    CData/*0:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0 = 0;
    // Body
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                     >> 0x16U));
    }
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
              >> 0x13U));
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0 
        = (IData)((0x2800000U == (0x2800000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU])));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
              >> 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he47a5006__0 
            = ((0xf00U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he47a5006__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0) {
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                       >> 7U));
        if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__14(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__14\n"); );
    // Init
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0;
    CData/*3:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o = 0;
    CData/*0:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0 = 0;
    // Body
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                     >> 0x16U));
    }
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
              >> 0x13U));
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0 
        = (IData)((0x2800000U == (0x2800000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU])));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
              >> 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he47a5006__0 
            = ((0xf00U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he47a5006__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0) {
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                       >> 7U));
        if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__15(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__15\n"); );
    // Init
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0;
    CData/*0:0*/ __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0;
    CData/*3:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o = 0;
    CData/*0:0*/ axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0 = 0;
    // Body
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                     >> 0x16U));
    }
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
              >> 0x13U));
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0 
        = (IData)((0x2800000U == (0x2800000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU])));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
              >> 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he47a5006__0 
            = ((0xf00U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                          >> 0xaU)) | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                >> 0xaU)));
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he47a5006__0)) 
                                           << (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____VdfgExtracted_hda9e2b71__0) {
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffffU & ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                      >> 7U)) << (0xfU 
                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                       >> 7U));
        if (__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__4(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__4\n"); );
    // Body
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            << 0x19U) | (0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            >> 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                      << 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
            >> 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                      << 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
            >> 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                      << 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
            >> 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                      << 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
            >> 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                      << 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
            >> 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                      << 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            << 0x12U) | (0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                                     >> 7U)));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
            >> 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                        << 0x12U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
            >> 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                        << 0x12U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
            >> 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                        << 0x12U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
            >> 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                        << 0x12U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
            >> 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                        << 0x12U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
            >> 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                        << 0x12U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
        = (0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                     >> 0xeU));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
            << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                      >> 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
            << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                      >> 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
            << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                      >> 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[3U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
            << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                      >> 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[4U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
            << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                      >> 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[5U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
            << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                      >> 0x19U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
        = ((0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U]) 
           | (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                             << 7U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                       >> 0x19U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[7U] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U]) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U]) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[9U] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U]) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xaU] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU]) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xbU] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU]) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xcU] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU]) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
        = (((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
             << 0x19U) | (0x1fc0000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                                        >> 7U))) | 
           (0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xeU] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                        >> 7U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                                                    >> 7U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                        >> 7U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                                                    >> 7U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x10U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                        >> 7U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                                                    >> 7U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x11U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                        >> 7U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                                                    >> 7U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x12U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                        >> 7U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                    << 0x19U) | (0x1fc0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                                                    >> 7U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x13U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                        >> 7U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                                                   << 0x19U) 
                                                  | (0x1fc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                                        >> 7U)))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0x14U] 
        = (0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                     >> 7U));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__7(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__7\n"); );
    // Body
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
            << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                         >> 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
            << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                         >> 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
        = ((0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                           << 0xcU)) | (0xfffffU & 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                                         >> 8U)));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[3U] 
        = (((0xff000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                         << 0xcU)) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                                      >> 0x14U)) | 
           (0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                           << 0xcU)));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
        = (((0xff000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                         << 0xcU)) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                                      >> 0x14U)) | 
           (0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                           << 0xcU)));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            << 8U) | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                               >> 0x14U)));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[6U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                         << 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                         << 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
            << 0x14U) | (0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[3U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
            >> 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                        << 0x14U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
            >> 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                        << 0x14U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            << 8U) | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                               >> 0xcU)));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[6U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                         << 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                         << 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[0U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                        >> 0x14U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[1U] 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
            << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                        >> 0x14U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U]) 
           | (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                           << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                                       >> 0x14U))));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[3U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U]) 
           | (0xfff00000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U]) 
           | (0xfff00000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            << 8U) | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U]));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[6U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                         << 8U));
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
            >> 0x18U) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                         << 8U));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__8(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__8\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h17415c14__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h17415c14__0 = 0;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hecc9c009__0 
        = ((~ ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                >> 8U) & ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                 >> 4U)) == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy 
        = (((~ (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                >> 0x13U)) & (IData)(vlSelf->__PVT__lsu_awvalid)) 
           | (((~ (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                   >> 0x11U)) & (IData)(vlSelf->__PVT__lsu_wvalid)) 
              | ((~ (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 0x12U)) & (IData)(vlSelf->__PVT__lsu_arvalid))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h17415c14__0 
        = ((IData)(vlSelf->__PVT__lsu_arvalid) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  >> 0x12U));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent 
        = ((IData)(vlSelf->__PVT__lsu_awvalid) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  >> 0x13U));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent 
        = ((IData)(vlSelf->__PVT__lsu_wvalid) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                 >> 0x11U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
            >> 8U) & (0U != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                   >> 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
            >> 0x10U) & (0U != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                      >> 0xaU))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h58e75562__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
           | (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb8334a__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
           | (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent) 
           | ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent) 
              | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h17415c14__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
               ? ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                   ? 0U : ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                            ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                ? 0U : 6U) : ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                               ? 0U
                                               : ((1U 
                                                   & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                          >> 
                                                          (3U 
                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))) 
                                                      | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                   ? 5U
                                                   : 6U))))
               : ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                   ? ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                       ? ((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                    & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                           ? 0U : (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw))) 
                                     & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                    & (4U != ((0xbU 
                                               >= (0xfU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))
                                               ? (7U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 
                                                     (0xfU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))
                                               : 0U)))
                                    ? 4U : ((1U & (
                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                                   | ((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                          & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw))) 
                                                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))) 
                                                       & (4U 
                                                          == 
                                                          ((0xbU 
                                                            >= 
                                                            (0xfU 
                                                             & ((IData)(3U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))
                                                            ? 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                               >> 
                                                               (0xfU 
                                                                & ((IData)(3U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))
                                                            : 0U))) 
                                                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                             ? 5U : 6U)))
                       : ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                           ? 0U : ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                     & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                        >> 8U)) & (
                                                   (7U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                       >> 4U)) 
                                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                    ? 5U : 3U))) : 
                  ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                        ? 0U : 2U) : 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xfc7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xfc7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | (((0x20U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                ? ((0x10U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? 0U : ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                             ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                 ? 0U : 6U) : ((1U 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         >> 1U) 
                                                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                               >> 2U)))) 
                                                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                    ? 5U
                                                    : 6U))))
                : ((0x10U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                        ? ((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 1U) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                            ? 0U : ((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                        >> 1U) & (~ 
                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                   >> 1U))) 
                                      & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                            >> 1U))) 
                                     & (4U != ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 2U)))))
                                                ? (7U 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 2U))))))
                                                : 0U)))
                                     ? 4U : ((1U & 
                                              ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                               | (((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                       >> 1U) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                          >> 1U))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 1U))) 
                                                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                           >> 2U)))) 
                                                   & (4U 
                                                      == 
                                                      ((0xbU 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 2U)))))
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(3U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                   >> 2U))))))
                                                        : 0U))) 
                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                              ? 5U : 6U)))
                        : ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                            ? 0U : ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         >> 8U)) & 
                                     ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                             >> 4U)) 
                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                     ? 5U : 3U))) : 
                   ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                     ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                         ? 0U : 2U) : 2U))) << 3U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xe3fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xe3fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | (((0x100U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                ? ((0x80U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? 0U : ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                             ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                 ? 0U : 6U) : ((1U 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         >> 2U) 
                                                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                               >> 4U)))) 
                                                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                    ? 5U
                                                    : 6U))))
                : ((0x80U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                        ? ((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 2U) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                            ? 0U : ((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                        >> 2U) & (~ 
                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                   >> 2U))) 
                                      & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                            >> 2U))) 
                                     & (4U != ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 4U)))))
                                                ? (7U 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 4U))))))
                                                : 0U)))
                                     ? 4U : ((1U & 
                                              ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                               | (((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                          >> 2U))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 2U))) 
                                                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                           >> 4U)))) 
                                                   & (4U 
                                                      == 
                                                      ((0xbU 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 4U)))))
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(3U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                   >> 4U))))))
                                                        : 0U))) 
                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                              ? 5U : 6U)))
                        : ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                            ? 0U : ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         >> 8U)) & 
                                     ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                             >> 4U)) 
                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                     ? 5U : 3U))) : 
                   ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                     ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                         ? 0U : 2U) : 2U))) << 6U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0x1ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0x1ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | (((0x800U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                ? ((0x400U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? 0U : ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                             ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                 ? 0U : 6U) : ((1U 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         >> 3U) 
                                                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                               >> 6U)))) 
                                                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                    ? 5U
                                                    : 6U))))
                : ((0x400U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                        ? ((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 3U) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                            ? 0U : ((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                        >> 3U) & (~ 
                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                   >> 3U))) 
                                      & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                            >> 3U))) 
                                     & (4U != ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 6U)))))
                                                ? (7U 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 6U))))))
                                                : 0U)))
                                     ? 4U : ((1U & 
                                              ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                               | (((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                       >> 3U) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                          >> 3U))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 3U))) 
                                                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                           >> 6U)))) 
                                                   & (4U 
                                                      == 
                                                      ((0xbU 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 6U)))))
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(3U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                   >> 6U))))))
                                                        : 0U))) 
                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                              ? 5U : 6U)))
                        : ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                            ? 0U : ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         >> 8U)) & 
                                     ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                             >> 4U)) 
                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                     ? 5U : 3U))) : 
                   ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                     ? ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                         ? 0U : 2U) : 2U))) << 9U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h58e75562__0) 
            & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb8334a__0)) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h17415c14__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h450a625c__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tagff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken)
            ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h450a625c__0)
                ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)
                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__9(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__9\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg_resume_req;
    __PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns = 0;
    SData/*15:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din = 0;
    IData/*17:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din = 0;
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
        = ((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSelf->__PVT__sb_awsize))))) 
                       & VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                        >> 4U))), 
                                       VL_SHIFTL_III(32,32,32, 
                                                     (7U 
                                                      & vlSelf->__PVT__sb_awaddr), 3U)))) 
           | ((0xffffULL & ((- (QData)((IData)((1U 
                                                == (IData)(vlSelf->__PVT__sb_awsize))))) 
                            & VL_SHIFTR_QQI(64,64,32, 
                                            (((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                   >> 4U))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSelf->__PVT__sb_awaddr 
                                                              >> 1U)), 4U)))) 
              | ((0xffffffffULL & ((- (QData)((IData)(
                                                      (2U 
                                                       == (IData)(vlSelf->__PVT__sb_awsize))))) 
                                   & VL_SHIFTR_QQI(64,64,32, 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                          >> 4U))), 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (1U 
                                                                  & (vlSelf->__PVT__sb_awaddr 
                                                                     >> 2U)), 5U)))) 
                 | ((- (QData)((IData)((3U == (IData)(vlSelf->__PVT__sb_awsize))))) 
                    & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                   >> 4U)))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error 
        = (((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
             >> 8U) & (0U != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                    >> 2U)))) | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  >> 0x10U) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                        >> 0xaU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read 
        = ((IData)(vlSelf->__PVT__sb_arvalid) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                 >> 0x12U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr 
        = ((IData)(vlSelf->__PVT__sb_awvalid) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                 >> 0x13U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data 
        = ((IData)(vlSelf->__PVT__sb_wvalid) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                >> 0x11U));
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 1U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
        } else {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 9U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         >> 0x10U));
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
        }
    } else if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 9U;
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                             >> 8U));
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                    = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
            } else {
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 8U;
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data;
            }
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 8U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr;
        } else {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
                = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data))
                    ? 8U : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data)
                             ? 5U : 6U));
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                   | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data));
        }
    } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 7U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read;
        } else {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
                = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0)
                    ? 9U : 4U);
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (1U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                         | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                            >> 4U)));
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0;
        }
    } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0)
                ? 9U : 3U);
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
            = (1U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                      | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                     | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                        >> 4U)));
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
            = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0;
    } else {
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access)
                ? 2U : 1U);
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
            = (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_wr_en)) 
                        & (IData)(((0xf000000000ULL 
                                    == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                    & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))) 
                & (~ (IData)((0U != (7U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU)))))) 
               & (~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                     >> 0x16U)));
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren 
            = __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en;
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
               & (0U != (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                       >> 0xeU)))));
    }
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
        } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                         >> 0x11U));
        } else {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 2U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 1U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                    = (IData)((0U != (0x10100U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 8U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error 
                    = ((IData)((0U != (0x10100U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 
                    = (((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                        & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                       & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error)));
            } else {
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                    = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read) 
                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr));
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en 
                    = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read) 
                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data));
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 7U;
                __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                    = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done) 
                          | (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)));
            }
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((0U != (7U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                 >> 8U))) ? 8U : 6U);
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((0U != (0x700U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg)) 
                         | (~ ((3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                               | ((4U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                  | ((5U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                     | ((6U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                        | ((7U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                           | (8U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))))))))));
        } else {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 8U;
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done;
        }
    } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((IData)(((0U != (0x700U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg)) 
                            | (0U == (0xff020000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg))))
                    ? 8U : 4U);
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in) 
                    | (0U != (0x700U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg))) 
                   | (IData)((0U == (0xff020000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg))));
        } else {
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg)
                    ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)
                        ? 9U : (((2U == (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                         >> 0x18U)) 
                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abmem_addr_external))
                                 ? 5U : 3U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                                 >> 0x1fU)
                                                 ? 1U
                                                 : 0U));
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                            >> 9U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                         | (~ ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                >> 9U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
            __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren 
                = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                   & ((3U == (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)) 
                      | (5U == (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate))));
            __PVT__rvtop__DOT__veer__DOT__dbg_resume_req 
                = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                   & (9U == (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)));
        }
    } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 2U;
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
            = (1U & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                      >> 9U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
    } else {
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
            = ((1U & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                       >> 9U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                ? 2U : 1U);
        __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
            = (1U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                       >> 0x1fU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                    >> 9U)) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1 
        = ((7U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
           & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)) 
              & (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
            | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1) 
               | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2)))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)
                                            ? ((0xffU 
                                                & ((- (IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr), 3U)))) 
                                               | ((0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                      VL_SHIFTL_III(32,32,32, 
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                                                >> 1U)), 4U)))) 
                                                  | ((- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                     & vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r)) 
                                       | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))) 
                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_error_din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
            & ((~ (IData)((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_wr_en) 
                      & ((0x16U == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))) 
                         | (0x17U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                     | ((0x18U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                        | ((4U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                           | (5U == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U))))))))))
            ? 1U : (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                     & ((~ (IData)((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                        & ((~ ((0U == (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 8U))) 
                               | (2U == (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                  >> 8U))))) 
                           | ((IData)(((0x200U == (0xff00U 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                       & ((3U == (7U 
                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U))) 
                                          | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                             >> 6U)))) 
                              | (((2U != (7U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 4U))) 
                                  & (IData)((2U == 
                                             (0xff02U 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))))) 
                                 | (IData)((4U == (0xff04U 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))))))))
                     ? 2U : (((~ (IData)((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                              & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                  & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_dbg_cmd_done)) 
                                     | ((0U != (3U 
                                                & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout)) 
                                                   >> 
                                                   (3U 
                                                    & VL_SHIFTL_III(2,2,32, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr), 1U))))) 
                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)))) 
                                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                    & (IData)(((0U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                               & ((IData)(
                                                          ((0x1000U 
                                                            == 
                                                            (0xf000U 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                           & (0U 
                                                              != 
                                                              (0x7fU 
                                                               & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                  >> 5U))))) 
                                                  | (0U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                         >> 0xdU)))))))))
                              ? 3U : (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                          & (2U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))))
                                       ? 4U : (((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                    & (IData)(
                                                              ((0x200U 
                                                                == 
                                                                (0xff00U 
                                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                                  & ((IData)(
                                                                             ((0x10U 
                                                                               == 
                                                                               (0x70U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                              & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)) 
                                                                     | (IData)(
                                                                               ((0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)))))))))
                                                    ? 7U
                                                    : 
                                                   ((IData)(
                                                            ((0x5800000000ULL 
                                                              == 
                                                              (0x1fc00000000ULL 
                                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0)))
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0xaU))) 
                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))
                                                     : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 1U) | (IData)(__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
                 & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 2U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75cc2317__0) 
                               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d4192ea__0)))));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg);
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = (0x8000U | ((0x4000U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                  >> 1U)) | ((0x2000U 
                                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type) 
                                                       << 0xaU) 
                                                      | ((0x200U 
                                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 8U)) 
                                                         | ((0x100U 
                                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                << 8U)) 
                                                            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                                   << 6U) 
                                                                  | (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1) 
                                                                        << 5U) 
                                                                       | ((0xfffffe0U 
                                                                           & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                              >> 4U)) 
                                                                          | (0xffffffe0U 
                                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))) 
                                                                      & (((~ 
                                                                           (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                            >> 2U)) 
                                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & ((0x1ffffff0U 
                                                                             & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_core_empty) 
                                                                                << 4U))))) 
                                                                            | (0xfffffff0U 
                                                                               & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U))))) 
                                                                        | ((8U 
                                                                            & (((IData)(
                                                                                ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                                                                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)))) 
                                                                                << 3U) 
                                                                               | (0xfffffff8U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U))))) 
                                                                           | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                                               << 2U) 
                                                                              | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x84U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))))))))))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r) 
            << 0x11U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken) 
                          << 0x10U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_idle_any) 
                                        << 0xfU) | 
                                       (((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                          << 0xdU) 
                                         | ((0x7ffff000U 
                                             & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                 << 0xcU) 
                                                & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 1U) 
                                                   & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                      << 0xcU)))) 
                                            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                << 0xbU) 
                                               | ((((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                    & (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                                                       | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                                          & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                                                          & ((~ 
                                                              (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                               >> 0xdU)) 
                                                             & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                                     << 1U)) 
                                                                 | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                           << 2U) 
                                                                          | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r) 
                                                                             << 1U)))))))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpvhalt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
                   ^ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))
            ? rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout);
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__10(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__10\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en = 0;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                           >> 4U)))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid) 
           & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
               >> 0x12U) & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))));
    if ((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                     >> 8U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & ((0x10U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))
                      ? (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout 
                         >> 2U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count) 
                                   + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))));
    } else {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en = 0U;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                     >> 2U));
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error 
        = ((0U != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                         >> 2U))) & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x10U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x20U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x30U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x40U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x50U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x60U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__en 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
           & (0x70U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__dout;
    }
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                             >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__dout;
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__11(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__11\n"); );
    // Init
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo = 0;
    SData/*15:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec = 0;
    CData/*1:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0 = 0;
    CData/*1:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1 = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in = 0;
    CData/*1:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in = 0;
    CData/*7:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in = 0;
    CData/*7:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in = 0;
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in = 0;
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fe9eebd__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fe9eebd__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42b07498__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42b07498__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdf960f9f__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdf960f9f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h25643342__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h25643342__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7d585651__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7d585651__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2456cca5__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2456cca5__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb718be64__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb718be64__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h20699d27__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h20699d27__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb4871401__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb4871401__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc435a748__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc435a748__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb37b3a62__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb37b3a62__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2f462b7b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2f462b7b__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4f9632a7__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4f9632a7__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he73d6568__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he73d6568__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa7e09fa__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa7e09fa__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h351f8d5c__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h351f8d5c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6573ae3__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6573ae3__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9f9efb12__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9f9efb12__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9959e3aa__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9959e3aa__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdd7edf78__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdd7edf78__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0c8b7f80__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0c8b7f80__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h672ecbf6__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h672ecbf6__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4a7f8b33__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4a7f8b33__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5088a71__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5088a71__0 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h592aeb48__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h592aeb48__0 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h135e3db9__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h135e3db9__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05eed58c__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05eed58c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0513851f__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0513851f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05144f7a__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05144f7a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053bdff5__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053bdff5__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053c450f__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053c450f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h052073bc__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h052073bc__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h026120e5__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h026120e5__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h027252ea__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h027252ea__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h33ba581c__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h33ba581c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11369117__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11369117__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h28236c75__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h28236c75__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he407d814__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he407d814__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h68b1103a__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h68b1103a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11afa8fb__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11afa8fb__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf83381dd__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf83381dd__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0945438f__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0945438f__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8491bde8__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8491bde8__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde761f62__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde761f62__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hccb2646b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hccb2646b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h83e7b33b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h83e7b33b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__en;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__en = 0;
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    if ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (1U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & (((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & ((3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)))) 
                            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                       >> 8U) & (((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         >> 4U)) == 
                                  (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))) 
                                 | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                     >> (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))) 
                                    & ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                              >> 4U)) 
                                       == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                 >> 
                                                 (7U 
                                                  & VL_SHIFTL_III(3,32,32, 
                                                                  (3U 
                                                                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)), 1U)))))))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | ((IData)((0x10000U == (0x17000U 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                      | ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                          >> 8U) & (((0U == (7U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                   >> 4U))) 
                                     | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                        & ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  >> 4U)) 
                                           == (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag))))) 
                                    | (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                       & ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                 >> 4U)) 
                                          == (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                            & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                               >> 8U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                      & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                           & (0U == (0x70U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                          | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                             & ((7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                       >> 4U)) == (3U 
                                                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag))))) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                            & (0U == (0x7000U & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                = ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                          & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))))
                    ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                            << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                         >> 4U)) : 
                       ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                         << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                      >> 4U))) : ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                   << 0x1cU) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                     >> 4U)));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | ((((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                   | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                        & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                      & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         >> 8U)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                = ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                    ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                     >> 4U)) : ((4U 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                                                 ? 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                    >> 4U))
                                                 : 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                    >> 4U))));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (1U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                   & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                         | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                        & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                       & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                         & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                     & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
            = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (2U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 1U)));
    if ((0x20U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x10U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (2U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & ((((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                              << 1U) | (0xfffffffeU 
                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                           & (((3U 
                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                   >> 2U)) 
                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                              << 1U)))) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x1fffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                     >> 7U) & ((((7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                     >> 4U)) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                     >> 2U))) 
                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                    >> 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 2U))) 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                          >> 4U)) 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                          >> 
                                                          (7U 
                                                           & VL_SHIFTL_III(3,32,32, 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                               >> 2U)), 1U))))))) 
                                               << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        }
    } else if ((0x10U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | (((IData)((0x11000U == (0x17000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                       << 1U) | (0x1fffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                >> 7U) 
                                               & ((((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                         >> 4U))) 
                                                    << 1U) 
                                                   | (0xfffffffeU 
                                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         & (((7U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                                 >> 4U)) 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                                 >> 2U))) 
                                                            << 1U)))) 
                                                  | (0xfffffffeU 
                                                     & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                          & ((~ 
                                                              ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                               >> 1U)) 
                                                             << 1U)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                        & (((7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                                >> 4U)) 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 2U))) 
                                                           << 1U))))))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (2U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                            & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                               >> 7U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                           & (0x10U 
                                              == (0x70U 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                                          << 1U) | 
                                         (0xfffffffeU 
                                          & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               << 1U) 
                                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                             & (((7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                     >> 4U)) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                     >> 2U))) 
                                                << 1U)))) 
                                        | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (0x1000U 
                                               == (0x7000U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                                           << 1U)))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 1U) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 1U)))) ? 
                   ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                     ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                      >> 4U)) : ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                    >> 4U)))
                    : ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                     >> 4U)));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 1U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                   | (0xfffffffeU & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                       & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                              >> 1U)) 
                                          << 1U)) & 
                                      ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                       << 1U)) & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                  << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0x1fffffeU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                        << 1U)) & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                   >> 7U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffffeU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                         << 1U)) & 
                                     ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                      << 1U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                = ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                    ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                     >> 4U)) : ((4U 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                                                 ? 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                    >> 4U))
                                                 : 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                    >> 4U))));
        }
    } else if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (2U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                    & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                          & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 1U));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
            = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (4U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 2U)));
    if ((0x100U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x80U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (4U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else if ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & ((((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                              << 2U) | (0xfffffffcU 
                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                           & (((3U 
                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                   >> 4U)) 
                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                              << 2U)))) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x3fffffcU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                     >> 6U) & ((((7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                     >> 4U)) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                     >> 4U))) 
                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                    >> 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 4U))) 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                          >> 4U)) 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                          >> 
                                                          (7U 
                                                           & VL_SHIFTL_III(3,32,32, 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                               >> 4U)), 1U))))))) 
                                               << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        }
    } else if ((0x80U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | (((IData)((0x12000U == (0x17000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                       << 2U) | (0x3fffffcU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                >> 6U) 
                                               & ((((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                         >> 4U))) 
                                                    << 2U) 
                                                   | (0xfffffffcU 
                                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         & (((7U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                                 >> 4U)) 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                                 >> 4U))) 
                                                            << 2U)))) 
                                                  | (0xfffffffcU 
                                                     & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                          & ((~ 
                                                              ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                               >> 2U)) 
                                                             << 2U)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                        & (((7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                                >> 4U)) 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 4U))) 
                                                           << 2U))))))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (4U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                            & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                               >> 6U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                           & (0x20U 
                                              == (0x70U 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                                          << 2U) | 
                                         (0xfffffffcU 
                                          & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               << 2U) 
                                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                             & (((7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                     >> 4U)) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                     >> 4U))) 
                                                << 2U)))) 
                                        | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (0x2000U 
                                               == (0x7000U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                                           << 2U)))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                           >> 2U) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                        >> 2U)))) ? 
                   ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                     ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                      >> 4U)) : ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                    >> 4U)))
                    : ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                     >> 4U)));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 2U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                   | (0xfffffffcU & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                       & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                              >> 2U)) 
                                          << 2U)) & 
                                      ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                       << 2U)) & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                  << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0x3fffffcU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                        << 2U)) & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                   >> 6U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffffcU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                         << 2U)) & 
                                     ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                      << 2U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                = ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                    ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                     >> 4U)) : ((4U 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                                                 ? 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                    >> 4U))
                                                 : 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                    >> 4U))));
        }
    } else if ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (4U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                    & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                          & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 2U));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
            = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (8U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 3U)));
    if ((0x800U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x400U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (8U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else if ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & ((((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                              << 3U) | (0xfffffff8U 
                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                           & (((3U 
                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                   >> 6U)) 
                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                              << 3U)))) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (0x7fffff8U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                     >> 5U) & ((((7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                     >> 4U)) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                     >> 6U))) 
                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                    >> 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 6U))) 
                                                   & ((7U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                          >> 4U)) 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                          >> 
                                                          (7U 
                                                           & VL_SHIFTL_III(3,32,32, 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                               >> 6U)), 1U))))))) 
                                               << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        }
    } else if ((0x400U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                   | (((IData)((0x13000U == (0x17000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                       << 3U) | (0x7fffff8U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                >> 5U) 
                                               & ((((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                         >> 4U))) 
                                                    << 3U) 
                                                   | (0xfffffff8U 
                                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         & (((7U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                                 >> 4U)) 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                                 >> 6U))) 
                                                            << 3U)))) 
                                                  | (0xfffffff8U 
                                                     & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                          & ((~ 
                                                              ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                               >> 3U)) 
                                                             << 3U)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                        & (((7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                                >> 4U)) 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 6U))) 
                                                           << 3U))))))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                >> 3U) & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                          >> 8U))) 
                      << 3U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffff8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                           & (0x30U 
                                              == (0x70U 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               << 3U) 
                                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                             & (((7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                     >> 4U)) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                     >> 6U))) 
                                                << 3U)))) 
                                        | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                            & (0x3000U 
                                               == (0x7000U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                                           << 3U)))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                = ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             >> 3U) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                          >> 3U))))
                    ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                            << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                         >> 4U)) : 
                       ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                         << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                      >> 4U))) : ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                   << 0x1cU) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                     >> 4U)));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                   | (((((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                      << 3U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                   | (8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                   | (0xfffffff8U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                       & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                              >> 3U)) 
                                          << 3U)) & 
                                      ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                       << 3U)) & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                  << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                   | (0x7fffff8U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                        << 3U)) & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                   >> 5U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                   | (0xfffffff8U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                         << 3U)) & 
                                     ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                      << 3U))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                = ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                    ? ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                     >> 4U)) : ((4U 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                                                 ? 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                    >> 4U))
                                                 : 
                                                ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                                    >> 4U))));
        }
    } else if ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = (8U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
            = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               | (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                    & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                        & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                          & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                      & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  << 3U));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
            = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
               | (8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
            = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
            = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
            = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
               | (8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
    }
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U]
            : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_dataff__dout);
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U]
            : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_dataff__dout);
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U]
            : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_dataff__dout);
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U]
            : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_dataff__dout);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                 & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 2U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_errorff__dout))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 3U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_errorff__dout))));
    if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_ldfwdff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 1U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 2U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_ldfwdff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 2U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 4U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_ldfwdff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 3U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 6U));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_ldfwdff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_ldfwdtagff__dout));
    }
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 3U) : (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 6U) : (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 9U) : (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a47580f__0 
        = ((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hafde6e54__0 
        = ((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout)) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h49f925da__0 
        = ((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout)) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hea744799__0 
        = ((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout)) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
              >> 3U));
    if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h50523d1d__0) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9be2cf88__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out));
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4473a500__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 4U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 5U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in;
            if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4473a500__0) {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0) 
                               >> 4U));
            } else {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
            }
        }
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_dualff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_samedwff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_nomergeff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_dualhiff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_sideeffectff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_unsignff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_writeff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_szff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_dualtagff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_addrff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout));
    }
    if ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5076afb6__0) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9be2cf88__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out));
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4456756d__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 4U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 5U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in;
            if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4456756d__0) {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0) 
                               >> 4U));
            } else {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
            }
        }
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_dualff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_samedwff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_nomergeff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_dualhiff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_sideeffectff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_unsignff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_writeff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_szff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_dualtagff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_addrff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout));
    }
    if ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h518a9297__0) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9be2cf88__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out));
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h447a7b06__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 4U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 5U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in;
            if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h447a7b06__0) {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0) 
                               >> 4U));
            } else {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
            }
        }
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_dualff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_samedwff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_nomergeff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_dualhiff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_sideeffectff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_unsignff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_writeff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_szff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_dualtagff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_addrff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout));
    }
    if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h47a729b3__0) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9be2cf88__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out));
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ab6fc9e__0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 4U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                         >> 5U));
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in;
            if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ab6fc9e__0) {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0) 
                               >> 4U));
            } else {
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
                vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                    = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
            }
        }
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_dualff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_samedwff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_nomergeff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_dualhiff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_sideeffectff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_unsignff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_writeff__dout));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_szff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_dualtagff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_addrff__dout;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk10__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout));
    }
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
            & (2U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 1U) & (0x10U == 
                                          (0x38U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                      & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 1U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 2U) & (0x80U == 
                                          (0x1c0U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                      & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 2U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> 3U) & (0x400U == 
                                          (0xe00U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                      & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 3U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = ((2U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 3U))) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 6U))) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 9U))) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = ((1U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           | ((2U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
              & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 3U))) | (IData)(
                                                       ((0x10U 
                                                         == 
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                            >> 1U)))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 6U))) | (IData)(
                                                       ((0x80U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                            >> 2U)))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 9U))) | (IData)(
                                                       ((0x400U 
                                                         == 
                                                         (0xe00U 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                        & (~ 
                                                           ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                            >> 3U)))))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11afa8fb__0 
        = ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
               >> 3U)) & (2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0945438f__0 
        = ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
               >> 2U)) & (2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde761f62__0 
        = ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
               >> 1U)) & (2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h83e7b33b__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
           & (2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0 
        = (1U & ((~ ((2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)) 
                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                 & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0 
        = (1U & ((~ ((2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout)) 
                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                        >> 1U))) & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0 
        = (1U & ((~ ((2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout)) 
                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                        >> 2U))) & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0 
        = (1U & ((~ ((2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout)) 
                     & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                        >> 3U))) & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__buf_rspageff__din 
        = (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a47580f__0) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd3c02ef3__0) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hed81d86f__0))) 
             << 3U) | (0xfffffff8U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_rspageff__dout) 
                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8da7d7e7__0) 
                                         << 3U)))) 
           | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a47580f__0) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h689964f8__0) 
                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h41cc99ea__0))) 
                << 2U) | (0xfffffffcU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_rspageff__dout) 
                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf17c2262__0) 
                                            << 2U)))) 
              | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a47580f__0) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd405662c__0) 
                       | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3ae99536__0))) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_rspageff__dout) 
                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde78199b__0) 
                                               << 1U)))) 
                 | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a47580f__0) 
                     & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4356bfd5__0) 
                        | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h241aa5c8__0))) 
                    | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_rspageff__dout) 
                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h19a08c9f__0))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__buf_rspageff__din 
        = (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hafde6e54__0) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd3c02ef3__0) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd886501__0))) 
             << 3U) | (0xfffffff8U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_rspageff__dout) 
                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8da7d7e7__0) 
                                         << 3U)))) 
           | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hafde6e54__0) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h689964f8__0) 
                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h96689762__0))) 
                << 2U) | (0xfffffffcU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_rspageff__dout) 
                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf17c2262__0) 
                                            << 2U)))) 
              | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hafde6e54__0) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd405662c__0) 
                       | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5eadc0__0))) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_rspageff__dout) 
                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde78199b__0) 
                                               << 1U)))) 
                 | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hafde6e54__0) 
                     & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4356bfd5__0) 
                        | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ebe85b0__0))) 
                    | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_rspageff__dout) 
                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h19a08c9f__0))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__buf_rspageff__din 
        = (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h49f925da__0) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd3c02ef3__0) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6e5c7487__0))) 
             << 3U) | (0xfffffff8U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_rspageff__dout) 
                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8da7d7e7__0) 
                                         << 3U)))) 
           | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h49f925da__0) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h689964f8__0) 
                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haba9c746__0))) 
                << 2U) | (0xfffffffcU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_rspageff__dout) 
                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf17c2262__0) 
                                            << 2U)))) 
              | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h49f925da__0) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd405662c__0) 
                       | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h916b753f__0))) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_rspageff__dout) 
                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde78199b__0) 
                                               << 1U)))) 
                 | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h49f925da__0) 
                     & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4356bfd5__0) 
                        | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9ee2d23f__0))) 
                    | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_rspageff__dout) 
                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h19a08c9f__0))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__buf_rspageff__din 
        = (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hea744799__0) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd3c02ef3__0) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd83f0c28__0))) 
             << 3U) | (0xfffffff8U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_rspageff__dout) 
                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8da7d7e7__0) 
                                         << 3U)))) 
           | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hea744799__0) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h689964f8__0) 
                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3df5a57f__0))) 
                << 2U) | (0xfffffffcU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_rspageff__dout) 
                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf17c2262__0) 
                                            << 2U)))) 
              | (((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hea744799__0) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd405662c__0) 
                       | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h63f2cf69__0))) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_rspageff__dout) 
                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde78199b__0) 
                                               << 1U)))) 
                 | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hea744799__0) 
                     & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4356bfd5__0) 
                        | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1bb20335__0))) 
                    | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_rspageff__dout) 
                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h19a08c9f__0))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
           & ((0U == (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any)) 
              & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 5U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haa455a4d__0 
        = ((1U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout)) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11afa8fb__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1199c8da__0 
        = ((1U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout)) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0945438f__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h69f231ed__0 
        = ((1U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout)) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde761f62__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h369a5188__0 
        = ((1U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h83e7b33b__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd770b1d8__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_ageff__dout) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h998bc13b__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_ageff__dout) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf094fc0d__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_ageff__dout) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h16b304e1__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_ageff__dout) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6282b3e__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h419ed538__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_ageff__dout) 
            >> 1U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb7f4a9d7__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_ageff__dout) 
            >> 1U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9ca5728e__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_ageff__dout) 
            >> 1U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9cb4fe1e__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_ageff__dout) 
            >> 1U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc33f9f93__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6b373ea__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_ageff__dout) 
            >> 2U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7346ee99__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_ageff__dout) 
            >> 2U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0231ca6e__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_ageff__dout) 
            >> 2U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5753d158__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_ageff__dout) 
            >> 2U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc79e317c__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbb633ed0__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_ageff__dout) 
            >> 3U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42a2cbef__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_ageff__dout) 
            >> 3U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c305a16__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_ageff__dout) 
            >> 3U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8a10255c__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_ageff__dout) 
            >> 3U) & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb2c61f00__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0 
        = ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5753d158__0)) 
             & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout))) 
            << 2U) | ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9cb4fe1e__0)) 
                        & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout))) 
                       << 1U) | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h16b304e1__0)) 
                                 & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h68b1103a__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbb633ed0__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5753d158__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9cb4fe1e__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h16b304e1__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hccb2646b__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42a2cbef__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7346ee99__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb7f4a9d7__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd770b1d8__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0 
        = ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42a2cbef__0)) 
             & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout))) 
            << 3U) | ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7346ee99__0)) 
                        & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout))) 
                       << 2U) | (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb7f4a9d7__0)) 
                                  & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout))) 
                                 << 1U)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8491bde8__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c305a16__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0231ca6e__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h419ed538__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h998bc13b__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0 
        = ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c305a16__0)) 
             & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout))) 
            << 3U) | ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0231ca6e__0)) 
                        & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout))) 
                       << 2U) | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h998bc13b__0)) 
                                 & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf83381dd__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8a10255c__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6b373ea__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9ca5728e__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf094fc0d__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0 
        = ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8a10255c__0)) 
             & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout))) 
            << 3U) | ((((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9ca5728e__0)) 
                        & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout))) 
                       << 1U) | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf094fc0d__0)) 
                                 & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fe9eebd__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5d60f20e__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb639d2a6__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7d585651__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5acdbe91__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87fe36cc__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb4871401__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h786a3153__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8fa1d989__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h33ba581c__0 
        = ((~ (IData)((0U != (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h68b1103a__0)))) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11afa8fb__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he407d814__0 
        = ((~ (IData)((0U != (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hccb2646b__0)))) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h83e7b33b__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h25643342__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he08b9c75__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb639d2a6__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h20699d27__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa5fd610__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87fe36cc__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2f462b7b__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hca66e30a__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8fa1d989__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h28236c75__0 
        = ((~ (IData)((0U != (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8491bde8__0)))) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde761f62__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdf960f9f__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h04028a17__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb639d2a6__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb718be64__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0d642958__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87fe36cc__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb37b3a62__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6632e58c__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8fa1d989__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11369117__0 
        = ((~ (IData)((0U != (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf83381dd__0)))) 
           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0945438f__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42b07498__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb01223f7__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb639d2a6__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2456cca5__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h837d9a42__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87fe36cc__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc435a748__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd39404fa__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8fa1d989__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4f9632a7__0 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h47436024__0) 
             & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h961afe91__0) 
                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
                & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0)))) 
            << 3U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd0074ae3__0) 
                        & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h961afe91__0) 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
                           & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0)))) 
                       << 2U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h60b70197__0) 
                                   & ((~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h961afe91__0) 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
                                      & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0)))) 
                                  << 1U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8151243__0) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h961afe91__0) 
                                                            & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
                                               & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0)))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h33ba581c__0) 
            << 3U) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11369117__0) 
                       << 2U) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h28236c75__0) 
                                  << 1U) | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he407d814__0))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fe9eebd__0) 
            << 0xfU) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42b07498__0) 
                         << 0xeU) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdf960f9f__0) 
                                      << 0xdU) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h25643342__0) 
                                                   << 0xcU) 
                                                  | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7d585651__0) 
                                                      << 0xbU) 
                                                     | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2456cca5__0) 
                                                         << 0xaU) 
                                                        | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb718be64__0) 
                                                            << 9U) 
                                                           | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h20699d27__0) 
                                                               << 8U) 
                                                              | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb4871401__0) 
                                                                  << 7U) 
                                                                 | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc435a748__0) 
                                                                     << 6U) 
                                                                    | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb37b3a62__0) 
                                                                        << 5U) 
                                                                       | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2f462b7b__0) 
                                                                           << 4U) 
                                                                          | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4f9632a7__0)))))))))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h77221d4e__0) 
             | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fe9eebd__0) 
                 | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h42b07498__0) 
                    | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdf960f9f__0) 
                       | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h25643342__0)))) 
                | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0))) 
            << 3U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc1945c92__0) 
                        | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7d585651__0) 
                            | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2456cca5__0) 
                               | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb718be64__0) 
                                  | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h20699d27__0)))) 
                           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0))) 
                       << 2U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h7d43dcc3__0) 
                                   | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb4871401__0) 
                                       | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc435a748__0) 
                                          | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb37b3a62__0) 
                                             | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2f462b7b__0)))) 
                                      | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0))) 
                                  << 1U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb33421e7__0) 
                                            | ((0U 
                                                != (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4f9632a7__0)) 
                                               | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((((~ (IData)((0U != ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
                                & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h68b1103a__0))))) 
             & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h33ba581c__0)) 
                & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11afa8fb__0))) 
            << 3U) | ((((~ (IData)((0U != ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
                                           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf83381dd__0))))) 
                        & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h11369117__0)) 
                           & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0945438f__0))) 
                       << 2U) | ((((~ (IData)((0U != 
                                               ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
                                                & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8491bde8__0))))) 
                                   & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h28236c75__0)) 
                                      & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hde761f62__0))) 
                                  << 1U) | ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
                                                         & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hccb2646b__0))))) 
                                            & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he407d814__0)) 
                                               & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h83e7b33b__0))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0 
        = (3U & ([&]() {
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value 
                    = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec;
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value 
                    = ((6U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value)) 
                       | (IData)((0U != (0xaaU & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value)))));
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value 
                    = ((5U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value)) 
                       | ((IData)((0U != (0xccU & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value)))) 
                          << 1U));
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value 
                    = ((3U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value)) 
                       | ((IData)((0U != (0xf0U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value)))) 
                          << 2U));
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Vfuncout 
                    = vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value;
            }(), (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Vfuncout)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                               >> 3U)))) << 0x18U) 
            | ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                               >> 2U)))) 
                             << 0x10U)) | ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                              >> 1U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))))))) 
           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 4U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 8U)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xcU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 1U)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 5U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 9U)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xdU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 2U)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 6U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 0xaU)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xeU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 3U)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 7U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 0xbU)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xfU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
                 | (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_lo_m))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 1U) | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_lo_m) 
                            >> 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 2U) | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_lo_m) 
                            >> 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 3U) | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_lo_m) 
                            >> 3U))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1 
        = (3U & ([&]() {
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Dec_value 
                    = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec;
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value 
                    = ((6U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value)) 
                       | (IData)((0U != (0xaaU & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Dec_value)))));
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value 
                    = ((5U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value)) 
                       | ((IData)((0U != (0xccU & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Dec_value)))) 
                          << 1U));
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value 
                    = ((3U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value)) 
                       | ((IData)((0U != (0xf0U & (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Dec_value)))) 
                          << 2U));
                vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Vfuncout 
                    = vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value;
            }(), (IData)(vlSelf->__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Vfuncout)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h672ecbf6__0 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                   >> (0xfU & VL_SHIFTL_III(4,4,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 2U))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h592aeb48__0 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)))
             ? 0U : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                     (((IData)(0x1fU) + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))))) 
           | (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
              (3U & (VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0c8b7f80__0 
        = (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                 (3U & (((IData)(2U) + VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)) 
                        >> 5U))] >> (0x1fU & ((IData)(2U) 
                                              + VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9f9efb12__0 
        = (1U & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_nomergeff__dout) 
                   << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_nomergeff__dout) 
                              << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_nomergeff__dout) 
                                         << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_nomergeff__dout)))) 
                 >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0d3527ed__0) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
              & ((1U == (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                 & ((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                     >> 2U) != (0x3fffffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                 (((IData)(0x1dU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)))))) 
                                               | (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  (3U 
                                                   & (((IData)(2U) 
                                                       + 
                                                       VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))))))))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he73d6568__0 
        = (2U == ((0xbU >= (0xfU & ((IData)(3U) * (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                   ? (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                            >> (0xfU & ((IData)(3U) 
                                        * (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                   : 0U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa7e09fa__0 
        = (1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                    >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h351f8d5c__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                 >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6573ae3__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                 >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                 >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9959e3aa__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                 >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00000000ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)(((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h77221d4e__0)
                                 ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h383fe5c4__0))) 
                                     & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                >> 0x18U))) 
                                    | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h6a0b589b__0))) 
                                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                  >> 0x38U))))
                                 : (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                    >> 0x18U)) << 0x18U) 
                              | ((0xff0000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc1945c92__0)
                                                 ? 
                                                (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h46e15dcb__0))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                             >> 0x10U))) 
                                                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h97f76bbc__0))) 
                                                    & (IData)(
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                               >> 0x30U))))
                                                 : 
                                                (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x10U)) 
                                               << 0x10U)) 
                                 | ((0xff00U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h7d43dcc3__0)
                                                  ? 
                                                 (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h1cda9961__0))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                              >> 8U))) 
                                                  | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h900baa1a__0))) 
                                                     & (IData)(
                                                               (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                                >> 0x28U))))
                                                  : 
                                                 (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                  >> 8U)) 
                                                << 8U)) 
                                    | (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb33421e7__0)
                                                 ? 
                                                (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9bd02636__0))) 
                                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h67b79b3a__0)) 
                                                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h456537d4__0))) 
                                                    & (IData)(
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                               >> 0x20U))))
                                                 : __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo))))))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h135e3db9__0 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U)))
             ? 0U : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                     (((IData)(0x1fU) + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U))))) 
           | (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
              (3U & (VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5088a71__0 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                   >> (0xfU & VL_SHIFTL_III(4,4,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 2U))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4a7f8b33__0 
        = (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                 (3U & (((IData)(2U) + VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U)) 
                        >> 5U))] >> (0x1fU & ((IData)(2U) 
                                              + VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1), 5U)))));
    if (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
            = vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in 
            = (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in));
        if ((4U & vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)) {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
                = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0), 4U));
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                = VL_SHIFTL_QQI(64,64,32, vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0, 0x20U);
        } else {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
                = (0xffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                = (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r));
        }
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in 
            = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 5U));
        if ((4U & vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r)) {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                = ((QData)((IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                    >> 0x20U))) << 0x20U);
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
                = (0xffU & (0xf0U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)));
        } else {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                = VL_SHIFTR_QQI(64,64,32, vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0, 0x20U);
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
                = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0), 4U));
        }
    } else {
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U)))
                 ? 0U : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))))) 
               | (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                  (3U & (VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 5U))));
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in 
            = (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                     >> (7U & VL_SHIFTL_III(3,3,32, (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0), 1U))));
        if (rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0c8b7f80__0) {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
                = (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h672ecbf6__0) 
                            << 4U));
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                = ((QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h592aeb48__0)) 
                   << 0x20U);
        } else {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
                = (0xffU & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h672ecbf6__0));
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                = (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h592aeb48__0));
        }
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in 
            = (1U & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9959e3aa__0));
        if (rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4a7f8b33__0) {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                = ((QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h135e3db9__0)) 
                   << 0x20U);
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
                = (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5088a71__0) 
                            << 4U));
        } else {
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                = (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h135e3db9__0));
            __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
                = (0xffU & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5088a71__0));
        }
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = ((((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
             & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r))) 
                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r))) 
            | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he73d6568__0) 
               & ((0U != (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
                  & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa7e09fa__0) 
                     & ((~ ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0) 
                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend))) 
                        & ((~ ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h351f8d5c__0) 
                               & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9959e3aa__0)) 
                                  & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6573ae3__0)))) 
                           | ((0U != (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
                              | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9f9efb12__0) 
                                 | (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))))))) 
           & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                 ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                     | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                     ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                         ? (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                            >> 0x11U) : (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         >> 0x13U))
                     : (IData)((0xa0000U == (0xa0000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))))
                 : (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                    >> 0x12U)) | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                                  | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
              & ((~ ((1U == (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                     & ((1U == (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                        & ((7U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)) 
                           & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                  >> 2U)) & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9f9efb12__0)) 
                                             & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0)) 
                                                & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))))))) 
                 & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in 
        = ((((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
             != (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
            & ((0U != (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
               & ((0U != (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
                  & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he73d6568__0) 
                     & ((2U == ((0xbU >= (0xfU & ((IData)(3U) 
                                                  * (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                 ? (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> (0xfU 
                                              & ((IData)(3U) 
                                                 * (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                 : 0U)) & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa7e09fa__0) 
                                           & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0)) 
                                              & ((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9959e3aa__0)) 
                                                 & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h351f8d5c__0) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                         >> (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                                                       & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he6573ae3__0))))))))))) 
           | ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r) 
                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in 
        = (((__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
             >> 3U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                        >> 3U)) & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                                     ? ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                                          >> 8U) & 
                                         (0U == (3U 
                                                 & vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r))) 
                                        | (((~ vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r) 
                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                                               >> 9U)) 
                                           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                                              >> 0xaU)))
                                     : ((0U == (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in)) 
                                        | (((~ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in) 
                                            & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in)) 
                                           | ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in)))) 
                                              & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in) 
                                                 >> 1U))))) 
                                   & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)) 
                                      & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)) 
                                         & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in)) 
                                            & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                                   >> 0xbU)) 
                                               & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                                                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                                                  | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hecc9c009__0))))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = (1U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)) 
                  & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent) 
                     | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)))) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__en 
        = (((0U != (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any)) 
            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                >> 4U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r))) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05eed58c__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 7U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0513851f__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 6U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05144f7a__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 5U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053bdff5__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 4U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053c450f__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 3U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h052073bc__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 2U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h026120e5__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
              >> 1U));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h027252ea__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in));
    if (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((QData)((IData)((0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05eed58c__0)
                                           ? (IData)(
                                                     (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                      >> 0x38U))
                                           : (IData)(
                                                     (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                      >> 0x38U)))))) 
                << 0x38U) | (((QData)((IData)((0xffU 
                                               & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0513851f__0)
                                                   ? (IData)(
                                                             (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                              >> 0x30U))
                                                   : (IData)(
                                                             (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                              >> 0x30U)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05144f7a__0)
                                                                 ? (IData)(
                                                                           (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                            >> 0x28U))
                                                                 : (IData)(
                                                                           (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                            >> 0x28U)))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053bdff5__0)
                                                                    ? (IData)(
                                                                              (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                               >> 0x20U))
                                                                    : (IData)(
                                                                              (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                               >> 0x20U)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053c450f__0)
                                                                    ? (IData)(
                                                                              (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                               >> 0x18U))
                                                                    : (IData)(
                                                                              (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                               >> 0x18U))) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h052073bc__0)
                                                                          ? (IData)(
                                                                                (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                                >> 0x10U))
                                                                          : (IData)(
                                                                                (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                                >> 0x10U))) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h026120e5__0)
                                                                             ? (IData)(
                                                                                (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                                                >> 8U))
                                                                             : (IData)(
                                                                                (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                                                >> 8U))) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h027252ea__0)
                                                                              ? (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                                                              : (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))))))))));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__din_new 
        = ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst)) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdd7edf78__0 
        = (1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                    | (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))));
    if (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken) {
        if (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wren_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = 1U;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_timerff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (7U & 0U);
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wren_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = 0U;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_timerff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer) 
                         + ((0U < (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                            & (7U > (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))));
        }
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdd7edf78__0) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h58e75562__0));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdd7edf78__0) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb8334a__0));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wren_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_timerff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done;
    }
    if (rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__en) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_in;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in;
        if (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
                = rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h902f8bed__0;
        }
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)((((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                          >> 7U) | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05eed58c__0))) 
                << 7U) | ((0x40U & ((0xffffffc0U & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                    | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0513851f__0) 
                                       << 6U))) | (
                                                   (0x20U 
                                                    & ((0xffffffe0U 
                                                        & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                                       | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h05144f7a__0) 
                                                          << 5U))) 
                                                   | ((0x10U 
                                                       & ((0xfffffff0U 
                                                           & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                                          | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053bdff5__0) 
                                                             << 4U))) 
                                                      | ((8U 
                                                          & ((0xfffffff8U 
                                                              & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                                             | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h053c450f__0) 
                                                                << 3U))) 
                                                         | ((4U 
                                                             & ((0xfffffffcU 
                                                                 & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                                                | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h052073bc__0) 
                                                                   << 2U))) 
                                                            | ((2U 
                                                                & ((0xfffffffeU 
                                                                    & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in)) 
                                                                   | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h026120e5__0) 
                                                                      << 1U))) 
                                                               | (1U 
                                                                  & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                                                                     | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h027252ea__0))))))))));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen;
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__18(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__18\n"); );
    // Init
    QData/*63:0*/ __PVT__rvtop__DOT__ic_rd_data;
    __PVT__rvtop__DOT__ic_rd_data = 0;
    QData/*63:0*/ __PVT__rvtop__DOT__ic_premux_data;
    __PVT__rvtop__DOT__ic_premux_data = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__ic_sel_premux_data;
    __PVT__rvtop__DOT__ic_sel_premux_data = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall = 0;
    SData/*9:0*/ rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din;
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din = 0;
    CData/*6:0*/ rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din;
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din = 0;
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data = 0;
    CData/*7:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0;
    CData/*1:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch = 0;
    CData/*2:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9d80c346__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9d80c346__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2c20341d__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2c20341d__0 = 0;
    SData/*10:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din = 0;
    VlWide<4>/*127:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux;
    VL_ZERO_W(128, __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux);
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_error_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
            : ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_error_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_valid_ff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__en) 
           | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_valid_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ic_req_ff2__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h686f9211__0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid)) 
           & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
              & (~ ((7U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid) 
                       & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                           >> 0x12U) & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__7__KET____DOT__byp_data_valid_ff__din) 
            << 7U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__6__KET____DOT__byp_data_valid_ff__din) 
                       << 6U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__5__KET____DOT__byp_data_valid_ff__din) 
                                  << 5U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__4__KET____DOT__byp_data_valid_ff__din) 
                                             << 4U) 
                                            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__3__KET____DOT__byp_data_valid_ff__din) 
                                                << 3U) 
                                               | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__2__KET____DOT__byp_data_valid_ff__din) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__1__KET____DOT__byp_data_valid_ff__din) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__wr_flop__BRA__0__KET____DOT__byp_data_valid_ff__din))))))));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2c20341d__0 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                 >> (7U & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                           >> 2U))));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9d80c346__0 
        = ((~ (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
               >> 1U)) & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2c20341d__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in 
        = (((((~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout) 
              & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9d80c346__0)) 
             | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9d80c346__0) 
                 & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout) 
                | ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2c20341d__0) 
                   & ((IData)((2U == (3U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout))) 
                      | (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                          >> (7U & ((IData)(1U) + (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                                   >> 2U)))) 
                         & ((vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                             >> 1U) & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)))))) 
            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff) 
               & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff) 
                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8ff9659b__0)))) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff) 
               & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8ff9659b__0))) 
              | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                  >> 6U) & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
                            & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff))))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in) 
                 | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                     >> 6U) | ((6U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                               | (1U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    VL_SHIFTR_WWI(80,80,32, __Vtemp_2, vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new, 0x10U);
    __PVT__rvtop__DOT__ic_premux_data = (((- (QData)((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data))) 
                                          & (((QData)((IData)(
                                                              ((1U 
                                                                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
                                                                ? 
                                                               __Vtemp_2[1U]
                                                                : 
                                                               vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[1U]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((1U 
                                                                 & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
                                                                 ? 
                                                                __Vtemp_2[0U]
                                                                 : 
                                                                vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[0U]))))) 
                                         | ((- (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_iccm_data))) 
                                            & VL_SHIFTR_QQI(64,64,32, 
                                                            (((QData)((IData)(
                                                                              ((0x9bU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                                ? 
                                                                               (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                                                | (vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))
                                                                                : 0U))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x9bU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))))) 
                                                                                | (vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))))
                                                                                 : 0U)))), 
                                                            VL_SHIFTL_III(32,32,32, 
                                                                          (1U 
                                                                           & (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout)), 4U))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data 
        = (1U & ((~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data) 
                     | (3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
                 & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_iccm_data)) 
                    & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)))));
    __PVT__rvtop__DOT__ic_sel_premux_data = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_iccm_data) 
                                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start 
        = ((((((VL_REDXOR_32((0xffffU & ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[4U] 
                                          << 0xcU) 
                                         | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[3U] 
                                            >> 0x14U)))) 
                ^ (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[4U] 
                   >> 7U)) | ((VL_REDXOR_32((0xffffU 
                                             & (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[3U] 
                                                >> 4U))) 
                               ^ (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[4U] 
                                  >> 6U)) | ((VL_REDXOR_32(
                                                           (0xffffU 
                                                            & ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[3U] 
                                                                << 0xcU) 
                                                               | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[2U] 
                                                                  >> 0x14U)))) 
                                              ^ (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[4U] 
                                                 >> 5U)) 
                                             | (VL_REDXOR_32(
                                                             (0xffffU 
                                                              & (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[2U] 
                                                                 >> 4U))) 
                                                ^ (
                                                   vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[4U] 
                                                   >> 4U))))) 
              & ((0U != (IData)(vlSelf->__PVT__rvtop__DOT__ic_rd_hit)) 
                 & (IData)(((0x300U == (0x300U & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout))) 
                            & (7U != (7U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                            >> 5U))))))) 
             | (((VL_REDXOR_32((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[1U] 
                                >> 0x10U)) ^ (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[2U] 
                                              >> 3U)) 
                 | ((VL_REDXOR_32((0xffffU & vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[1U])) 
                     ^ (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[2U] 
                        >> 2U)) | ((VL_REDXOR_32((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[0U] 
                                                  >> 0x10U)) 
                                    ^ (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[2U] 
                                       >> 1U)) | (VL_REDXOR_32(
                                                               (0xffffU 
                                                                & vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[0U])) 
                                                  ^ 
                                                  vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc[2U])))) 
                & (0U != (IData)(vlSelf->__PVT__rvtop__DOT__ic_rd_hit)))) 
            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f)) 
           | ((0U != (((2U & (VL_REDXOR_64((0xbffffc00000ULL 
                                            & vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__ic_tag_data_raw_packed)) 
                              << 1U)) | (1U & VL_REDXOR_32(
                                                           (0x2fffffULL 
                                                            & vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__ic_tag_data_raw_packed)))) 
                      & (IData)(vlSelf->__PVT__rvtop__DOT__ic_tag_valid))) 
              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                 & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data) 
                    & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f) 
                           | (0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f)))) 
                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h94f02035__0))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
        = (IData)(((IData)(__PVT__rvtop__DOT__ic_sel_premux_data)
                    ? __PVT__rvtop__DOT__ic_premux_data
                    : ((0U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U])))
                        : ((1U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                         >> 3U))) ? 
                           (((QData)((IData)((0xffffU 
                                              & (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                 >> 4U)))) 
                             << 0x30U) | (0xffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U])) 
                                                >> 0x10U))))
                            : ((2U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                             >> 3U)))
                                ? (((QData)((IData)(
                                                    ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
                                                      << 0x1cU) 
                                                     | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                        >> 4U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])))
                                : ((0xffffffffffff0000ULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U])) 
                                        << 0x2cU) | 
                                       (0xffffffffffff0000ULL 
                                        & ((QData)((IData)(
                                                           vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                           << 0xcU)))) 
                                   | (QData)((IData)(
                                                     (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
                                                      >> 0x10U)))))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
        = (IData)((((IData)(__PVT__rvtop__DOT__ic_sel_premux_data)
                     ? __PVT__rvtop__DOT__ic_premux_data
                     : ((0U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                      >> 3U))) ? (((QData)((IData)(
                                                                   vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U])))
                         : ((1U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                          >> 3U))) ? 
                            (((QData)((IData)((0xffffU 
                                               & (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                  >> 4U)))) 
                              << 0x30U) | (0xffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U])) 
                                                 >> 0x10U))))
                             : ((2U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                              >> 3U)))
                                 ? (((QData)((IData)(
                                                     ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
                                                       << 0x1cU) 
                                                      | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                         >> 4U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])))
                                 : ((0xffffffffffff0000ULL 
                                     & (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U])) 
                                         << 0x2cU) 
                                        | (0xffffffffffff0000ULL 
                                           & ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                              << 0xcU)))) 
                                    | (QData)((IData)(
                                                      (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
                                                       >> 0x10U)))))))) 
                   >> 0x20U));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
        = (IData)(((IData)(__PVT__rvtop__DOT__ic_sel_premux_data)
                    ? __PVT__rvtop__DOT__ic_premux_data
                    : ((0U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U])) 
                                                     << 0x12U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                       >> 0xeU)))
                        : ((1U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                         >> 3U))) ? 
                           (((QData)((IData)((0xffffU 
                                              & ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                                                  << 0xeU) 
                                                 | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                    >> 0x12U))))) 
                             << 0x30U) | (0xffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                   >> 0x1eU)))))
                            : ((2U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                             >> 3U)))
                                ? (((QData)((IData)(
                                                    ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                                                      << 0xeU) 
                                                     | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                        >> 0x12U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                                    >> 0xeU)))))
                                : ((0xffffffffffff0000ULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U])) 
                                         << 0x1eU) 
                                        | (0x3fffffffffff0000ULL 
                                           & ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                              >> 2U))))) 
                                   | (QData)((IData)(
                                                     (0xffffU 
                                                      & ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                          << 2U) 
                                                         | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                            >> 0x1eU)))))))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
        = (IData)((((IData)(__PVT__rvtop__DOT__ic_sel_premux_data)
                     ? __PVT__rvtop__DOT__ic_premux_data
                     : ((0U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                      >> 3U))) ? (((QData)((IData)(
                                                                   vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                   << 0x32U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U])) 
                                                      << 0x12U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                        >> 0xeU)))
                         : ((1U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                          >> 3U))) ? 
                            (((QData)((IData)((0xffffU 
                                               & ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                                                   << 0xeU) 
                                                  | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                     >> 0x12U))))) 
                              << 0x30U) | (0xffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                    >> 0x1eU)))))
                             : ((2U == (3U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                              >> 3U)))
                                 ? (((QData)((IData)(
                                                     ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                         >> 0x12U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                                     >> 0xeU)))))
                                 : ((0xffffffffffff0000ULL 
                                     & (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U])) 
                                            << 0x1eU) 
                                           | (0x3fffffffffff0000ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                 >> 2U))))) 
                                    | (QData)((IData)(
                                                      (0xffffU 
                                                       & ((vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                           << 2U) 
                                                          | (vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                             >> 0x1eU)))))))))) 
                   >> 0x20U));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start) 
            << 0xaU) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                         << 9U) | ((0x100U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r) 
                                               << 8U) 
                                              | (0xffffff00U 
                                                 & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                                                     << 8U) 
                                                    & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))) 
                                   | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                                       << 7U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                  << 6U) 
                                                 | ((0x7fffffe0U 
                                                     & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout) 
                                                         << 5U) 
                                                        & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m) 
                                                              << 5U)))) 
                                                    | ((0x7ffffff0U 
                                                        & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout) 
                                                            << 4U) 
                                                           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                               >> 1U) 
                                                              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m) 
                                                                 << 4U)))) 
                                                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r) 
                                                              << 2U) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                    >> 5U)) 
                                                                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__force_halt)))))))))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
    if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 0U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
                = ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                    ? 0U : 3U);
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
            = ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                ? 0U : ((1U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r)) 
                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                         ? 0U : 3U));
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
            = ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
               || (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                         | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = 0U;
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
            = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                     | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    } else {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)
                ? 4U : (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start) 
                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))
                         ? 1U : 2U));
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
            = (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                  | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start)) 
                 & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up))) 
                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)) 
               & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status 
            = __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en;
    }
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din 
        = ((0x40U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                      << 6U) & ((0xffffffc0U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                                    | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_error_start)) 
                                   << 6U)))) | ((0x30U 
                                                 & ((((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f2)))) 
                                                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((- (IData)(
                                                                      (1U 
                                                                       & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                                                          & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
                                                                             & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                                                                                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))))) 
                                                           << 4U) 
                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
                                                | ((0xcU 
                                                    & ((((- (IData)(
                                                                    ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1)))) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val)) 
                                                        << 2U) 
                                                       | ((0x3ffffffcU 
                                                           & (((- (IData)(
                                                                          ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1)))) 
                                                               << 2U) 
                                                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                                 >> 2U))) 
                                                          | (((- (IData)(
                                                                         ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                                                          & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
                                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgTmp_h4cc7cec1__0))))) 
                                                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                                             << 2U)))) 
                                                   | (3U 
                                                      & (((- (IData)(
                                                                     ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0)))) 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val)) 
                                                         | (((- (IData)(
                                                                        ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0)))) 
                                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                                >> 4U)) 
                                                            | (((- (IData)(
                                                                           ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))) 
                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                                               | ((- (IData)(
                                                                             ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                                              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgTmp_h4cc7cec1__0))))) 
                                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)))))))));
    __PVT__rvtop__DOT__ic_rd_data = ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                            | (IData)(__PVT__rvtop__DOT__ic_sel_premux_data)))))) 
                                     & (((QData)((IData)(
                                                         __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]))));
    __PVT__rvtop__DOT__ic_rd_data = (__PVT__rvtop__DOT__ic_rd_data 
                                     | ((- (QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                             >> 1U) 
                                                            | (IData)(__PVT__rvtop__DOT__ic_sel_premux_data))))) 
                                        & (((QData)((IData)(
                                                            __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U])))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fU & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status)
                     ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                        >> 3U) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__bundle2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data 
        = ((- (QData)((IData)(((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data) 
                               | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_iccm_data) 
                                  | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))))) 
           & __PVT__rvtop__DOT__ic_rd_data);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk1__DOT__brdata2ff__en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk1__DOT__brdata1ff__en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk1__DOT__brdata0ff__en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch = 0U;
    if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate 
            = ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                ? ((1U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                            & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r))) 
                           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt)) 
                          | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                    ? 0U : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r)
                             ? 1U : 3U)) : ((1U & (
                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                                                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt)) 
                                                   | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val))
                                              ? 3U : 2U)));
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch 
            = ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout)) 
               || (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val) 
                          & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt)))));
    } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate 
            = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt)) 
                      | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                ? 0U : (((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val)) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val) 
                            & (3U != (3U & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)))))
                         ? 3U : ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val))
                                  ? 2U : 1U)));
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch 
            = (((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val)) 
                | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fetch_val) 
                   & (3U != (3U & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data))))) 
               & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                     | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt))));
    } else {
        __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate = 1U;
    }
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en)
            ? (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r) 
             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch)) 
            | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 9U)) | (((3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                           | (4U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                          | (3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall 
        = ((3U == (3U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 5U))) | ((0U != (3U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                   >> 5U))) 
                                     & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h43b93b05__0) 
                                             | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                            >> 4U)) 
                                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf 
        = ((0U != (3U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 5U))) & ((~ ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h43b93b05__0)) 
                                         & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                            >> 3U))) 
                                     & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall)) 
                                        & ((~ ((~ (
                                                   (~ 
                                                    ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h32338c0d__0))) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f) 
                                                              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f)))) 
                                                         & (6U 
                                                            == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))))) 
                                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes))) 
                                           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r))))));
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any) 
            << 9U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f) 
                       << 8U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                  << 7U) | ((((IData)(
                                                      (((0x20U 
                                                         == 
                                                         (0x60U 
                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))) 
                                                        & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h4791a221__0)) 
                                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f))) 
                                              << 6U) 
                                             | (0xffffffc0U 
                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                   & (((~ 
                                                        (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                          | ((0U 
                                                              == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                             | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h32338c0d__0)) 
                                                                & ((2U 
                                                                    == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                                   | (6U 
                                                                      == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))))) 
                                                         & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall)) 
                                                            & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f)) 
                                                               & (~ 
                                                                  ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                                   >> 8U)))))) 
                                                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h4791a221__0)) 
                                                      << 6U)))) 
                                            | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h4791a221__0) 
                                                 << 5U) 
                                                & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                     & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r)) 
                                                        & (0U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))))) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)))) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns)))))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fbwrite_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__20(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__20\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__ic_rd_en;
    __PVT__rvtop__DOT__ic_rd_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__iccm_wren;
    __PVT__rvtop__DOT__iccm_wren = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__iccm_rden;
    __PVT__rvtop__DOT__iccm_rden = 0;
    CData/*2:0*/ __PVT__rvtop__DOT__iccm_wr_size;
    __PVT__rvtop__DOT__iccm_wr_size = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dma_iccm_req;
    __PVT__rvtop__DOT__veer__DOT__dma_iccm_req = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__iccm_ready;
    __PVT__rvtop__DOT__veer__DOT__iccm_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read;
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write;
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write = 0;
    SData/*9:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din = 0;
    SData/*8:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_dma_rden;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_dma_rden = 0;
    SData/*10:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din = 0;
    SData/*10:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb48c2c07__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb48c2c07__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h014d8e83__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h014d8e83__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 = 0;
    IData/*26:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk7__DOT__mstatus_ff__din;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk7__DOT__mstatus_ff__din = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc8d3fd3d__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc8d3fd3d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b542e1__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b542e1__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0370770__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0370770__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h23dbe712__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h23dbe712__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0;
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_sram_en;
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_sram_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en;
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en;
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hc9403d37__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hc9403d37__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h335dde94__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h335dde94__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h1eb04e0d__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h1eb04e0d__0 = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken;
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match;
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug;
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug = 0;
    SData/*9:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__miscff__din;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__miscff__din = 0;
    IData/*27:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h3ce71968__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h3ce71968__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h70be1d92__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h70be1d92__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h4cde023c__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h4cde023c__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h02fbd549__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h02fbd549__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h397d574d__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h397d574d__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h6bbce219__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h6bbce219__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hf3f08711__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hf3f08711__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfcfd3ecc__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfcfd3ecc__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h766e3c28__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h766e3c28__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfabd96af__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfabd96af__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hbe5256ca__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hbe5256ca__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_he8473a49__0;
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_he8473a49__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_he5fa108d__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_he5fa108d__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h927bcdd6__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h927bcdd6__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h9f12ea1c__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h9f12ea1c__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha0ddc12c__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha0ddc12c__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha1dbffce__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha1dbffce__0 = 0;
    CData/*0:0*/ rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h3ee52ff7__0;
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h3ee52ff7__0 = 0;
    CData/*3:0*/ __VdfgTmp_he7e197e0__0;
    __VdfgTmp_he7e197e0__0 = 0;
    // Body
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb48c2c07__0 
        = ((3U != (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
           & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
               & ((0xaffffU != (0xfffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din 
                                            >> 0xbU))) 
                  | (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h43b93b05__0)) 
                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 4U)) | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf)) 
                                     & (0x60U == (0x60U 
                                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)))) 
                                    | (0U == (3U & 
                                              ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                               >> 5U))))))) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                 >> 9U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din 
        = ((0x100U & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h0c8f4445__0)) 
                      << 8U)) | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                   & ((~ ((4U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                             >> 7U))) 
                                      & (~ ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h682a5a5b__0)) 
                                            & ((6U 
                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)))))) 
                                  << 7U) | (((4U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                                             << 6U) 
                                            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_fence_i_r) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arvalid_ff) 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arready_unq_ff) 
                                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                                     >> 5U))) 
                                                                & (0U 
                                                                   != (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)))))))));
    __PVT__rvtop__DOT__ic_rd_en = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                   & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h0c8f4445__0) 
                                       & ((0xaffffU 
                                           != (0xfffffU 
                                               & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din 
                                                  >> 0xbU))) 
                                          & (~ (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                                                 & (6U 
                                                    == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                   | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                                                       & (7U 
                                                          == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                      | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                                                          & (3U 
                                                             == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                         | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                                                             & (4U 
                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                               & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en) 
                                                                  & (3U 
                                                                     == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))))))))))) 
                                      | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                         & ((0xaffffU 
                                             != (0xfffffU 
                                                 & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din 
                                                    >> 0xbU))) 
                                            & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h0c8f4445__0)))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                           | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))
                  ? ((6U & (- (IData)(((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                     | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                         & ((IData)(1U) + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count))) 
                        | ((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in) 
                                                | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req) 
                                                      | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))))))) 
                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count))))
                  : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)));
    __PVT__rvtop__DOT__veer__DOT__iccm_ready = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb48c2c07__0) 
                                                & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                    >> 1U) 
                                                   & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_sigs_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_sram_en 
        = (0U != (3U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                                          | (IData)(__PVT__rvtop__DOT__ic_rd_en))))) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__ic_wr_en) 
                           | ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_wr_way_en) 
                              | (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__ic_wr_en)))) 
                 & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                     >> 8U) | (IData)(__PVT__rvtop__DOT__ic_rd_en))));
    __PVT__rvtop__DOT__veer__DOT__dma_iccm_req = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb46261d7__0) 
                                                  & (IData)(__PVT__rvtop__DOT__veer__DOT__iccm_ready));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en 
        = ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_sram_en) 
           & (0U != (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q)));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en 
        = ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_sram_en) 
           & (0U != (3U & (((- (IData)((IData)(__PVT__rvtop__DOT__ic_rd_en))) 
                            | (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en)) 
                           & (- (IData)((1U & (~ ((0U 
                                                   != (IData)(vlSelf->__PVT__rvtop__DOT__ic_wr_en)) 
                                                  | (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                                     >> 7U))))))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken = 0U;
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xcU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__ic_wr_en) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                 & (- (IData)((1U & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics)))))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden)) 
           | ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug) 
              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                     >> 2U)) | ((IData)((7U == (7U 
                                                & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q)))) 
                                & (~ (IData)((3U == 
                                              (3U & 
                                               ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                                >> 3U)))))))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden 
        = ((0xcU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
           | (3U & (- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xeU & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden) 
                     | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int)) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xdU & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (2U & ((0xfffffffeU & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
                    | (((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                           << 1U)) | (0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((3U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__ic_wr_en) 
               | ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                  & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics))))) 
              << 2U));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden)) 
           | (((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug) 
               << 1U) & ((0x7ffffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                         >> 1U)) | 
                         ((IData)((3U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q)))) 
                          << 1U))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden 
        = ((3U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
           | (0xcU & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
                                        >> 1U)))) << 2U)));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xbU & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (4U & ((0xfffffffcU & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
                    | (((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                           << 2U)) | (0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((7U & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (8U & ((0xfffffff8U & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
                    | (((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                           << 3U)) | (0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__ADR 
        = (0xffU & ((IData)((((7U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q))) 
                              & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug)) 
                             & (~ (IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__ic_wr_en))))))
                     ? ((0xfcU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                  >> 3U)) | (3U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                                    >> 3U))))
                     : ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                        >> 3U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din 
        = (0x20U | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                     << 9U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h983b0f11__0) 
                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err_data)) 
                                << 8U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in) 
                                            << 6U) 
                                           | ((0xffffff0U 
                                               & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                   >> 4U) 
                                                  & (((7U 
                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count)) 
                                                      & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
                                                         & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                            & ((5U 
                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                               | (5U 
                                                                  == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))))) 
                                                     << 4U))) 
                                              | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h686f9211__0) 
                                                   & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                                      & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))) 
                                                  << 3U) 
                                                 | ((4U 
                                                     & ((((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2fdbcd72__0)) 
                                                         << 2U) 
                                                        | (0xfffffffcU 
                                                           & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                               << 2U) 
                                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))))) 
                                                    | ((((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)) 
                                                         & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb48c2c07__0)) 
                                                        << 1U) 
                                                       | (IData)(__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))))))))));
    __PVT__rvtop__DOT__iccm_wr_size = ((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))) 
                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_sz));
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
           | (IData)(__PVT__rvtop__DOT__veer__DOT__dma_iccm_req));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__iccm_ready) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_iccm_req));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h335dde94__0 
        = ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hfe419f2a__0));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h1eb04e0d__0 
        = ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h219e2fb3__0));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__sel_hold_ff__din 
        = ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h219e2fb3__0));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__sel_hold_ff__din 
        = ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hfe419f2a__0));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hc9403d37__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_addr_match)) 
           & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__miscff__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
            << 8U) | ((0xf8U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                << 3U)) | ((((- (IData)(
                                                        (1U 
                                                         & ((~ 
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics 
                                                              >> 0x10U)) 
                                                            & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                                               >> 8U))))) 
                                             & (IData)(vlSelf->__PVT__rvtop__DOT__ic_debug_way)) 
                                            << 1U) 
                                           | (1U & 
                                              (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                               >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[0U] 
        = (- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[1U] 
        = (- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                              >> 1U)))) << 4U) | (0xfU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                              >> 1U)))) >> 0x1cU) | 
           ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                              >> 1U)))) << 4U));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[4U] 
        = ((0xffffff00U & vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[4U]) 
           | (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                 >> 1U)))) >> 0x1cU) 
              | (0xf0U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                            >> 1U)))) 
                          << 4U))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[4U] 
        = ((0xffU & vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[4U]) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                >> 2U)))) << 8U));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[5U] 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                              >> 2U)))) >> 0x18U) | 
           ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                              >> 2U)))) << 8U));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[6U] 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                              >> 2U)))) >> 0x18U) | 
           (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                               >> 3U)))) << 0xcU) | 
            (0xf00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                         >> 2U)))) 
                       << 8U))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[7U] 
        = ((0xffU & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                       >> 3U)))) >> 0x14U)) 
           | ((0xf00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                           >> 3U)))) 
                         >> 0x14U)) | ((- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                      >> 3U)))) 
                                       << 0xcU)));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__ic_b_sb_bit_en_vec[8U] 
        = (0xffffU & ((0xffU & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                  >> 3U)))) 
                                >> 0x14U)) | ((0xf00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                                 >> 3U)))) 
                                                  >> 0x14U)) 
                                              | (0xf000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                                   >> 3U)))) 
                                                    << 0xcU)))));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hbe5256ca__0 
        = ((0U != (3U & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken))) 
           & (0U != (3U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_he8473a49__0 
        = ((0U != (3U & ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken) 
                         >> 2U))) & (0U != (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                  >> 2U))));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h397d574d__0 
        = ((0U != (3U & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken))) 
           & (0U != (3U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden))));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h766e3c28__0 
        = ((0U != (3U & ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken) 
                         >> 2U))) & (0U != (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden) 
                                                  >> 2U))));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din 
        = ((0xfffff00U & (vlSelf->__PVT__rvtop__DOT__ic_rw_addr 
                          >> 3U)) | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__ADR));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0) 
                  | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h5ff20c1e__0))
                  ? ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
                     & ((IData)(1U) + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)))
                  : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h9a22ba55__0)
                      ? ((- (IData)((1U & (~ (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0))))) 
                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((~ (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0)) 
                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req))
                          ? ((IData)(1U) + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count)));
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
           & (IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0));
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write 
        = ((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h0c72dabd__0) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_dma_rden 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
           & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0));
    __PVT__rvtop__DOT__iccm_wren = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0) 
                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
                                    | (3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h014d8e83__0 
        = ((~ (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0)) 
           & (3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_tag_clken_final 
        = ((~ ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__sel_hold_ff__din) 
               | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__sel_hold_ff__din))) 
           & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_sram_en));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hc9403d37__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_hc9403d37__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__miscff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__miscff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout)))
            ? (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__miscff__din)
            : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h02fbd549__0 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hbe5256ca__0) 
           & (((0xffU & vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__dout) 
               == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__ADR)) 
              & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__dout)));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h6bbce219__0 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hbe5256ca__0) 
           & (((0xffU & vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__dout) 
               == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__ADR)) 
              & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__dout)));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfcfd3ecc__0 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_he8473a49__0) 
           & (((0xffU & vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__dout) 
               == (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                            >> 3U))) & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__dout)));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfabd96af__0 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_he8473a49__0) 
           & (((0xffU & vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__dout) 
               == (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                            >> 3U))) & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__sel_hold_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h766e3c28__0) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h889e25b1__0));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__sel_hold_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h766e3c28__0) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h1e7f1128__0));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h3ce71968__0 
        = ((vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__dout 
            == rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__dout));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h70be1d92__0 
        = ((vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__dout 
            == rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din) 
           & (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__clear)) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read) 
               & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
              | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__clear)) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
              | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en 
        = (((((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout)) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en) 
                 | (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write))) 
             & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb4ba5f9f__0)) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en 
        = (((((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout)) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                 | (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write))) 
             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb00f6e1c__0)) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc8d3fd3d__0 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout) 
               >> 2U)) & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                          | (((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                 >> 3U)) | (((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                >> 4U)) 
                                            | (((4U 
                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0)) 
                                               | (((5U 
                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h74b76309__0)) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8e86aff9__0)) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                        | (((8U 
                                                             == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfb6ba3a7__0) 
                                                              | (((9U 
                                                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                  & (1U 
                                                                     == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                 | (((0xaU 
                                                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd8a95d88__0)) 
                                                                    | (((0xbU 
                                                                         == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                       | (((0xcU 
                                                                            == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                           & (3U 
                                                                              == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          | (((0xdU 
                                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f319aff__0)) 
                                                                             | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h207cf590__0)) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf4337678__0)) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd2601e1a__0)) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h275d00f0__0)) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf15f168__0)) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfb6ba3a7__0) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h76e18840__0)) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4bf2014d__0)) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h12555ff2__0)) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | (((~ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout) 
                                                                                & (0x31U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3))) 
                                                                                | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf28b7a75__0)) 
                                                                                | (((0x36U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x37U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372be7be__0)) 
                                                                                | (((0x38U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372ff751__0)) 
                                                                                | (((0x200U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x201U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                                                                | (((0x202U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                                                                | (((0x203U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                                                                | ((0x204U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b542e1__0 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout) 
               >> 3U)) & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                          | (((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                 >> 3U)) | (((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                >> 4U)) 
                                            | (((4U 
                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0)) 
                                               | (((5U 
                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h74b76309__0)) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8e86aff9__0)) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                        | (((8U 
                                                             == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdc35801e__0) 
                                                              | (((9U 
                                                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                  & (1U 
                                                                     == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                 | (((0xaU 
                                                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd8a95d88__0)) 
                                                                    | (((0xbU 
                                                                         == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                       | (((0xcU 
                                                                            == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                           & (3U 
                                                                              == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          | (((0xdU 
                                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f319aff__0)) 
                                                                             | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h207cf590__0)) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf4337678__0)) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd2601e1a__0)) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h275d00f0__0)) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf15f168__0)) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdc35801e__0) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h76e18840__0)) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4bf2014d__0)) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h12555ff2__0)) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | (((~ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout) 
                                                                                & (0x31U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4))) 
                                                                                | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf28b7a75__0)) 
                                                                                | (((0x36U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x37U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372be7be__0)) 
                                                                                | (((0x38U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372ff751__0)) 
                                                                                | (((0x200U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x201U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                                                                | (((0x202U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                                                                | (((0x203U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                                                                | ((0x204U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0370770__0 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout) 
               >> 4U)) & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                          | (((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                 >> 3U)) | (((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                >> 4U)) 
                                            | (((4U 
                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0)) 
                                               | (((5U 
                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h74b76309__0)) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8e86aff9__0)) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                        | (((8U 
                                                             == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h04492d4b__0) 
                                                              | (((9U 
                                                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                  & (1U 
                                                                     == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                 | (((0xaU 
                                                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd8a95d88__0)) 
                                                                    | (((0xbU 
                                                                         == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                       | (((0xcU 
                                                                            == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                           & (3U 
                                                                              == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          | (((0xdU 
                                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f319aff__0)) 
                                                                             | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h207cf590__0)) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf4337678__0)) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd2601e1a__0)) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h275d00f0__0)) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf15f168__0)) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h04492d4b__0) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h76e18840__0)) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4bf2014d__0)) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h12555ff2__0)) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | (((~ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout) 
                                                                                & (0x31U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5))) 
                                                                                | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf28b7a75__0)) 
                                                                                | (((0x36U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x37U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372be7be__0)) 
                                                                                | (((0x38U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372ff751__0)) 
                                                                                | (((0x200U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x201U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                                                                | (((0x202U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                                                                | (((0x203U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                                                                | ((0x204U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h23dbe712__0 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout) 
               >> 5U)) & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                          | (((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                 >> 3U)) | (((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                >> 4U)) 
                                            | (((4U 
                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0)) 
                                               | (((5U 
                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h74b76309__0)) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8e86aff9__0)) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_instr_aligned)) 
                                                        | (((8U 
                                                             == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9c1af6f8__0) 
                                                              | (((9U 
                                                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                  & (1U 
                                                                     == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                 | (((0xaU 
                                                                      == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd8a95d88__0)) 
                                                                    | (((0xbU 
                                                                         == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                       | (((0xcU 
                                                                            == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                           & (3U 
                                                                              == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          | (((0xdU 
                                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f319aff__0)) 
                                                                             | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h207cf590__0)) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (7U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf4337678__0)) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd2601e1a__0)) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h275d00f0__0)) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf15f168__0)) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                                | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9c1af6f8__0) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h76e18840__0)) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4bf2014d__0)) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h12555ff2__0)) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                                                | (((~ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout) 
                                                                                & (0x31U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6))) 
                                                                                | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf28b7a75__0)) 
                                                                                | (((0x36U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                | (((0x37U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372be7be__0)) 
                                                                                | (((0x38U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372ff751__0)) 
                                                                                | (((0x200U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                                >> 2U)) 
                                                                                | (((0x201U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                                                                | (((0x202U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                                                                | (((0x203U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                                                                | ((0x204U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr) 
            << 8U) | ((0xe0U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                >> 3U)) | ((0x18U & 
                                            (vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_addr 
                                             << 1U)) 
                                           | (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_dma_rden) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                     >> 1U)) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)))))));
    __PVT__rvtop__DOT__iccm_rden = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_dma_rden) 
                                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                       & (0x57fff800U 
                                          == (0x7ffff800U 
                                              & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din))));
    if (rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h014d8e83__0) {
        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[0U] 
            = (IData)((0x7fffffffffULL & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                          >> 0xaU)));
        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[1U] 
            = (((IData)((0x7fffffffffULL & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                            >> 0xaU))) 
                << 7U) | (IData)(((0x7fffffffffULL 
                                   & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                      >> 0xaU)) >> 0x20U)));
        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[2U] 
            = (0x3fffU & (((IData)((0x7fffffffffULL 
                                    & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                       >> 0xaU))) >> 0x19U) 
                          | ((IData)(((0x7fffffffffULL 
                                       & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                          >> 0xaU)) 
                                      >> 0x20U)) << 7U)));
    } else {
        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[0U] 
            = (IData)((((QData)((IData)((1U & (VL_REDXOR_32((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata)) 
                                               ^ VL_REDXOR_8(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp))))) 
                        << 0x26U) | (((QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata)))));
        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[1U] 
            = (((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata 
                         >> 0x20U)) << 7U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (VL_REDXOR_32((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata)) 
                                                                            ^ 
                                                                            VL_REDXOR_8(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp))))) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata)))) 
                                                      >> 0x20U)));
        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[2U] 
            = (0x3fffU & ((0xffffff80U & ((0x2000U 
                                           & ((VL_REDXOR_32((IData)(
                                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata 
                                                                     >> 0x20U))) 
                                               ^ VL_REDXOR_8(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
                                              << 0xdU)) 
                                          | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp) 
                                             << 7U))) 
                          | ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata 
                                      >> 0x20U)) >> 0x19U)));
    }
    vlSelf->__PVT__rvtop__DOT__iccm_rw_addr = (0x7ffU 
                                               & (((3U 
                                                    != (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                                                   & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2ed10752__0))
                                                   ? 
                                                  (vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_addr 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h014d8e83__0)
                                                    ? 
                                                   (0x7feU 
                                                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout) 
                                                       << 1U))
                                                    : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din) 
                  | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h1eb04e0d__0))
                  ? (~ (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h1eb04e0d__0))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din)
            ? (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din)
            : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__dout));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din) 
                  | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din))
                  ? ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr))
                      ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr)))
                  : (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din) 
                  | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h335dde94__0))
                  ? (~ (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____VdfgTmp_h335dde94__0))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din)
            ? (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din)
            : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC0__DOT__size_64__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__dout));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__ME 
        = ((~ ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__sel_hold_ff__din) 
               | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__sel_hold_ff__din))) 
           & (0U != (3U & ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken) 
                           >> 2U))));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__sel_hold_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h397d574d__0) 
           & (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h3ce71968__0));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__sel_hold_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h397d574d__0) 
           & (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h70be1d92__0));
    __PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match 
        = (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h889e25b1__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h1e7f1128__0) 
                       << 2U) | (((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h3ce71968__0) 
                                  << 1U) | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h70be1d92__0))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc8d3fd3d__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
            | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep) 
               >> 1U)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b542e1__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
            | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep) 
               >> 2U)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0370770__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
            | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep) 
               >> 3U)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h23dbe712__0));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk7__DOT__mstatus_ff__din 
        = ((0x4000000U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac_en) 
                           << 0x1aU) | (0xfc000000U 
                                        & (((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                & (0xbc0U 
                                                   == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))) 
                                            << 0x1aU) 
                                           & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout)))) 
           | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_r) 
                & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_r)) 
                   & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_haf05045f__0) 
                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout)))) 
               << 0x19U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
                             << 0x18U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
                                           << 0x17U) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7ffffffU 
                                                        & ((((IData)(0xffffffffU) 
                                                             << 
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                                              >> 0x1bU)) 
                                                            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                                           | ((((IData)(0xffffffffU) 
                                                                << 
                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                                                 >> 0x1bU)) 
                                                               & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect) 
                                                              | (((IData)(0xffffffffU) 
                                                                  << 
                                                                  (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                                                   >> 0x1bU)) 
                                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect)))))) 
                                              << 0x16U) 
                                             | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__mexintpend) 
                                                       << 0x13U) 
                                                      | ((0x60000U 
                                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 0xdU)) 
                                                         | ((0x10000U 
                                                             & (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout 
                                                                  + 
                                                                  (1U 
                                                                   & (((IData)(1U) 
                                                                       + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)) 
                                                                      >> 8U))) 
                                                                 >> 8U) 
                                                                & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)) 
                                                                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in)) 
                                                                   << 0x10U))) 
                                                            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable) 
                                                                << 0xfU) 
                                                               | ((0x4000U 
                                                                   & (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout 
                                                                        + 
                                                                        (1U 
                                                                         & (((IData)(1U) 
                                                                             + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)) 
                                                                            >> 8U))) 
                                                                       >> 0xaU) 
                                                                      & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)) 
                                                                          & ((~ 
                                                                              (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                               >> 0xdU)) 
                                                                             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r))) 
                                                                         << 0xeU))) 
                                                                  | ((0x2000U 
                                                                      & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)) 
                                                                          << 0xdU) 
                                                                         & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req) 
                                                                             << 0xdU) 
                                                                            | (0xffffe000U 
                                                                               & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout)))) 
                                                                     | ((0x1e00U 
                                                                         & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meihap_r)
                                                                              ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_pl)
                                                                              : 
                                                                             (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                                               & (0xbcbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                                                               ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                                               : 
                                                                              (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                                                               >> 9U))) 
                                                                            << 9U)) 
                                                                        | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_instr_decoded) 
                                                                                & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)) 
                                                                                & (0x7cbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                                            << 8U) 
                                                                           | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
                                                                                & (0x7cbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
                                                                               << 7U) 
                                                                              | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h23dbe712__0) 
                                                                                << 6U) 
                                                                                | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0370770__0) 
                                                                                << 5U) 
                                                                                | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he9b542e1__0) 
                                                                                << 4U) 
                                                                                | (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc8d3fd3d__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (((- (IData)(
                                                                                ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))) 
                                                                                & VL_SHIFTL_III(2,2,32, vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout, 1U)) 
                                                                                | ((2U 
                                                                                & ((- (IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))) 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 2U))) 
                                                                                | (((- (IData)(
                                                                                ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)))) 
                                                                                & (2U 
                                                                                | (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                                                                >> 1U)))) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt))) 
                                                                                & (1U 
                                                                                | (2U 
                                                                                & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout))) 
                                                                                | (((- (IData)(
                                                                                ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r)))) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h04ebf252__0)) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)) 
                                                                                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)))))))) 
                                                                                & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout))))))))))))))))))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_misc_bits__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_address__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_addr_en)
                      ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                         >> 1U) : (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout)));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_address__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_addr_en)
                      ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                         >> 1U) : (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din 
        = ((0x7feU & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)) 
           | (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                       | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout)))));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_he5fa108d__0 
        = ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                  >> 1U)) == (1U & (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout)));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h927bcdd6__0 
        = ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                  >> 1U)) == (1U & (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout)));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0 
        = ((0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                      >> 1U)) == (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0 
        = ((0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                      >> 1U)) == (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
        = (0x7ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                     + ((3U == (3U & (IData)(__PVT__rvtop__DOT__iccm_wr_size)))
                         ? 2U : 1U)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__ME 
        = ((~ ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__sel_hold_ff__din) 
               | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__sel_hold_ff__din))) 
           & (0U != (3U & (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match 
        = (2U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match 
        = ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match) 
                    | (IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match 
        = ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match) 
                    | ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match) 
                       >> 1U))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match 
        = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match 
        = ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match)) 
                    | (0x7ffffffeU & ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match) 
                                      >> 1U)))));
    vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match 
        = ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match)) 
           | ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match) 
                        >> 1U) | ((IData)(__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_addr_match) 
                                  >> 3U))) << 1U));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
                           >> 0x20U))) : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
                           >> 0x20U))) : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
                           >> 0x20U))) : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
                           >> 0x20U))) : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk7__DOT__mstatus_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk7__DOT__mstatus_ff__din 
                   ^ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout))
            ? rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk7__DOT__mstatus_ff__din
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_index_f__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_data__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffffULL & (((((0x1ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                            >> 2U)) 
                                 == (0x1ffU & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout) 
                                               >> 1U))) 
                                & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_he5fa108d__0) 
                                    | (3U == (3U & (IData)(__PVT__rvtop__DOT__iccm_wr_size)))) 
                                   & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout) 
                                      & (IData)(__PVT__rvtop__DOT__iccm_wren)))) 
                               | (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_addr_en))
                               ? ((((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_he5fa108d__0) 
                                    & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                       >> 1U)) | ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(__PVT__rvtop__DOT__iccm_wr_size)))))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                        >> 7U))) : 
                                  (((QData)((IData)(
                                                    vlSelf->__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__rvtop__DOT__iccm_wr_data[0U]))))
                               : vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_data__dout));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_data__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffffULL & (((((0x1ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                            >> 2U)) 
                                 == (0x1ffU & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout) 
                                               >> 1U))) 
                                & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h927bcdd6__0) 
                                    | (3U == (3U & (IData)(__PVT__rvtop__DOT__iccm_wr_size)))) 
                                   & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout) 
                                      & (IData)(__PVT__rvtop__DOT__iccm_wren)))) 
                               | (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_addr_en))
                               ? ((((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h927bcdd6__0) 
                                    & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                       >> 1U)) | ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(__PVT__rvtop__DOT__iccm_wr_size)))))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                        >> 7U))) : 
                                  (((QData)((IData)(
                                                    vlSelf->__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__rvtop__DOT__iccm_wr_data[0U]))))
                               : vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_data__dout));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h9f12ea1c__0 
        = ((0U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                         >> 1U))) | (0U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                  >> 1U))));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha0ddc12c__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                         >> 1U))) | (1U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                  >> 1U))));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha1dbffce__0 
        = ((2U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                         >> 1U))) | (2U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                  >> 1U))));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h3ee52ff7__0 
        = ((3U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                         >> 1U))) | (3U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                  >> 1U))));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0 
        = ((0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                      >> 1U)) == (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout));
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0 
        = ((0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                      >> 1U)) == (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h4cde023c__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match)) 
           & (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h397d574d__0));
    rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hf3f08711__0 
        = ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_addr_match) 
               >> 1U)) & (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h766e3c28__0));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__iccm_bank__WE 
        = ((IData)(__PVT__rvtop__DOT__iccm_wren) & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h9f12ea1c__0));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__iccm_bank__WE 
        = ((IData)(__PVT__rvtop__DOT__iccm_wren) & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha0ddc12c__0));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__iccm_bank__WE 
        = ((IData)(__PVT__rvtop__DOT__iccm_wren) & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha1dbffce__0));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__iccm_bank__WE 
        = ((IData)(__PVT__rvtop__DOT__iccm_wren) & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h3ee52ff7__0));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__selred1__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0) 
               & (6U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0) 
                 & (6U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__selred1__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0) 
               & (4U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0) 
                 & (4U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__selred1__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0) 
               & (2U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0) 
                 & (2U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__selred1__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2846a7fa__0) 
               & (0U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h2697f073__0) 
                 & (0U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__selred0__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0) 
               & (0U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0) 
                 & (0U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__selred0__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0) 
               & (2U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0) 
                 & (2U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__selred0__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0) 
               & (4U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0) 
                 & (4U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__selred0__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout) 
           & (((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_hfac79c17__0) 
               & (6U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr)))) 
              | ((IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h151735ce__0) 
                 & (6U == (6U & (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc))))));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h4cde023c__0) 
           & (0U == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h4cde023c__0) 
           & (1U == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hf3f08711__0) 
           & (1U == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din 
        = ((IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hf3f08711__0) 
           & (0U == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__iccm_bank__ADR 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__iccm_bank__WE)
                     ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                        >> 3U) : ((0U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                >> 1U)))
                                   ? ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                      >> 3U) : ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                                >> 3U))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__iccm_bank__ME 
        = (1U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__iccm_bank__WE) 
                 | (((IData)(__PVT__rvtop__DOT__iccm_rden) 
                     & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h9f12ea1c__0)) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__iccm_bank__ADR 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__iccm_bank__WE)
                     ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                        >> 3U) : ((1U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                >> 1U)))
                                   ? ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                      >> 3U) : ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                                >> 3U))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__iccm_bank__ME 
        = (1U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__iccm_bank__WE) 
                 | (((IData)(__PVT__rvtop__DOT__iccm_rden) 
                     & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha0ddc12c__0)) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__iccm_bank__ADR 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__iccm_bank__WE)
                     ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                        >> 3U) : ((2U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                >> 1U)))
                                   ? ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                      >> 3U) : ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                                >> 3U))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__iccm_bank__ME 
        = (1U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__iccm_bank__WE) 
                 | (((IData)(__PVT__rvtop__DOT__iccm_rden) 
                     & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_ha1dbffce__0)) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__iccm_bank__ADR 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__iccm_bank__WE)
                     ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                        >> 3U) : ((3U == (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                                >> 1U)))
                                   ? ((IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc) 
                                      >> 3U) : ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_rw_addr) 
                                                >> 3U))));
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__iccm_bank__ME 
        = (1U & ((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__iccm_bank__WE) 
                 | (((IData)(__PVT__rvtop__DOT__iccm_rden) 
                     & (IData)(rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____VdfgTmp_h3ee52ff7__0)) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))));
    __VdfgTmp_he7e197e0__0 = (((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__selred0__din) 
                               << 3U) | (((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__selred0__din) 
                                          << 2U) | 
                                         (((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__selred0__din) 
                                           << 1U) | (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__selred0__din))));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din) 
                  | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h02fbd549__0))
                  ? (~ (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h02fbd549__0))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din)
            ? rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din
            : vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__dout);
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din) 
                  | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din))
                  ? ((1U == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout))
                      ? 0U : ((IData)(1U) + (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din) 
                  | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h6bbce219__0))
                  ? (~ (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h6bbce219__0))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din)
            ? rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din
            : vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__dout);
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din) 
                  | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfabd96af__0))
                  ? (~ (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfabd96af__0))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din)
            ? vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din
            : vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__ic_addr_index__dout);
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__write_bypass_ff__din) 
                  | (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din))
                  ? ((1U == (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout))
                      ? 0U : ((IData)(1U) + (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__wrptr_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din) 
                  | (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfcfd3ecc__0))
                  ? (~ (IData)(rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hfcfd3ecc__0))
                  : (IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__index_val_ff__dout)));
    vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__write_bypass_ff__din)
            ? vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__din
            : vlSelf->rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__ic_addr_index__dout);
    vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__red_lru__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__iccm_buf_correct_ecc) 
                  | ((0U != ((IData)(__VdfgTmp_he7e197e0__0) 
                             | (((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__selred1__din) 
                                 << 3U) | (((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__selred1__din) 
                                            << 2U) 
                                           | (((IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__selred1__din) 
                                               << 1U) 
                                              | (IData)(vlSelf->rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__selred1__din)))))) 
                     & ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_correction_state) 
                        & (IData)(__PVT__rvtop__DOT__iccm_rden))))
                  ? ((IData)(vlSelf->__PVT__rvtop__DOT__iccm_buf_correct_ecc)
                      ? (~ (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru))
                      : (0U != (IData)(__VdfgTmp_he7e197e0__0)))
                  : (IData)(vlSelf->__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru)));
}
