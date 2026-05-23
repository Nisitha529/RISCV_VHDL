// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_instruction_decoder__Syms.h"
#include "Vtb_instruction_decoder.h"
#include "Vtb_instruction_decoder___024root.h"

// FUNCTIONS
Vtb_instruction_decoder__Syms::~Vtb_instruction_decoder__Syms()
{
}

Vtb_instruction_decoder__Syms::Vtb_instruction_decoder__Syms(VerilatedContext* contextp, const char* namep, Vtb_instruction_decoder* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
