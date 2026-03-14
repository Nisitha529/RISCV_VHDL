library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity data_ram is 
  port (
    clk          : in std_logic;
    addr         : in std_logic_vector (WORD_SIZE - 1 downto 0); -- Byte address relative to RAM base address

    en           : in std_logic;                                 -- Chip enable
    we           : in std_logic;                                 -- Write enable

    access_width : MEM_ACCESS_WIDTH_t;                           -- Access size : byte, halfword, word

    di           : in std_logic_vector (WORD_SIZE - 1 downto 0); -- Write data (Aligned to LSB)
    do           : out std_logic_vector (WORD_SIZE - 1 downto 0) -- Read data (zero-extended) 

  );

end data_ram;

architecture Behavioral of data_ram is
  
  -- RAM initialization
  signal memory         : DATA_RAM_MEMORY_ARRAY_t;

  -- Address breakdown for separate address sub-lengths.
  signal word_index     : integer;
  signal halfword_index : integer range 0 to 2;
  signal byte_index     : integer range 0 to 3;

  -- Internal enabling signal that combines the external enable with alignment and out-of-range checks. 
  signal access_enable  : std_logic;

begin
  
  word_index     <= to_integer (unsigned(addr(31 downto 2)));         -- Dividing the address by 4
  halfword_index <= to_integer (unsigned(addr(1 downto 0) and "10")); -- Would yield 0 for byte addresses 0 and 1, and 2 for addresses 2, and 3.
  byte_index     <= to_integer (unsigned(addr(1 downto 0)));          -- Indexing the two low bits.

  -- Access enable generation
  access_enable  <= '0' when (word_index >= DATA_RAM_MEMORY_SIZE_WORDS) or                       -- Word index is within the physical RAM size.

                     -- The required address is properly aligned for the requested access width.
                     (access_width = MEM_ACCESS_WIDTH_16 and addr(0) = '1') or                   -- Halfword (16-bit) requires addr (0) = '0' (even address).
                     (access_width = MEM_ACCESS_WIDTH_32 and addr (1 downto 0) /= "00") else     -- Word (32-bit) requires addr (1 downt 0) = "00".

                     en;                                                                         -- External 'en' is high.

  -- Data reading part
  do             <= memory (word_index) when (access_width = MEM_ACCESS_WIDTH_32 and access_enable = '1') else                                                                   -- Word read : output the entire 32-bit word.
                    
                    x"0000" & memory (word_index) (8 * halfword_index + 16 - 1 downto 8 * halfword_index) when (access_width = MEM_ACCESS_WIDTH_16 and access_enable = '1') else -- Halfword read : Output the correct halfword based on the halfword_index.

                    x"000000" & memory(word_index) (8 * (byte_index + 1) - 1 downto 8 * byte_index) when (access_width = MEM_ACCESS_WIDTH_8 and access_enable = '1') else

                    x"FFFFFFFF";

  -- Data Writing part
  process (clk) begin

    if rising_edge (clk) then
      if access_enable = '1' and we = '1' then
        case access_width is
          when MEM_ACCESS_WIDTH_16 => memory(word_index)(8 * halfword_index + 16 - 1 downto 8 * halfword_index) <= di(15 downto 0); -- Halfword write to correct halfword slot.
       
          when MEM_ACCESS_WIDTH_32 => memory(word_index)                                                        <= di(31 downto 0); -- Write the full word.
        
          when others              => memory(word_index)(8 * (byte_index + 1) - 1 downto 8 * byte_index)        <= di(7 downto 0);  -- Write the LSB 8 bits of di into the selected byte slot.
        end case;
      end if;
    end if;

  end process;

end Behavioral;