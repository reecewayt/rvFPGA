// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_veerwolf_core__Cbebc20.h"

VL_ATTR_COLD void Vrvfpgasim_veerwolf_core__Cbebc20___stl_sequent__TOP__rvfpgasim__veerwolf__3(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___stl_sequent__TOP__rvfpgasim__veerwolf__3\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0;
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0;
    rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0 = 0;
    // Body
    vlSelf->__PVT__rvtop__DOT__core_rst_l = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(((((0x4040000000ULL == (0x1fc40000000ULL 
                                           & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_wr_en)) 
                    & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout))) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren 
        = (IData)(((((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_wr_en)) 
                   & (0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    if (vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0 
            = vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_wr_en;
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din;
    } else {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0 = 0U;
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__dmi_reg_rdata;
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__core_rst_l));
    if (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
        rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x18U)));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
        rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0 = 0U;
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
                  & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & (0x6000000000ULL == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                  ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (IData)(((0x1400000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h30f1bd03__0))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren 
        = (IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren 
        = (IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (IData)(((0x1000000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h30f1bd03__0))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0wr_access 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0) 
                  | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                        & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_wr_en) 
                            & (0xe400000000ULL == (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                           | ((0x3cU == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))) 
                              | (0x3dU == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))))))
                  ? (~ (IData)(rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg);
    if (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren) {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U)))));
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout;
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
            ? ((0xff00U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 8U)) 
               | ((0x78U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x15U)) << 3U)) 
                  | (((IData)((0x100000ULL == (0x3fc100000ULL 
                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                      << 2U) | (((IData)((0x80000ULL 
                                          == (0x3fc080000ULL 
                                              & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                 << 1U) | (1U & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x12U)))))))
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                       | (IData)((((8U == (0xff08U 
                                           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                   & (8U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                  & (~ (IData)((0U 
                                                != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))
                       ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr)
                       : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((1U & 
                                              (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | ((2U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                | ((4U 
                                                    & (- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                   | (8U 
                                                      & (- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)))))))))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg);
}
