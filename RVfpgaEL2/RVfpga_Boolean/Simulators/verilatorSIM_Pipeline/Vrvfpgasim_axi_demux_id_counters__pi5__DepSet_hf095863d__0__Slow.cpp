// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__full_o = (IData)((((((((((((((((
                                                   (((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     | (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                    | (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                   | (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                  | (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                 | (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                | (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                               | (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                              | (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                             | (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                            | (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                           | (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                          | (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                         | (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                        | (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                       | (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                      >> 4U) | ((((
                                                   ((((((((((((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           | (0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                         | (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        | (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       | (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                      | (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                     | (0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (0xfU 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                                     >> 6U)), 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        << 0xfU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           << 0xeU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                              << 0xdU) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                 << 0xcU) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xfU 
                                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                       << 0xaU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                          << 9U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                             << 8U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 7U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                          >> 6U))));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__full_o = (IData)((((((((((((((((
                                                   (((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     | (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                    | (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                   | (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                  | (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                 | (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                | (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                               | (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                              | (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                             | (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                            | (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                           | (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                          | (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                         | (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                        | (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                       | (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                      >> 4U) | ((((
                                                   ((((((((((((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           | (0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                         | (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        | (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       | (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                      | (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                     | (0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (0xfU 
                                                                  & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U]), 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        << 0xfU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           << 0xeU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                              << 0xdU) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                 << 0xcU) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xfU 
                                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                       << 0xaU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                          << 9U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                             << 8U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 7U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__full_o = (IData)((((((((((((((((
                                                   (((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     | (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                    | (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                   | (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                  | (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                 | (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                | (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                               | (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                              | (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                             | (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                            | (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                           | (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                          | (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                         | (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                        | (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                       | (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                      >> 4U) | ((((
                                                   ((((((((((((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           | (0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                         | (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        | (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       | (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                      | (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                     | (0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (0xfU 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                                     >> 6U)), 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        << 0xfU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           << 0xeU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                              << 0xdU) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                 << 0xcU) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xfU 
                                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                       << 0xaU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                          << 9U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                             << 8U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 7U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                          >> 6U))));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__full_o = (IData)((((((((((((((((
                                                   (((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     | (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                    | (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                   | (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                  | (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                 | (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                | (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                               | (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                              | (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                             | (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                            | (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                           | (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                          | (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                         | (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                        | (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                       | (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                      >> 4U) | ((((
                                                   ((((((((((((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           | (0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                         | (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        | (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       | (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                      | (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                     | (0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (0xfU 
                                                                  & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U]), 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        << 0xfU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           << 0xeU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                              << 0xdU) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                 << 0xcU) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xfU 
                                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                       << 0xaU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                          << 9U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                             << 8U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 7U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__full_o = (IData)((((((((((((((((
                                                   (((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     | (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                    | (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                   | (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                  | (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                 | (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                | (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                               | (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                              | (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                             | (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                            | (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                           | (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                          | (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                         | (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                        | (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                       | (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                      >> 4U) | ((((
                                                   ((((((((((((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           | (0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                         | (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        | (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       | (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                      | (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                     | (0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (0xfU 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                                     >> 6U)), 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        << 0xfU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           << 0xeU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                              << 0xdU) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                 << 0xcU) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xfU 
                                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                       << 0xaU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                          << 9U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                             << 8U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 7U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                          >> 6U))));
}

VL_ATTR_COLD void Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0(Vrvfpgasim_axi_demux_id_counters__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5___stl_sequent__TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__full_o = (IData)((((((((((((((((
                                                   (((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     | (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                    | (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                   | (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                  | (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                 | (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                                | (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                               | (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                              | (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                             | (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                            | (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                           | (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                          | (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                         | (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                        | (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                       | (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)) 
                                      >> 4U) | ((((
                                                   ((((((((((((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             | (0xfU 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                            | (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           | (0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          | (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                         | (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        | (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       | (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                      | (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                     | (0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                 | (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__lookup_mst_select_o = (3U & (vlSelf->__PVT__mst_select_q 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (0xfU 
                                                                  & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U]), 1U))));
    vlSelf->__PVT__lookup_mst_select_occupied_o = (1U 
                                                   & ((((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                        << 0xfU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                           << 0xeU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                              << 0xdU) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                 << 0xcU) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xfU 
                                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                       << 0xaU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                          << 9U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                             << 8U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 7U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}
