// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_dpram64__S1000.h"

VL_INLINE_OPT void Vrvfpgasim_dpram64__S1000___nba_sequent__TOP__rvfpgasim__veerwolf__bootrom__ram__0(Vrvfpgasim_dpram64__S1000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S1000___nba_sequent__TOP__rvfpgasim__veerwolf__bootrom__ram__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__mem__v0;
    __Vdlyvdim0__mem__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v0;
    __Vdlyvlsb__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    __Vdlyvval__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    __Vdlyvset__mem__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v1;
    __Vdlyvdim0__mem__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v1;
    __Vdlyvlsb__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    __Vdlyvval__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    __Vdlyvset__mem__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v2;
    __Vdlyvdim0__mem__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v2;
    __Vdlyvlsb__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    __Vdlyvval__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    __Vdlyvset__mem__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v3;
    __Vdlyvdim0__mem__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v3;
    __Vdlyvlsb__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    __Vdlyvval__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    __Vdlyvset__mem__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v4;
    __Vdlyvdim0__mem__v4 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v4;
    __Vdlyvlsb__mem__v4 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v4;
    __Vdlyvval__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v4;
    __Vdlyvset__mem__v4 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v5;
    __Vdlyvdim0__mem__v5 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v5;
    __Vdlyvlsb__mem__v5 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v5;
    __Vdlyvval__mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v5;
    __Vdlyvset__mem__v5 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v6;
    __Vdlyvdim0__mem__v6 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v6;
    __Vdlyvlsb__mem__v6 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v6;
    __Vdlyvval__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v6;
    __Vdlyvset__mem__v6 = 0;
    SData/*8:0*/ __Vdlyvdim0__mem__v7;
    __Vdlyvdim0__mem__v7 = 0;
    CData/*5:0*/ __Vdlyvlsb__mem__v7;
    __Vdlyvlsb__mem__v7 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v7;
    __Vdlyvval__mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v7;
    __Vdlyvset__mem__v7 = 0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    __Vdlyvset__mem__v4 = 0U;
    __Vdlyvset__mem__v5 = 0U;
    __Vdlyvset__mem__v6 = 0U;
    __Vdlyvset__mem__v7 = 0U;
    if ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0))
          ? (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v0 = (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvlsb__mem__v0 = 0U;
        __Vdlyvdim0__mem__v0 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0))
          ? (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                        >> 8U));
        __Vdlyvset__mem__v1 = 1U;
        __Vdlyvlsb__mem__v1 = 8U;
        __Vdlyvdim0__mem__v1 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0))
          ? (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                        >> 0x10U));
        __Vdlyvset__mem__v2 = 1U;
        __Vdlyvlsb__mem__v2 = 0x10U;
        __Vdlyvdim0__mem__v2 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0))
          ? (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v3 = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                               >> 0x18U);
        __Vdlyvset__mem__v3 = 1U;
        __Vdlyvlsb__mem__v3 = 0x18U;
        __Vdlyvdim0__mem__v3 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
          ? (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v4 = (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat);
        __Vdlyvset__mem__v4 = 1U;
        __Vdlyvlsb__mem__v4 = 0x20U;
        __Vdlyvdim0__mem__v4 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
          ? (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v5 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                        >> 8U));
        __Vdlyvset__mem__v5 = 1U;
        __Vdlyvlsb__mem__v5 = 0x28U;
        __Vdlyvdim0__mem__v5 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
          ? (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v6 = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                        >> 0x10U));
        __Vdlyvset__mem__v6 = 1U;
        __Vdlyvlsb__mem__v6 = 0x30U;
        __Vdlyvdim0__mem__v6 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__VdfgTmp_h4716a6a3__0) 
          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
          ? (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel))
          : 0U)) {
        __Vdlyvval__mem__v7 = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                               >> 0x18U);
        __Vdlyvset__mem__v7 = 1U;
        __Vdlyvlsb__mem__v7 = 0x38U;
        __Vdlyvdim0__mem__v7 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    vlSelf->__PVT__dout = vlSelf->mem[(0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                 >> 1U))];
    if (__Vdlyvset__mem__v0) {
        vlSelf->mem[__Vdlyvdim0__mem__v0] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v0))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v0]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v0)) 
                                                << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
        vlSelf->mem[__Vdlyvdim0__mem__v1] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v1))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v1]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v1)) 
                                                << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
        vlSelf->mem[__Vdlyvdim0__mem__v2] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v2))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v2]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v2)) 
                                                << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
        vlSelf->mem[__Vdlyvdim0__mem__v3] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v3))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v3]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v3)) 
                                                << (IData)(__Vdlyvlsb__mem__v3)));
    }
    if (__Vdlyvset__mem__v4) {
        vlSelf->mem[__Vdlyvdim0__mem__v4] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v4))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v4]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v4)) 
                                                << (IData)(__Vdlyvlsb__mem__v4)));
    }
    if (__Vdlyvset__mem__v5) {
        vlSelf->mem[__Vdlyvdim0__mem__v5] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v5))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v5]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v5)) 
                                                << (IData)(__Vdlyvlsb__mem__v5)));
    }
    if (__Vdlyvset__mem__v6) {
        vlSelf->mem[__Vdlyvdim0__mem__v6] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v6))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v6]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v6)) 
                                                << (IData)(__Vdlyvlsb__mem__v6)));
    }
    if (__Vdlyvset__mem__v7) {
        vlSelf->mem[__Vdlyvdim0__mem__v7] = (((~ (0xffULL 
                                                  << (IData)(__Vdlyvlsb__mem__v7))) 
                                              & vlSelf->mem
                                              [__Vdlyvdim0__mem__v7]) 
                                             | ((QData)((IData)(__Vdlyvval__mem__v7)) 
                                                << (IData)(__Vdlyvlsb__mem__v7)));
    }
}
