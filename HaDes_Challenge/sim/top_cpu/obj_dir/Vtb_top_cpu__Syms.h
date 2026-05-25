// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TOP_CPU__SYMS_H_
#define VERILATED_VTB_TOP_CPU__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_top_cpu.h"

// INCLUDE MODULE CLASSES
#include "Vtb_top_cpu___024root.h"
#include "Vtb_top_cpu_wishbone_interface.h"

// SYMS CLASS (contains all model state)
class Vtb_top_cpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_top_cpu* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_top_cpu___024root          TOP;
    Vtb_top_cpu_wishbone_interface TOP__tb_top_cpu__DOT__wb_dmem;
    Vtb_top_cpu_wishbone_interface TOP__tb_top_cpu__DOT__wb_imem;

    // CONSTRUCTORS
    Vtb_top_cpu__Syms(VerilatedContext* contextp, const char* namep, Vtb_top_cpu* modelp);
    ~Vtb_top_cpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
