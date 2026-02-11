// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim__pch.h"
#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim___024unit.h"

void Vrvfpgasim___024unit___ctor_var_reset(Vrvfpgasim___024unit* vlSelf);

Vrvfpgasim___024unit::Vrvfpgasim___024unit(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim___024unit___ctor_var_reset(this);
}

void Vrvfpgasim___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim___024unit::~Vrvfpgasim___024unit() {
}
