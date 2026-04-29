#include "cpu/cpu.h"

int main() {

  CPU cpu(1024, 1024);  // IMem, DMem sizes
  cpu.load_program("programs/simple_add.hex");
  cpu.run(20);

  return 0;
}