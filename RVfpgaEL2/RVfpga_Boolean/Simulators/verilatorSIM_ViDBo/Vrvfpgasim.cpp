// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrvfpgasim__pch.h"

//============================================================
// Constructors

Vrvfpgasim::Vrvfpgasim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrvfpgasim__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , i_jtag_tck{vlSymsp->TOP.i_jtag_tck}
    , i_jtag_trst_n{vlSymsp->TOP.i_jtag_trst_n}
    , i_pb{vlSymsp->TOP.i_pb}
    , AN{vlSymsp->TOP.AN}
    , CA{vlSymsp->TOP.CA}
    , CB{vlSymsp->TOP.CB}
    , CC{vlSymsp->TOP.CC}
    , CD{vlSymsp->TOP.CD}
    , CE{vlSymsp->TOP.CE}
    , CF{vlSymsp->TOP.CF}
    , CG{vlSymsp->TOP.CG}
    , Enables_Reg{vlSymsp->TOP.Enables_Reg}
    , tf_push{vlSymsp->TOP.tf_push}
    , wb_m2s_uart_dat_output{vlSymsp->TOP.wb_m2s_uart_dat_output}
    , LED_B{vlSymsp->TOP.LED_B}
    , LED_G{vlSymsp->TOP.LED_G}
    , LED_R{vlSymsp->TOP.LED_R}
    , rst{vlSymsp->TOP.rst}
    , i_jtag_tms{vlSymsp->TOP.i_jtag_tms}
    , i_jtag_tdi{vlSymsp->TOP.i_jtag_tdi}
    , o_jtag_tdo{vlSymsp->TOP.o_jtag_tdo}
    , o_uart_tx{vlSymsp->TOP.o_uart_tx}
    , i_sw{vlSymsp->TOP.i_sw}
    , o_led{vlSymsp->TOP.o_led}
    , o_gpio{vlSymsp->TOP.o_gpio}
    , Digits_Reg{vlSymsp->TOP.Digits_Reg}
    , rvfpgasim{vlSymsp->TOP.rvfpgasim}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrvfpgasim::Vrvfpgasim(const char* _vcname__)
    : Vrvfpgasim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrvfpgasim::~Vrvfpgasim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrvfpgasim___024root___eval_debug_assertions(Vrvfpgasim___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvfpgasim___024root___eval_static(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_initial(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_settle(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval(Vrvfpgasim___024root* vlSelf);

void Vrvfpgasim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrvfpgasim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrvfpgasim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrvfpgasim___024root___eval_static(&(vlSymsp->TOP));
        Vrvfpgasim___024root___eval_initial(&(vlSymsp->TOP));
        Vrvfpgasim___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrvfpgasim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrvfpgasim::eventsPending() { return false; }

uint64_t Vrvfpgasim::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrvfpgasim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrvfpgasim___024root___eval_final(Vrvfpgasim___024root* vlSelf);

VL_ATTR_COLD void Vrvfpgasim::final() {
    Vrvfpgasim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrvfpgasim::hierName() const { return vlSymsp->name(); }
const char* Vrvfpgasim::modelName() const { return "Vrvfpgasim"; }
unsigned Vrvfpgasim::threads() const { return 1; }
void Vrvfpgasim::prepareClone() const { contextp()->prepareClone(); }
void Vrvfpgasim::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vrvfpgasim::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrvfpgasim::trace()' called on model that was Verilated without --trace option");
}
