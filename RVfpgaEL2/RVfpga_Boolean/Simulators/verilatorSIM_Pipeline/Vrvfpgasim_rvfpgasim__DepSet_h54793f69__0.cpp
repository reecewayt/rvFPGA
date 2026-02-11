// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_rvfpgasim.h"

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__1(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___nba_sequent__TOP__rvfpgasim__1\n"); );
    // Body
    if (vlSelf->__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden 
            = ((6U & ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                      << 1U)) | (1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
        vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren 
            = ((6U & ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                      << 1U)) | (1U & (IData)((vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 1U))));
    } else {
        vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = 0U;
        vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = 0U;
    }
    vlSelf->__PVT__dmi_reg_wr_en = (IData)((2U == (6U 
                                                   & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren))));
}

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
