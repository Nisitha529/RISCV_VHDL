library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity data_memory is 
  
  port (
    clk           : in  std_logic;                                 -- Clock for synchronous RAM
    addr          : in  std_logic_vector (WORD_SIZE - 1 downto 0); -- Byte address from CPU
    
    write_enable  : in  std_logic;                                 -- Write enable for RAM
    access_enable : in  std_logic;                                 -- Global access enable

    access_width  : in  MEM_ACCESS_WIDTH_t;                        -- Access size : byte/ halfword/ word

    wdata         : in  std_logic_vector (WORD_SIZE - 1 downto 0); -- Write data (Aligned to LSB)
    rdata         : out std_logic_vector (WORD_SIZE - 1 downto 0); -- Read data
  );

end entity;

architecture Behavioral of data_memory is 

  -- Signals to capture the outputs of the two sub-memory
  signal data_out_ram_signal : std_logic_vector (WORD_SIZE - 1 downto 0);
  signal data_out_rom_signal : std_logic_vector (WORD_SIZE - 1 downto 0);

  -- Address relative to the base of the selected memory region
  signal addr_relative       : std_logic_vector (WORD_SIZE - 1 downto 0);

  -- Individual enables for each memory (Decoded from the absolute address)
  signal rom_access_en       : std_logic;
  signal ram_access_en       : std_logic;

  -- Debugging only
  -- Would print the accessed address in each cycle.
  -- synthesis translate_off
  -- process (clk) begin
  --   if rising_edge (clk) then
  --     if access_enable = '1' then
  --       report "RAM access at : " & to_hstring (std_logic_vector (addr));
  --     end if;
  --   end if;
  -- end process;
  -- synthesis translate_on

  -- Address decoding and relative address calculation

  addr_relative <= std_logic_vector(unsigned(addr) - to_unsigned(DATA_RAM_BASE_ADDRESS, addr'length)) when (unsinged (addr) >= DATA_RAM_BASE_ADDRESS) and (unsinged (addr) < DATA_RAM_BASE_ADDRESS + DATA_RAM_MEMORY_SIZE_BYTES) else -- RAM region selection
                   std_logic_vector(unsigned(addr) - to_unsigned(DATA_ROM_BASE_ADDRESS, addr'length)) when (unsigned (addr) >= DATA_ROM_BASE_ADDRESS) and (unsinged (addr) < DATA_ROM_BASE_ADDRESS + DATA_ROM_MEMORY_SIZE_BYTES) else -- ROM region selection
                   (others => '0');

  -- Region specific access enables handling

  ram_access_en <= access_enable when (unsigned (addr) >= DATA_RAM_BASE_ADDRESS) and (unsigned (addr) < DATA_RAM_BASE_ADDRESS + DATA_RAM_MEMORY_SIZE_BYTES) else '0';
  rom_access_en <= access_enable when (unsigned (addr) >= DATA_ROM_BASE_ADDRESS) and (unsigned (addr) < DATA_ROM_BASE_ADDRESS + DATA_ROM_MEMORY_SIZE_BYTES) else '0';

  -- RAM Instantiation

  data_ram : entity work.data_ram (Behavioral)
    port map (
      clk          => clk,
      addr         => addr_relative,

      access_width => access_width,

      en           => ram_access_en,
      we           => write_enable,

      di           => wdata,
      do           => data_out_ram_signal
    );

  -- ROM Instantiation

  data_rom : entity work.data_rom (Behavioral)
    port map (
      addr         => addr_relative,

      access_width => access_width,

      en           => rom_access_en,

      dout         => data_out_rom_signal
    );

  -- Final read data selection
  rdata <= data_out_rom_signal when rom_access_en = '1' else 
           data_out_rom_signal when ram_access_en = '1' else 
           (others => '1');

end Behavioral;


