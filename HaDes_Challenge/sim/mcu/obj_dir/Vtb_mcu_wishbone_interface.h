// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mcu.h for the primary calling header

#ifndef VERILATED_VTB_MCU_WISHBONE_INTERFACE_H_
#define VERILATED_VTB_MCU_WISHBONE_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_mcu__Syms;

class Vtb_mcu_wishbone_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ sel;
    CData/*0:0*/ cyc;
    CData/*0:0*/ stb;
    CData/*0:0*/ we;
    CData/*0:0*/ ack;
    CData/*0:0*/ err;
    IData/*31:0*/ adr;
    IData/*31:0*/ dat_mosi;
    IData/*31:0*/ dat_miso;

    // INTERNAL VARIABLES
    Vtb_mcu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mcu_wishbone_interface(Vtb_mcu__Syms* symsp, const char* v__name);
    ~Vtb_mcu_wishbone_interface();
    VL_UNCOPYABLE(Vtb_mcu_wishbone_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vtb_mcu_wishbone_interface* obj);

#endif  // guard
