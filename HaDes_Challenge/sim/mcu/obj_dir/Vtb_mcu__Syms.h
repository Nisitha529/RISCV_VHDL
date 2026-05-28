// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MCU__SYMS_H_
#define VERILATED_VTB_MCU__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_mcu.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mcu___024root.h"
#include "Vtb_mcu_wishbone_interface.h"

// SYMS CLASS (contains all model state)
class Vtb_mcu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mcu* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mcu___024root              TOP;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__fetch_bus;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__;
    Vtb_mcu_wishbone_interface     TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_mcu;
    VerilatedScope __Vscope_tb_mcu__write_ram_word;

    // CONSTRUCTORS
    Vtb_mcu__Syms(VerilatedContext* contextp, const char* namep, Vtb_mcu* modelp);
    ~Vtb_mcu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
