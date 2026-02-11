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
    , dec_i0_rs1_d{vlSymsp->TOP.dec_i0_rs1_d}
    , dec_i0_rs2_d{vlSymsp->TOP.dec_i0_rs2_d}
    , mul_valid_x{vlSymsp->TOP.mul_valid_x}
    , dec_i0_waddr_r{vlSymsp->TOP.dec_i0_waddr_r}
    , dec_i0_wen_r{vlSymsp->TOP.dec_i0_wen_r}
    , dec_nonblock_load_waddr{vlSymsp->TOP.dec_nonblock_load_waddr}
    , dec_nonblock_load_wen{vlSymsp->TOP.dec_nonblock_load_wen}
    , exu_div_wren{vlSymsp->TOP.exu_div_wren}
    , div_waddr_wb{vlSymsp->TOP.div_waddr_wb}
    , i0_rs1_bypass_en_d{vlSymsp->TOP.i0_rs1_bypass_en_d}
    , i0_rs2_bypass_en_d{vlSymsp->TOP.i0_rs2_bypass_en_d}
    , dec_i0_rs1_en_d{vlSymsp->TOP.dec_i0_rs1_en_d}
    , dec_i0_rs2_en_d{vlSymsp->TOP.dec_i0_rs2_en_d}
    , alu_instd{vlSymsp->TOP.alu_instd}
    , lsu_instd{vlSymsp->TOP.lsu_instd}
    , mul_instd{vlSymsp->TOP.mul_instd}
    , i0_x_data_en{vlSymsp->TOP.i0_x_data_en}
    , alu_instx{vlSymsp->TOP.alu_instx}
    , mul_instx{vlSymsp->TOP.mul_instx}
    , Bypass0_exu_i0_result_x{vlSymsp->TOP.Bypass0_exu_i0_result_x}
    , Bypass0_lsu_nonblock_load_data{vlSymsp->TOP.Bypass0_lsu_nonblock_load_data}
    , Bypass1_exu_i0_result_x{vlSymsp->TOP.Bypass1_exu_i0_result_x}
    , Bypass1_lsu_nonblock_load_data{vlSymsp->TOP.Bypass1_lsu_nonblock_load_data}
    , actual_taken{vlSymsp->TOP.actual_taken}
    , any_branch{vlSymsp->TOP.any_branch}
    , instr_control{vlSymsp->TOP.instr_control}
    , rst{vlSymsp->TOP.rst}
    , i_jtag_tms{vlSymsp->TOP.i_jtag_tms}
    , i_jtag_tdi{vlSymsp->TOP.i_jtag_tdi}
    , o_jtag_tdo{vlSymsp->TOP.o_jtag_tdo}
    , o_uart_tx{vlSymsp->TOP.o_uart_tx}
    , offset_d{vlSymsp->TOP.offset_d}
    , o_gpio{vlSymsp->TOP.o_gpio}
    , ifu_fetch_data_f{vlSymsp->TOP.ifu_fetch_data_f}
    , q2{vlSymsp->TOP.q2}
    , q1{vlSymsp->TOP.q1}
    , q0{vlSymsp->TOP.q0}
    , i0_inst_d{vlSymsp->TOP.i0_inst_d}
    , i0_inst_x{vlSymsp->TOP.i0_inst_x}
    , i0_inst_r{vlSymsp->TOP.i0_inst_r}
    , i0_inst_wb_in{vlSymsp->TOP.i0_inst_wb_in}
    , i0_inst_wb{vlSymsp->TOP.i0_inst_wb}
    , gpr_i0_rs1_d{vlSymsp->TOP.gpr_i0_rs1_d}
    , gpr_i0_rs2_d{vlSymsp->TOP.gpr_i0_rs2_d}
    , i0_rs1_d{vlSymsp->TOP.i0_rs1_d}
    , i0_rs2_d{vlSymsp->TOP.i0_rs2_d}
    , muldiv_rs1_d{vlSymsp->TOP.muldiv_rs1_d}
    , exu_i0_result_x{vlSymsp->TOP.exu_i0_result_x}
    , result{vlSymsp->TOP.result}
    , dec_i0_wdata_r{vlSymsp->TOP.dec_i0_wdata_r}
    , rs1_d{vlSymsp->TOP.rs1_d}
    , full_addr_d{vlSymsp->TOP.full_addr_d}
    , i0_rs1_bypass_data_d{vlSymsp->TOP.i0_rs1_bypass_data_d}
    , i0_rs2_bypass_data_d{vlSymsp->TOP.i0_rs2_bypass_data_d}
    , lsu_result_m{vlSymsp->TOP.lsu_result_m}
    , lsu_nonblock_load_data{vlSymsp->TOP.lsu_nonblock_load_data}
    , exu_div_result{vlSymsp->TOP.exu_div_result}
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
