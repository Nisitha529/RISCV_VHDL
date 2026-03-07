library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity alu is 

  port (

    op1    : in  std_logic_vector (WORD_SIZE - 1 downto 0);
    op2    : in  std_logic_vector (WORD_SIZE - 1 downto 0);
    aluop  : in  ALU_OP_TYPE_t;                             

    result : out std_logic_vector (WORD_SIZE - 1 downto 0)

  );

end entity;

architecture rtl of alu is begin

  -- Combinational process for the alu operations
  process begin (op1, op2, aluop) begin
    case aluop is
      
      -- Addition : Used for ADD, ADDI, loads/stores address calculation and PC + 4, when op1 = PC, op2 = 4
      when ALU_OP_TYPE_ADD  => result   <= std_logic_vector (unsigned (op1) + unsigned (op2));

      -- Pass : Simply passes the second operand. Used for LUI (op2 = immediate shifted left 12) and AUIPC (op2 = PC + immediate)
      when ALU_OP_TYPE_PASS => result   <= op2;

      -- Substraction  : Used for SUB
      when ALU_OP_TYPE_SUB  => result   <= std_logic_vector (unsigned (op1) - unsigned (op2));

      -- Bitwise AND : Used for AND, ANDI
      when ALU_OP_TYPE_AND  => result   <= op1 and op2;
   
      -- Bitwise OR : Used for OR, ORI
      when ALU_OP_TYPE_OR   => result   <= op1 or op2;

      -- Bitwise XOR : USed for XOR, XORI.
      when ALU_OP_TYPE_XOR  => result   <= op1 xor op2;

      -- Logical left shift: used for SLL, SLLI. Shift amount is taken from the lower 5 bits of op2 (RV32I).
      when ALU_OP_TYPE_SLL  => result   <= std_logic_vector(shift_left(unsigned(op1), to_integer(unsigned(op2(4 downto 0)))));

      -- Logical right shift: used for SRL, SRLI.
      when ALU_OP_TYPE_SRL  => result   <= std_logic_vector(shift_right(unsigned(op1), to_integer(unsigned(op2(4 downto 0)))));

      -- Arithmetic right shift: used for SRA, SRAI. Operand is treated as signed to preserve the sign bit.
      when ALU_OP_TYPE_SRA  => result   <= std_logic_vector(shift_right(signed(op1), to_integer(unsigned(op2(4 downto 0)))));

      -- Set less than (signed): used for SLT, SLTI. Result is 1 if op1 < op2 (signed), else 0.
      when ALU_OP_TYPE_SLT  => if signed(op1) < signed(op2) then
                                 result <= x"00000001";
                               else
                                 result <= x"00000000";
                               end if;

      -- Set less than (unsigned): used for SLTU, SLTIU. Result is 1 if op1 < op2 (unsigned), else 0.
      when ALU_OP_TYPE_SLTU => if unsigned(op1) < unsigned(op2) then
                                 result <= x"00000001";
                               else
                                 result <= x"00000000";
                               end if;

      -- Default case (should not occur if ALUop is properly driven).
      when others =>             result <= (others => '0');

    end case;
  end process;

end architecture