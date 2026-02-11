// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_rvfpgasim.h"

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__3(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__3\n"); );
    // Body
    vlSelf->o_jtag_tdo = (1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__5(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__5\n"); );
    // Body
    vlSelf->__PVT__dmi_reg_en = ((IData)(vlSelf->__PVT__dmi_reg_wr_en) 
                                 | (2U == (6U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden))));
}
