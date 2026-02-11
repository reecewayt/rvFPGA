// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000.h"

VL_ATTR_COLD void Vrvfpgasim_wb_mem_wrapper__M1000___ctor_var_reset(Vrvfpgasim_wb_mem_wrapper__M1000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_wb_adr = VL_RAND_RESET_I(10);
    vlSelf->__PVT__i_wb_dat = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_wb_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_wb_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_wb_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_wb_stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_wb_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_wb_rdt = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h4716a6a3__0 = 0;
}
