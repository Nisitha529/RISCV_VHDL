library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.memory_pkg.all;
use work.cpu_pkg.all;

entity control_unit is

  port (
    
    -- Inputs from the instruction decoder
    opcode           : in  std_logic_vector (6 downto 0);  -- Instruction opcode
    funct3           : in  std_logic_vector (2 downto 0);  -- Function 3 field
    funct7           : in  std_logic_vector (6 downto 0);  -- Function 7 field

    -- ALU result for branch condition evaluation
    alu_result       : in  std_logic_vector (31 downto 0); 

    -- Control outputs
    alu_use_imm      : out std_logic;                      -- Immediate value for ALU operand B

    write_rd         : out std_logic;                      -- Register file write enable
    write_mem        : out std_logic;                      -- Data memory write enable
    take_branch      : out std_logic;                      -- Branch taken (PC change)
    rd_data_src      : out RD_DATA_SRC_t;                  -- Source for register write data

    jump             : out std_logic;                      -- Unconditional jump (JAL/ JALR)

    aluop            : out ALU_OP_TYPE_t;                  -- ALU operation to perform

    mem_access_width : out MEM_ACCESS_WIDTH_t;             -- Memory Access Size (Byte, halfword, word)
    mem_access       : out std_logic                       -- Memory access enable (Read/ Write)
  );

end entity;

architecture rtl of control_unit is 

  -- Internal signal to hold the decoded branch type
  signal branch : BRANCH_TYPE_t;

begin

  -- Assertion for JAL and JALR instructions
  jump  <= '1' when opcode = INSTR_OP_JAL or opcode = INSTR_OP_JALR else '0';

  -- Branch type decoding
  -- Translates the funct3 field of a branch instruction into the BRANCH_TYPE_t enumeration.
  branch <= BRANCH_TYPE_BEQ when opcode = INSTR_OP_BRANCH and  funct3 = INSTR_F3_BEQ                            else
            BRANCH_TYPE_BNE when opcode = INSTR_OP_BRANCH and  funct3 = INSTR_F3_BNE                            else
            BRANCH_TYPE_BLT when opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLT or funct3 = INSTR_F3_BLTU) else
            BRANCH_TYPE_BGE when opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BGE or funct3 = INSTR_F3_BGEU) else
            BRANCH_TYPE_NONE;

  -- ALU operations selection
  aluop  <= -- Subtraction of reg -reg
            ALU_OP_TYPE_SUB when (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SUB and funct7 = INSTR_F7_SUB) or

            -- Subtraction for branching (BEQ, BNE)
            (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BEQ or funct3 = INSTR_F3_BNE)) else


            -- Set less than (signed): Used for SLTI, SLTand for signed branches
            ALU_OP_TYPE_SLT when 

end architecture;

