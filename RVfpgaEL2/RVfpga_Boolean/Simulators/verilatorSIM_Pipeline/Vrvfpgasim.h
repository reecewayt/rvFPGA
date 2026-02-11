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
    VL_OUT8(&dec_i0_rs1_d,4,0);
    VL_OUT8(&dec_i0_rs2_d,4,0);
    VL_OUT8(&mul_valid_x,0,0);
    VL_OUT8(&dec_i0_waddr_r,4,0);
    VL_OUT8(&dec_i0_wen_r,0,0);
    VL_OUT8(&dec_nonblock_load_waddr,4,0);
    VL_OUT8(&dec_nonblock_load_wen,0,0);
    VL_OUT8(&exu_div_wren,0,0);
    VL_OUT8(&div_waddr_wb,4,0);
    VL_OUT8(&i0_rs1_bypass_en_d,0,0);
    VL_OUT8(&i0_rs2_bypass_en_d,0,0);
    VL_OUT8(&dec_i0_rs1_en_d,0,0);
    VL_OUT8(&dec_i0_rs2_en_d,0,0);
    VL_OUT8(&alu_instd,0,0);
    VL_OUT8(&lsu_instd,0,0);
    VL_OUT8(&mul_instd,0,0);
    VL_OUT8(&i0_x_data_en,0,0);
    VL_OUT8(&alu_instx,0,0);
    VL_OUT8(&mul_instx,0,0);
    VL_OUT8(&Bypass0_exu_i0_result_x,0,0);
    VL_OUT8(&Bypass0_lsu_nonblock_load_data,0,0);
    VL_OUT8(&Bypass1_exu_i0_result_x,0,0);
    VL_OUT8(&Bypass1_lsu_nonblock_load_data,0,0);
    VL_OUT8(&actual_taken,0,0);
    VL_OUT8(&any_branch,0,0);
    VL_OUT8(&instr_control,2,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&i_jtag_tms,0,0);
    VL_IN8(&i_jtag_tdi,0,0);
    VL_OUT8(&o_jtag_tdo,0,0);
    VL_OUT8(&o_uart_tx,0,0);
    VL_OUT16(&offset_d,11,0);
    VL_OUT16(&o_gpio,15,0);
    VL_OUT(&ifu_fetch_data_f,31,0);
    VL_OUT(&q2,31,0);
    VL_OUT(&q1,31,0);
    VL_OUT(&q0,31,0);
    VL_OUT(&i0_inst_d,31,0);
    VL_OUT(&i0_inst_x,31,0);
    VL_OUT(&i0_inst_r,31,0);
    VL_OUT(&i0_inst_wb_in,31,0);
    VL_OUT(&i0_inst_wb,31,0);
    VL_OUT(&gpr_i0_rs1_d,31,0);
    VL_OUT(&gpr_i0_rs2_d,31,0);
    VL_OUT(&i0_rs1_d,31,0);
    VL_OUT(&i0_rs2_d,31,0);
    VL_OUT(&muldiv_rs1_d,31,0);
    VL_OUT(&exu_i0_result_x,31,0);
    VL_OUT(&result,31,0);
    VL_OUT(&dec_i0_wdata_r,31,0);
    VL_OUT(&rs1_d,31,0);
    VL_OUT(&full_addr_d,31,0);
    VL_OUT(&i0_rs1_bypass_data_d,31,0);
    VL_OUT(&i0_rs2_bypass_data_d,31,0);
    VL_OUT(&lsu_result_m,31,0);
    VL_OUT(&lsu_nonblock_load_data,31,0);
    VL_OUT(&exu_div_result,31,0);

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
