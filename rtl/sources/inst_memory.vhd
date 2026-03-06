library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;

entity inst_memory is 
  
  port (
    en   : in std_logic                                 -- Enables the reading.
    addr : in std_logic_vector (WORD_SIZE - 1 downto 0) -- Byte address
    data : in std_logic_vector (WORD_SIZE - 1 downto 0) -- Instruction output
  );

end entity;

architecture rtl of inst_memory is 

  signal memory        : INSTRUCTION_MEMORY_ARRAY_t := INSTRUCTION_MEMORY_CONTENT; -- Initializing the content from the memory_pkg.
  signal word_index    : integer;                                                  -- Word index derived from the byte address.
  signal access_enable : std_logic;                                                -- Internal enabling using external enable, range check and the alignment requirements.

begin

  word_index <= to_integer(unsigned(addr(WORD_SIZE - 1 downto 0)));
  -- Enabling the read when,
  --   1. The word index is within the valid range
  --   2. The address is word-aligned (The two LSBs are "00").
  --   3. The external enable (en) is high.
  access_enable <= '0' when (word_index >= INSTRUCTION_MEMORY_SIZE_WORDS) or (addr (1 downto 0) /= "00") else en;

  -- Data output
  data          <= memory (word_index) when (access_enable = '1') else x"00000013";

end architecture;
