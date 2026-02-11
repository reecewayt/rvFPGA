// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_rvfpgasim.h"

extern const VlUnpacked<CData/*3:0*/, 32> Vrvfpgasim__ConstPool__TABLE_h27456227_0;

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___ico_sequent__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___ico_sequent__TOP__rvfpgasim__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vrvfpgasim__ConstPool__TABLE_h27456227_0[__Vtableidx1];
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : (((1U 
                                                & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                               || (1U 
                                                   == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
    vlSelf->__Vcellinp__dmi_wrapper__core_rst_n = (1U 
                                                   & (~ (IData)(vlSymsp->TOP.rst)));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___act_comb__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___act_comb__TOP__rvfpgasim__0\n"); );
    // Body
    vlSelf->__PVT__ram__DOT__mem_wr_en = 0U;
    vlSelf->__PVT__ram__DOT__mem_rd_en = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_rvalid_next = ((IData)(vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg) 
                                                  & (~ 
                                                     vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U]));
    vlSelf->__PVT__ram__DOT__write_burst_next = vlSelf->__PVT__ram__DOT__write_burst_reg;
    vlSelf->__PVT__ram__DOT__write_id_next = vlSelf->__PVT__ram__DOT__write_id_reg;
    vlSelf->__PVT__ram__DOT__write_size_next = vlSelf->__PVT__ram__DOT__write_size_reg;
    vlSelf->__PVT__ram__DOT__read_id_next = vlSelf->__PVT__ram__DOT__read_id_reg;
    vlSelf->__PVT__ram__DOT__read_size_next = vlSelf->__PVT__ram__DOT__read_size_reg;
    vlSelf->__PVT__ram__DOT__read_burst_next = vlSelf->__PVT__ram__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__ram__DOT__read_state_reg)))) {
        if (((IData)(vlSelf->__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                >> 1U))) {
            vlSelf->__PVT__ram__DOT__read_id_next = 
                (0x1fU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U]);
            vlSelf->__PVT__ram__DOT__read_size_next 
                = ((3U > (7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                                >> 0x15U))) ? (7U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                                                >> 0x15U))
                    : 3U);
            vlSelf->__PVT__ram__DOT__read_burst_next 
                = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                         >> 0x13U));
        }
    }
    vlSelf->__PVT__ram__DOT__s_axi_wready_next = 0U;
    vlSelf->__PVT__ram__DOT__write_count_next = vlSelf->__PVT__ram__DOT__write_count_reg;
    vlSelf->__PVT__ram__DOT__s_axi_bvalid_next = ((IData)(vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg) 
                                                  & (~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                      >> 6U)));
    vlSelf->__PVT__ram__DOT__s_axi_arready_next = 0U;
    vlSelf->__PVT__ram__DOT__read_state_next = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_rid_next = vlSelf->__PVT__ram__DOT__s_axi_rid_reg;
    vlSelf->__PVT__ram__DOT__read_count_next = vlSelf->__PVT__ram__DOT__read_count_reg;
    vlSelf->__PVT__ram__DOT__s_axi_rlast_next = vlSelf->__PVT__ram__DOT__s_axi_rlast_reg;
    vlSelf->__PVT__ram__DOT__s_axi_awready_next = 0U;
    vlSelf->__PVT__ram__DOT__write_state_next = 0U;
    vlSelf->__PVT__ram__DOT__s_axi_bid_next = vlSelf->__PVT__ram__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelf->__PVT__ram__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelf->__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSelf->__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                    >> 7U))) {
                vlSelf->__PVT__ram__DOT__mem_wr_en = 1U;
                if ((0U >= (IData)(vlSelf->__PVT__ram__DOT__write_count_reg))) {
                    if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                >> 6U) | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                        vlSelf->__PVT__ram__DOT__s_axi_bvalid_next = 1U;
                        vlSelf->__PVT__ram__DOT__s_axi_bid_next 
                            = vlSelf->__PVT__ram__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelf->__PVT__ram__DOT__write_state_reg))) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                        >> 6U) | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                vlSelf->__PVT__ram__DOT__s_axi_bvalid_next = 1U;
                vlSelf->__PVT__ram__DOT__s_axi_bid_next 
                    = vlSelf->__PVT__ram__DOT__write_id_reg;
            }
        }
    }
    vlSelf->__PVT__ram__DOT__write_addr_next = vlSelf->__PVT__ram__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->__PVT__ram__DOT__write_state_reg))) {
        vlSelf->__PVT__ram__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelf->__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                >> 0x12U))) {
            vlSelf->__PVT__ram__DOT__write_burst_next 
                = (3U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                         >> 0xaU));
            vlSelf->__PVT__ram__DOT__write_id_next 
                = (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                            >> 0x17U));
            vlSelf->__PVT__ram__DOT__write_size_next 
                = ((3U > (7U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                >> 0xcU))) ? (7U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                               >> 0xcU))
                    : 3U);
            vlSelf->__PVT__ram__DOT__s_axi_wready_next = 1U;
            vlSelf->__PVT__ram__DOT__write_count_next 
                = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                            >> 0xfU));
            vlSelf->__PVT__ram__DOT__s_axi_awready_next = 0U;
            vlSelf->__PVT__ram__DOT__write_state_next = 1U;
            vlSelf->__PVT__ram__DOT__write_addr_next 
                = (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                               << 9U) | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                         >> 0x17U)));
        } else {
            vlSelf->__PVT__ram__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__ram__DOT__write_state_reg))) {
        vlSelf->__PVT__ram__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelf->__PVT__ram__DOT__s_axi_wready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                >> 7U))) {
            if ((0U >= (IData)(vlSelf->__PVT__ram__DOT__write_count_reg))) {
                vlSelf->__PVT__ram__DOT__s_axi_wready_next = 0U;
                if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                            >> 6U) | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                    vlSelf->__PVT__ram__DOT__s_axi_awready_next = 1U;
                }
            }
            vlSelf->__PVT__ram__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelf->__PVT__ram__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelf->__PVT__ram__DOT__write_state_next 
                = ((0U < (IData)(vlSelf->__PVT__ram__DOT__write_count_reg))
                    ? 1U : ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                    >> 6U) | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg))))
                             ? 0U : 2U));
            if ((0U != (IData)(vlSelf->__PVT__ram__DOT__write_burst_reg))) {
                vlSelf->__PVT__ram__DOT__write_addr_next 
                    = (0xffffU & ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                  + ((IData)(1U) << (IData)(vlSelf->__PVT__ram__DOT__write_size_reg))));
            }
        } else {
            vlSelf->__PVT__ram__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__ram__DOT__write_state_reg))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                    >> 6U) | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg))))) {
            vlSelf->__PVT__ram__DOT__s_axi_awready_next = 1U;
            vlSelf->__PVT__ram__DOT__write_state_next = 0U;
        } else {
            vlSelf->__PVT__ram__DOT__write_state_next = 2U;
        }
    }
    vlSelf->__PVT__ram__DOT__read_addr_next = vlSelf->__PVT__ram__DOT__read_addr_reg;
    if (vlSelf->__PVT__ram__DOT__read_state_reg) {
        if (vlSelf->__PVT__ram__DOT__read_state_reg) {
            if ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                       | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSelf->__PVT__ram__DOT__mem_rd_en = 1U;
                vlSelf->__PVT__ram__DOT__s_axi_rvalid_next = 1U;
                if ((0U >= (IData)(vlSelf->__PVT__ram__DOT__read_count_reg))) {
                    vlSelf->__PVT__ram__DOT__s_axi_arready_next = 1U;
                }
                vlSelf->__PVT__ram__DOT__s_axi_rid_next 
                    = vlSelf->__PVT__ram__DOT__read_id_reg;
                vlSelf->__PVT__ram__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelf->__PVT__ram__DOT__read_count_reg) 
                                - (IData)(1U)));
                vlSelf->__PVT__ram__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelf->__PVT__ram__DOT__read_count_reg));
                if ((0U != (IData)(vlSelf->__PVT__ram__DOT__read_burst_reg))) {
                    vlSelf->__PVT__ram__DOT__read_addr_next 
                        = (0xffffU & ((IData)(vlSelf->__PVT__ram__DOT__read_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelf->__PVT__ram__DOT__read_size_reg))));
                }
            }
            vlSelf->__PVT__ram__DOT__read_state_next 
                = ((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                             | (~ (IData)(vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg))))) 
                   || (0U < (IData)(vlSelf->__PVT__ram__DOT__read_count_reg)));
        }
    } else {
        vlSelf->__PVT__ram__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelf->__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                >> 1U))) {
            vlSelf->__PVT__ram__DOT__s_axi_arready_next = 0U;
            vlSelf->__PVT__ram__DOT__read_count_next 
                = (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                   >> 0x18U);
            vlSelf->__PVT__ram__DOT__read_addr_next 
                = (0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U]);
            vlSelf->__PVT__ram__DOT__read_state_next = 1U;
        } else {
            vlSelf->__PVT__ram__DOT__read_state_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__0\n"); );
    // Init
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v0;
    __Vdlyvdim0__ram__DOT__mem__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v0;
    __Vdlyvlsb__ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v0;
    __Vdlyvval__ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v0;
    __Vdlyvset__ram__DOT__mem__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v1;
    __Vdlyvdim0__ram__DOT__mem__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v1;
    __Vdlyvlsb__ram__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v1;
    __Vdlyvval__ram__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v1;
    __Vdlyvset__ram__DOT__mem__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v2;
    __Vdlyvdim0__ram__DOT__mem__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v2;
    __Vdlyvlsb__ram__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v2;
    __Vdlyvval__ram__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v2;
    __Vdlyvset__ram__DOT__mem__v2 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v3;
    __Vdlyvdim0__ram__DOT__mem__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v3;
    __Vdlyvlsb__ram__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v3;
    __Vdlyvval__ram__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v3;
    __Vdlyvset__ram__DOT__mem__v3 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v4;
    __Vdlyvdim0__ram__DOT__mem__v4 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v4;
    __Vdlyvlsb__ram__DOT__mem__v4 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v4;
    __Vdlyvval__ram__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v4;
    __Vdlyvset__ram__DOT__mem__v4 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v5;
    __Vdlyvdim0__ram__DOT__mem__v5 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v5;
    __Vdlyvlsb__ram__DOT__mem__v5 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v5;
    __Vdlyvval__ram__DOT__mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v5;
    __Vdlyvset__ram__DOT__mem__v5 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v6;
    __Vdlyvdim0__ram__DOT__mem__v6 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v6;
    __Vdlyvlsb__ram__DOT__mem__v6 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v6;
    __Vdlyvval__ram__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v6;
    __Vdlyvset__ram__DOT__mem__v6 = 0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v7;
    __Vdlyvdim0__ram__DOT__mem__v7 = 0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v7;
    __Vdlyvlsb__ram__DOT__mem__v7 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v7;
    __Vdlyvval__ram__DOT__mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v7;
    __Vdlyvset__ram__DOT__mem__v7 = 0;
    // Body
    __Vdlyvset__ram__DOT__mem__v0 = 0U;
    __Vdlyvset__ram__DOT__mem__v1 = 0U;
    __Vdlyvset__ram__DOT__mem__v2 = 0U;
    __Vdlyvset__ram__DOT__mem__v3 = 0U;
    __Vdlyvset__ram__DOT__mem__v4 = 0U;
    __Vdlyvset__ram__DOT__mem__v5 = 0U;
    __Vdlyvset__ram__DOT__mem__v6 = 0U;
    __Vdlyvset__ram__DOT__mem__v7 = 0U;
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xaU))) {
        __Vdlyvval__ram__DOT__mem__v0 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                  >> 0x12U));
        __Vdlyvset__ram__DOT__mem__v0 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v0 = 0U;
        __Vdlyvdim0__ram__DOT__mem__v0 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xbU))) {
        __Vdlyvval__ram__DOT__mem__v1 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                     >> 0x1aU)));
        __Vdlyvset__ram__DOT__mem__v1 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v1 = 8U;
        __Vdlyvdim0__ram__DOT__mem__v1 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xcU))) {
        __Vdlyvval__ram__DOT__mem__v2 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                  >> 2U));
        __Vdlyvset__ram__DOT__mem__v2 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v2 = 0x10U;
        __Vdlyvdim0__ram__DOT__mem__v2 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xdU))) {
        __Vdlyvval__ram__DOT__mem__v3 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                  >> 0xaU));
        __Vdlyvset__ram__DOT__mem__v3 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v3 = 0x18U;
        __Vdlyvdim0__ram__DOT__mem__v3 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xeU))) {
        __Vdlyvval__ram__DOT__mem__v4 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                  >> 0x12U));
        __Vdlyvset__ram__DOT__mem__v4 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v4 = 0x20U;
        __Vdlyvdim0__ram__DOT__mem__v4 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0xfU))) {
        __Vdlyvval__ram__DOT__mem__v5 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                     >> 0x1aU)));
        __Vdlyvset__ram__DOT__mem__v5 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v5 = 0x28U;
        __Vdlyvdim0__ram__DOT__mem__v5 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0x10U))) {
        __Vdlyvval__ram__DOT__mem__v6 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                  >> 2U));
        __Vdlyvset__ram__DOT__mem__v6 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v6 = 0x30U;
        __Vdlyvdim0__ram__DOT__mem__v6 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSelf->__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 0x11U))) {
        __Vdlyvval__ram__DOT__mem__v7 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                  >> 0xaU));
        __Vdlyvset__ram__DOT__mem__v7 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v7 = 0x38U;
        __Vdlyvdim0__ram__DOT__mem__v7 = (0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    vlSelf->__PVT__ram__DOT__read_id_reg = vlSelf->__PVT__ram__DOT__read_id_next;
    vlSelf->__PVT__ram__DOT__read_size_reg = vlSelf->__PVT__ram__DOT__read_size_next;
    vlSelf->__PVT__ram__DOT__read_burst_reg = vlSelf->__PVT__ram__DOT__read_burst_next;
    vlSelf->__PVT__ram__DOT__write_id_reg = vlSelf->__PVT__ram__DOT__write_id_next;
    vlSelf->__PVT__ram__DOT__write_size_reg = vlSelf->__PVT__ram__DOT__write_size_next;
    vlSelf->__PVT__ram__DOT__write_burst_reg = vlSelf->__PVT__ram__DOT__write_burst_next;
    vlSelf->__PVT__ram__DOT__read_count_reg = vlSelf->__PVT__ram__DOT__read_count_next;
    vlSelf->__PVT__ram__DOT__write_count_reg = vlSelf->__PVT__ram__DOT__write_count_next;
    vlSelf->__PVT__ram__DOT__read_state_reg = vlSelf->__PVT__ram__DOT__read_state_next;
    vlSelf->__PVT__ram__DOT__write_state_reg = vlSelf->__PVT__ram__DOT__write_state_next;
    vlSelf->__PVT__ram__DOT__s_axi_rid_reg = vlSelf->__PVT__ram__DOT__s_axi_rid_next;
    vlSelf->__PVT__ram__DOT__s_axi_rlast_reg = vlSelf->__PVT__ram__DOT__s_axi_rlast_next;
    vlSelf->__PVT__ram__DOT__s_axi_bid_reg = vlSelf->__PVT__ram__DOT__s_axi_bid_next;
    vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg = vlSelf->__PVT__ram__DOT__s_axi_bvalid_next;
    if (vlSelf->__PVT__ram__DOT__mem_rd_en) {
        vlSelf->__PVT__ram__DOT__s_axi_rdata_reg = 
            vlSelf->__PVT__ram__DOT__mem[(0x1fffU & 
                                          ((IData)(vlSelf->__PVT__ram__DOT__read_addr_reg) 
                                           >> 3U))];
    }
    vlSelf->__PVT__ram__DOT__s_axi_arready_reg = vlSelf->__PVT__ram__DOT__s_axi_arready_next;
    vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg = vlSelf->__PVT__ram__DOT__s_axi_rvalid_next;
    vlSelf->__PVT__ram__DOT__s_axi_awready_reg = vlSelf->__PVT__ram__DOT__s_axi_awready_next;
    vlSelf->__PVT__ram__DOT__s_axi_wready_reg = vlSelf->__PVT__ram__DOT__s_axi_wready_next;
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__ram__DOT__read_state_reg = 0U;
        vlSelf->__PVT__ram__DOT__write_state_reg = 0U;
        vlSelf->__PVT__ram__DOT__s_axi_bvalid_reg = 0U;
        vlSelf->__PVT__ram__DOT__s_axi_arready_reg = 0U;
        vlSelf->__PVT__ram__DOT__s_axi_rvalid_reg = 0U;
        vlSelf->__PVT__ram__DOT__s_axi_awready_reg = 0U;
        vlSelf->__PVT__ram__DOT__s_axi_wready_reg = 0U;
    }
    if (__Vdlyvset__ram__DOT__mem__v0) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v0))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v0]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v0)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v0)));
    }
    if (__Vdlyvset__ram__DOT__mem__v1) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v1))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v1]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v1)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v1)));
    }
    if (__Vdlyvset__ram__DOT__mem__v2) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v2))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v2]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v2)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v2)));
    }
    if (__Vdlyvset__ram__DOT__mem__v3) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v3))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v3]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v3)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v3)));
    }
    if (__Vdlyvset__ram__DOT__mem__v4) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v4))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v4]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v4)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v4)));
    }
    if (__Vdlyvset__ram__DOT__mem__v5) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v5))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v5]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v5)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v5)));
    }
    if (__Vdlyvset__ram__DOT__mem__v6) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v6))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v6]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v6)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v6)));
    }
    if (__Vdlyvset__ram__DOT__mem__v7) {
        vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v7))) 
                & vlSelf->__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v7]) 
               | ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v7)) 
                  << (IData)(__Vdlyvlsb__ram__DOT__mem__v7)));
    }
    vlSelf->__PVT__ram__DOT__write_addr_reg = vlSelf->__PVT__ram__DOT__write_addr_next;
    vlSelf->__PVT__ram__DOT__read_addr_reg = vlSelf->__PVT__ram__DOT__read_addr_next;
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__2(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__2\n"); );
    // Body
    vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = ((IData)(vlSymsp->TOP.i_jtag_trst_n) ? ((
                                                   (8U 
                                                    == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                                   & ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                      >> 1U))
                                                   ? vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                                                   : 
                                                  (0x1fffffffffcULL 
                                                   & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))
            : 0ULL);
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__4(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__4\n"); );
    // Body
    if (vlSymsp->TOP.i_jtag_trst_n) {
        if ((0U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else if ((0xfU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                = ((0U == (0x1fU & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                    ? 0x1fU : (0x1fU & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
        }
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = (((0x11U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
            << 1U) | (0x10U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__6(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__6\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSelf->__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    if (vlSymsp->TOP.i_jtag_trst_n) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
            = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
            = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = 0ULL;
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = 0U;
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vrvfpgasim__ConstPool__TABLE_h27456227_0[__Vtableidx1];
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_comb__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_comb__TOP__rvfpgasim__0\n"); );
    // Body
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : (((1U 
                                                & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                               || (1U 
                                                   == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
}
