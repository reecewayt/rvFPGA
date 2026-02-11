// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_rvfpgasim.h"

void Vrvfpgasim_rvfpgasim___ctor_var_reset(Vrvfpgasim_rvfpgasim* vlSelf);

Vrvfpgasim_rvfpgasim::Vrvfpgasim_rvfpgasim(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_rvfpgasim___ctor_var_reset(this);
}

void Vrvfpgasim_rvfpgasim::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_rvfpgasim::~Vrvfpgasim_rvfpgasim() {
}
