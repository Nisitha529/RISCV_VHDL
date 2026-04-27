#include <iostream>
#include "core/alu.h"

void test (const char* name, ALUOp op, uint32_t A, uint32_t B, uint32_t expected) {
  ALUInput in {A, B, op};

  auto out = ALU::execute (in);

  if (out.result != expected) {
    std::cout << "[FAIL] " << name << " Expected=" << expected << " Got=" << out.result << std::endl;
  } else {
    std::cout << "[PASS] " << name << std::endl;
  }
}

int main() {
  test("ADD",  ALUOp::ADD,  5, 3, 8);
  test("SUB",  ALUOp::SUB,  5, 3, 2);
  test("AND",  ALUOp::AND,  6, 3, 2);
  test("OR",   ALUOp::OR,   6, 3, 7);
  test("XOR",  ALUOp::XOR,  6, 3, 5);
  test("SLL",  ALUOp::SLL,  1, 2, 4);
  test("SRL",  ALUOp::SRL,  8, 2, 2);
  test("SRA",  ALUOp::SRA, -8, 2, -2);
  test("SLT",  ALUOp::SLT, -1, 1, 1);
  test("SLTU", ALUOp::SLTU, 1, 2, 1);

  return 0;
}