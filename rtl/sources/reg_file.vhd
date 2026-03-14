library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity regfile is

  port (

    clk        : in std_logic;
    resetn     : in std_logic;                                 

    regwrite   : in std_logic;                                   -- Write enable

    rs1_addr   : in std_logic_vector  (4 downto 0);              -- Address for first source register
    rs2_addr   : in std_logic_vector  (4 downto 0);              -- Address for second source register

    rd_addr    : in std_logic_vector  (4 downto 0);              -- Address for destination register
    rd_data    : in std_logic_vector  (WORD_SIZE - 1 downto 0);  -- Data to write destination register

    rs1_data   : out std_logic_vector (WORD_SIZE - 1 downto 0);  -- Data read from rs1
    rs2_data   : out std_logic_vector (WORD_SIZE - 1 downto 0);  -- Data read from rs2 

    trace_regs : out REGISTER_ARRAY_t                            -- Register file content for debugging

  );

end entity;

architecture rtl of regfile is

  signal regs : REGISTER_ARRAY_t := (others => (others => '0')); -- Register array with 32 bits width and 32 words.

begin

  -- Writing process

  process (clk) begin

    if rising_edge (clk) then

      if resetn = '0' then
      
        regs <= (others => (others => '0'));                     -- Resetting the register values
      
      else 
      
        if (regwrite = '1') and (rd_addr /= "00000") then        -- Writing to registers when the data valid and the address isn't the first register. (Keep it in zero value).
      
          regs (to_integer(unsigned(rd_addr))) <= rd_data;       -- Convert rd_addr to interger to index the array.

        end if;

      end if;

    end if;

  end process;

  -- Reading process

  -- Output the value of the addressed register, unless the address is zero.
 
  rs1_data   <= (others => '0') when rs1_addr = "00000" else regs(to_integer (unsigned (rs1_addr)));
  rs2_data   <= (others => '0') when rs2_addr = "00000" else regs(to_integer (unsigned (rs2_addr)));

  -- Debugging purposes : Driving the whole register file into an external port.
 
  trace_regs <= regs;


end architecture;