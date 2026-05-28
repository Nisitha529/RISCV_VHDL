// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_MCU_H_
#define VERILATED_VTB_MCU_H_  // guard

#include "verilated.h"

class Vtb_mcu__Syms;
class Vtb_mcu___024root;
class VerilatedVcdC;
class Vtb_mcu_wishbone_interface;


// This class is the main interface to the Verilated model
class Vtb_mcu VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_mcu__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__fetch_bus;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__;
    Vtb_mcu_wishbone_interface* const __PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_mcu___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_mcu(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_mcu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_mcu();
  private:
    VL_UNCOPYABLE(Vtb_mcu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
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
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
