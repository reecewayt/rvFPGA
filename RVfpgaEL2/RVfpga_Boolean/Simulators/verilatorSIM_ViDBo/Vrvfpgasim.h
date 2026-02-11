// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRVFPGASIM_H_
#define VERILATED_VRVFPGASIM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim___024root;
class Vrvfpgasim_rvfpgasim;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vrvfpgasim VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vrvfpgasim__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&i_jtag_tck,0,0);
    VL_IN8(&i_jtag_trst_n,0,0);
    VL_IN8(&i_pb,4,0);
    VL_OUT8(&AN,7,0);
    VL_OUT8(&CA,0,0);
    VL_OUT8(&CB,0,0);
    VL_OUT8(&CC,0,0);
    VL_OUT8(&CD,0,0);
    VL_OUT8(&CE,0,0);
    VL_OUT8(&CF,0,0);
    VL_OUT8(&CG,0,0);
    VL_OUT8(&Enables_Reg,7,0);
    VL_OUT8(&tf_push,0,0);
    VL_OUT8(&wb_m2s_uart_dat_output,7,0);
    VL_OUT8(&LED_B,0,0);
    VL_OUT8(&LED_G,0,0);
    VL_OUT8(&LED_R,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&i_jtag_tms,0,0);
    VL_IN8(&i_jtag_tdi,0,0);
    VL_OUT8(&o_jtag_tdo,0,0);
    VL_OUT8(&o_uart_tx,0,0);
    VL_IN16(&i_sw,15,0);
    VL_OUT16(&o_led,15,0);
    VL_OUT16(&o_gpio,15,0);
    VL_OUT(&Digits_Reg,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vrvfpgasim_rvfpgasim* const rvfpgasim;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vrvfpgasim___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vrvfpgasim(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vrvfpgasim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vrvfpgasim();
  private:
    VL_UNCOPYABLE(Vrvfpgasim);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
