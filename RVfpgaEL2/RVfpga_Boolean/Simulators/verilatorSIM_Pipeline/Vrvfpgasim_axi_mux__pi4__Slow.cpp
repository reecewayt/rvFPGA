// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mux__pi4.h"

void Vrvfpgasim_axi_mux__pi4___ctor_var_reset(Vrvfpgasim_axi_mux__pi4* vlSelf);

Vrvfpgasim_axi_mux__pi4::Vrvfpgasim_axi_mux__pi4(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_axi_mux__pi4___ctor_var_reset(this);
}

void Vrvfpgasim_axi_mux__pi4::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_axi_mux__pi4::~Vrvfpgasim_axi_mux__pi4() {
}
