library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity decode is

  port (
    instr  : in  std_logic_vector (WORD_SIZE - 1 downto 0)  -- 32-bit length word instruction

    rs1    : out std_logic_vector (4 downto 0);             -- (I[19 : 15])
    rs2    : out std_logic_vector (4 downto 0);             -- (I[24 : 20])

    rd     : out std_logic_vector (4 downto 0);             -- (I[11 : 7])

    imm    : out std_logic_vector (WORD_SIZE - 1 downto 0); -- Sign-extended immediate value

    opcode : out std_logic_vector (6 downto 0);             -- (I[6  : 0])
    funct3 : out std_logic_vector (2 downto 0);             -- (I[14 : 12])
    funct7 : out std_logic_vector (6 downto 0);             -- (I[31 : 25])
  );

end entity;

architecture rtl of decode is 

  signal imm_j      : std_logic_vector(31 downto 0);        -- J‑type (JAL)
  signal imm_u      : std_logic_vector(31 downto 0);        -- U‑type (LUI, AUIPC)
  signal imm_s      : std_logic_vector(31 downto 0);        -- S‑type (STORE)
  signal imm_b      : std_logic_vector(31 downto 0);        -- B‑type (BRANCH)
  signal imm_i      : std_logic_vector(31 downto 0);        -- I‑type (JALR, LOAD, immediate ALU)

  signal opcode_int : std_logic_vector (6 downto 0);        -- Internal copy of the opcode to avoid repeated slicing.

begin
  
  -- Extracting the opcode
  opcode_int <= instr (6 downto 0);
  opcode     <= opcode_int;

  -- Extract the register addresses
  rd         <= instr (11 downto 7);
  rs1        <= instr (19 downto 15);
  rs2        <= instr (24 downto 20);

  -- Extract function fields
  funct3     <= instr (14 downto 12);
  funct7     <= instr (31 downto 25);

  -- Immediate value generation

  -- U-type instr
  imm_u (31 downto 12) <= instr (31 downto 12);
  imm_u (11 downto 0)  <= instr (others => '0');

  -- J-type instr
  imm_j (0)            <= '0';                     -- LSB always be 0
  imm_j (10 downto 1)  <= instr (30 downto 21);
  imm_j (11)           <= instr (20);
  imm_j (19 downto 12) <= instr (19 downto 12);
  imm_j (31 downto 20) <= ( others => instr (31)); -- Sign extenstion 

  -- I-type instr
  imm_i (10 downto 0)  <= instr (30 downto 20);
  imm_i (31 downto 11) <= (others => instr (31));  -- Sign extension

  -- B-type instr
  imm_b (0)            <= '0';                     -- LSB always 0
  imm_b (4 downto 1)   <= instr (11 downto 8);     
  imm_b (10 downto 5)  <= instr (30 downto 25);
  imm_b (11)           <= instr (7);
  imm_b (31 downto 12) <= (others => instr (31));  -- Sign extension

  -- S-type instr
  imm_s (4 downto 0)   <= instr (11 downto 7);
  imm_s (10 downto 5)  <= instr (30 downto 25);
  imm_s (31 downto 11) <= (others => instr (31));  -- Sign extension

  -- Mux for selecting the correct immediate type in the current consideration
  imm                  <= imm_u when opcode_int = INSTR_OP_LUI    or   opcode_int = INSTR_OP_AUIPC else
                          imm_j when opcode_int = INSTR_OP_JAL    else
                          imm_i when opcode_int = INSTR_OP_JALR   or   opcode_int = INSTR_OP_LOAD  or opcode_int = INSTR_OP_REG_IMM else
                          imm_b when opcode_int = INSTR_OP_BRANCH else
                          imm_s when opcode_int = INSTR_OP_STORE  else
                          (others => '0');

end architecture