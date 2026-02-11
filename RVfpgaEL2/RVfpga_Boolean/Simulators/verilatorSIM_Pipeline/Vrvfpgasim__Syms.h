// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRVFPGASIM__SYMS_H_
#define VERILATED_VRVFPGASIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrvfpgasim.h"

// INCLUDE MODULE CLASSES
#include "Vrvfpgasim___024root.h"
#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim___024unit.h"
#include "Vrvfpgasim_veerwolf_core__Cbebc20.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000.h"
#include "Vrvfpgasim_dpram64__S1000.h"
#include "Vrvfpgasim_axi_demux__pi2.h"
#include "Vrvfpgasim_axi_mux__pi4.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrvfpgasim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrvfpgasim* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrvfpgasim___024root           TOP;
    Vrvfpgasim_rvfpgasim           TOP__rvfpgasim;
    Vrvfpgasim_veerwolf_core__Cbebc20 TOP__rvfpgasim__veerwolf;
    Vrvfpgasim_axi_mux__pi4        TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux;
    Vrvfpgasim_axi_mux__pi4        TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux;
    Vrvfpgasim_axi_demux__pi2      TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_demux__pi2      TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_demux__pi2      TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi5 TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_wb_mem_wrapper__M1000 TOP__rvfpgasim__veerwolf__bootrom;
    Vrvfpgasim_dpram64__S1000      TOP__rvfpgasim__veerwolf__bootrom__ram;

    // SCOPE NAMES
    VerilatedScope __Vscope_rvfpgasim__veerwolf__bootrom__ram;

    // CONSTRUCTORS
    Vrvfpgasim__Syms(VerilatedContext* contextp, const char* namep, Vrvfpgasim* modelp);
    ~Vrvfpgasim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
