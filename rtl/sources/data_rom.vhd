library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity data_rom is 
  
  port (
    en           : in  std_logic;                                 -- Global enable
    addr         : in  std_logic_vector (WORD_SIZE - 1 downto 0); -- Byte  address
    access_width : in  MEM_ACCESS_WIDTH_t;                        -- Access size 
    dout         : out std_logic_vector (WORD_SIZE - 1 downto 0); -- Read data
  );

end data_rom;

architecture Behavioral of data_rom is 

  -- ROM initialization
  signal memory         : DATA_ROM_MEMORY_ARRAY_t := DATA_ROM_MEMORY_CONTENT; -- ROM storage
  
  -- Address breakdown for separate address sub-lengths.
  signal word_index     : integer;                                            -- Selects which 32-bit word in the array
  signal halfword_index : integer range 0 to 2;                               -- 0 for low halfword, 2 for high halfword
  signal byte_index     : integer range 0 to 3;                               -- Selects specific byte within the word

  -- Internal enabling signal that combines the external enable with alignment and out-of-range checks. 
  signal access_enable  : std_logic;                                          -- Internal enabling signal which checks external enable, alignments, range matching

begin

  -- Address decoding
  word_index     <= to_integer(unsigned(addr(31 downto 2)));         -- Dividing the address by 4
  halfword_index <= to_integer(unsigned(addr(1 downto 0) and "10")); -- Would yield 0 for byte addresses 0 and 1, and 2 for addresses 2, and 3.
  byte_index     <= to_integer(unsigned(addr(1 downto 0)));          -- Indexing the two low bits.

  -- Access enable generation
  access_enable  <= '0' when (word_index >= DATA_ROM_MEMORY_SIZE_WORDS) or                       -- Word index is within the physical ROM size.

                     -- The required address is properly aligned for the requested access width.
                     (access_width = MEM_ACCESS_WIDTH_16 and addr(0) = '1') or                   -- Halfword (16-bit) requires addr (0) = '0' (even address).
                     (access_width = MEM_ACCESS_WIDTH_32 and addr (1 downto 0) /= "00") else     -- Word (32-bit) requires addr (1 downt 0) = "00".

                     en; 

  -- Data reading part
  do             <= memory (word_index) when (access_width = MEM_ACCESS_WIDTH_32 and access_enable = '1') else                                                                   -- Word read : output the entire 32-bit word.
                    
                    x"0000" & memory (word_index) (8 * halfword_index + 16 - 1 downto 8 * halfword_index) when (access_width = MEM_ACCESS_WIDTH_16 and access_enable = '1') else -- Halfword read : Output the correct halfword based on the halfword_index.

                    x"000000" & memory(word_index) (8 * (byte_index + 1) - 1 downto 8 * byte_index) when (access_width = MEM_ACCESS_WIDTH_8 and access_enable = '1') else

                    x"FFFFFFFF";       

end Behavioral;