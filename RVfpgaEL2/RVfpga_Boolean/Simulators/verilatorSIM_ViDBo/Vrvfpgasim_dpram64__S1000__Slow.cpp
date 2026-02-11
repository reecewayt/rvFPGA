// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_dpram64__S1000.h"

void Vrvfpgasim_dpram64__S1000___ctor_var_reset(Vrvfpgasim_dpram64__S1000* vlSelf);

Vrvfpgasim_dpram64__S1000::Vrvfpgasim_dpram64__S1000(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_dpram64__S1000___ctor_var_reset(this);
}

void Vrvfpgasim_dpram64__S1000::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_dpram64__S1000::~Vrvfpgasim_dpram64__S1000() {
}
