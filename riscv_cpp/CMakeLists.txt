cmake_minimum_required(VERSION 3.16)
project(riscv_cpp CXX)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Core library
add_library(core
    src/core/alu.cpp
    src/core/regfile.cpp
    src/core/decoder.cpp
    src/core/control.cpp
    src/core/immediate.cpp
)

# TESTS

# ALU test
add_executable(alu_test tests/alu_test.cpp)
target_link_libraries(alu_test core)

add_executable(regfile_test tests/regfile_test.cpp)
target_link_libraries(regfile_test core)

add_executable(decoder_test tests/decoder_test.cpp)
target_link_libraries(decoder_test core)