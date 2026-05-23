// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_memory_stage__Syms.h"
#include "Vtb_memory_stage.h"
#include "Vtb_memory_stage___024root.h"
#include "Vtb_memory_stage_wishbone_interface.h"

// FUNCTIONS
Vtb_memory_stage__Syms::~Vtb_memory_stage__Syms()
{
}

Vtb_memory_stage__Syms::Vtb_memory_stage__Syms(VerilatedContext* contextp, const char* namep, Vtb_memory_stage* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_memory_stage__DOT__wb{this, Verilated::catName(namep, "tb_memory_stage.wb")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_memory_stage__DOT__wb = &TOP__tb_memory_stage__DOT__wb;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_memory_stage__DOT__wb.__Vconfigure(true);
}
