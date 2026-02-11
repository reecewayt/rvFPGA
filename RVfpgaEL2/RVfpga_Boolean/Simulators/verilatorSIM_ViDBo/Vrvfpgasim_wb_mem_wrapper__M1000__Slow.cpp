// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000.h"

void Vrvfpgasim_wb_mem_wrapper__M1000___ctor_var_reset(Vrvfpgasim_wb_mem_wrapper__M1000* vlSelf);

Vrvfpgasim_wb_mem_wrapper__M1000::Vrvfpgasim_wb_mem_wrapper__M1000(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_wb_mem_wrapper__M1000___ctor_var_reset(this);
}

void Vrvfpgasim_wb_mem_wrapper__M1000::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_wb_mem_wrapper__M1000::~Vrvfpgasim_wb_mem_wrapper__M1000() {
}
