// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim_veerwolf_core__Cbebc20.h"

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__0(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__0\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] = 0x3020100U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] = 0x7060504U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
        = (0xffff08U | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                        << 0x18U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id) 
            << 0x18U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id) 
                          << 0x10U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id) 
                                        << 8U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
        = (0xffffff00U & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U]);
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__1(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__1\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
        = ((0xffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U]) 
           | (0xffff0000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                              << 0x18U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                           << 0x10U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
        = ((0xffff0000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U]) 
           | (0xffffU & ((0xffffU & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id)) 
                         | ((0xffffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                                        >> 8U)) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                                   >> 0x10U)))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__2(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__2\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
        = ((0xffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U]) 
           | (0xffffff00U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                              << 0x10U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                                           << 8U))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__3(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__3\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
        = ((0xffff0000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU]) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__4(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__4\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
        = ((0xffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U]) 
           | (0xff000000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                              << 0x1cU) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                           << 0x18U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
        = ((0xffffff00U & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U]) 
           | (0xffffffU & ((0xffffffU & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority)) 
                           | ((0xffffffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                                            >> 4U)) 
                              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                 >> 8U)))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__5(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__5\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
        = ((0xffff000fU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U]) 
           | (0xfffffff0U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                              << 8U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                                        << 4U))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__6(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__6\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
        = ((0xff00ffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U]) 
           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
              << 0x10U));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__7(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__7\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next 
        = ((0x7ffffffeU & (((IData)(1U) + (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                           >> 1U)) 
                           << 1U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next_1));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next_1 
        = (1U & ((~ ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next 
                      ^ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout) 
                     >> 5U)) & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__8(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__8\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in = 0;
    QData/*34:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out = 0;
    QData/*35:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out = 0;
    QData/*36:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out = 0;
    QData/*37:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out = 0;
    CData/*4:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_b_cls__cls;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_b_cls__cls = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfa89c1b6__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfa89c1b6__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hbf8e3122__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hbf8e3122__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_habd72583__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_habd72583__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h5d9b4887__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h5d9b4887__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_ha28e0d69__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_ha28e0d69__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe663b40__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe663b40__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf1dda453__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf1dda453__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6c5bb05f__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6c5bb05f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h57c60478__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h57c60478__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2196330b__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2196330b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf69bc249__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf69bc249__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h33f7bca1__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h33f7bca1__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
        = (((QData)((IData)((1U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                           >> 0x20U))))) 
            << 0x25U) | (((QData)((IData)((1U & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 0x20U))))) 
                          << 0x24U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                    >> 0x20U))))) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                     >> 0x20U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                        >> 0x20U))))) 
                                            << 0x21U) 
                                           | vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_b_ff__dout)))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h01c76619__0 
        = (IData)((0ULL == (3ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h803e63df__0 
        = (IData)((4ULL == (6ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h08f784ca__0 
        = (IData)((4ULL == (0xcULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h748406c9__0 
        = (IData)((0ULL == (6ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_he831bb6c__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                       >> 3U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6d1a5885__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfd288ef7__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                       >> 3U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h820343ea__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h584aae60__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                       >> 3U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdca56381__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9d70dc20__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc18a20fd__0) 
           & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                      >> 3U)));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_b_cls__cls 
        = (0x1fU & ((1U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   >> 0x20U))) ? ((1U 
                                                   & (- (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                             >> 0x1dU))))))) 
                                                  | ((2U 
                                                      & (- (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x1cU))))))) 
                                                     | ((3U 
                                                         & (- (IData)(
                                                                      (0x1eU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x1bU))))))) 
                                                        | ((4U 
                                                            & (- (IData)(
                                                                         (0x3eU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x1aU))))))) 
                                                           | ((5U 
                                                               & (- (IData)(
                                                                            (0x7eU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x19U))))))) 
                                                              | ((6U 
                                                                  & (- (IData)(
                                                                               (0xfeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x18U))))))) 
                                                                 | ((7U 
                                                                     & (- (IData)(
                                                                                (0x1feU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x17U))))))) 
                                                                    | ((8U 
                                                                        & (- (IData)(
                                                                                (0x3feU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x16U))))))) 
                                                                       | ((9U 
                                                                           & (- (IData)(
                                                                                (0x7feU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x15U))))))) 
                                                                          | ((0xaU 
                                                                              & (- (IData)(
                                                                                (0xffeU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x14U))))))) 
                                                                             | ((0xbU 
                                                                                & (- (IData)(
                                                                                (0x1ffeU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x13U))))))) 
                                                                                | ((0xcU 
                                                                                & (- (IData)(
                                                                                (0x3ffeU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x12U))))))) 
                                                                                | ((0xdU 
                                                                                & (- (IData)(
                                                                                (0x7ffeU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x11U))))))) 
                                                                                | ((0xeU 
                                                                                & (- (IData)(
                                                                                (0xfffeU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x10U))))))) 
                                                                                | ((0xfU 
                                                                                & (- (IData)(
                                                                                (0x1fffeU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xfU))))))) 
                                                                                | ((0x10U 
                                                                                & (- (IData)(
                                                                                (0x3fffeU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xeU))))))) 
                                                                                | ((0x11U 
                                                                                & (- (IData)(
                                                                                (0x7fffeU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xdU))))))) 
                                                                                | ((0x12U 
                                                                                & (- (IData)(
                                                                                (0xffffeU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xcU))))))) 
                                                                                | ((0x13U 
                                                                                & (- (IData)(
                                                                                (0x1ffffeU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xbU))))))) 
                                                                                | ((0x14U 
                                                                                & (- (IData)(
                                                                                (0x3ffffeU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xaU))))))) 
                                                                                | ((0x15U 
                                                                                & (- (IData)(
                                                                                (0x7ffffeU 
                                                                                == 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 9U))))))) 
                                                                                | ((0x16U 
                                                                                & (- (IData)(
                                                                                (0xfffffeU 
                                                                                == 
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 8U))))))) 
                                                                                | ((0x17U 
                                                                                & (- (IData)(
                                                                                (0x1fffffeU 
                                                                                == 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 7U))))))) 
                                                                                | ((0x18U 
                                                                                & (- (IData)(
                                                                                (0x3fffffeU 
                                                                                == 
                                                                                (0x3ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 6U))))))) 
                                                                                | ((0x19U 
                                                                                & (- (IData)(
                                                                                (0x7fffffeU 
                                                                                == 
                                                                                (0x7ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 5U))))))) 
                                                                                | ((0x1aU 
                                                                                & (- (IData)(
                                                                                (0xffffffeU 
                                                                                == 
                                                                                (0xfffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 4U))))))) 
                                                                                | ((0x1bU 
                                                                                & (- (IData)(
                                                                                (0x1ffffffeU 
                                                                                == 
                                                                                (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 3U))))))) 
                                                                                | ((0x1cU 
                                                                                & (- (IData)(
                                                                                (0x3ffffffeU 
                                                                                == 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 2U))))))) 
                                                                                | ((0x1dU 
                                                                                & (- (IData)(
                                                                                (0x7ffffffeU 
                                                                                == 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 1U))))))) 
                                                                                | ((0x1eU 
                                                                                & (- (IData)(
                                                                                (0xfffffffeU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))) 
                                                                                | (- (IData)(
                                                                                (0xffffffffU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))))))))))))))))))))))))))))))))
                     : ((1U & (- (IData)((1U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 0x1eU))))))) 
                        | ((2U & (- (IData)((1U == 
                                             (7U & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 0x1dU))))))) 
                           | ((3U & (- (IData)((1U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 0x1cU))))))) 
                              | ((4U & (- (IData)((1U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 0x1bU))))))) 
                                 | ((5U & (- (IData)(
                                                     (1U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 0x1aU))))))) 
                                    | ((6U & (- (IData)(
                                                        (1U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                     >> 0x19U))))))) 
                                       | ((7U & (- (IData)(
                                                           (1U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                        >> 0x18U))))))) 
                                          | ((8U & 
                                              (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0x17U))))))) 
                                             | ((9U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                           >> 0x16U))))))) 
                                                | ((0xaU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (0x7ffU 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                              >> 0x15U))))))) 
                                                   | ((0xbU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x14U))))))) 
                                                      | ((0xcU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        == 
                                                                        (0x1fffU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x13U))))))) 
                                                         | ((0xdU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           == 
                                                                           (0x3fffU 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x12U))))))) 
                                                            | ((0xeU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              == 
                                                                              (0x7fffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x11U))))))) 
                                                               | ((0xfU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0x10U))))))) 
                                                                  | ((0x10U 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xfU))))))) 
                                                                     | ((0x11U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xeU))))))) 
                                                                        | ((0x12U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xdU))))))) 
                                                                           | ((0x13U 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xcU))))))) 
                                                                              | ((0x14U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xbU))))))) 
                                                                                | ((0x15U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 0xaU))))))) 
                                                                                | ((0x16U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 9U))))))) 
                                                                                | ((0x17U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 8U))))))) 
                                                                                | ((0x18U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 7U))))))) 
                                                                                | ((0x19U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 6U))))))) 
                                                                                | ((0x1aU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x7ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 5U))))))) 
                                                                                | ((0x1bU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0xfffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 4U))))))) 
                                                                                | ((0x1cU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 3U))))))) 
                                                                                | ((0x1dU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 2U))))))) 
                                                                                | ((0x1eU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                                >> 1U))))))) 
                                                                                | (- (IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))))))))))))))))))))))))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h77611673__0 
        = (IData)((0ULL == (0xaULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h26b862cd__0 
        = (IData)((3ULL == (3ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h8aa76502__0 
        = (IData)((0ULL == (0xcULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdaf921e2__0 
        = (1U & ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                             >> 3U))) & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                         >> 3U)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdaf511df__0 
        = (1U & ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                             >> 3U))) & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                         >> 2U)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out 
        = (0x7ffffffffULL & ((((QData)((IData)((0x7fffffffU 
                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)))) 
                               << 4U) | (QData)((IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                         >> 0x1cU)))) 
                             + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out 
        = (0xfffffffffULL & ((((QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)) 
                               << 4U) | (QData)((IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                         >> 0x1cU)))) 
                             + (0xffffffffeULL & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  << 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case 
        = ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
            >> 0x12U) & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out 
        = (0x1fffffffffULL & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h892fd1b2__0 
                              + ((0x1ffffffffeULL & 
                                  (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 1U)) + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
        = (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
           | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_b_sel))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out 
        = (0x3fffffffffULL & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1a617678__0 
                              + VL_SHIFTL_QQI(38,38,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff, 2U)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
        = (0x3fffffffffULL & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1a617678__0 
                              + VL_SHIFTL_QQI(38,38,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff, 3U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw 
        = (0x7fU & ((IData)(1U) + ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_b_cls__cls) 
                                   - (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_a_cls__cls))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf45b05df__0 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h77611673__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9ff1af68__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                       >> 2U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h26b862cd__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h9df919a6__0 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
            >> 1U) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h8aa76502__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h43b2e07d__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                       >> 2U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdaf921e2__0));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h43aed07a__0 
        = ((~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                       >> 2U))) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdaf511df__0));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h57c60478__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out 
                              >> 0x23U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)) 
            & (0x40000U == (0x48000U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6c5bb05f__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out 
                              >> 0x24U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out 
        = ((((0U != (0x7fffffffU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
              ? (~ (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                    >> 0x1fU)) : (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                  >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0U != (0x3fffffffU 
                                       & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                ? (~ (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                      >> 0x1eU)) : 
                               (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                >> 0x1eU)) << 0x1eU)) 
              | ((0x20000000U & (((0U != (0x1fffffffU 
                                          & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                   ? (~ (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                         >> 0x1dU))
                                   : (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                      >> 0x1dU)) << 0x1dU)) 
                 | ((0x10000000U & (((0U != (0xfffffffU 
                                             & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                      ? (~ (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                            >> 0x1cU))
                                      : (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                         >> 0x1cU)) 
                                    << 0x1cU)) | ((0x8000000U 
                                                   & (((0U 
                                                        != 
                                                        (0x7ffffffU 
                                                         & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                        ? 
                                                       (~ 
                                                        (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                         >> 0x1bU))
                                                        : 
                                                       (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                        >> 0x1bU)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((0U 
                                                           != 
                                                           (0x3ffffffU 
                                                            & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                           ? 
                                                          (~ 
                                                           (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                            >> 0x1aU))
                                                           : 
                                                          (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                           >> 0x1aU)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((0U 
                                                              != 
                                                              (0x1ffffffU 
                                                               & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                              ? 
                                                             (~ 
                                                              (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                               >> 0x19U))
                                                              : 
                                                             (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                              >> 0x19U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((0U 
                                                                 != 
                                                                 (0xffffffU 
                                                                  & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                 ? 
                                                                (~ 
                                                                 (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                  >> 0x18U))
                                                                 : 
                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                 >> 0x18U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & (((0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                    ? 
                                                                   (~ 
                                                                    (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                     >> 0x17U))
                                                                    : 
                                                                   (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                    >> 0x17U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & (((0U 
                                                                       != 
                                                                       (0x3fffffU 
                                                                        & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                       ? 
                                                                      (~ 
                                                                       (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                        >> 0x16U))
                                                                       : 
                                                                      (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                       >> 0x16U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & (((0U 
                                                                          != 
                                                                          (0x1fffffU 
                                                                           & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                          ? 
                                                                         (~ 
                                                                          (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                           >> 0x15U))
                                                                          : 
                                                                         (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                          >> 0x15U)) 
                                                                        << 0x15U)) 
                                                                    | ((0x100000U 
                                                                        & (((0U 
                                                                             != 
                                                                             (0xfffffU 
                                                                              & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                             ? 
                                                                            (~ 
                                                                             (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                              >> 0x14U))
                                                                             : 
                                                                            (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                             >> 0x14U)) 
                                                                           << 0x14U)) 
                                                                       | ((0x80000U 
                                                                           & (((0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                ? 
                                                                               (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x13U))
                                                                                : 
                                                                               (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x13U)) 
                                                                              << 0x13U)) 
                                                                          | ((0x40000U 
                                                                              & (((0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                             | ((0x20000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x11U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xeU))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xcU))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xbU))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 9U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 8U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 7U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 6U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 5U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 4U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 3U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((0U 
                                                                                != 
                                                                                (3U 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 2U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((1U 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in)
                                                                                 ? 
                                                                                (~ 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 1U))
                                                                                 : 
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out 
                              + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out 
                              + VL_SHIFTL_QQI(38,38,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff, 1U)));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
                              + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
                              + VL_SHIFTL_QQI(38,38,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff, 1U)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
                              + VL_SHIFTL_QQI(38,38,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff, 2U)));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_ha2366240__0 
        = ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))
            ? 0U : (0x1fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable 
        = ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
            >> 0x12U) & ((~ (IData)((0x20U == (0x60U 
                                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))))) 
                         & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)) 
                            & (7U != ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))
                                       ? 0U : (7U & 
                                               ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw) 
                                                >> 2U)))))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case 
        = (((0U == (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                    >> 4U)) & (IData)(((0ULL == (0xfffffff0ULL 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                       & (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0)))) 
           | ((0U == vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
              & (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result 
        = ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren))) 
           & (((- (IData)((1U & ((~ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                     >> 0xfU)) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel)))))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
              | (((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xfU)))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)) 
                 | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out 
                              + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out 
                              + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out 
                              + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out 
                              + VL_SHIFTL_QQI(38,38,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff, 1U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_div_cancel)) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case) 
                 | (0x20U == (0x7fU & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout)))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out 
        = (0x3fffffffffULL & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out 
                              + vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0 
        = (1U & (((~ (IData)((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out 
                              >> 0x25U))) ^ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                             >> 0x11U)) 
                 | ((0U == (0xfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                    & (0ULL == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_habd72583__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 4U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                              << 3U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                         << 2U) | (
                                                   ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                    << 1U) 
                                                   | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hbf8e3122__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 5U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                              << 4U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                         << 3U) | (
                                                   ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                    << 2U) 
                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                       << 1U) 
                                                      | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0)))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfa89c1b6__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 6U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                              << 5U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                         << 4U) | (
                                                   ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                    << 3U) 
                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                       << 2U) 
                                                      | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                          << 1U) 
                                                         | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0))))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf1dda453__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 8U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                              << 7U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                         << 6U) | (
                                                   ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                    << 5U) 
                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                       << 4U) 
                                                      | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                          << 3U) 
                                                         | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                             << 2U) 
                                                            | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                                << 1U) 
                                                               | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0))))))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe663b40__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 9U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                              << 8U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                         << 7U) | (
                                                   ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                    << 6U) 
                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                       << 5U) 
                                                      | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                          << 4U) 
                                                         | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                             << 3U) 
                                                            | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                                << 2U) 
                                                               | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0) 
                                                                   << 1U) 
                                                                  | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0)))))))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_ha28e0d69__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 0xaU) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                                << 9U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                           << 8U) | 
                                          (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                            << 7U) 
                                           | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                               << 6U) 
                                              | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                  << 5U) 
                                                 | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                     << 4U) 
                                                    | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                        << 3U) 
                                                       | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0) 
                                                           << 2U) 
                                                          | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0) 
                                                              << 1U) 
                                                             | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0))))))))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2196330b__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 0xcU) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                                << 0xbU) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                             << 0xaU) 
                                            | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                << 9U) 
                                               | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                   << 8U) 
                                                  | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                      << 7U) 
                                                     | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                         << 6U) 
                                                        | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                            << 5U) 
                                                           | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0) 
                                                               << 4U) 
                                                              | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0) 
                                                                  << 3U) 
                                                                 | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0) 
                                                                     << 2U) 
                                                                    | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0) 
                                                                        << 1U) 
                                                                       | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6c5bb05f__0))))))))))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf69bc249__0 
        = ((1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                    << 1U) | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0))) 
           | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h33f7bca1__0 
        = (1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                   << 2U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                              << 1U) | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h5d9b4887__0 
        = ((1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                    << 3U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                               << 2U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                          << 1U) | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0))))) 
           | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h33f7bca1__0) 
              | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf69bc249__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new 
        = ((((1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                      << 7U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                                 << 6U) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                            << 5U) 
                                           | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                               << 4U) 
                                              | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                  << 3U) 
                                                 | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                     << 2U) 
                                                    | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                        << 1U) 
                                                       | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0))))))))) 
             | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfa89c1b6__0) 
                | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hbf8e3122__0) 
                   | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_habd72583__0) 
                      | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h5d9b4887__0))))) 
            << 3U) | ((((1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                                 << 0xbU) | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                                              << 0xaU) 
                                             | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                                 << 9U) 
                                                | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                    << 8U) 
                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                       << 7U) 
                                                      | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                          << 6U) 
                                                         | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                             << 5U) 
                                                            | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                                << 4U) 
                                                               | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0) 
                                                                   << 3U) 
                                                                  | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0) 
                                                                      << 2U) 
                                                                     | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0) 
                                                                         << 1U) 
                                                                        | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0))))))))))))) 
                        | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_ha28e0d69__0) 
                           | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe663b40__0) 
                              | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf1dda453__0) 
                                 | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h5d9b4887__0))))) 
                       << 2U) | ((((1U == (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                                            << 0xdU) 
                                           | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                                               << 0xcU) 
                                              | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                                  << 0xbU) 
                                                 | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                     << 0xaU) 
                                                    | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                        << 9U) 
                                                       | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                           << 8U) 
                                                          | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                              << 7U) 
                                                             | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                                 << 6U) 
                                                                | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0) 
                                                                    << 5U) 
                                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0) 
                                                                       << 4U) 
                                                                      | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0) 
                                                                          << 3U) 
                                                                         | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0) 
                                                                             << 2U) 
                                                                            | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6c5bb05f__0) 
                                                                                << 1U) 
                                                                               | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h57c60478__0))))))))))))))) 
                                   | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2196330b__0) 
                                      | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe663b40__0) 
                                         | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf1dda453__0) 
                                            | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hbf8e3122__0) 
                                               | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_habd72583__0) 
                                                  | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf69bc249__0))))))) 
                                  << 1U) | ((1U == 
                                             (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0) 
                                               << 0xeU) 
                                              | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfe563eba__0) 
                                                  << 0xdU) 
                                                 | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2666a931__0) 
                                                     << 0xcU) 
                                                    | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h12923174__0) 
                                                        << 0xbU) 
                                                       | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h64038d9f__0) 
                                                           << 0xaU) 
                                                          | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h426f350e__0) 
                                                              << 9U) 
                                                             | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h4cea9f28__0) 
                                                                 << 8U) 
                                                                | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h1bed65d8__0) 
                                                                    << 7U) 
                                                                   | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h626aa1d2__0) 
                                                                       << 6U) 
                                                                      | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hc6dc7cad__0) 
                                                                          << 5U) 
                                                                         | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hdac68eae__0) 
                                                                             << 4U) 
                                                                            | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hcd2a114f__0) 
                                                                                << 3U) 
                                                                               | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h6c5bb05f__0) 
                                                                                << 2U) 
                                                                                | (((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h57c60478__0) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (((~ (IData)(
                                                                                (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out 
                                                                                >> 0x22U))) 
                                                                                ^ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0x11U)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0xfffffffU 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                                                & (0ULL 
                                                                                == __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out))))))))))))))))))) 
                                            | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h2196330b__0) 
                                               | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_ha28e0d69__0) 
                                                  | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hf1dda453__0) 
                                                     | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hfa89c1b6__0) 
                                                        | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_habd72583__0) 
                                                           | ((IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h33f7bca1__0) 
                                                              | (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h96205e14__0)))))))))));
    __Vtemp_3[0U] = vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff;
    __Vtemp_3[1U] = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                     >> 0x11U)))))));
    __Vtemp_3[2U] = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                      >> 0x11U)))))) 
                             >> 0x20U));
    VL_SHIFTL_WWI(65,65,5, __Vtemp_4, __Vtemp_3, (0x1fU 
                                                  & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                     >> 8U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_in 
        = (0x1ffffffffULL & ((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           ((0x60000U 
                                                             == 
                                                             (0x60000U 
                                                              & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout)) 
                                                            & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)))))))) 
                             | (((- (QData)((IData)(
                                                    ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                     & ((~ 
                                                         (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                          >> 0xdU)) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                 & (((QData)((IData)(
                                                     (0x1fffffffU 
                                                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)))) 
                                     << 4U) | (QData)((IData)(
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                               >> 0x1cU))))) 
                                | (((- (QData)((IData)(
                                                       ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                        & ((~ 
                                                            (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                             >> 0xdU)) 
                                                           & (1U 
                                                              == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                    & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out) 
                                   | (((- (QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                           & ((~ 
                                                               (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                >> 0xdU)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                       & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out) 
                                      | (((- (QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                              & ((~ 
                                                                  (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                   >> 0xdU)) 
                                                                 & (3U 
                                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                          & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out) 
                                         | (((- (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                 & ((~ 
                                                                     (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                      >> 0xdU)) 
                                                                    & (4U 
                                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                             & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out) 
                                            | (((- (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                    & ((~ 
                                                                        (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                         >> 0xdU)) 
                                                                       & (5U 
                                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out) 
                                               | (((- (QData)((IData)(
                                                                      ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                       & ((~ 
                                                                           (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                            >> 0xdU)) 
                                                                          & (6U 
                                                                             == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                   & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out) 
                                                  | (((- (QData)((IData)(
                                                                         ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                          & ((~ 
                                                                              (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                               >> 0xdU)) 
                                                                             & (7U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                      & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out) 
                                                     | (((- (QData)((IData)(
                                                                            ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                             & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (8U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                         & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out) 
                                                        | (((- (QData)((IData)(
                                                                               ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (9U 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                            & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out) 
                                                           | (((- (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (0xaU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                               & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out) 
                                                              | (((- (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (0xbU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                                  & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out) 
                                                                 | (((- (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                                     & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out) 
                                                                    | (((- (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (0xdU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                                        & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out) 
                                                                       | (((- (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (0xeU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                                           & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out) 
                                                                          | (((- (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                                & ((~ 
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU)) 
                                                                                & (0xfU 
                                                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))))))) 
                                                                              & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out) 
                                                                             | (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0xdU))))) 
                                                                                & (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_4[2U]))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                __Vtemp_4[1U])))) 
                                                                                | ((- (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case))) 
                                                                                & (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff))))))))))))))))))))));
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

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__9(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__9\n"); );
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
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
        = ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
              ? vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_rff__dout
              : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                 >> 3U)) << 3U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_lo_rff__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
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
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____Vcellinp__Gen_dccm_enable__DOT__ld_sec_addr_hi_rff__en)
                       ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r
                       : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r 
        = ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                  >> 2U)) != (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                    >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
           & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r))));
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
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hb43a7631__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r 
        = ((1U & (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                  >> 3U)) == (1U & (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                                    >> 3U)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
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

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__10(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__10\n"); );
    // Init
    IData/*28:0*/ rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellinp__end_addr_hi_rff__din;
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellinp__end_addr_hi_rff__din = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT____Vcellinp__L2U_Plus1_0__DOT__sec_data_hi_rff__en;
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT____Vcellinp__L2U_Plus1_0__DOT__sec_data_hi_rff__en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0 = 0;
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
    CData/*0:0*/ rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0;
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hb6574e55__0 = 0;
    CData/*3:0*/ __VdfgTmp_h92f6a42d__0;
    __VdfgTmp_h92f6a42d__0 = 0;
    // Body
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellinp__end_addr_hi_rff__din 
        = (0x1fffffffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)
                           ? vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_mff__dout
                           : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                              >> 3U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
        = ((rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellinp__end_addr_hi_rff__din 
            << 3U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_lo_mff__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m 
        = ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                  >> 2U)) != (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                                    >> 2U)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi 
        = (((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h79c3dc0f__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (((((0xfffU & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                    >> 2U))) == (0xfffU 
                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                                                    >> 2U))) 
                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
               & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (((((0xfffU & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                    >> 2U))) == (0xfffU 
                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                                    >> 2U))) 
                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
               & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (1U & (IData)(((0x51U == (0x51U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m))) 
                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                               | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (2U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                      << 1U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (2U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                      << 1U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (4U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                      << 2U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (4U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                      << 2U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfff7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (8U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                      << 3U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfff7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (8U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                      << 3U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (0xfffffffeU & ((((((0xfffU & (IData)(
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                    >> 0x10U))) 
                                 == (0xfffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                                               >> 2U))) 
                                << 1U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 1U)) << 1U)) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (0xfffffffeU & ((((((0xfffU & (IData)(
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                    >> 0x10U))) 
                                 == (0xfffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                               >> 2U))) 
                                << 1U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 1U)) << 1U)) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (2U & ((IData)(((0x51U == (0x51U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m))) 
                             & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                                >> 1U))) << 1U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffefU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 3U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                       >> 4U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffefU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 3U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                       >> 4U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffdfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 4U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 4U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                     >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffdfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 4U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 4U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                     >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffbfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 5U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 5U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                     >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffbfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 5U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 5U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                     >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xff7fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 6U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffff8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                     >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xff7fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 6U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffff8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                     >> 4U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (0xfffffffcU & ((((((0xfffU & (IData)(
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                    >> 0x1eU))) 
                                 == (0xfffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                                               >> 2U))) 
                                << 2U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 2U)) << 2U)) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (0xfffffffcU & ((((((0xfffU & (IData)(
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                    >> 0x1eU))) 
                                 == (0xfffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                               >> 2U))) 
                                << 2U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 2U)) << 2U)) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (4U & ((IData)(((0x51U == (0x51U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m))) 
                             & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                                >> 2U))) << 2U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfeffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x100U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 6U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                       >> 8U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfeffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x100U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 6U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                       >> 8U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfdffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x200U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 7U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 7U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xfffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                    >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfdffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x200U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 7U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 7U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xfffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                    >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfbffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x400U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 8U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 8U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xfffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                    >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfbffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x400U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 8U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 8U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xfffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                    >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x800U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 9U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 9U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xfffff8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                    >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x800U & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 9U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 9U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xfffff8U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                    >> 8U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (0xfffffff8U & ((((((0xfffU & (IData)(
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                    >> 0x2cU))) 
                                 == (0xfffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                                               >> 2U))) 
                                << 3U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 3U)) << 3U)) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (0xfffffff8U & ((((((0xfffU & (IData)(
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                    >> 0x2cU))) 
                                 == (0xfffU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                               >> 2U))) 
                                << 3U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 3U)) << 3U)) 
                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (8U & ((IData)(((0x51U == (0x51U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m))) 
                             & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                                >> 3U))) << 3U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xefffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xcU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xcU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                       >> 0xcU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xefffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xcU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xcU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                       >> 0xcU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xdfffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xdU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xdU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                   >> 0xcU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xdfffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xdU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xdU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffeU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                   >> 0xcU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xbfffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xeU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xeU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                   >> 0xcU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xbfffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xeU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xeU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffcU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                   >> 0xcU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0x7fffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xfU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xfU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                        >> 3U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                  >> 0xfU))) << 3U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0x7fffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | ((IData)(((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                   >> 0xfU)) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                                                >> 3U))) 
              << 0xfU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | ((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                        >> 3U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                  >> 0xfU))) << 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
           & vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____VdfgTmp_h38c17056__0);
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
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout)) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                     >> 4U))) ? rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellinp__end_addr_hi_rff__din
            : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_rff__dout);
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h454cebc6__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_he7a7ce7d__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9a79f2d7__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 1U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9b3ac208__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 2U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9be695fd__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
              >> 3U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_any 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h43694854__0) 
               | (0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)))) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h246821ce__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = ((- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)))) 
           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U]);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                >> 1U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U]));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                >> 2U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U]));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                >> 3U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U]));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = ((- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)))) 
           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U]);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                                >> 1U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U]));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                                >> 2U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U]));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                                >> 3U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U]));
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
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m 
        = (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hd85abb58__0)) 
            & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0)) 
           | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hd85abb58__0)) 
              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT____VdfgTmp_hfe5e129b__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hfe5e129b__0) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT____VdfgTmp_hd85abb58__0));
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

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__11(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__11\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority)) 
                              << 0x3cU) | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority)) 
                                            << 0x38U) 
                                           | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority)) 
                                               << 0x34U) 
                                              | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority)) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & ((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                ? 
                                                                               (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                ? 
                                                                               (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                           << 0x1cU) 
                                                                          | ((0xf000000U 
                                                                              & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x18U)) 
                                                                             | ((0xf00000U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 8U)) 
                                                                                | (0xf0U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 4U)))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority)) 
                               << 0x3cU) | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority)) 
                                                << 0x34U) 
                                               | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority)) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority)) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & ((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                            << 0x1cU) 
                                                                           | ((0xf000000U 
                                                                               & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x18U)) 
                                                                              | ((0xf00000U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 8U)) 
                                                                                | (0xf0U 
                                                                                & (((- (IData)(
                                                                                ((IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__extintsrc_req_config) 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))
                                                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout))) 
                                                                                << 4U)))))))))))))))) 
                             >> 0x20U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
        = __Vtemp_1[0U];
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
        = __Vtemp_1[1U];
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
        = (0xfffffff0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U]);
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__12(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_sequent__TOP__rvfpgasim__veerwolf__12\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + ((3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__isdccmst_m) 
                             << ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__isdccmst_m) 
                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)))) 
                      + (3U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__isdccmst_r) 
                               << ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__isdccmst_r) 
                                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))))));
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

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__0(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__0\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0xfffffffc00ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | (IData)((IData)((0x3ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw)))));
    if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0xfffffffdffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xfffffffc00ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x200ULL | (0xfffffffcffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffffff80ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | (IData)((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m) 
                                   << 5U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)))));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                          & ((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                       >> 4U)) == (0x1fU 
                                                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)))) 
                         & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                    >> 8U))))) ? (0xfffffffdffULL 
                                                  & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xfffffffc00ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | (IData)((IData)((0x3ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam))))));
    }
    if ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 5U))))) & (IData)(
                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                     >> 9U)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x100ULL | vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0xfffff003ffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0xaU))))) 
              << 0xaU));
    if ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0xfffff7ffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffffdffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xfffff003ffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x80000ULL | (0xfffff3ffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfffffe03ffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m) 
                                    << 5U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)))) 
                  << 0xaU));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 1U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0xaU))))) 
                                 & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x12U)))))
                ? (0xfffff7ffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xfffff003ffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0xaU))))) 
                      << 0xaU)));
    }
    if ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 0xfU))))) & (IData)(
                                                      (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                       >> 0x13U)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x40000ULL | vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0xffc00fffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0x14U))))) 
              << 0x14U));
    if ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0xffdfffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffff7ffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xffc00fffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((4U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x20000000ULL | (0xffcfffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfff80fffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m) 
                                    << 5U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)))) 
                  << 0x14U));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 2U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0x14U))))) 
                                 & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x1cU)))))
                ? (0xffdfffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xffc00fffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0x14U))))) 
                      << 0x14U)));
    }
    if ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 0x19U))))) & (IData)(
                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                        >> 0x1dU)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x10000000ULL | vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0x3fffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0x1eU))))) 
              << 0x1eU));
    if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0x7fffffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xffdfffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0x3fffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((8U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x8000000000ULL | (0x3fffffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xe03fffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m) 
                                    << 5U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)))) 
                  << 0x1eU));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 3U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0x1eU))))) 
                                 & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x26U)))))
                ? (0x7fffffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0x3fffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0x1eU))))) 
                      << 0x1eU)));
    }
    if ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 0x23U))))) & (IData)(
                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                        >> 0x27U)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x4000000000ULL | vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x7fffffffffULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__0__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                                       ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout))))
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                      : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__1__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0xaU)) 
                                       ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0xaU)) : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__2__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0x14U)) 
                                       ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0x14U)) : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__3__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0x1eU)) 
                                       ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0x1eU)) : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
             & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                 == (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                   >> 0x23U)))) & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x27U)))) 
            << 3U) | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
                        & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                            == (3U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                              >> 0x19U)))) 
                           & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                      >> 0x1dU)))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
                                   & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                                       == (3U & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0xfU)))) 
                                      & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                 >> 0x13U)))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
                                            & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                            >> 5U)))) 
                                               & (IData)(
                                                         (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 9U)))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((- (IData)((1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write)))) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 1U)))) 
                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                  >> 0xaU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 2U)))) 
                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                  >> 0x14U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 3U)))) 
                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                  >> 0x1eU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data_valid) 
           & ((~ (((0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                             >> 4U)) == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)) 
                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r))) 
              & (0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h00f1972b__0 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h003be604__0) 
               | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h003e3411__0) 
                  | (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h00f445be__0)))) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
                 & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    == (0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                 >> 0x14U))))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h055c1772__0 
        = ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h048f664d__0) 
               | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h0483b458__0) 
                  | (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h0540c5e7__0)))) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
                 & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    == (0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                 >> 0xfU))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h003be604__0) 
           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h003e3411__0) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h00f445be__0) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h00f1972b__0))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h048f664d__0) 
           | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h0483b458__0) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h0540c5e7__0) 
                 | (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h055c1772__0))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__1(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__1\n"); );
    // Init
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata;
    __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata = 0;
    QData/*63:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0;
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0 = 0;
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
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi 
        = (((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha6aeecd0__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x18U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x18U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                        >> 0x18U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha68d3d27__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x10U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x10U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                        >> 0x10U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha7c3cdf6__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 8U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                          >> 8U))) : 
                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                     >> 8U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h60f4c6f9__0))) 
                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                        | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))
                     : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m));
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

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__2(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__2\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                         >> 6U)))) 
                  << 0x27U) | (((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m))))) 
                                << 0x26U) | (((QData)((IData)(
                                                              ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m) 
                                                                 & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m))) 
                                                                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m)))
                                                                ? 1U
                                                                : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__exc_mscause_m)))) 
                                              << 0x22U) 
                                             | (((QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m)) 
                                                 << 2U) 
                                                | (QData)((IData)(
                                                                  (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m) 
                                                                      & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m))) 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                                         >> 4U))) 
                                                                    << 1U) 
                                                                   | ((IData)(
                                                                              ((1U 
                                                                                == 
                                                                                (0x2011U 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m))) 
                                                                               & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m) 
                                                                                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m)) 
                                                                                | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m)))) 
                                                                      & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up))))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
        = __Vtemp_1;
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U_Plus1_0__DOT__lsu_error_pkt_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffffffULL & ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
                                     | ((IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                                 >> 1U)) 
                                        | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                                           >> 4U))))
                               ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                  >> 2U) : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__3(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__3\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__pl_in_q 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg)
                    ? (~ ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                           << 0x10U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                        >> 0x10U)))
                    : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 0x10U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                     >> 0x10U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U]) 
           < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                      >> 4U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                    >> 8U)) < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                       >> 0xcU)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                    >> 0x10U)) < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                          >> 0x14U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                    >> 0x18U)) < (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U]) 
           < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                      >> 4U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                    >> 0xcU)) < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                         >> 0x10U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                    >> 0x14U)) < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                          >> 0x18U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
            >> 0x1cU) < (0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U]));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                    >> 0x18U)) < (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U]) 
           < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                      >> 4U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                    >> 4U)) < (0xfU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                       >> 8U)));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                        << 0x1cU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                     >> 4U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                        << 0x14U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0xcU)) : ((
                                                   vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                     >> 8U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                        << 0xcU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                    >> 0x14U)) : ((
                                                   vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                     >> 0x10U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                        << 4U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                 << 8U) 
                                                | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                   >> 0x18U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0x1cU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                     >> 4U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0x10U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0x10U)) : (
                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                    << 0x14U) 
                                                   | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                      >> 0xcU))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 8U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x18U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                 << 0xcU) 
                                                | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                   >> 0x14U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U]
                    : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 4U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x1cU))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 4U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                 << 8U) 
                                                | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                   >> 0x18U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 0x1cU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                     >> 4U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                    ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                     >> 8U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                 << 0x1cU) 
                                                | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                   >> 4U))));
}

extern const VlWide<31>/*991:0*/ Vrvfpgasim__ConstPool__CONST_h5607ec9a_0;

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__5(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__5\n"); );
    // Init
    VlWide<31>/*991:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in;
    VL_ZERO_W(992, __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in);
    IData/*30:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v = 0;
    IData/*30:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v = 0;
    IData/*30:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v = 0;
    IData/*30:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 = 0;
    // Body
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v = 0U;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v = 0U;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v = 0U;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[1U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[1U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[2U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[2U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[3U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[3U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[4U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[4U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[5U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[5U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[6U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[6U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[7U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[7U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[8U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[8U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[9U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[9U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0xaU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0xbU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0xcU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0xdU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0xeU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0xfU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x10U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x11U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x12U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x13U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x14U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x15U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x16U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x17U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x18U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x19U];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x1aU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x1bU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x1cU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x1dU];
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = Vrvfpgasim__ConstPool__CONST_h5607ec9a_0[0x1eU];
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x10U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffeU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | (IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffeU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | (IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffeU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | (IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v))) 
             & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v))) 
              & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x20U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffdU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 1U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffdU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 1U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffdU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 1U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 1U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 1U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 1U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[1U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x30U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffbU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 2U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffbU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 2U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffbU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 2U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 2U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 2U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 2U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[2U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x40U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffff7U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 3U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (4U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffff7U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 3U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (4U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffff7U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 3U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 3U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 3U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 3U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[3U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x50U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffefU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 4U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (5U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffefU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 4U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (5U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffefU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 4U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 4U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 4U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 4U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[4U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x60U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffdfU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 5U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (6U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffdfU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 5U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (6U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffdfU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 5U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 5U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 5U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 5U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[5U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x70U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffbfU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 6U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (7U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffbfU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 6U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (7U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffbfU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 6U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 6U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 6U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 6U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[6U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x80U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffff7fU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 7U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (8U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffff7fU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 7U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (8U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffff7fU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 7U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 7U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 7U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 7U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[7U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x90U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffeffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 8U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (9U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffeffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 8U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (9U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffeffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 8U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 8U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 8U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 8U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[8U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xa0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffdffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 9U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xaU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffdffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 9U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0xaU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffdffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 9U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 9U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 9U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 9U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[9U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xb0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffbffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0xaU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xbU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffbffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0xaU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0xbU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffbffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0xaU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xaU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xaU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xaU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xc0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffff7ffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0xbU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xcU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffff7ffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0xbU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0xcU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffff7ffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0xbU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xbU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xbU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xbU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xd0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffefffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0xcU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xdU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffefffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0xcU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0xdU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffefffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0xcU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xcU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xcU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xcU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xe0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffdfffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0xdU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xeU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffdfffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0xdU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0xeU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffdfffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0xdU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xdU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xdU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xdU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xf0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffbfffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0xeU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xfU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffbfffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0xeU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0xfU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffbfffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0xeU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xeU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xeU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xeU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x100U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fff7fffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0xfU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x10U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fff7fffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0xfU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x10U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fff7fffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0xfU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xfU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xfU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xfU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x110U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffeffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x10U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x11U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffeffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x10U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x11U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffeffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x10U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x10U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x10U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x10U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x120U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffdffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x11U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x12U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffdffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x11U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x12U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffdffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x11U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x11U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x11U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x11U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x130U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffbffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x12U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x13U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffbffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x12U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x13U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffbffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x12U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x12U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x12U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x12U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x140U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ff7ffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x13U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x14U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ff7ffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x13U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x14U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ff7ffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x13U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x13U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x13U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x13U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x150U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fefffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x14U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x15U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fefffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x14U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x15U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fefffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x14U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x14U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x14U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x14U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x160U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fdfffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x15U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x16U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fdfffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x15U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x16U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fdfffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x15U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x15U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x15U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x15U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x170U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fbfffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x16U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x17U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fbfffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x16U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x17U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fbfffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x16U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x16U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x16U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x16U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x180U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7f7fffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x17U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x18U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7f7fffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x17U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x18U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7f7fffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x17U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x17U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x17U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x17U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x190U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7effffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x18U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x19U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7effffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x18U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x19U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7effffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x18U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x18U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x18U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x18U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1a0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7dffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x19U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1aU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7dffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x19U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x1aU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7dffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x19U));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x19U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x19U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x19U)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1b0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7bffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x1aU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1bU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7bffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x1aU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x1bU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7bffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x1aU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1aU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1aU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1aU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1c0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x77ffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x1bU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1cU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x77ffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x1bU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x1cU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x77ffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x1bU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1bU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1bU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1bU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1d0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x6fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x1cU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1dU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x6fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x1cU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x1dU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x6fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x1cU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1cU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1cU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1cU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1e0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x5fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x1dU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1eU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x5fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x1dU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x1eU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x5fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x1dU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1dU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1dU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1dU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1f0U == (0x1f0U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x3fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_h3203b6a2__0) 
              << 0x1eU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1fU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x3fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hc21abcc8__0) 
              << 0x1eU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren) 
           & (0x1fU == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x3fffffffU & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_hcf5ef5d4__0) 
              << 0x1eU));
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0 
        = ((((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1eU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wdata_r) 
            | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1eU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1eU)))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound_he9a82563__0;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en 
        = (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
           | (__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
              | __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w2v));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__1__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[1U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__2__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[2U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__3__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[3U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__4__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[4U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__5__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[5U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__6__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[6U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__7__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[7U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__8__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[8U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__9__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x200U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[9U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__10__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x400U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xaU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__11__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x800U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xbU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__12__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x1000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xcU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__13__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x2000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xdU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__14__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x4000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xeU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__15__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x8000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xfU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__16__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x10U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__17__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x11U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__18__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x12U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__19__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x13U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__20__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x14U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__21__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x200000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x15U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__22__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x400000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x16U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__23__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x800000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x17U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__24__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x1000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x18U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__25__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x2000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x19U]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__26__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x4000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__27__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x8000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__28__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__29__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__30__KET____DOT__gprff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40000000U & __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__31__KET____DOT__gprff__dout);
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__6(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__6\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                         << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                      >> 8U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                         << 8U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                   >> 0x18U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                                    >> 0x10U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                         << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                      >> 8U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                         << 8U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                   >> 0x18U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                                    >> 0x10U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                         << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                                      >> 8U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U]
                     : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                         << 8U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                                   >> 0x18U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                         << 0x10U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                                      >> 0x10U)) : 
                    ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                      << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                                   >> 8U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U]
                     : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                         << 8U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                                   >> 0x18U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                         << 8U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                                   >> 0x18U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                                                    >> 0x10U))));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                         << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                                      >> 8U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U]));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
        = (0xffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                     ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                         << 0x10U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                                      >> 0x10U)) : 
                    ((vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                      << 0x18U) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                                   >> 8U))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__12(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__12\n"); );
    // Init
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_read_data_m;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_read_data_m = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__0__KET____DOT__trigger_match__match;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__0__KET____DOT__trigger_match__match = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__1__KET____DOT__trigger_match__match;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__1__KET____DOT__trigger_match__match = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__2__KET____DOT__trigger_match__match;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__2__KET____DOT__trigger_match__match = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__3__KET____DOT__trigger_match__match;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__3__KET____DOT__trigger_match__match = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data;
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data = 0;
    CData/*3:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m = 0;
    SData/*15:0*/ __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi;
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he038dd6f__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he038dd6f__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h736c1a9a__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h736c1a9a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he336d295__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he336d295__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1776a602__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1776a602__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a92fdcf__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a92fdcf__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd4ecc729__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd4ecc729__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc905125d__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc905125d__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6e5dbfc__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6e5dbfc__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf994eab9__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf994eab9__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7dbe20ea__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7dbe20ea__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h905b1da5__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h905b1da5__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22368327__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22368327__0 = 0;
    CData/*3:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb9f2104d__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb9f2104d__0 = 0;
    // Body
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he038dd6f__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcee62b87__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22122086__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a92fdcf__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcfec33fa__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9aa5935c__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf994eab9__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he92e42d0__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1b1c48ed__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1776a602__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha6b7be9a__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22122086__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6e5dbfc__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbd2361c1__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9aa5935c__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22368327__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4d2574b7__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1b1c48ed__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he336d295__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7b26c913__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22122086__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc905125d__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h70439ff4__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9aa5935c__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h905b1da5__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1cf97378__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1b1c48ed__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h736c1a9a__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0fd48eee__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22122086__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd4ecc729__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6080a891__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9aa5935c__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7dbe20ea__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h10251181__0) 
           & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1b1c48ed__0) 
                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
              & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb9f2104d__0 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf0068349__0) 
             & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha2dee286__0) 
                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcb6f2b04__0))))) 
                & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0)))) 
            << 3U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fb63122__0) 
                        & ((~ (IData)((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha2dee286__0) 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0af533fc__0))))) 
                           & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0)))) 
                       << 2U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c0b6ff3__0) 
                                   & ((~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha2dee286__0) 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc5a7e1ca__0))))) 
                                      & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0)))) 
                                  << 1U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ad4241c__0) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha2dee286__0) 
                                                            & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d639348__0))))) 
                                               & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0)))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he038dd6f__0) 
            << 0xfU) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h736c1a9a__0) 
                         << 0xeU) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he336d295__0) 
                                      << 0xdU) | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1776a602__0) 
                                                   << 0xcU) 
                                                  | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a92fdcf__0) 
                                                      << 0xbU) 
                                                     | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd4ecc729__0) 
                                                         << 0xaU) 
                                                        | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc905125d__0) 
                                                            << 9U) 
                                                           | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6e5dbfc__0) 
                                                               << 8U) 
                                                              | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf994eab9__0) 
                                                                  << 7U) 
                                                                 | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7dbe20ea__0) 
                                                                     << 6U) 
                                                                    | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h905b1da5__0) 
                                                                        << 5U) 
                                                                       | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22368327__0) 
                                                                           << 4U) 
                                                                          | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb9f2104d__0)))))))))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h23166f29__0) 
             | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he038dd6f__0) 
                 | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h736c1a9a__0) 
                    | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he336d295__0) 
                       | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1776a602__0)))) 
                | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0))) 
            << 3U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h559c6379__0) 
                        | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2a92fdcf__0) 
                            | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd4ecc729__0) 
                               | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc905125d__0) 
                                  | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hc6e5dbfc__0)))) 
                           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0))) 
                       << 2U) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_ha9bed822__0) 
                                   | (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf994eab9__0) 
                                       | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7dbe20ea__0) 
                                          | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h905b1da5__0) 
                                             | (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22368327__0)))) 
                                      | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0))) 
                                  << 1U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ef67f38__0) 
                                            | ((0U 
                                                != (IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb9f2104d__0)) 
                                               | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0))))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                               >> 3U)))) << 0x18U) 
            | ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                               >> 2U)))) 
                             << 0x10U)) | ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                              >> 1U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))))))) 
           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 4U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 8U)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xcU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 1U)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 5U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 9U)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xdU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 2U)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 6U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 0xaU)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xeU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 3U)))) 
                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 7U)))) 
                             << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 0xbU)))) 
                               << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xfU)))) 
                                 << 0x18U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = (1U & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
                 | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                       >> 4U))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 1U) | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 5U))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 2U) | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 6U))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 3U) | (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 7U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00000000ULL & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)(((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h23166f29__0)
                                 ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb03712be__0))) 
                                     & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                >> 0x18U))) 
                                    | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h84e39608__0))) 
                                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                  >> 0x38U))))
                                 : (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                    >> 0x18U)) << 0x18U) 
                              | ((0xff0000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h559c6379__0)
                                                 ? 
                                                (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc32a80fd__0))) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                             >> 0x10U))) 
                                                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9d076129__0))) 
                                                    & (IData)(
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                               >> 0x30U))))
                                                 : 
                                                (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x10U)) 
                                               << 0x10U)) 
                                 | ((0xff00U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_ha9bed822__0)
                                                  ? 
                                                 (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h95766e1f__0))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                              >> 8U))) 
                                                  | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ec2878b__0))) 
                                                     & (IData)(
                                                               (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                                >> 0x28U))))
                                                  : 
                                                 (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                  >> 8U)) 
                                                << 8U)) 
                                    | (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ef67f38__0)
                                                 ? 
                                                (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h10aa293b__0))) 
                                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h67b79b3a__0)) 
                                                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h99c9cf96__0))) 
                                                    & (IData)(
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                               >> 0x20U))))
                                                 : __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & ((IData)(__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                 & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__is_sideeffects_m)) 
                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                       >> 6U)))));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_read_data_m 
        = (IData)(VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo))), 
                                VL_SHIFTL_III(32,32,32, 
                                              (3U & vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m), 3U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout) 
              & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                  >> 6U) & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__flush_m_up)) 
                            & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                     >> 4U))) ? __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_read_data_m
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m)
            ? __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_read_data_m
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_m);
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbnbloaddelayff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_ctl_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_result_m 
        = ((0xffU & ((- (IData)((IData)((0x410U == 
                                         (0x410U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout)))))) 
                     & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)) 
           | ((0xffffU & ((- (IData)((IData)((0x210U 
                                              == (0x210U 
                                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout)))))) 
                          & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)) 
              | (((- (IData)((IData)((0x400U == (0x410U 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout)))))) 
                  & (((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
                                        >> 7U)))) << 8U) 
                     | (0xffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m))) 
                 | (((- (IData)((IData)((0x200U == 
                                         (0x210U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout)))))) 
                     & (((- (IData)((1U & (__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
                                           >> 0xfU)))) 
                         << 0x10U) | (0xffffU & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m))) 
                    | ((- (IData)((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                         >> 8U)))) 
                       & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en) 
            & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                >> 1U) | ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                           >> 0x16U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout))))
            ? ((IData)((0xaU == (0xaU & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout)))
                ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_result_m
                : vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_i0_result_x)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m 
        = ((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
            | (- (IData)((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)))))) 
           & ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout))
               ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_result_m
               : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_m));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1c2078cc__0 
        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)), 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m), 3U));
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m 
        = (((0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                               >> 8U)))) 
                             << 0x10U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)) 
            | ((0xff00U & (((- (IData)((IData)((0U 
                                                != 
                                                (0x300U 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout)))))) 
                            << 8U) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)) 
               | (0xffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m))) 
           & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable))));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
        = (((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                 >> 7U))))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((IData)((0x82U == (0x82U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))) 
              & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
        = (((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                 >> 7U))))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((IData)((0x82U == (0x82U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))))) 
              & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
        = (((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                 >> 7U))))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((IData)((0x82U == (0x82U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))))) 
              & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
        = (((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                 >> 7U))))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((IData)((0x82U == (0x82U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))) 
              & __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__0__KET____DOT__trigger_match__match 
        = (((IData)(vlSelf->__VdfgTmp_h1ce15e86__0) 
            | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                >> 0x1fU) == (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                              >> 0x1fU))) & (((IData)(vlSelf->__VdfgTmp_h1ce06b75__0) 
                                              | ((1U 
                                                  & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                     >> 0x1eU)) 
                                                 == 
                                                 (1U 
                                                  & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                     >> 0x1eU)))) 
                                             & (((IData)(vlSelf->__VdfgTmp_h1ce1ec51__0) 
                                                 | ((1U 
                                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                        >> 0x1dU)) 
                                                    == 
                                                    (1U 
                                                     & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                        >> 0x1dU)))) 
                                                & (((IData)(vlSelf->__VdfgTmp_h1ce6c027__0) 
                                                    | ((1U 
                                                        & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                           >> 0x1cU)) 
                                                       == 
                                                       (1U 
                                                        & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                           >> 0x1cU)))) 
                                                   & (((IData)(vlSelf->__VdfgTmp_h1ce1cc33__0) 
                                                       | ((1U 
                                                           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                              >> 0x1bU)) 
                                                          == 
                                                          (1U 
                                                           & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                              >> 0x1bU)))) 
                                                      & (((IData)(vlSelf->__VdfgTmp_h1ce66380__0) 
                                                          | ((1U 
                                                              & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                 >> 0x1aU)) 
                                                             == 
                                                             (1U 
                                                              & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                 >> 0x1aU)))) 
                                                         & (((IData)(vlSelf->__VdfgTmp_h1ce12e50__0) 
                                                             | ((1U 
                                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                    >> 0x19U)) 
                                                                == 
                                                                (1U 
                                                                 & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                    >> 0x19U)))) 
                                                            & (((IData)(vlSelf->__VdfgTmp_h1ce13fa3__0) 
                                                                | ((1U 
                                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                       >> 0x18U)) 
                                                                   == 
                                                                   (1U 
                                                                    & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                       >> 0x18U)))) 
                                                               & (((IData)(vlSelf->__VdfgTmp_h1ce10f37__0) 
                                                                   | ((1U 
                                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                          >> 0x17U)) 
                                                                      == 
                                                                      (1U 
                                                                       & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                          >> 0x17U)))) 
                                                                  & (((IData)(vlSelf->__VdfgTmp_h1ce19c01__0) 
                                                                      | ((1U 
                                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                             >> 0x16U)) 
                                                                         == 
                                                                         (1U 
                                                                          & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                             >> 0x16U)))) 
                                                                     & (((IData)(vlSelf->__VdfgTmp_h1ce02da1__0) 
                                                                         | ((1U 
                                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x15U)) 
                                                                            == 
                                                                            (1U 
                                                                             & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0x15U)))) 
                                                                        & (((IData)(vlSelf->__VdfgTmp_h1ce64af2__0) 
                                                                            | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x14U)) 
                                                                               == 
                                                                               (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0x14U)))) 
                                                                           & (((IData)(vlSelf->__VdfgTmp_h1ce6b6c3__0) 
                                                                               | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x13U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0x13U)))) 
                                                                              & (((IData)(vlSelf->__VdfgTmp_h1ce1de95__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x12U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0x12U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce16bbe__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0x11U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce68262__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0x10U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce6f2d3__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0xfU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce11b14__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0xeU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce791b2__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0xdU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce7c2ee__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0xcU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce635c4__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0xbU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce76183__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce6d9ad__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 9U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce6066a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 8U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce671d4__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 7U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce6a81c__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 6U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1cb9efae__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 5U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce77831__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 4U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1ce7a8e0__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 3U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h1cb9e090__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 2U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hde929dc3__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data 
                                                                                >> 1U)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0) 
                                                                                == 
                                                                                (1U 
                                                                                & rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__trigger_match__data))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__1__KET____DOT__trigger_match__match 
        = (((IData)(vlSelf->__VdfgTmp_hcacb0f6b__0) 
            | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                >> 0x1fU) == (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                              >> 0x1fU))) & (((IData)(vlSelf->__VdfgTmp_hcaca75d8__0) 
                                              | ((1U 
                                                  & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                     >> 0x1eU)) 
                                                 == 
                                                 (1U 
                                                  & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                     >> 0x1eU)))) 
                                             & (((IData)(vlSelf->__VdfgTmp_hcacda45b__0) 
                                                 | ((1U 
                                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                        >> 0x1dU)) 
                                                    == 
                                                    (1U 
                                                     & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                        >> 0x1dU)))) 
                                                & (((IData)(vlSelf->__VdfgTmp_hcaccf6b4__0) 
                                                    | ((1U 
                                                        & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                           >> 0x1cU)) 
                                                       == 
                                                       (1U 
                                                        & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                           >> 0x1cU)))) 
                                                   & (((IData)(vlSelf->__VdfgTmp_hcaca198e__0) 
                                                       | ((1U 
                                                           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                              >> 0x1bU)) 
                                                          == 
                                                          (1U 
                                                           & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                              >> 0x1bU)))) 
                                                      & (((IData)(vlSelf->__VdfgTmp_hcacdb46a__0) 
                                                          | ((1U 
                                                              & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                 >> 0x1aU)) 
                                                             == 
                                                             (1U 
                                                              & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                 >> 0x1aU)))) 
                                                         & (((IData)(vlSelf->__VdfgTmp_hcacdf961__0) 
                                                             | ((1U 
                                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                    >> 0x19U)) 
                                                                == 
                                                                (1U 
                                                                 & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                    >> 0x19U)))) 
                                                            & (((IData)(vlSelf->__VdfgTmp_hcaca2b32__0) 
                                                                | ((1U 
                                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                       >> 0x18U)) 
                                                                   == 
                                                                   (1U 
                                                                    & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                       >> 0x18U)))) 
                                                               & (((IData)(vlSelf->__VdfgTmp_hcacb5183__0) 
                                                                   | ((1U 
                                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                          >> 0x17U)) 
                                                                      == 
                                                                      (1U 
                                                                       & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                          >> 0x17U)))) 
                                                                  & (((IData)(vlSelf->__VdfgTmp_hcacd88d5__0) 
                                                                      | ((1U 
                                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                             >> 0x16U)) 
                                                                         == 
                                                                         (1U 
                                                                          & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                             >> 0x16U)))) 
                                                                     & (((IData)(vlSelf->__VdfgTmp_hcacde283__0) 
                                                                         | ((1U 
                                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x15U)) 
                                                                            == 
                                                                            (1U 
                                                                             & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0x15U)))) 
                                                                        & (((IData)(vlSelf->__VdfgTmp_hcaca5695__0) 
                                                                            | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x14U)) 
                                                                               == 
                                                                               (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0x14U)))) 
                                                                           & (((IData)(vlSelf->__VdfgTmp_hcaccdf64__0) 
                                                                               | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x13U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0x13U)))) 
                                                                              & (((IData)(vlSelf->__VdfgTmp_hcacd2f77__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x12U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0x12U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacd388c__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0x11U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacd950c__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0x10U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcaca0762__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0xfU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacd69dd__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0xeU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacd7c9e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0xdU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacfc88d__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0xcU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacc5879__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0xbU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcaccae6f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcaccb898__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 9U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacd0f1f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 8U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacd806e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 7U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacce8da__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 6U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcaccfc86__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 5U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcad57492__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 4U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacc10c3__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 3U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_hcacfd57c__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 2U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h88a3eea0__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data 
                                                                                >> 1U)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1) 
                                                                                == 
                                                                                (1U 
                                                                                & rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__trigger_match__data))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__2__KET____DOT__trigger_match__match 
        = (((IData)(vlSelf->__VdfgTmp_h81e64771__0) 
            | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                >> 0x1fU) == (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                              >> 0x1fU))) & (((IData)(vlSelf->__VdfgTmp_h81c55cc3__0) 
                                              | ((1U 
                                                  & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                     >> 0x1eU)) 
                                                 == 
                                                 (1U 
                                                  & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                     >> 0x1eU)))) 
                                             & (((IData)(vlSelf->__VdfgTmp_h81e7b56f__0) 
                                                 | ((1U 
                                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                        >> 0x1dU)) 
                                                    == 
                                                    (1U 
                                                     & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                        >> 0x1dU)))) 
                                                & (((IData)(vlSelf->__VdfgTmp_h81e7a805__0) 
                                                    | ((1U 
                                                        & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                           >> 0x1cU)) 
                                                       == 
                                                       (1U 
                                                        & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                           >> 0x1cU)))) 
                                                   & (((IData)(vlSelf->__VdfgTmp_h81e61a14__0) 
                                                       | ((1U 
                                                           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                              >> 0x1bU)) 
                                                          == 
                                                          (1U 
                                                           & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                              >> 0x1bU)))) 
                                                      & (((IData)(vlSelf->__VdfgTmp_h81e606b3__0) 
                                                          | ((1U 
                                                              & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                 >> 0x1aU)) 
                                                             == 
                                                             (1U 
                                                              & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                 >> 0x1aU)))) 
                                                         & (((IData)(vlSelf->__VdfgTmp_h81e67a62__0) 
                                                             | ((1U 
                                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                    >> 0x19U)) 
                                                                == 
                                                                (1U 
                                                                 & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                    >> 0x19U)))) 
                                                            & (((IData)(vlSelf->__VdfgTmp_h81e66492__0) 
                                                                | ((1U 
                                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                       >> 0x18U)) 
                                                                   == 
                                                                   (1U 
                                                                    & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                       >> 0x18U)))) 
                                                               & (((IData)(vlSelf->__VdfgTmp_h81c58e00__0) 
                                                                   | ((1U 
                                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                          >> 0x17U)) 
                                                                      == 
                                                                      (1U 
                                                                       & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                          >> 0x17U)))) 
                                                                  & (((IData)(vlSelf->__VdfgTmp_h81c59d33__0) 
                                                                      | ((1U 
                                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                             >> 0x16U)) 
                                                                         == 
                                                                         (1U 
                                                                          & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                             >> 0x16U)))) 
                                                                     & (((IData)(vlSelf->__VdfgTmp_h81e73756__0) 
                                                                         | ((1U 
                                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x15U)) 
                                                                            == 
                                                                            (1U 
                                                                             & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0x15U)))) 
                                                                        & (((IData)(vlSelf->__VdfgTmp_h81e79649__0) 
                                                                            | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x14U)) 
                                                                               == 
                                                                               (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0x14U)))) 
                                                                           & (((IData)(vlSelf->__VdfgTmp_h81e79135__0) 
                                                                               | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x13U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0x13U)))) 
                                                                              & (((IData)(vlSelf->__VdfgTmp_h81e74447__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x12U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0x12U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e7e1de__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0x11U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e752cd__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0x10U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e7437c__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0xfU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e7b668__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0xeU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81d8b35e__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0xdU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e7e066__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0xcU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e71037__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0xbU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81d8c344__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e761d1__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 9U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81d8a5e3__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 8U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h8f07f63f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 7U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e73d60__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 6U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81d83d51__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 5U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81e76462__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 4U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81d89734__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 3U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h81d84a40__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 2U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h782c552d__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data 
                                                                                >> 1U)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2) 
                                                                                == 
                                                                                (1U 
                                                                                & rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__trigger_match__data))))))))))))))))))))))))))))))))));
    rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__3__KET____DOT__trigger_match__match 
        = (((IData)(vlSelf->__VdfgTmp_h6f449fb1__0) 
            | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                >> 0x1fU) == (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                              >> 0x1fU))) & (((IData)(vlSelf->__VdfgTmp_h6f446266__0) 
                                              | ((1U 
                                                  & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                     >> 0x1eU)) 
                                                 == 
                                                 (1U 
                                                  & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                     >> 0x1eU)))) 
                                             & (((IData)(vlSelf->__VdfgTmp_h6f44f41b__0) 
                                                 | ((1U 
                                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                        >> 0x1dU)) 
                                                    == 
                                                    (1U 
                                                     & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                        >> 0x1dU)))) 
                                                & (((IData)(vlSelf->__VdfgTmp_h6f438748__0) 
                                                    | ((1U 
                                                        & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                           >> 0x1cU)) 
                                                       == 
                                                       (1U 
                                                        & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                           >> 0x1cU)))) 
                                                   & (((IData)(vlSelf->__VdfgTmp_h6f4329fa__0) 
                                                       | ((1U 
                                                           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                              >> 0x1bU)) 
                                                          == 
                                                          (1U 
                                                           & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                              >> 0x1bU)))) 
                                                      & (((IData)(vlSelf->__VdfgTmp_h6f43662a__0) 
                                                          | ((1U 
                                                              & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                 >> 0x1aU)) 
                                                             == 
                                                             (1U 
                                                              & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                 >> 0x1aU)))) 
                                                         & (((IData)(vlSelf->__VdfgTmp_h6f4d8a1b__0) 
                                                             | ((1U 
                                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                    >> 0x19U)) 
                                                                == 
                                                                (1U 
                                                                 & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                    >> 0x19U)))) 
                                                            & (((IData)(vlSelf->__VdfgTmp_h6f4d8d24__0) 
                                                                | ((1U 
                                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                       >> 0x18U)) 
                                                                   == 
                                                                   (1U 
                                                                    & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                       >> 0x18U)))) 
                                                               & (((IData)(vlSelf->__VdfgTmp_h6f431eb5__0) 
                                                                   | ((1U 
                                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                          >> 0x17U)) 
                                                                      == 
                                                                      (1U 
                                                                       & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                          >> 0x17U)))) 
                                                                  & (((IData)(vlSelf->__VdfgTmp_h6f44eb47__0) 
                                                                      | ((1U 
                                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                             >> 0x16U)) 
                                                                         == 
                                                                         (1U 
                                                                          & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                             >> 0x16U)))) 
                                                                     & (((IData)(vlSelf->__VdfgTmp_h6f434867__0) 
                                                                         | ((1U 
                                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x15U)) 
                                                                            == 
                                                                            (1U 
                                                                             & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0x15U)))) 
                                                                        & (((IData)(vlSelf->__VdfgTmp_h6f4215b5__0) 
                                                                            | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x14U)) 
                                                                               == 
                                                                               (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0x14U)))) 
                                                                           & (((IData)(vlSelf->__VdfgTmp_h6f43a484__0) 
                                                                               | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x13U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0x13U)))) 
                                                                              & (((IData)(vlSelf->__VdfgTmp_h6f43495b__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x12U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0x12U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f44c40a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x11U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0x11U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f43d87a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0x10U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0x10U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f44bbe8__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xfU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0xfU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f423bdb__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xeU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0xeU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f43ca46__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xdU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0xdU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f4295b1__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xcU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0xcU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f42278d__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xbU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0xbU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f43fa57__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 0xaU)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f448e66__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 9U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 9U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f424a35__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 8U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 8U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f43e684__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 7U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 7U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f44bed0__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 6U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f424666__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 5U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 5U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f4113be__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 4U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f42a28f__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 3U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 3U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h6f42775c__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 2U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 2U)))) 
                                                                                & (((IData)(vlSelf->__VdfgTmp_h25a85e1a__0) 
                                                                                | ((1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 
                                                                                >> 1U)) 
                                                                                == 
                                                                                (1U 
                                                                                & (rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data 
                                                                                >> 1U)))) 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                                                                | ((1U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3) 
                                                                                == 
                                                                                (1U 
                                                                                & rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__trigger_match__data))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____VdfgTmp_h0c101232__0) 
             << 3U) & (((0x3ffffff8U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                         << 2U) & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                   >> 2U))) 
                        | ((IData)(((1U == (0x81U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
                                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                       >> 6U))) << 3U)) 
                       & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__3__KET____DOT__trigger_match__match) 
                          << 3U))) | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____VdfgTmp_h0c101232__0) 
                                        << 2U) & ((
                                                   (0x1ffffffcU 
                                                    & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                        << 1U) 
                                                       & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                          >> 3U))) 
                                                   | ((IData)(
                                                              ((1U 
                                                                == 
                                                                (0x81U 
                                                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                                                               & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                                  >> 6U))) 
                                                      << 2U)) 
                                                  & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__2__KET____DOT__trigger_match__match) 
                                                     << 2U))) 
                                      | ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____VdfgTmp_h0c101232__0) 
                                           << 1U) & 
                                          (((0xffffffeU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                   >> 4U))) 
                                            | ((IData)(
                                                       ((1U 
                                                         == 
                                                         (0x81U 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                                                        & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                           >> 6U))) 
                                               << 1U)) 
                                           & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__1__KET____DOT__trigger_match__match) 
                                              << 1U))) 
                                         | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____VdfgTmp_h0c101232__0) 
                                            & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                    >> 5U)) 
                                                | (IData)(
                                                          ((1U 
                                                            == 
                                                            (0x81U 
                                                             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0))) 
                                                           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                                              >> 6U)))) 
                                               & (IData)(rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT____Vcellout__genblk1__BRA__0__KET____DOT__trigger_match__match))))));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__13(Vrvfpgasim_veerwolf_core__Cbebc20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__Cbebc20___act_comb__TOP__rvfpgasim__veerwolf__13\n"); );
    // Init
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found;
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h23a3f113__0;
    rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h23a3f113__0 = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__zba_a_in;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__zba_a_in = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_in;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_in = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__found;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__found = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j = 0;
    CData/*0:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d = 0;
    IData/*31:0*/ __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d = 0;
    IData/*31:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT____VdfgTmp_h3d7b85e4__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT____VdfgTmp_h3d7b85e4__0 = 0;
    // Body
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 0U;
    if ((1U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                       >> 9U)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write));
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if (__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else if ((1U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                              >> 0x13U)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xdU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write) 
                  << 1U));
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if (__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else if ((1U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                              >> 0x1dU)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xbU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write) 
                  << 2U));
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if (__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else if ((1U & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                              >> 0x27U)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write) 
                  << 3U));
        __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
             == (0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                          >> 0xfU))) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write) 
                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d))) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
               == (0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                            >> 0x14U))) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_write) 
                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 9U))) & ((0x1fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)) 
                                      == (0x1fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 9U))) & ((0x1fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)) 
                                      == (0x1fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x13U))) & ((0x1fU & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0xaU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x13U))) & ((0x1fU & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0xaU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) & ((0x1fU & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) & ((0x1fU & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) & ((0x1fU & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x1eU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) & ((0x1fU & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x1eU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_data_d 
        = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h003be604__0))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw) 
           | (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h003e3411__0))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_result_m) 
              | (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h00f445be__0))) 
                  & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_i0_result_x) 
                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h00f1972b__0))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_data_d 
        = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h048f664d__0))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw) 
           | (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h0483b458__0))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_result_m) 
              | (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h0540c5e7__0))) 
                  & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_i0_result_x) 
                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h055c1772__0))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exublock_d 
        = (1U & (((((0U != (0x71U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) 
                    | (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__presync_stall)) 
                  | (IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall)) 
                 | ((((((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                         >> 0x13U) & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                       | (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                          | vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout)) 
                                      >> 0x15U)) | 
                       ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_idle)) 
                        & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 3U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
                                      | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i))))) 
                      | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
                         & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                             >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb) 
                                       == (0x1fU & 
                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                            >> 0xfU)))))) 
                     | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
                        & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                            >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb) 
                                      == (0x1fU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                                   >> 0x14U)))))) 
                    | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                        >> 5U) & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                  >> 2U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d 
        = (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d)) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d)))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d))))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_immed_d) 
              | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d))) 
                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_data_d)));
    rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h23a3f113__0 
        = ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d))) 
           & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_data_d);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exublock_d)) 
              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____VdfgTmp_h2d2e79e0__0) 
                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d 
        = (1U & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
                  & (((IData)(vlSelf->__VdfgTmp_h8f3fa0f5__0) 
                      | (IData)(vlSelf->__VdfgTmp_h1406570a__0)) 
                     & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                        & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exublock_d))))) 
                 | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                    >> 5U)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm 
        = ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U])
            ? (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__muldiv_rs1_d 
        = (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d)))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d) 
           | rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h23a3f113__0);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
        = (rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h23a3f113__0 
           | (((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                    >> 0xaU))))) & 
               (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT____Vcellinp__i_pc_ff__din 
                << 1U)) | (((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d)))) 
                            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg) 
                           | ((- (IData)(((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                          & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d)) 
                                             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d))))) 
                              & vlSelf->__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT____Vcellinp__genblk5__DOT__i_new_4bit_div_fullshortq__valid_in 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
              >> 5U));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_hfdfb5f83__0 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
              >> 9U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d 
        = ((IData)(__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
              >> 0x11U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_d 
        = (0xfffU & ((((- (IData)(((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h831be8a0__0) 
                                   & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                      >> 9U)))) & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                                   >> 0x14U)) 
                      | ((- (IData)(((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_h831be8a0__0) 
                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                        >> 8U)))) & 
                         ((0xfe0U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0 
                                                      >> 7U))))) 
                     & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_req 
        = ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d) 
               | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____VdfgTmp_h075bfe43__0) 
                   & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____VdfgTmp_h14c3c9ec__0) 
                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                         >> 5U))) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff)))) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_ha0803d66__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 1U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 2U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 3U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 4U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 5U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 6U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 7U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 8U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 9U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xaU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xbU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xcU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xdU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xeU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xfU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x10U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x11U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x12U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x13U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x14U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x15U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x16U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x17U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x18U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x19U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1aU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1bU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1cU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1dU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1eU))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                       >> 0x1fU)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__sout 
        = ((IData)((0x7fffffffffffffffULL & ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U]))) 
                                                                    & (- (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1fU)))) 
                                                                   | (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                                                >> 1U)))) 
                                                                       | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                                >> 0x14U)))))) 
                                                                      & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d))) 
                                             >> (0x1fU 
                                                 & (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                                    >> 1U)))) 
                                                     & (- vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)) 
                                                    | (((- (IData)(
                                                                   (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                                    >> 0x1fU))) 
                                                        & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d) 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U]))) 
                                                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d) 
                                                          | (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                             >> 0x15U)))) 
                                                              & (- vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)) 
                                                             | (((- (IData)(
                                                                            (1U 
                                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                                >> 0x14U)))) 
                                                                 | (- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                                >> 0xdU))))) 
                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d))))))))) 
           & ((IData)(0xffffffffU) << (0x1fU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                               >> 1U)))) 
                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_in 
        = (((- (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                        >> 0x1fU))) & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d) 
           | ((- (IData)((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                >> 0x1eU)))) & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                       << 0x1dU)) 
                                                   | ((0x20000000U 
                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                          << 0x1bU)) 
                                                      | ((0x10000000U 
                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                             << 0x19U)) 
                                                         | ((0x8000000U 
                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                << 0x17U)) 
                                                            | ((0x4000000U 
                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                   << 0x15U)) 
                                                               | ((0x2000000U 
                                                                   & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                      << 0x13U)) 
                                                                  | ((0x1000000U 
                                                                      & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                         << 0x11U)) 
                                                                     | ((0x800000U 
                                                                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                            << 0xfU)) 
                                                                        | ((0x400000U 
                                                                            & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                               << 0xdU)) 
                                                                           | ((0x200000U 
                                                                               & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 0xbU)) 
                                                                              | ((0x100000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__eq 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
           == vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__zba_a_in 
        = (((- (IData)((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                              >> 0x15U)))) & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d, 1U)) 
           | (((- (IData)((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                 >> 0x14U)))) & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d, 2U)) 
              | (((- (IData)((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                    >> 0x13U)))) & 
                  VL_SHIFTL_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d, 3U)) 
                 | ((- (IData)((1U & (~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         >> 0x12U))))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hb8bc2692__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT____Vcellinp__genblk5__DOT__i_new_4bit_div_fullshortq__valid_in) 
           | (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
              >> 0x12U));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_h5d75c369__0 
        = ((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
               >> 0x1dU)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT____Vcellinp__genblk5__DOT__i_new_4bit_div_fullshortq__valid_in));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_a_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT____Vcellinp__genblk5__DOT__i_new_4bit_div_fullshortq__valid_in) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state))
            ? (((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_shift)) 
                                  & (~ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                        >> 0xdU)))))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__muldiv_rs1_d) 
               | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_shift))) 
                   & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff, 4U)) 
                  | ((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                       >> 0xdU)))) 
                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                        << (0x1fU & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                     >> 8U)))))) : vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff);
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_hfdfb5f83__0) 
             << 0x16U) | ((0x380000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                        << 0xdU)) | 
                          ((0x60000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                        << 7U)) | (
                                                   (0x1c000U 
                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                       << 8U)) 
                                                   | ((0x3000U 
                                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                          >> 6U)) 
                                                      | ((0xc00U 
                                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                             << 7U)) 
                                                         | ((0x3f0U 
                                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                                >> 0x15U)) 
                                                            | ((8U 
                                                                & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                                   >> 0x14U)) 
                                                               | (7U 
                                                                  & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U]))))))))) 
           & (- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_hfdfb5f83__0))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d 
           & (- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_hfdfb5f83__0))));
    vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
        = (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__muldiv_rs1_d 
           & (- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____VdfgTmp_hfdfb5f83__0))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_req));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3ffeU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dccm_req));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = (0x10U | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3f3fU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((0x80U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
                        << 7U)) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_write) 
                                   << 6U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x31ffU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | (((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
               << 0xbU) | (((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
                            << 0xaU) | ((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
                                        << 9U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3effU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
              << 8U));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os 
        = __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc = 0U;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__found = 0U;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i = 0U;
    while ((VL_GTS_III(32, 0x20U, __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i) 
            & (~ (IData)(__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__found)))) {
        if ((__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os 
             >> 0x1fU)) {
            __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__found = 1U;
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc)));
            __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os 
                = VL_SHIFTL_III(32,32,32, __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os, 1U);
        }
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
        = (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__zba_a_in 
           + (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm 
              + (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                       >> 5U))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__rq_enable 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_hb8bc2692__0) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state));
    if ((0x400000U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__mul_p)) {
        vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__i_b_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((QData)((IData)(((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                  >> 0x14U) & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                               >> 0x1fU)))) 
                << 0x20U) | (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)));
        vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__i_a_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((QData)((IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                       >> 0x13U)))) 
                << 0x21U) | (((QData)((IData)(((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                                >> 0x15U) 
                                               & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                  >> 0x1fU)))) 
                              << 0x20U) | (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in))));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__i_b_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__rs2_x;
        vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__i_a_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT____Vcellout__i_a_x_ff__dout;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd, 1U) 
           ^ (0xedb88320U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_bd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_hd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd 
        = (VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd, 1U) 
           ^ (0x82f63b78U & (- (IData)((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__crc32c_wd)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__clmul_raw_d 
        = (((- (QData)((IData)((1U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)))) 
            & (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in))) 
           ^ (((- (QData)((IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                         >> 1U))))) 
               & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                  << 1U)) ^ (((- (QData)((IData)((1U 
                                                  & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                     >> 2U))))) 
                              & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                 << 2U)) ^ (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                    >> 3U))))) 
                                             & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                << 3U)) 
                                            ^ (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                       >> 4U))))) 
                                                & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                   << 4U)) 
                                               ^ ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                          >> 5U))))) 
                                                   & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                      << 5U)) 
                                                  ^ 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                           >> 6U))))) 
                                                    & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                       << 6U)) 
                                                   ^ 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                            >> 7U))))) 
                                                     & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                        << 7U)) 
                                                    ^ 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                             >> 8U))))) 
                                                      & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                         << 8U)) 
                                                     ^ 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                              >> 9U))))) 
                                                       & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                          << 9U)) 
                                                      ^ 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                               >> 0xaU))))) 
                                                        & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                           << 0xaU)) 
                                                       ^ 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0xbU))))) 
                                                         & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                            << 0xbU)) 
                                                        ^ 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0xcU))))) 
                                                          & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                             << 0xcU)) 
                                                         ^ 
                                                         (((- (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0xdU))))) 
                                                           & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                              << 0xdU)) 
                                                          ^ 
                                                          (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0xeU))))) 
                                                            & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                               << 0xeU)) 
                                                           ^ 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0xfU))))) 
                                                             & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                << 0xfU)) 
                                                            ^ 
                                                            (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x10U))))) 
                                                              & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                 << 0x10U)) 
                                                             ^ 
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x11U))))) 
                                                               & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                  << 0x11U)) 
                                                              ^ 
                                                              (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x12U))))) 
                                                                & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                   << 0x12U)) 
                                                               ^ 
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x13U))))) 
                                                                 & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                    << 0x13U)) 
                                                                ^ 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x14U))))) 
                                                                  & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                     << 0x14U)) 
                                                                 ^ 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x15U))))) 
                                                                   & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                      << 0x15U)) 
                                                                  ^ 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x16U))))) 
                                                                    & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                       << 0x16U)) 
                                                                   ^ 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x17U))))) 
                                                                     & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                        << 0x17U)) 
                                                                    ^ 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x18U))))) 
                                                                      & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                         << 0x18U)) 
                                                                     ^ 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x19U))))) 
                                                                       & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                          << 0x19U)) 
                                                                      ^ 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x1aU))))) 
                                                                        & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                           << 0x1aU)) 
                                                                       ^ 
                                                                       (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x1bU))))) 
                                                                         & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                            << 0x1bU)) 
                                                                        ^ 
                                                                        (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x1cU))))) 
                                                                          & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                             << 0x1cU)) 
                                                                         ^ 
                                                                         (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x1dU))))) 
                                                                           & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                              << 0x1dU)) 
                                                                          ^ 
                                                                          (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x1eU))))) 
                                                                            & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                               << 0x1eU)) 
                                                                           ^ 
                                                                           ((- (QData)((IData)(
                                                                                (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                                >> 0x1fU)))) 
                                                                            & ((QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                                               << 0x1fU)))))))))))))))))))))))))))))))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d = 0U;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in);
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 1U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 1U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 2U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 2U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 3U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 3U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 4U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 4U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 5U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 5U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 6U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 6U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 7U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 7U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 8U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 8U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 9U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 9U)) << 
                                   (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xaU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0xaU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xbU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0xbU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xcU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0xcU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xdU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0xdU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xeU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0xeU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xfU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0xfU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x10U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x10U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x11U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x11U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x12U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x12U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x13U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x13U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x14U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x14U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x15U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x15U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x16U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x16U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x17U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x17U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x18U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x18U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x19U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x19U)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1aU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x1aU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1bU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x1bU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1cU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x1cU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1dU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x1dU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1eU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 0x1eU)) 
                                   << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d 
        = (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
           >> 0x1fU);
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d 
            = (((~ ((IData)(1U) << (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_d) 
               | (0xffffffffULL & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                    >> 0x1fU) << (0x1fU 
                                                  & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bcompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d = 0U;
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in);
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffffeU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                        >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 1U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffffdU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (2U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                         >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                        << 1U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 2U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffffbU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (4U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                         >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                        << 2U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 3U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffff7U & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (8U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                         >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                        << 3U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 4U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffffefU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x10U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                            >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                           << 4U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 5U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffffdfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x20U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                            >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                           << 5U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 6U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffffbfU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x40U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                            >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                           << 6U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 7U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffff7fU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x80U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                            >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                           << 7U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 8U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffeffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x100U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                             >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                            << 8U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 9U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffdffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x200U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                             >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                            << 9U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xaU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffffbffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x400U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                             >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                            << 0xaU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xbU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffff7ffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x800U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                             >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                            << 0xbU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xcU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffefffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x1000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                              >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                             << 0xcU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xdU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffdfffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x2000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                              >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                             << 0xdU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xeU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffffbfffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x4000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                              >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                             << 0xeU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0xfU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffff7fffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x8000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                              >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                             << 0xfU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x10U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffeffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x10000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                               >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                              << 0x10U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x11U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffdffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x20000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                               >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                              << 0x11U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x12U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfffbffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x40000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                               >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                              << 0x12U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x13U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfff7ffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x80000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                               >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                              << 0x13U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x14U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffefffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x100000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                               << 0x14U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x15U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffdfffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x200000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                               << 0x15U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x16U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xffbfffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x400000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                               << 0x16U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x17U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xff7fffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x800000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                               << 0x17U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x18U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfeffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x1000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                 >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                << 0x18U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x19U));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfdffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x2000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                 >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                << 0x19U)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1aU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xfbffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x4000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                 >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                << 0x1aU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1bU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xf7ffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x8000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                 >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                << 0x1bU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1cU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xefffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x10000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                  >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                 << 0x1cU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1dU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xdfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x20000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                  >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                 << 0x1dU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                 >> 0x1eU));
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0xbfffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | (0x40000000U & ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                  >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                                 << 0x1eU)));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d 
        = (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
           >> 0x1fU);
    if (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_test_bit_d) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d 
            = ((0x7fffffffU & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_d) 
               | ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                   >> (0x1fU & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j)) 
                  << 0x1fU));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j 
            = ((IData)(1U) + __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__bdecompress_j);
    }
    rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT____VdfgTmp_h3d7b85e4__0 
        = ((0x80000000U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                           << 1U)) | ((0x40000000U 
                                       & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                          >> 1U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                              >> 1U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                 << 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                    >> 1U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                       << 1U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                          >> 1U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                             << 1U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                >> 1U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                   << 1U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                      >> 1U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                         << 1U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                            >> 1U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                               << 1U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    if ((1U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)) {
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
            = ((0x80000000U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
               | ((0x40000000U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                  << 1U)) | ((0x20000000U 
                                              & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                 >> 1U)) 
                                             | ((0x18000000U 
                                                 & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                | ((0x4000000U 
                                                    & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                       << 1U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                          >> 1U)) 
                                                      | ((0x1800000U 
                                                          & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                         | ((0x400000U 
                                                             & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                << 1U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                   >> 1U)) 
                                                               | ((0x180000U 
                                                                   & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                                  | ((0x40000U 
                                                                      & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                         << 1U)) 
                                                                     | ((0x20000U 
                                                                         & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                            >> 1U)) 
                                                                        | ((0x18000U 
                                                                            & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x1800U 
                                                                                & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x180U 
                                                                                & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | ((0x18U 
                                                                                & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
                                                                                | ((4U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)))))))))))))))))))))))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
            = rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT____VdfgTmp_h3d7b85e4__0;
    } else {
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
            = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
            = vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt 
        = (1U & (((~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                      >> 0x1dU)) & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                     >> 0x1fU) ^ ((
                                                   (~ 
                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                     >> 0x1fU)) 
                                                   & ((~ 
                                                       (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm 
                                                        >> 0x1fU)) 
                                                      & (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                                         >> 0x1fU))) 
                                                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                      >> 0x1fU) 
                                                     & ((~ 
                                                         (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                                          >> 0x1fU)) 
                                                        & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm 
                                                           >> 0x1fU)))))) 
                 | ((~ (IData)((1ULL & (((QData)((IData)(__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__zba_a_in)) 
                                         + ((QData)((IData)(__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm)) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                                  >> 5U)))))) 
                                        >> 0x20U)))) 
                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                       >> 0x1dU))));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d 
        = ((2U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)
            ? ((0xc0000000U & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d) 
               | ((0x30000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                  << 2U)) | ((0xc000000U 
                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                 >> 2U)) 
                                             | ((0x3c00000U 
                                                 & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d) 
                                                | ((0x300000U 
                                                    & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                       << 2U)) 
                                                   | ((0xc0000U 
                                                       & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                          >> 2U)) 
                                                      | ((0x3c000U 
                                                          & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d) 
                                                         | ((0x3000U 
                                                             & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                                << 2U)) 
                                                            | ((0xc00U 
                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                                   >> 2U)) 
                                                               | ((0x3c0U 
                                                                   & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d) 
                                                                  | ((0x30U 
                                                                      & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                                         << 2U)) 
                                                                     | ((0xcU 
                                                                         & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d 
                                                                            >> 2U)) 
                                                                        | (3U 
                                                                           & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d)))))))))))))
            : __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl1_d);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d 
        = ((8U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)
            ? ((0xff000000U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in) 
               | ((0xff0000U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                << 8U)) | ((0xff00U 
                                            & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                               >> 8U)) 
                                           | (0xffU 
                                              & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in))))
            : vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
        = ((4U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)
            ? ((0xf0000000U & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d) 
               | ((0xf000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d 
                                 << 4U)) | ((0xf00000U 
                                             & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d 
                                                >> 4U)) 
                                            | ((0xff000U 
                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d) 
                                               | ((0xf00U 
                                                   & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d 
                                                      << 4U)) 
                                                  | ((0xf0U 
                                                      & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d 
                                                         >> 4U)) 
                                                     | (0xfU 
                                                        & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d)))))))
            : __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl8_d);
    if ((2U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl2_d 
            = ((0xc0000000U & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d) 
               | ((0x30000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                  << 2U)) | ((0xc000000U 
                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                 >> 2U)) 
                                             | ((0x3c00000U 
                                                 & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d) 
                                                | ((0x300000U 
                                                    & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                       << 2U)) 
                                                   | ((0xc0000U 
                                                       & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                          >> 2U)) 
                                                      | ((0x3c000U 
                                                          & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d) 
                                                         | ((0x3000U 
                                                             & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                                << 2U)) 
                                                            | ((0xc00U 
                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                                   >> 2U)) 
                                                               | ((0x3c0U 
                                                                   & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d) 
                                                                  | ((0x30U 
                                                                      & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                                         << 2U)) 
                                                                     | ((0xcU 
                                                                         & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d 
                                                                            >> 2U)) 
                                                                        | (3U 
                                                                           & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d)))))))))))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
            = ((0xc0000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                               << 2U)) | ((0x30000000U 
                                           & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                              >> 2U)) 
                                          | ((0xc000000U 
                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                 << 2U)) 
                                             | ((0x3000000U 
                                                 & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                    >> 2U)) 
                                                | ((0xc00000U 
                                                    & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                       << 2U)) 
                                                   | ((0x300000U 
                                                       & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                          >> 2U)) 
                                                      | ((0xc0000U 
                                                          & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                             << 2U)) 
                                                         | ((0x30000U 
                                                             & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                >> 2U)) 
                                                            | ((0xc000U 
                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                   << 2U)) 
                                                               | ((0x3000U 
                                                                   & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                      >> 2U)) 
                                                                  | ((0xc00U 
                                                                      & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                         << 2U)) 
                                                                     | ((0x300U 
                                                                         & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                            >> 2U)) 
                                                                        | ((0xc0U 
                                                                            & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                               << 2U)) 
                                                                           | ((0x30U 
                                                                               & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                                >> 2U)) 
                                                                              | ((0xcU 
                                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d 
                                                                                >> 2U)))))))))))))))));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl2_d 
            = __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__shfl4_d;
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
            = __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev1_d;
    }
    if ((4U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl4_d 
            = ((0xf0000000U & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d) 
               | ((0xf000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d 
                                 << 4U)) | ((0xf00000U 
                                             & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d 
                                                >> 4U)) 
                                            | ((0xff000U 
                                                & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d) 
                                               | ((0xf00U 
                                                   & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d 
                                                      << 4U)) 
                                                  | ((0xf0U 
                                                      & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d 
                                                         >> 4U)) 
                                                     | (0xfU 
                                                        & __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d)))))));
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d 
            = ((0xf0000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                               << 4U)) | ((0xf000000U 
                                           & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                              >> 4U)) 
                                          | ((0xf00000U 
                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                                 << 4U)) 
                                             | ((0xf0000U 
                                                 & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                                    >> 4U)) 
                                                | ((0xf000U 
                                                    & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                                       << 4U)) 
                                                   | ((0xf00U 
                                                       & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                                          >> 4U)) 
                                                      | ((0xf0U 
                                                          & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d 
                                                               >> 4U)))))))));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl4_d 
            = __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__unshfl2_d;
        __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d 
            = __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev2_d;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev8_d 
        = ((8U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)
            ? ((0xff000000U & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d 
                               << 8U)) | ((0xff0000U 
                                           & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d 
                                              >> 8U)) 
                                          | ((0xff00U 
                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d 
                                                   >> 8U)))))
            : __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__grev4_d);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
        = (((- (IData)((1U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in))) 
            & rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT____VdfgTmp_h3d7b85e4__0) 
           | vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs1_in);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel_a 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt)) 
                 ^ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                    >> 0x1aU)));
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
        = (((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                              >> 1U)))) & ((0xc0000000U 
                                            & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                               << 2U)) 
                                           | ((0x30000000U 
                                               & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                  >> 2U)) 
                                              | ((0xc000000U 
                                                  & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                     << 2U)) 
                                                 | ((0x3000000U 
                                                     & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                        >> 2U)) 
                                                    | ((0xc00000U 
                                                        & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                           << 2U)) 
                                                       | ((0x300000U 
                                                           & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                              >> 2U)) 
                                                          | ((0xc0000U 
                                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                 << 2U)) 
                                                             | ((0x30000U 
                                                                 & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                    >> 2U)) 
                                                                | ((0xc000U 
                                                                    & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                       << 2U)) 
                                                                   | ((0x3000U 
                                                                       & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                          >> 2U)) 
                                                                      | ((0xc00U 
                                                                          & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                             << 2U)) 
                                                                         | ((0x300U 
                                                                             & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                                >> 2U)) 
                                                                            | ((0xc0U 
                                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                                << 2U)) 
                                                                               | ((0x30U 
                                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                                >> 2U)) 
                                                                                | ((0xcU 
                                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d 
                                                                                >> 2U)))))))))))))))))) 
           | __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc1_d);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d 
        = (((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                              >> 2U)))) & ((0xf0000000U 
                                            & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                               << 4U)) 
                                           | ((0xf000000U 
                                               & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                  >> 4U)) 
                                              | ((0xf00000U 
                                                  & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                     << 4U)) 
                                                 | ((0xf0000U 
                                                     & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                        >> 4U)) 
                                                    | ((0xf000U 
                                                        & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                           << 4U)) 
                                                       | ((0xf00U 
                                                           & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                              >> 4U)) 
                                                          | ((0xf0U 
                                                              & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d 
                                                                   >> 4U)))))))))) 
           | __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc2_d);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc8_d 
        = (((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                              >> 3U)))) & ((0xff000000U 
                                            & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d 
                                               << 8U)) 
                                           | ((0xff0000U 
                                               & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d 
                                                  >> 8U)) 
                                              | ((0xff00U 
                                                  & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d 
                                                       >> 8U)))))) 
           | __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_mul__DOT__gorc4_d);
}
