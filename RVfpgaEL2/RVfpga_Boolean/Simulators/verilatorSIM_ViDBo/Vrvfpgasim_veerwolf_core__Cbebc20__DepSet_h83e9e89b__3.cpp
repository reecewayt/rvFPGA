// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_veerwolf_core__Cbebc20.h"

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__17(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__17\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
        = (0x82U | ((0xc0000U & ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))))) 
                                 << 0x12U)) | ((0x30000U 
                                                & ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))) 
                                                   << 0x10U)) 
                                               | ((0x3000U 
                                                   & ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail))) 
                                                      << 0xcU)) 
                                                  | ((0xc00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                                                         | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                         << 0xaU)) 
                                                     | (0x300U 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))) 
                                                           << 8U)))))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__18(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__18\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_halt_req 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
              >> 0x1fU));
    if ((8U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_halt_req = 0U;
        } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_halt_req = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_halt_req 
                    = (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                       >> 0x1fU);
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__20(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__20\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__DOT__sync_inst__DOT__sync_ff1__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)
            ? (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellinp__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__extintsrc_req)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__DOT__sync_inst__DOT__din_ff1));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__DOT__sync_inst__DOT__sync_ff1__DOT__genblk1__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)
            ? (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellinp__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__extintsrc_req)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__DOT__sync_inst__DOT__din_ff1));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__21(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__21\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__core_rst_l));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__22(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__22\n"); );
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT____Vcellinp__L2U_Plus1_0__DOT__sec_data_hi_rff__en;
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT____Vcellinp__L2U_Plus1_0__DOT__sec_data_hi_rff__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0;
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0 = 0;
    CData/*3:0*/ __VdfgTmp_h92f6a42d__0;
    __VdfgTmp_h92f6a42d__0 = 0;
    // Body
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_m) 
            & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                   >> 8U)) & (((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                      >> 2U)) != (1U 
                                                  & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                                                     >> 2U))) 
                              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                 >> 3U)))) & (0U != 
                                              (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hd85abb58__0) 
                                                << 6U) 
                                               | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m 
        = (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hd85abb58__0)) 
            & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0)) 
           | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hd85abb58__0)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hfe5e129b__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hd85abb58__0));
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h433c1fd3__0)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m)
            : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h5135c037__0)
                ? (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                : (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h2f518732__0)));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h43776e68__0)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m)
            : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h50929f7c__0)
                ? (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                : (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h2f518732__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_lo_any));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any)
            ? ((((QData)((IData)((0x27U == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                 << 0x26U) | (((QData)((IData)((0x26U 
                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                               << 0x25U) | (((QData)((IData)(
                                                             (0x25U 
                                                              == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                (0x24U 
                                                                 == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   (0x23U 
                                                                    == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                                                   << 0x22U) 
                                                  | (((QData)((IData)(
                                                                      (0x22U 
                                                                       == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                                                      << 0x21U) 
                                                     | (((QData)((IData)(
                                                                         (0x21U 
                                                                          == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((0x20U 
                                                                             == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                            << 0x1fU) 
                                                                           | (((0x1fU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                               << 0x1eU) 
                                                                              | (((0x1eU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x1aU) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x19U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x18U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x17U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x16U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x15U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x14U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x13U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x12U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x11U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0x10U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0xfU) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0xeU) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0xdU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0xcU) 
                                                                                | (((0xcU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0xbU) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 0xaU) 
                                                                                | (((0xaU 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 9U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 8U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 7U) 
                                                                                | (((7U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 6U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 5U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 4U) 
                                                                                | (((4U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 3U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 2U) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hc0a03e2f__0)))))))))))))))))))))))))))))))))))))))))) 
               ^ vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity);
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h5ff20c1e__0) 
            & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
           | (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0) 
               & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m))) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_he34d1276__0) 
                 & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                       >> 5U)))));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h5ff20c1e__0) 
            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
           | (((IData)(rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m)) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_he34d1276__0) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                    >> 5U))));
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT____Vcellinp__L2U_Plus1_0__DOT__sec_data_hi_rff__en 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                    >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h457ec2fe__0 
        = ((0xfcU & ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                              >> 0x20U)) << 2U)) | 
           (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                          >> 0x1dU))));
    __VdfgTmp_h92f6a42d__0 = ((0xeU & ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                                >> 4U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                                             >> 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = ((- (IData)((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__clear))))) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en)
               ? (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)
               : (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = ((- (IData)((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__clear))))) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en)
               ? (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din)
               : (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h44c149d5__0 
        = ((0xf0U & ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                              >> 8U)) << 4U)) | (IData)(__VdfgTmp_h92f6a42d__0));
    vlSelf->__VdfgTmp_h9d576958__0 = ((0x3fff800U & 
                                       ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                                 >> 0x10U)) 
                                        << 0xbU)) | 
                                      ((0x7f0U & ((IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                                           >> 8U)) 
                                                  << 4U)) 
                                       | (IData)(__VdfgTmp_h92f6a42d__0)));
    if (rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT____Vcellinp__L2U_Plus1_0__DOT__sec_data_hi_rff__en) {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                         >> 0x20U)) << 0x1aU) | vlSelf->__VdfgTmp_hc27b1f86__0);
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                         >> 0x20U)) << 0x1aU) | vlSelf->__VdfgTmp_h9d576958__0);
    } else {
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r;
    }
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__24(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__24\n"); );
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hede3a6f4__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hede3a6f4__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha4659c59__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha4659c59__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha9cfaf25__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha9cfaf25__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb610569__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb610569__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3f684237__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3f684237__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9304630d__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9304630d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha98c0383__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha98c0383__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb407bd9__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb407bd9__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h08cf040a__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h08cf040a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hd1fe76db__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hd1fe76db__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h37673b0b__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h37673b0b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdc397902__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdc397902__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb152878__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb152878__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h09a0878f__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h09a0878f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h223f48cf__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h223f48cf__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20fa62f0__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20fa62f0__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbef61f54__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbef61f54__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_headf7509__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_headf7509__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21e19cdf__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21e19cdf__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdb3b14e4__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdb3b14e4__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha0307b02__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha0307b02__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he2516409__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he2516409__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hea11fef1__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hea11fef1__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb7f88ca0__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb7f88ca0__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbde01966__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbde01966__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf7dfe3b4__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf7dfe3b4__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcd0212ca__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcd0212ca__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7049d26c__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7049d26c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h36db82a7__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h36db82a7__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7dbd94f8__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7dbd94f8__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc0458b0__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc0458b0__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h83e8fc33__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h83e8fc33__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21175758__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21175758__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20b286fb__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20b286fb__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcbb3cc81__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcbb3cc81__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf18b2c8d__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf18b2c8d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8581cf75__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8581cf75__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha70ca722__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha70ca722__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4308cd6c__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4308cd6c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he44f5600__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he44f5600__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc6cab9f2__0;
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc6cab9f2__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop = 0;
    QData/*47:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus = 0;
    CData/*1:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 0;
    CData/*2:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 0;
    CData/*7:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__en;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__en = 0;
    SData/*15:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0 = 0;
    SData/*15:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1f89e11a__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1f89e11a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h822333bb__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h822333bb__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h31170838__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h31170838__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h7975910d__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h7975910d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h95267e34__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h95267e34__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout = 0;
    SData/*11:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout = 0;
    IData/*23:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r = 0;
    SData/*9:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din = 0;
    SData/*11:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2e5bf2c7__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2e5bf2c7__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a6b66f7__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a6b66f7__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he09df4c3__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he09df4c3__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe8edf5f__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe8edf5f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h95b473ad__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h95b473ad__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h63b3b142__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h63b3b142__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h352533d9__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h352533d9__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c0e2a49__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c0e2a49__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6cd99827__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6cd99827__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5ac03e81__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5ac03e81__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0acb395__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0acb395__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d7f6e9d__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d7f6e9d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he84cce9f__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he84cce9f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc70ca98d__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc70ca98d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb89803e5__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb89803e5__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb1fde448__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb1fde448__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0;
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0 = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns = 0;
    CData/*2:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0 = 0;
    IData/*29:0*/ __VdfgTmp_h8a2b850a__0;
    __VdfgTmp_h8a2b850a__0 = 0;
    CData/*1:0*/ __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout;
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid;
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid = 0;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75cc2317__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_halt_req) 
                 | vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_halt_req)) 
                 & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xaU)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75cc2317__0) 
                  | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                     >> 1U)) & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | (IData)((4U == (0x104U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                >> 6U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req)) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d4192ea__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_core_empty 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__force_halt) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_idle_any) 
              & (IData)(((((0xc000U == (0xc000U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                           & (0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                          & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req))) 
                         & (~ ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 7U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                          >> 2U)))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 6U)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h95b473ad__0 
        = (1U & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                     >> 4U)) & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                    >> 6U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xbU) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_core_empty) 
                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken))) 
                 | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                    & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xdU))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok 
        = (1U & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout)) 
                 & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                         >> 4U)) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout) 
                                    >> 2U)) & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)) 
                                               & ((~ 
                                                   ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                    >> 2U)) 
                                                  | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout) 
                                                     >> 1U))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok 
        = (1U & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout)) 
                 & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                         >> 4U)) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                                    >> 2U)) & (((~ 
                                                 ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  >> 2U)) 
                                                | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                                                   >> 1U)) 
                                               & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)) 
                                                  & ((~ 
                                                      ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout) 
                                                       >> 3U)) 
                                                     | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse)))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
            >> 0xaU) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h95b473ad__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
            >> 9U) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h95b473ad__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (IData)((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                          >> 6U) & (0x30U == (0x70U 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb1fde448__0 
        = ((~ (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0xdU)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
                    & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2e5bf2c7__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb1fde448__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | ((~ ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f))) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r 
        = ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
             & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 3U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfb92fbe8__0))) 
            | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2e5bf2c7__0)) 
           & ((~ (IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))) 
              & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r 
        = ((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
                       & (0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r))))) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_ha39204b2__0) 
               << 3U) | ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r)) 
                         | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h02698941__0) 
                             << 1U) | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h12555ff2__0 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd3d821df__0) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                 >> 0xdU)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd3d821df__0) 
           & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                  >> 0xdU)) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r_raw) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
              & (~ (IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he09df4c3__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))) 
                 & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r) 
                    | ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 3U)) & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r) 
                     & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                        >> 8U)) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2ea5eab4__0) 
                                   | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       >> 2U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_exc_valid_rff__dout) 
            & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U))) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he09df4c3__0));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he09df4c3__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r 
        = ((~ (IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout 
                       >> 0x24U))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
           & (IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout 
                      >> 0x24U)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
           & (IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout 
                      >> 0x25U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r)) 
                 & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r)) 
                    & (IData)(((0U == (0x2010U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                               & (~ (IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_fence_i_r 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
            >> 0xcU) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r 
        = ((0xcU == (0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r 
        = ((9U == (0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r 
        = ((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
               >> 5U)) & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h69d38ece__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual 
        = (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                   & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt)))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6cd99827__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
           | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h74b76309__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt) 
           & ((~ (IData)((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                          >> 0x34U))) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8e86aff9__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
              & (IData)((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                         >> 0x34U))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372be7be__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h372ff751__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
              | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                 | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                     & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0xdU)) | (0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf4337678__0 
        = ((0xdU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
           | (0xeU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h8f319aff__0 
        = ((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
              >> 4U));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h207cf590__0 
        = ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
              >> 4U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r 
        = ((~ ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6cd99827__0) 
               | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                     | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout) 
                        >> 1U))))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r 
        = (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6cd99827__0) 
            | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
               | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r))) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
              & (~ (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xdU))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd8a95d88__0 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
            >> 6U) & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hd2601e1a__0 
        = ((IData)((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                    >> 0x37U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h275d00f0__0 
        = ((IData)((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                    >> 0x36U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hdf15f168__0 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
            >> 7U) & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
               >> 5U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_r) 
                         & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r)) 
                            & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                                   >> 3U)) | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_r)) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x600U 
                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout))))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r)) 
                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                    >> 1U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout) 
           & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r) 
                  | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 3U))) & (IData)((0U != (0x60U 
                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r)) 
            & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_h3d0a9415__0)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he09df4c3__0));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h76e18840__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
           | ((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hca7dc457__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r 
        = ((~ ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                >> 0x17U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
                             & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                >> 3U)))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_r));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_haf05045f__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                    >> 3U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd758139__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl_ns 
        = (0xfU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                    & (0xbccU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt_ns 
        = (0xfU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                    & (0xbc9U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel_ns 
        = (3U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                  & (0x7a0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                  ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                  : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7d3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7d6U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x305U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x7ffffffeU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                               >> 1U)) | (1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x340U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7f9U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0xe000U & ((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                               >> 0x10U)) << 0xdU)) 
               | ((0x1f80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                  | ((0x40U & ((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                   >> 6U)) << 6U)) 
                     | (0x3fU & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7c0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_in
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                         & (0xbc8U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                         ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                            >> 0xaU) : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x323U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x324U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x325U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x326U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x320U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x3eU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                         >> 1U)) | (1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f8U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7ceU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb03U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb83U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb04U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb84U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb05U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb85U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb06U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb86U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7cfU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x341U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x342U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7ffU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d4U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d7U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x343U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7a2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb00U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d5U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7a1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x300U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meihap_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xbcaU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb80U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb82U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb02U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7c6U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a6b66f7__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7c2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x304U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x38U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                         >> 0x19U)) | ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                              >> 9U)) 
                                       | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h04ebf252__0)))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_haf05045f__0) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd758139__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
               >> 5U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                         & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write) 
                            & (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                 >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                            >> 2U)) 
                               & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
                                  & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                        >> 2U))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
                ? ((0x200U & ((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                  >> 9U)) << 9U)) | 
                   (0x1ffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fU & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                     ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                         ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                         : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht))
                     : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r)
                ? vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9a0912f1__0
                : ((0xf8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect) 
                   | (0x7ffffffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                    + (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r)))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r) 
                  | (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                     >> 0x19U))) ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r)
                                     ? vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9a0912f1__0
                                     : ((0xf8000000U 
                                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                        | (0x7ffffffU 
                                           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                              + (1U 
                                                 & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                                    >> 0x19U))))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r) 
                  | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted))
                  ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r)
                      ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                      : ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb1fde448__0)
                          ? (~ (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0xeU)) : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs)))
                  : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs)));
    if (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r) {
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns 
            = (7U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r);
        vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((6U & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)) 
               | (1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns))));
    } else {
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns 
            = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0));
        vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout;
    }
    if (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r) {
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns 
            = (0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r);
        vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0xeU & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)) 
               | (1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns))));
    } else {
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns 
            = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1));
        vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout;
    }
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0) 
            & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h91d88907__0))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0) 
            & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h84644c9c__0))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0) 
            & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dbefe3a__0)))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1b901e86__0) 
            & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
               & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h907c1f29__0)))
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r)
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout 
                 + (1U & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)) 
                          >> 8U))) << 8U) | (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r)
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse)
                ? 0U : (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffb__dout 
                          + (1U & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout)) 
                                   >> 8U))) << 8U) 
                        | (0xffU & ((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r)
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse)
                ? 0U : (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffb__dout 
                          + (1U & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout)) 
                                   >> 8U))) << 8U) 
                        | (0xffU & ((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h91d88907__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h84644c9c__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0) 
           & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h354f5dc1__0) 
                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7dbefe3a__0))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a45b424__0) 
           & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h354f5dc1__0) 
                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h907c1f29__0))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meihap_r)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_claimid)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r) 
                  | (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                     >> 0x10U))) ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)
                                     ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                     : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r) 
            | (0xc000U == (0xc000U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout)))
            ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_read)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r)
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : (((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout 
                 + (1U & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)) 
                          >> 8U))) << 8U) | (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r) 
            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt)) 
           | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
            & (0x7c8U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                            >> 8U)) | ((0xc000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                   >> 6U)) 
                                       | (0x3fffU & 
                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                           >> 3U))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
           & (0x7c9U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
           & (0x7ccU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
           & (0x7b1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
           & (0x7b0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4f7c3daa__0) 
           & (0x7caU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    if (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r) {
        vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpmc_ff__din 
            = (1U & (~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                        >> 1U)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req 
            = (1U & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 1U)) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpmc_ff__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req = 0U;
    }
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_i0_commit_cmt) 
           & ((~ ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h6cd99827__0) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r) 
                     | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_reset) 
                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                           | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a6b66f7__0)))))) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 8U)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9a9880e9__0) 
           & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
               >> 0x16U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                            >> 5U)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9a9880e9__0) 
           & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
               >> 0x12U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                            >> 1U)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9a9880e9__0) 
           & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
               >> 0x11U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h9a9880e9__0) 
           & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
               >> 0x13U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                            >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in) 
                     | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r))
                     ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns
                     : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in) 
                            & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)) 
                               >> 8U))) ? (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
                                           >> 8U) : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                     | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok) 
                        | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse)))
                     ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns
                     : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                         | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok) 
                             & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout)) 
                                >> 8U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t0_pulse)))
                         ? (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
                            >> 8U) : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffb__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                     | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok) 
                        | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse)))
                     ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns
                     : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                         | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok) 
                             & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout)) 
                                >> 8U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_timer_t1_pulse)))
                         ? (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
                            >> 8U) : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffb__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h05eb7f5f__0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r)
                ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                   | ((0x100U & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 8U) | (0xffffff00U 
                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))) 
                      | (0xffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h807aea58__0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r)
                ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                   | ((0x100U & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 6U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                      | (0xffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h82cfa395__0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r)
                ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                   | ((0x100U & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 7U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                      | (0xffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h05cd589c__0) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r)
                ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)) 
                   | ((0x100U & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 5U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
                      | (0xffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable)
                     ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns
                     : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r) 
                         | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable) 
                            & (((IData)(1U) + (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)) 
                               >> 8U))) ? (__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
                                           >> 8U) : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r) 
                  | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[0U])
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r) 
                  | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r)
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[1U])
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r) 
                           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r) 
                              | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))
                           ? (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                           & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)) 
                                              & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r))))) 
                               & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                  >> 1U)) | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r))) 
                                              & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pwbc_ff__din) 
                                             | ((- (IData)(
                                                           ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                                            & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                                & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din)))
                           : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns 
        = ((0x70U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns)) 
           | (0xfU & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r)
                       ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                       : vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[2U])));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpmc_ff__din)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
            >> 0x14U) & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
            >> 0x15U) & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r 
        = (IData)((((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                        >> 4U)) & (0x20U == (0x10820U 
                                             & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
                   & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                           >> 0xbU)) & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready) 
                                           | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
                                              | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
                                                 | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready) 
                                                    | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                        >> 1U) 
                                                       | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected))))))))) 
                      & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                            >> 3U)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 8U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                             | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
                                | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready) 
                                   | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       >> 1U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__mhwakeup) 
                                                    & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready))))))) 
                            & (IData)((0x80U == (0x280U 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk4__DOT__dicad1_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r) 
                          | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
                    ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns)
                    : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk4__DOT__dicad1_ff__dout)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he84cce9f__0 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h63b3b142__0 
        = (1U & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 2U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume 
        = (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = ((~ (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0xbU)) & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                              >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_core_empty) 
                                        & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req)) 
                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken)))) 
                            | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h63b3b142__0)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
                       | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_fence_i_r) 
                          | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r) 
                             | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc) 
                                | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume) 
                                      | ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                          >> 6U) | 
                                         (0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))))))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & ((~ (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xbU)) & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       >> 9U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual)) 
                                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req) 
                                     | ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)) 
                                        & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 3U))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h352533d9__0 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 2U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff) 
                            | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r) 
                               | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                   >> 9U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt 
        = (((((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
              & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r))) 
             & (0U == (0x30000U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
            & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_reset))) 
           & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0xbU) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                           >> 3U)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                     >> 4U) & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                               & (~ (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xbU))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
           & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
              & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | (IData)((((4U == (0x104U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 9U)) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r))))) 
                 & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
                    & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)) 
                       & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_reset)) 
                          & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
            | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r) 
               | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                  | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi))))
            ? ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                ? ((0x3f80U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                   | (((0x40U & ((- (IData)((1U & (
                                                   (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1)) 
                                                      & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1)) 
                                                         & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))))) 
                                 << 4U)) | ((0x30U 
                                             & ((- (IData)(
                                                           ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                            & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1)) 
                                                               & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1)))))) 
                                                << 4U)) 
                                            | ((0x10U 
                                                & ((- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1)) 
                                                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1)))) 
                                                   << 4U)) 
                                               | (0x20U 
                                                  & ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))) 
                                                     << 4U))))) 
                      | (0xfU & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                : ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)
                    ? ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                   >> 2U)) | ((0x300U 
                                               & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                  >> 2U)) 
                                              | ((0x70U 
                                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                    | (1U 
                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                          >> 2U))))))
                    : ((0x3ffcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                           << 1U) | (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5ac03e81__0 
        = (1U & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                     & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                        | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r))) 
                    | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                       | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                           >> 9U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                     | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r) 
                                        | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r) 
                                           | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                               >> 9U) 
                                              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r))))))))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
           & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready)) 
              & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5ac03e81__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5ac03e81__0) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d7f6e9d__0 
        = ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhwakeup_ready)) 
           & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
              & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5ac03e81__0)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d7f6e9d__0));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0acb395__0 
        = ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d7f6e9d__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0acb395__0));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc70ca98d__0 
        = ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he0acb395__0));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he84cce9f__0) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                 & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc70ca98d__0))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
            | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                 & ((~ (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_he84cce9f__0)) 
                    & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc70ca98d__0)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r 
        = ((~ (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)))) 
           & ((0xbU & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
              | ((7U & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int)))) 
                 | ((3U & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int)))) 
                    | ((0x1dU & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)))) 
                       | ((0x1cU & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                          | ((0x1eU & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int)))) 
                             | ((2U & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                | ((0xbU & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r)))) 
                                   | ((1U & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r)))) 
                                      | ((3U & (- (IData)(
                                                          ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                                                           | (0U 
                                                              != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))))) 
                                         | ((4U & (- (IData)(
                                                             ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)) 
                                                              & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r))))) 
                                            | ((5U 
                                                & (- (IData)(
                                                             ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)) 
                                                              & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r))))) 
                                               | ((6U 
                                                   & (- (IData)(
                                                                ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r) 
                                                                 & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r))))) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r) 
                                                                   & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)))))))))))))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe8edf5f__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int) 
           | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4bf2014d__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
           | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe8edf5f__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int) 
           | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
              | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                    | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int) 
                       | (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hfe8edf5f__0))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c0e2a49__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                 & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h1a6b66f7__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r) 
           | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_fence_i_r) 
              | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc) 
                 | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                     & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                    | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r 
        = (1U & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 6U) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r) 
              | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r) 
                 | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_reset)))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | ((0x100U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                  << 6U) & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                 >> 6U)) 
                                             << 8U) 
                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               << 6U)))) 
                      | ((0x80U & (((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h63b3b142__0) 
                                    << 7U) | (0xffffff80U 
                                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 & (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                     & (~ 
                                                        ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                         >> 6U))) 
                                                    << 7U))))) 
                         | ((0x40U & (((IData)((0x204U 
                                                == 
                                                (0x204U 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                       << 6U) | (0xffffffc0U 
                                                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                       << 3U))))) 
                            | ((0x20U & ((0xffffffe0U 
                                          & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  >> 2U)) 
                                              << 5U) 
                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                << 3U))) 
                                         | (((IData)(
                                                     (0x180U 
                                                      == 
                                                      (0x180U 
                                                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                             << 5U) 
                                            | (0xffffffe0U 
                                               & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                     << 3U)))))) 
                               | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                   << 4U) | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                              << 3U) 
                                             | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                                 << 2U) 
                                                | (((((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                      & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h352533d9__0)) 
                                                     << 1U) 
                                                    | (0xfffffffeU 
                                                       & (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                             & ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c0e2a49__0) 
                                                                << 1U))))) 
                                                   | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                       & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h352533d9__0)) 
                                                      | ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                            & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h4c0e2a49__0)))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_h13df96af__0 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                    >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hca7dc457__0) 
                           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
                              | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r)))
                           ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hca7dc457__0))) 
                               & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pwbc_ff__din) 
                              | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                  & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din) 
                                 | (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)) 
                                                 & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r)))) 
                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                        >> 1U)) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r)) 
                                                                  & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                                                   & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout))))
                           : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause_ns 
        = (0xfU & (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))) 
                    & (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r))) 
                        & (IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout 
                                   >> 0x20U))) | ((1U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
                                                  | ((2U 
                                                      & (- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r)))) 
                                                     | ((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r))) 
                                                        & ((0U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                >> 0xdU)))
                                                            ? 9U
                                                            : 
                                                           (3U 
                                                            & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                               >> 0xdU)))))))) 
                   | (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)) 
                                   & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r)))) 
                       & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                      | ((- (IData)((1U & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r)) 
                                           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause)))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
            << 0xbU) | (((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                         << 0xaU) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                      << 9U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h78582334__0) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                                          << 1U) 
                                                         | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r))))))));
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb89803e5__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_r)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
              & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                 | (((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                         >> 0xfU)) & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r)) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_fence_i_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r) 
                 | ((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in 
        = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in 
        = ((0x3ffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                    & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                          & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                >> 4U)))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__btberrorfa_f__din 
        = ((8U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                   << 3U) & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_error_all) 
                              << 3U) | (0xfffffff8U 
                                        & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))))) 
           | (7U & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout) 
                         >> 3U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_error_all))
                     ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____VdfgTmp_h4524449d__0)
                         ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0final 
                            >> 8U) : ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))
                                       ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0final 
                                          >> 0x13U)
                                       : (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1final 
                                          >> 8U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in 
        = vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in 
        = ((0xfffffdU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in) 
           | (2U & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                     & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)) << 1U)) & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                                               << 1U))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in 
        = ((0xfffffeU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in) 
           | (1U & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                     & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 3U))) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
            >> 2U) & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_hb89f1b66__0) 
                        & (0U == (0x1f0U & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout))) 
                       | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_hb89f1b66__0) 
                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                          | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgExtracted_hbf100268__0) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_r))))) 
                      | ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_hb89f1b66__0) 
                             | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgExtracted_hbf100268__0))) 
                         & (((0x1fU & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                       >> 4U)) == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)) 
                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
           & (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h2e5bf2c7__0));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2e79e0__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                 & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                       >> 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____VdfgTmp_hddbd7e6f__0) 
              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
                     | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m) 
                         | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m)) 
                        | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                           >> 0xcU)))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exthaltff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)((0U != (0xeU & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)))) 
                   & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                      >> 4U)) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_h13df96af__0)))
            ? ((0x10U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))
                ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                   - (IData)(1U)) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r)
                                      ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                      : (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                         >> 3U)))) 
                                          & ((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x) 
                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout))) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                            >> 2U)))) 
                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x)) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                              >> 1U)))) 
                                               & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x)))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__excinfo_wb_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout)))
            ? (IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r))
            ? ((0xf0000000U & (- (IData)(((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb89803e5__0) 
                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type))))) 
               | ((0xf0000001U & (- (IData)(((IData)(rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hb89803e5__0) 
                                             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type))))) 
                  | (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))) 
                      & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
                          << 0x1fU) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r))) 
                     | (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)) 
                                     & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r)))) 
                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                        | ((- (IData)((1U & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r)) 
                                             & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause)))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
            | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r))
            ? (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pwbc_ff__din 
                   << 1U)) | (((- (IData)(((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                           & ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                                              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                    >> 0xfU)))))) 
                               & (((IData)(1U) + vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__pwbc_ff__din) 
                                  << 1U)) | (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                                              & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_illegal_inst) 
                                             | (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r))) 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout)) 
                                                | (((- (IData)(
                                                               ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                                                                & (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r)))) 
                                                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                     & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r)) 
                                                                        & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r)) 
                                                                           & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r)) 
                                                                              & ((~ 
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                                                                & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r)) 
                                                                                & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r)) 
                                                                                & ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r)) 
                                                                                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r))))))) 
                                                                                & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r)))))))))) 
                                                      & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval))))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
              & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r)) 
                 & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xcU) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_ctl_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)) 
                 & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                    >> 7U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
    if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up));
        }
    }
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
               >> 5U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7e26ef7b__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcbb382f1__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_writeff__dout) 
           & ((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_state_ff__dout)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb953235f__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_writeff__dout) 
           & ((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_state_ff__dout)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf9b2f2d9__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_writeff__dout) 
           & ((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_state_ff__dout)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdbd155fe__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_writeff__dout) 
           & ((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_state_ff__dout)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0d3527ed__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f 
        = (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_leak_one_r) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                 | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                       >> 4U))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4aae13bf__0 
        = (1U & (((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9f19b3b3__0 
        = (1U & (((1U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he45462e7__0 
        = (1U & (((2U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h408955cd__0 
        = (1U & (((3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h86693bf1__0 
        = (1U & (((4U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc27e2ed__0 
        = (1U & (((5U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1bd4711a__0 
        = (1U & (((6U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h757fb8b2__0 
        = (1U & (((7U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_habed93d8__0 
        = (1U & (((8U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h226e7dc5__0 
        = (1U & (((9U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h0d3c90fe__0 
        = (1U & (((0xaU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2630a27e__0 
        = (1U & (((0xbU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc55e139__0 
        = (1U & (((0xcU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc02bab52__0 
        = (1U & (((0xdU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h74375e49__0 
        = (1U & (((0xeU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb63ded48__0 
        = (1U & (((0xfU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8ae3504d__0 
        = (1U & (((0x10U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfcf763f7__0 
        = (1U & (((0x11U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1b7f13a7__0 
        = (1U & (((0x12U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he5690658__0 
        = (1U & (((0x13U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1247c715__0 
        = (1U & (((0x14U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h5fafb26a__0 
        = (1U & (((0x15U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hba9ca3fd__0 
        = (1U & (((0x16U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h65e88457__0 
        = (1U & (((0x17U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb188bb5__0 
        = (1U & (((0x18U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha4659c59__0 
        = (1U & (((0x19U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha9cfaf25__0 
        = (1U & (((0x1aU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb610569__0 
        = (1U & (((0x1bU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3f684237__0 
        = (1U & (((0x1cU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9304630d__0 
        = (1U & (((0x1dU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha98c0383__0 
        = (1U & (((0x1eU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb407bd9__0 
        = (1U & (((0x1fU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hd1fe76db__0 
        = (1U & (((0x20U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h37673b0b__0 
        = (1U & (((0x21U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdc397902__0 
        = (1U & (((0x22U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb152878__0 
        = (1U & (((0x23U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h09a0878f__0 
        = (1U & (((0x24U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h223f48cf__0 
        = (1U & (((0x25U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20fa62f0__0 
        = (1U & (((0x26U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbef61f54__0 
        = (1U & (((0x27U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_headf7509__0 
        = (1U & (((0x28U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21e19cdf__0 
        = (1U & (((0x29U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdb3b14e4__0 
        = (1U & (((0x2aU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha0307b02__0 
        = (1U & (((0x2bU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he2516409__0 
        = (1U & (((0x2cU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hea11fef1__0 
        = (1U & (((0x2dU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb7f88ca0__0 
        = (1U & (((0x2eU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbde01966__0 
        = (1U & (((0x2fU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf7dfe3b4__0 
        = (1U & (((0x30U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcd0212ca__0 
        = (1U & (((0x31U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7049d26c__0 
        = (1U & (((0x32U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h36db82a7__0 
        = (1U & (((0x33U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7dbd94f8__0 
        = (1U & (((0x34U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc0458b0__0 
        = (1U & (((0x35U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h83e8fc33__0 
        = (1U & (((0x36U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21175758__0 
        = (1U & (((0x37U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20b286fb__0 
        = (1U & (((0x38U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcbb3cc81__0 
        = (1U & (((0x39U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf18b2c8d__0 
        = (1U & (((0x3aU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8581cf75__0 
        = (1U & (((0x3bU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha70ca722__0 
        = (1U & (((0x3cU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4308cd6c__0 
        = (1U & (((0x3dU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he44f5600__0 
        = (1U & (((0x3eU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc6cab9f2__0 
        = (1U & (((0x3fU == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hede3a6f4__0 
        = (1U & (((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                      >> 5U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h08cf040a__0 
        = (1U & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                   >> 5U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                 & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                        >> 5U)) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7e26ef7b__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcbb382f1__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb953235f__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf9b2f2d9__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdbd155fe__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0d3527ed__0) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
              & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                  >> 6U) | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                             >> 2U) != (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                        >> 2U)))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f)) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
              >> 0x37U));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hede3a6f4__0) 
           | (2U == (0x102U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout))));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hede3a6f4__0) 
           | (4U == (0x104U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout))));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h08cf040a__0) 
           | (0x102U == (0x102U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout))));
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h08cf040a__0) 
           | (0x104U == (0x104U & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9bd02636__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h66afabca__0) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h1cda9961__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h46e15dcb__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h383fe5c4__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8151243__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hca66e30a__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa5fd610__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he08b9c75__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0b4c6b27__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h60b70197__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6632e58c__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0d642958__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h04028a17__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h71beaddd__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd0074ae3__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd39404fa__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h837d9a42__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb01223f7__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha3ab7378__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h47436024__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h786a3153__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5acdbe91__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5d60f20e__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2c33b463__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9be2cf88__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0 
        = ((- (IData)(((~ ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                    >> 0x22U)) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hbf0f7bba__0))) 
                       & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid)))) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__middle_of_bank) 
               << 1U) | (1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__middle_of_bank)))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data 
        = (((QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_btag)) 
            << 0x11U) | (QData)((IData)(((0x1ffe0U 
                                          & ((IData)(
                                                     (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                      >> 0x26U)) 
                                             << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                         >> 0x34U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                            >> 0x35U)) 
                                                   << 3U)) 
                                               | (((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x600000000ULL 
                                                             & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt))) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hbf0f7bba__0) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)) 
                                                        & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid))))))))));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h95267e34__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid) 
           & ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                          >> 0x20U))) & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                         >> 7U)));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid) 
           & (IData)((0x40000000000000ULL == (0x40002000000000ULL 
                                              & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4aae13bf__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9f19b3b3__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x12U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he45462e7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h408955cd__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x22U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h86693bf1__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x2aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc27e2ed__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x32U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1bd4711a__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x3aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h757fb8b2__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x42U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_habed93d8__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x4aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h226e7dc5__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x52U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h0d3c90fe__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x5aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2630a27e__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x62U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc55e139__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x6aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc02bab52__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x72U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h74375e49__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x7aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb63ded48__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x82U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8ae3504d__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x8aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfcf763f7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x92U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1b7f13a7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x9aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he5690658__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xa2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1247c715__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xaaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h5fafb26a__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xb2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hba9ca3fd__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xbaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h65e88457__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xc2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb188bb5__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xcaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha4659c59__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xd2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha9cfaf25__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xdaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb610569__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xe2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3f684237__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xeaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9304630d__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xf2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha98c0383__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xfaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb407bd9__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4aae13bf__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9f19b3b3__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x14U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he45462e7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h408955cd__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x24U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h86693bf1__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x2cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc27e2ed__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x34U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1bd4711a__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x3cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h757fb8b2__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x44U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_habed93d8__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x4cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h226e7dc5__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x54U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h0d3c90fe__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x5cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h2630a27e__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x64U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc55e139__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x6cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc02bab52__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x74U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h74375e49__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x7cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb63ded48__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x84U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8ae3504d__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x8cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfcf763f7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x94U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1b7f13a7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x9cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he5690658__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xa4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h1247c715__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xacU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h5fafb26a__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xb4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hba9ca3fd__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xbcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h65e88457__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xc4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb188bb5__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xccU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha4659c59__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xd4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha9cfaf25__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xdcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_heb610569__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xe4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h3f684237__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xecU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h9304630d__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xf4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha98c0383__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0xfcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb407bd9__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x102U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hd1fe76db__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x10aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h37673b0b__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x112U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdc397902__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x11aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb152878__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x122U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h09a0878f__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x12aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h223f48cf__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x132U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20fa62f0__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x13aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbef61f54__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x142U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_headf7509__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x14aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21e19cdf__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x152U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdb3b14e4__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x15aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha0307b02__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x162U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he2516409__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x16aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hea11fef1__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x172U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb7f88ca0__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x17aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbde01966__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x182U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf7dfe3b4__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x18aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcd0212ca__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x192U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7049d26c__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x19aU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h36db82a7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1a2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7dbd94f8__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1aaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc0458b0__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1b2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h83e8fc33__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1baU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21175758__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1c2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20b286fb__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1caU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcbb3cc81__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1d2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf18b2c8d__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1daU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8581cf75__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1e2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha70ca722__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1eaU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4308cd6c__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1f2U == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he44f5600__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1faU == (0x1faU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc6cab9f2__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x104U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hd1fe76db__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x10cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h37673b0b__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x114U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdc397902__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x11cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcb152878__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x124U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h09a0878f__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x12cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h223f48cf__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x134U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20fa62f0__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x13cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbef61f54__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x144U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_headf7509__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x14cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21e19cdf__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x154U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hdb3b14e4__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x15cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha0307b02__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x164U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he2516409__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x16cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hea11fef1__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x174U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hb7f88ca0__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x17cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbde01966__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x184U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf7dfe3b4__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x18cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcd0212ca__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x194U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7049d26c__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x19cU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h36db82a7__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1a4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h7dbd94f8__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1acU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hfc0458b0__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1b4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h83e8fc33__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1bcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h21175758__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1c4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h20b286fb__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1ccU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hcbb3cc81__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1d4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hf18b2c8d__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1dcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h8581cf75__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1e4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_ha70ca722__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1ecU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_h4308cd6c__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1f4U == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_he44f5600__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__clken) 
            & ((IData)((0x1fcU == (0x1fcU & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))) 
               | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hc6cab9f2__0)))
            ? (IData)(rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h406c2bb6__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h44b89545__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd115d6e5__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a773d2a__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h961afe91__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h47436024__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd0074ae3__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h60b70197__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8151243__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8fa1d989__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h786a3153__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd39404fa__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6632e58c__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hca66e30a__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h87fe36cc__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5acdbe91__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h837d9a42__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0d642958__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfa5fd610__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb639d2a6__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5d60f20e__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb01223f7__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h04028a17__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he08b9c75__0))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h07d8bfa7__0) 
                        | ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0) 
                           << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_hashed))))
                  ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h07d8bfa7__0)
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h0c39c853__0) 
                        | (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0) 
                            >> 1U) << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_hashed))))
                  ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h0c39c853__0)
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0 
        = (0xffffU & ((1U & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0)) 
                      << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_hashed)));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0 
        = (0xffffU & ((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en0) 
                             >> 1U)) << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_hashed)));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_btag 
            == vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout) 
           & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h95267e34__0));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_btag 
            == ((0x7fffffe0U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout) 
                | (0x1fU & ((IData)(1U) + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
           & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h95267e34__0));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                       >> 0x20U))) & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 0U;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 0U;
    if ((((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
          & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                        >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 0U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 1U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 1U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 2U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 2U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 3U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 3U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 4U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 4U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 5U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 5U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 6U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 6U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    if (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1)) 
         & (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
             & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                           >> 0x20U)))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used) 
                      >> 7U)))) {
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0 = 7U;
            __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__found1 = 1U;
        }
    }
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x10U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x20U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x80U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x100U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x400U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x800U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x1000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x2000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x4000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0)))
                  ? ((0x8000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                        | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x10U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x20U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                           | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x80U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x100U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x200U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x400U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                            | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x800U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x1000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x2000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x4000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1) 
                             | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0)))
                  ? ((0x8000U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_data2)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__en 
        = (((7U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((7U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__en 
        = (((6U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((6U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__en 
        = (((5U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((5U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__en 
        = (((4U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((4U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__en 
        = (((3U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((3U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__en 
        = (((2U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((2U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__en 
        = (((1U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((1U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__en 
        = (((0U == (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0)) 
            & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)) 
           | ((0U == (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__dout);
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__en)
            ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__dout);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en 
        = (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__7__KET____DOT__btb_fa__en) 
            << 7U) | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__6__KET____DOT__btb_fa__en) 
                       << 6U) | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__5__KET____DOT__btb_fa__en) 
                                  << 5U) | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__4__KET____DOT__btb_fa__en) 
                                             << 4U) 
                                            | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__3__KET____DOT__btb_fa__en) 
                                                << 3U) 
                                               | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__2__KET____DOT__btb_fa__en) 
                                                   << 2U) 
                                                  | (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__1__KET____DOT__btb_fa__en) 
                                                      << 1U) 
                                                     | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fa__DOT__BTB_FAFLOPS__BRA__0__KET____DOT__btb_fa__en))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f = 0ULL;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f = 0ULL;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 0U;
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((0x3ffffffU & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[1U] 
                             << 0xaU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0U] 
                                         >> 0x16U))) 
             == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                               >> 5U))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0U]) 
           & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en)));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0U] 
                      >> 0x11U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0U] 
                      >> 0x11U)) == (0x1fU & ((IData)(1U) 
                                              + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U] 
              >> 6U) == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                       >> 5U))) & (
                                                   vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[1U] 
                                                   >> 0x10U)) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 1U)));
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 0U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U] 
                      >> 1U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 0U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U] 
                      >> 1U)) == (0x1fU & ((IData)(1U) 
                                           + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((0x3ffffffU & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[4U] 
                             << 0xaU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[3U] 
                                         >> 0x16U))) 
             == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                               >> 5U))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[3U]) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 2U)));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 1U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[1U])) 
                                              >> 0x10U)))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[3U] 
                      >> 0x11U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 1U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[2U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[1U])) 
                                              >> 0x10U)))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[3U] 
                      >> 0x11U)) == (0x1fU & ((IData)(1U) 
                                              + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U] 
              >> 6U) == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                       >> 5U))) & (
                                                   vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[4U] 
                                                   >> 0x10U)) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 3U)));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 2U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[4U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[3U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U] 
                      >> 1U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 2U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[4U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[3U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U] 
                      >> 1U)) == (0x1fU & ((IData)(1U) 
                                           + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((0x3ffffffU & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[7U] 
                             << 0xaU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[6U] 
                                         >> 0x16U))) 
             == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                               >> 5U))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[6U]) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 4U)));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 3U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[4U])) 
                                              >> 0x10U)))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[6U] 
                      >> 0x11U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 3U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[5U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[4U])) 
                                              >> 0x10U)))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[6U] 
                      >> 0x11U)) == (0x1fU & ((IData)(1U) 
                                              + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U] 
              >> 6U) == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                       >> 5U))) & (
                                                   vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[7U] 
                                                   >> 0x10U)) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 5U)));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 4U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[6U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U] 
                      >> 1U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 4U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[6U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U] 
                      >> 1U)) == (0x1fU & ((IData)(1U) 
                                           + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((0x3ffffffU & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xaU] 
                             << 0xaU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[9U] 
                                         >> 0x16U))) 
             == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                               >> 5U))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[9U]) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 6U)));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 5U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[7U])) 
                                              >> 0x10U)))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[9U] 
                      >> 0x11U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 5U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[8U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[7U])) 
                                              >> 0x10U)))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[9U] 
                      >> 0x11U)) == (0x1fU & ((IData)(1U) 
                                              + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit 
        = ((((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU] 
              >> 6U) == (0x3ffffffU & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                       >> 5U))) & (
                                                   vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xaU] 
                                                   >> 0x10U)) 
           & (~ ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__wr0_en) 
                 >> 7U)));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 6U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xaU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[9U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU] 
                      >> 1U)) == (0x1fU & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xaU])) 
                                              >> 0x10U)))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_0) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index = 7U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0 = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 6U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xaU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[9U])))));
    }
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1 
        = (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU] 
                      >> 1U)) == (0x1fU & ((IData)(1U) 
                                           + vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
           & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__upper_hit));
    if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
            = (0xffffffffffffULL & ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f)
                                     ? __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
                                     : (((QData)((IData)(
                                                         vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xbU])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btbdata[0xaU])) 
                                              >> 0x10U)))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1)))) {
        if (__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__unnamedblk3__DOT__unnamedblk4__DOT__offset_1) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index = 7U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1 = 1U;
        }
    }
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h822333bb__0 
        = (IData)((0ULL != (6ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f 
        = ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1) 
             << 1U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0)) 
           & (1U | (2U & (((~ (IData)((7U == (7U & 
                                              (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                               >> 2U))))) 
                           | (0U != (3U & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
                          << 1U))));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h31170838__0 
        = (IData)((0ULL != (6ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f)));
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid 
        = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f;
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout 
        = (3U & ((1U & ((IData)(__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid) 
                        >> 1U)) + (1U & (IData)(__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__num_valids 
        = __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_valid_f 
        = ((~ (- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                >> 3U))))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_way_f 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f) 
           | (((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_p1_f) 
               << 1U) | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_mp_collision_f)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hist1_f 
        = ((((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h822333bb__0) 
             << 1U) | (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h31170838__0)) 
           | ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f)) 
              | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                       >> 1U))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0 
        = (1U & (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h31170838__0) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                     >> 1U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f 
        = ((0U != ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hist1_f))) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 7U) & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                             >> 4U)) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                           >> 3U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__final_h 
        = (0U != ((2U & (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0)) 
                          & (IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f) 
                                      >> 1U) & ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h822333bb__0) 
                                                | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f) 
                                                   >> 1U))))) 
                         << 1U)) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f 
        = (0xffffU & (((- (IData)((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0))))) 
                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                                  >> 1U))) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0))) 
                                              & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                                                         >> 1U)))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_usedf__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & (((0xffU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used)) 
                     | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f) 
                        | ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid_write) 
                           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb))))
                     ? (((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f) 
                                           >> 1U)))) 
                         & ((IData)(1U) << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit1_index))) 
                        | (((- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_valid_f)))) 
                            & ((IData)(1U) << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__hit0_index))) 
                           | (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)) 
                                           & (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h60dd3aaa__0)))) 
                               & ((IData)(1U) << (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_fa_wr_addr0))) 
                              | (((- (IData)(((~ (IData)(
                                                         (0xffU 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used)))) 
                                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb)))) 
                                  & ((~ ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__genblk1__DOT__genblk1__DOT__btberrorfa_f__dout)))) 
                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used))) 
                                 | ((~ (- (IData)((
                                                   (0xffU 
                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used)) 
                                                   | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb))))) 
                                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used))))))
                     : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fa__DOT__btb_used)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en 
        = (IData)(((2U == (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f))) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h7975910d__0 
        = (IData)((1U == (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus 
        = (1U & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                     >> 3U)) & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0)) 
                                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f 
        = ((~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                 >> 3U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en)
            ? vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h7975910d__0) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1f89e11a__0 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h7975910d__0) 
           & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout);
    __VdfgTmp_h8a2b850a__0 = (0x3fffffffU & (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus))) 
                                              & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                                  >> 1U))) 
                                             | (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f))) 
                                                 & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__faddrf_ff__dout) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f) 
                                                                   | (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus)))))) 
                                                   & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                                      >> 1U)))));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0 
        = ((0xffeU & (__VdfgTmp_h8a2b850a__0 << 1U)) 
           | (1U & (((vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0)) 
                     | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5b48592d__0)) 
                        & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
                    ^ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                       >> 3U))));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout 
        = (1U & (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                  + (1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                              >> 3U)))) >> 0xcU));
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout 
        = (1U & (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                  + (0xfffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                               >> 4U))) >> 0xcU));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__0__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((~ (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en)) 
                  & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))))
            ? vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout
            : (((- (IData)((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en))) 
                & (1U | ((0xffffe000U & ((0xffffe000U 
                                          & (((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout))))) 
                                              << 0xdU) 
                                             & (__VdfgTmp_h8a2b850a__0 
                                                << 2U))) 
                                         | (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout))) 
                                             & ((IData)(1U) 
                                                + (__VdfgTmp_h8a2b850a__0 
                                                   >> 0xbU))) 
                                            << 0xdU))) 
                         | (0x1ffeU & (((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                                        + (1U & (~ 
                                                 ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                  >> 3U)))) 
                                       << 1U))))) | 
               ((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_btb_target_f 
        = (0x7fffffffU & (((- (IData)(((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1f89e11a__0) 
                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f)))) 
                           & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout 
                              >> 1U)) | ((- (IData)(
                                                    ((~ (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1f89e11a__0)) 
                                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f)))) 
                                         & ((0x7ffff000U 
                                             & ((0xfffff000U 
                                                 & (((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                                      >> 0xfU) 
                                                                     ^ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)))))) 
                                                     << 0xcU) 
                                                    & (__VdfgTmp_h8a2b850a__0 
                                                       << 1U))) 
                                                | ((((- (IData)(
                                                                ((~ 
                                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                                   >> 0xfU)) 
                                                                 & (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)))) 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (__VdfgTmp_h8a2b850a__0 
                                                         >> 0xbU))) 
                                                    | ((- (IData)(
                                                                  ((~ (IData)(__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)) 
                                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                                      >> 0xfU)))) 
                                                       & ((__VdfgTmp_h8a2b850a__0 
                                                           >> 0xbU) 
                                                          - (IData)(1U)))) 
                                                   << 0xcU))) 
                                            | (0xfffU 
                                               & ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__30(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__30\n"); );
    // Body
    vlSelf->__PVT__timer_ptc__DOT__hrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_hrc));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__31(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__31\n"); );
    // Body
    vlSelf->__PVT__timer_ptc__DOT__lrc_match = ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                & (vlSelf->__PVT__timer_ptc__DOT__rptc_cntr 
                                                   == vlSelf->__PVT__timer_ptc__DOT__rptc_lrc));
    vlSelf->__PVT__timer_ptc__DOT__restart = (1U & 
                                              (((~ 
                                                 ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                  >> 4U)) 
                                                & (IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match)) 
                                               | ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                  >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__33(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__33\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0 = 0;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hb43a7631__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 0U;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
        = ((0U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                  & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 1U;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x38U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 2U;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x1c0U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 3U;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0xe00U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 0U;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
        = ((0U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                   & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                     & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 1U;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x38U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                 & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 2U;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x1c0U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                 & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 3U;
        __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0xe00U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                 & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout) 
           & (IData)(((0x20U == (0x28U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout))) 
                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h112dc658__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((8U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                    ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                        | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)) 
                       >> 3U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                 >> 3U)) << 3U)) | 
           ((4U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                     ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                         | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)) 
                        >> 2U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                  >> 2U)) << 2U)) | 
            ((2U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                      ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)) 
                         >> 1U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 1U)) << 1U)) 
             | (1U & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                       ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h39b0aba9__0))
                       : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8346d48b__0)
              : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                 >> 0x18U)) << 0x18U) | ((0xff0000U 
                                          & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                                               ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbc226eea__0)
                                               : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                                                  ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1fe9562c__0)
                                                  : 
                                                 (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                                                   ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5f0c309__0)
                                                   : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m)) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                 >> 6U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
              & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                  >> 6U) | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0) 
                            & ((~ ((~ ((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                        ^ vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m) 
                                       >> 2U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m))) 
                               | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                  >> 6U))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h456537d4__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 4U) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h900baa1a__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 5U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h97f76bbc__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 6U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h6a0b589b__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 7U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 3U)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo 
        = (((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd758139__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb33421e7__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9bd02636__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h456537d4__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h7d43dcc3__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h1cda9961__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h900baa1a__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc1945c92__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h46e15dcb__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h97f76bbc__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h77221d4e__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h383fe5c4__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h6a0b589b__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 4U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 5U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 6U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 7U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4473a500__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4456756d__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h447a7b06__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ab6fc9e__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    if (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = 0U;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 5U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                ? vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r);
        if (rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)));
        } else if (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0) 
                           >> 4U));
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
        }
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                  ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8346d48b__0)
                  : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                      ? (IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                 >> 0x38U)) : (IData)(
                                                      (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                       >> 0x18U)))) 
                << 0x18U) | ((0xff0000U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbc226eea__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                                 ? (IData)(
                                                           (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                            >> 0x10U)))) 
                                           << 0x10U)) 
                             | ((0xff00U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                                              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1fe9562c__0)
                                              : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                                  ? (IData)(
                                                            (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                             >> 0x28U))
                                                  : (IData)(
                                                            (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                             >> 8U)))) 
                                            << 8U)) 
                                | (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5f0c309__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                                 ? (IData)(
                                                           (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                            >> 0x20U))
                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h01dc62ea__0)))))));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in 
            = (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer) 
                     + (7U > (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
           & (((~ (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)) 
               & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
                  | (7U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer)))) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect) 
                       | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
                          | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                             >> 2U)))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h60f4c6f9__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha7c3cdf6__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha68d3d27__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha6aeecd0__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new 
        = ((~ (((~ (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en)) 
                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld)) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h50523d1d__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5076afb6__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h518a9297__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h47a729b3__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hed81d86f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h41cc99ea__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3ae99536__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h241aa5c8__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ebe85b0__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5eadc0__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h96689762__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd886501__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9ee2d23f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h916b753f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haba9c746__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6e5c7487__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1bb20335__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h63f2cf69__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3df5a57f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd83f0c28__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__34(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__34\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_reset)
            ? 0x40000000U : (0x7fffffffU & (((- (IData)(
                                                        ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r)))) 
                                             & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din) 
                                            | (((- (IData)(
                                                           ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
                                                               & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r)) 
                                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)))))) 
                                                & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout) 
                                               | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                       ? 
                                                      (vlSelf->__PVT__nmi_vec 
                                                       >> 1U)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)
                                                        ? 
                                                       ((0x7ffffffeU 
                                                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                        + 
                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                                         << 1U))
                                                        : 
                                                       (0x7ffffffeU 
                                                        & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)))) 
                                                  | ((0x7ffffffeU 
                                                      & ((- (IData)(
                                                                    ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_hca7dc457__0)))) 
                                                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)) 
                                                     | (((- (IData)(
                                                                    ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)))) 
                                                         & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout) 
                                                        | (((- (IData)(
                                                                       ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                            & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout) 
                                                           | ((- (IData)(
                                                                         ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume)))) 
                                                              & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__flush_lower_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)
            ? vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout);
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__36(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__36\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0 = 0;
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable 
        = ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
            >> 0x12U) & ((~ (IData)((0x20U == (0x60U 
                                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))))) 
                         & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)) 
                            & (7U != ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))
                                       ? 0U : (7U & 
                                               ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw) 
                                                >> 2U)))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)) 
            & (0x40000U == (0x48000U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result 
        = ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren))) 
           & (((- (IData)((1U & ((~ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                     >> 0xfU)) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel)))))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
              | (((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xfU)))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)) 
                 | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case 
        = (((0U == (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                    >> 4U)) & (IData)(((0ULL == (0xfffffff0ULL 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                       & (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0)))) 
           | ((0U == vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
              & (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case) 
                 | (0x20U == (0x7fU & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_in 
        = (((- (IData)((1U & (~ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                 >> 0x12U))))) & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff 
                                                   << 4U) 
                                                  | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
           | (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case))) 
               & ((((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                >> 1U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h43b2e07d__0)) 
                   << 3U) | (((((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h43b2e07d__0)) 
                               | (((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                               >> 1U))) 
                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h43aed07a__0)) 
                                  | ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                 >> 2U))) 
                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_he831bb6c__0)))) 
                              << 2U) | (((((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                           & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h43aed07a__0)) 
                                          | (((~ (IData)(
                                                         (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 1U))) 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9df919a6__0)) 
                                             | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdaf921e2__0) 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h01c76619__0)) 
                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfd288ef7__0) 
                                                    & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9ff1af68__0)) 
                                                   | (((~ (IData)(
                                                                  (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                   >> 2U))) 
                                                       & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h584aae60__0)) 
                                                      | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_he831bb6c__0)) 
                                                         | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_he831bb6c__0) 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h803e63df__0)) 
                                                            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h68536b28__0) 
                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h77611673__0)) 
                                                               | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc18a20fd__0) 
                                                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h08f784ca__0)))))))))) 
                                         << 1U) | ((IData)(
                                                           ((6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                            & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf45b05df__0))) 
                                                   | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h820343ea__0) 
                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                          & ((~ (IData)(
                                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                         >> 3U))) 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h26b862cd__0)))) 
                                                      | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdaf511df__0) 
                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h01c76619__0)) 
                                                         | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9df919a6__0)) 
                                                            | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                & ((~ (IData)(
                                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                               >> 3U))) 
                                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h748406c9__0))) 
                                                               | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h810a6a4b__0) 
                                                                   & ((~ 
                                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                        >> 1U)) 
                                                                      & ((~ (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 3U))) 
                                                                         & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9ff1af68__0)))) 
                                                                  | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h584aae60__0)) 
                                                                     | (((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                          >> 3U) 
                                                                         & ((~ (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 2U))) 
                                                                            & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h01c76619__0))) 
                                                                        | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfd288ef7__0) 
                                                                            & (IData)(
                                                                                (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                                                           | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h584aae60__0) 
                                                                               & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h803e63df__0)) 
                                                                              | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h810a6a4b__0) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf45b05df__0)) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h820343ea__0) 
                                                                                & ((~ 
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (5ULL 
                                                                                == 
                                                                                (0xdULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))) 
                                                                                | ((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h8aa76502__0))) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6d1a5885__0) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h01c76619__0)) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h68536b28__0) 
                                                                                & (IData)(
                                                                                (0ULL 
                                                                                == 
                                                                                (5ULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdca56381__0) 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h08f784ca__0))) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6d1a5885__0) 
                                                                                & (IData)(
                                                                                (8ULL 
                                                                                == 
                                                                                (0xcULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h68536b28__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h748406c9__0))) 
                                                                                | (((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                >> 3U) 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h748406c9__0))) 
                                                                                | ((IData)(
                                                                                (((8U 
                                                                                == 
                                                                                (0xaU 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                                                & (4ULL 
                                                                                == 
                                                                                (0xcULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h26b862cd__0))) 
                                                                                | (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9d70dc20__0)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9d70dc20__0)) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6d1a5885__0) 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                & (IData)(
                                                                                (8ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h820343ea__0) 
                                                                                & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                >> 1U) 
                                                                                & (IData)(
                                                                                (2ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))) 
                                                                                | (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h68536b28__0) 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 2U))) 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                                                | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc18a20fd__0) 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 3U))))))))))))))))))))))))))))))))) 
              | (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__37(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__37\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                     << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)) 
                    + ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                       << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                   + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 3U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 6U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 9U)))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__38(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__38\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0 = 0;
    // Body
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7e26ef7b__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcbb382f1__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb953235f__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf9b2f2d9__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdbd155fe__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h10aa293b__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h66afabca__0) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h95766e1f__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc32a80fd__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb03712be__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ad4241c__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4d2574b7__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbd2361c1__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha6b7be9a__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c0b6ff3__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1cf97378__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h70439ff4__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7b26c913__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fb63122__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h10251181__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6080a891__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0fd48eee__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf0068349__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he92e42d0__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcfec33fa__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcee62b87__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha2dee286__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf0068349__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fb63122__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c0b6ff3__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ad4241c__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1b1c48ed__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he92e42d0__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h10251181__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1cf97378__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4d2574b7__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9aa5935c__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcfec33fa__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6080a891__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h70439ff4__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbd2361c1__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22122086__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcee62b87__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0fd48eee__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7b26c913__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha6b7be9a__0))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__39(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__39\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0;
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0 = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi = 0;
    // Body
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi 
        = (((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h60f4c6f9__0))) 
                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                        | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))
                     : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha7c3cdf6__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 8U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                          >> 8U))) : 
                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                     >> 8U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha68d3d27__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x10U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x10U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                        >> 0x10U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha6aeecd0__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x18U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x18U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                        >> 0x18U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h99c9cf96__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 4U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ec2878b__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 5U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9d076129__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 6U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h84e39608__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 7U));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 4U));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 5U));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 6U));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 7U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ef67f38__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h10aa293b__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h99c9cf96__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_ha9bed822__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h95766e1f__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ec2878b__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h559c6379__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc32a80fd__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9d076129__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h23166f29__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb03712be__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h84e39608__0));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h454cebc6__0) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9a79f2d7__0) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9b3ac208__0) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0));
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9be695fd__0) 
           | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0 
        = (1U & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h09bcbe2b__0 
        = (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h454cebc6__0))) 
                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                        | ((- (IData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))
                     : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0 
        = (1U & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e5b19af__0 
        = (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9a79f2d7__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 8U)) | ((- (IData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                          >> 8U))) : 
                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                     >> 8U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0 
        = (1U & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e74faf0__0 
        = (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9b3ac208__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x10U)) | ((- (IData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x10U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                        >> 0x10U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e2c9178__0 
        = (0xffU & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9be695fd__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x18U)) | ((- (IData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x18U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                        >> 0x18U)));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__41(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__41\n"); );
    // Body
    vlSelf->__PVT__timer_ptc__DOT__int_match = (((IData)(vlSelf->__PVT__timer_ptc__DOT__lrc_match) 
                                                 | (IData)(vlSelf->__PVT__timer_ptc__DOT__hrc_match)) 
                                                & ((IData)(vlSelf->__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                   >> 5U));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__43(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___nba_comb__TOP__rvfpgasim__veerwolf__43\n"); );
    // Init
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata;
    __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata = 0;
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0;
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0 = 0;
    // Body
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0)
              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0)
              : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                  ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                     >> 0x18U) : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h42029437__0)))) 
            << 0x18U) | ((0xff0000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0)
                                         ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0)
                                         : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                                           >> 0x15U))))) 
                                       << 0x10U)) | 
                         ((0xff00U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0)
                                        ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0)
                                        : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                            ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                               >> 8U)
                                            : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                               & (vlSelf->__VdfgTmp_hc27b1f86__0 
                                                  >> 8U)))) 
                                      << 8U)) | (0xffU 
                                                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0)
                                                     ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                      ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                      : 
                                                     ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h426ebbee__0))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_m 
        = (IData)(VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                            (0xffU 
                                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0)
                                                                 ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e2c9178__0)
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                  ? 
                                                                 (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                  >> 0x18U)
                                                                  : 
                                                                 ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi 
                                                                             >> 0x18U)))))))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0)
                                                                    ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e74faf0__0)
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                     ? 
                                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                     >> 0x10U)
                                                                     : 
                                                                    ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi 
                                                                                >> 0x10U)))))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0)
                                                                       ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e5b19af__0)
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                        ? 
                                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                        >> 8U)
                                                                        : 
                                                                       ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi 
                                                                                >> 8U)))))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0)
                                                                          ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h09bcbe2b__0)
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                           ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                                           : 
                                                                          ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0)
                                                                          ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0)
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                           ? 
                                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                           >> 0x18U)
                                                                           : 
                                                                          ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo 
                                                                                >> 0x18U))))) 
                                                                        << 0x18U) 
                                                                       | ((0xff0000U 
                                                                           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0)
                                                                                ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0)
                                                                                : 
                                                                               ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                                 ? 
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo 
                                                                                >> 0x10U))))) 
                                                                              << 0x10U)) 
                                                                          | ((0xff00U 
                                                                              & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0)
                                                                                 ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                                 ? 
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo 
                                                                                >> 8U))))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0)
                                                                                 ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                                 ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                                                 : 
                                                                                ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo)))))))))))))), 
                                VL_SHIFTL_III(32,32,32, 
                                              (3U & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m), 3U)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = (((QData)((IData)((0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0)
                                       ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e2c9178__0)
                                       : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                           ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                              >> 0x18U)
                                           : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h457ec2fe__0))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e74faf0__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                 ? 
                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                 >> 0x10U)
                                                 : 
                                                ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                 & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                                            >> 0x15U)))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0)
                                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e5b19af__0)
                                                             : 
                                                            ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                              ? 
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                              >> 8U)
                                                              : 
                                                             ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                              & (vlSelf->__VdfgTmp_h9d576958__0 
                                                                 >> 8U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0)
                                                              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h09bcbe2b__0)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                               ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                               : 
                                                              ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                               & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h44c149d5__0))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_ld_data_corr_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e8859bc__0) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____VdfgTmp_h14c3c9ec__0)) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                     >> 4U))) ? (IData)(VL_SHIFTR_QQI(64,64,32, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m, 
                                                      VL_SHIFTL_III(32,32,32, 
                                                                    (3U 
                                                                     & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m), 3U)))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_corr_r);
    __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata = 
        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)
          ? __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m
          : (((QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0)) 
              << 0x20U) | (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0))));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hc5f2ac89__0) 
                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb4ba5f9f__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)))
                ? (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout))
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h433c1fd3__0)
                    ? __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h5135c037__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr)) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hc5f2ac89__0) 
                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb00f6e1c__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din)))
                ? VL_SHIFTR_QQI(64,64,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr, 0x20U)
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h43776e68__0)
                    ? __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h50929f7c__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
}
