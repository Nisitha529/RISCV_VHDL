-- ============================================
-- Module: control_unit
-- Description: RISC‑V control unit. Decodes the instruction opcode,
--              funct3, and funct7 to generate all control signals for
--              the datapath: ALU operation, register write enable,
--              memory write enable, branch/jump decisions, data source
--              for register write, memory access width, etc.
-- ============================================

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.cpu_pkg.all;   -- Provides all opcode constants and enumeration types

entity control_unit is
    port (
        -- Inputs from instruction decoder
        opcode           : in  std_logic_vector(6 downto 0);  -- Instruction opcode
        funct3           : in  std_logic_vector(2 downto 0);  -- Function 3 field
        funct7           : in  std_logic_vector(6 downto 0);  -- Function 7 field

        -- ALU result (used for branch condition evaluation)
        alu_result       : in  std_logic_vector(31 downto 0);

        -- Control outputs
        alu_use_imm      : out std_logic;                     -- Select immediate as ALU operand B
        write_rd         : out std_logic;                     -- Register file write enable
        write_mem        : out std_logic;                     -- Data memory write enable
        take_branch      : out std_logic;                     -- Branch taken (PC change)
        rd_data_src      : out RD_DATA_SRC_t;                 -- Source for register write data
        jump             : out std_logic;                     -- Unconditional jump (JAL/JALR)
        ALUop            : out ALU_OP_TYPE_t;                 -- ALU operation to perform
        mem_access_width : out MEM_ACCESS_WIDTH_t;            -- Memory access size (byte/half/word)
        mem_access       : out std_logic                      -- Memory access enable (read/write)
    );
end entity;

architecture rtl of control_unit is

    -- Internal signal to hold the decoded branch type
    signal branch : BRANCH_TYPE_t;

begin

    ----------------------------------------------------------------------------
    -- Jump signal (unconditional jumps)
    -- Asserted for JAL and JALR instructions.
    ----------------------------------------------------------------------------
    jump <= '1' when opcode = INSTR_OP_JAL or opcode = INSTR_OP_JALR else '0';

    ----------------------------------------------------------------------------
    -- Branch type decoding
    -- Translates the funct3 field of a branch instruction into the
    -- BRANCH_TYPE_t enumeration. For signed/unsigned variants (BLT/BLTU,
    -- BGE/BGEU) the same BRANCH_TYPE is used because the ALU produces the
    -- comparison result (SLT/SLTU) and the branch condition is derived from
    -- that result.
    ----------------------------------------------------------------------------
    branch <= BRANCH_TYPE_BEQ         when opcode = INSTR_OP_BRANCH and funct3 = INSTR_F3_BEQ else
              BRANCH_TYPE_BNE         when opcode = INSTR_OP_BRANCH and funct3 = INSTR_F3_BNE else
              BRANCH_TYPE_BLT         when opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLT or funct3 = INSTR_F3_BLTU) else
              BRANCH_TYPE_BGE         when opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BGE or funct3 = INSTR_F3_BGEU) else
              BRANCH_TYPE_NONE;       -- Not a branch instruction

    ----------------------------------------------------------------------------
    -- ALU operation selection
    -- Determines the ALU operation based on opcode, funct3, and funct7.
    -- The priority is: first check for special cases (SUB, shifts with funct7),
    -- then for immediate/register variants, finally default to ADD.
    -- For branches, the ALU performs a subtraction (for BEQ/BNE) or a
    -- signed/unsigned comparison (SLT/SLTU) depending on the branch type.
    ----------------------------------------------------------------------------
    ALUop <=
        -- Subtraction: used for SUB (register‑register) and for branches
        -- that need equality (BEQ/BNE) – ALU computes rs1 - rs2.
        ALU_OP_TYPE_SUB when (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SUB and funct7 = INSTR_F7_SUB)
                         or (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BEQ or funct3 = INSTR_F3_BNE)) else

        -- Set less than (signed): used for SLTI, SLT, and for signed branches
        ALU_OP_TYPE_SLT when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLTI)
                         or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLT and funct7 = INSTR_F7_SLT)
                         or (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLT or funct3 = INSTR_F3_BGE)) else

        -- Set less than (unsigned): used for SLTIU, SLTU, and for unsigned branches
        ALU_OP_TYPE_SLTU when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLTIU)
                          or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLTU and funct7 = INSTR_F7_SLTU)
                          or (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLTU or funct3 = INSTR_F3_BGEU)) else

        -- Bitwise AND
        ALU_OP_TYPE_AND when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_ANDI)
                        or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_AND and funct7 = INSTR_F7_AND) else

        -- Bitwise OR
        ALU_OP_TYPE_OR  when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_ORI)
                        or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_OR and funct7 = INSTR_F7_OR) else

        -- Bitwise XOR
        ALU_OP_TYPE_XOR when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_XORI)
                        or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_XOR and funct7 = INSTR_F7_XOR) else

        -- Logical left shift
        ALU_OP_TYPE_SLL when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLLI and funct7 = INSTR_F7_SLLI)
                        or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLL and funct7 = INSTR_F7_SLL) else

        -- Logical right shift
        ALU_OP_TYPE_SRL when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SRLI and funct7 = INSTR_F7_SRLI)
                        or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SRL and funct7 = INSTR_F7_SRL) else

        -- Arithmetic right shift
        ALU_OP_TYPE_SRA when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SRAI and funct7 = INSTR_F7_SRAI)
                        or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SRA and funct7 = INSTR_F7_SRA) else

        -- Default: ADD (used for ADDI, ADD, loads/stores address calculation,
        -- JALR address, AUIPC (PC+imm), LUI (pass immediate), etc.)
        ALU_OP_TYPE_ADD;

    ----------------------------------------------------------------------------
    -- ALU operand B source selection
    -- '1' means the second ALU operand should be the immediate value
    -- (from decoder) instead of the register value (rs2). This is true for
    -- register‑immediate operations, loads, stores, and JALR.
    ----------------------------------------------------------------------------
    alu_use_imm <= '1' when opcode = INSTR_OP_REG_IMM
                         or opcode = INSTR_OP_JALR
                         or opcode = INSTR_OP_LOAD
                         or opcode = INSTR_OP_STORE else
                   '0';

    ----------------------------------------------------------------------------
    -- Register file write enable
    -- Disabled for branches, stores, fences, and system instructions.
    -- All other instructions write back to the register file.
    ----------------------------------------------------------------------------
    write_rd <= '0' when opcode = INSTR_OP_BRANCH
                     or opcode = INSTR_OP_STORE
                     or opcode = INSTR_OP_FENCE
                     or opcode = INSTR_OP_SYSTEM else
                '1';

    ----------------------------------------------------------------------------
    -- Data memory write enable
    -- Asserted only for store instructions.
    ----------------------------------------------------------------------------
    write_mem <= '1' when opcode = INSTR_OP_STORE else '0';

    ----------------------------------------------------------------------------
    -- Memory access enable
    -- Asserted for both loads and stores (indicates that a memory operation
    -- is taking place). Used to enable the data memory module.
    ----------------------------------------------------------------------------
    mem_access <= '1' when opcode = INSTR_OP_LOAD or opcode = INSTR_OP_STORE else '0';

    ----------------------------------------------------------------------------
    -- Branch taken condition
    -- Uses the ALU result (which has been computed in the same cycle) to
    -- decide whether a conditional branch should be taken.
    -- For BEQ:  ALU result = rs1 - rs2; branch if result = 0.
    -- For BNE:  branch if result ≠ 0.
    -- For BLT:  ALU performed SLT; branch if result = 1 (i.e., rs1 < rs2).
    -- For BGE:  ALU performed SLT; branch if result = 0 (i.e., rs1 ≥ rs2).
    ----------------------------------------------------------------------------
    take_branch <= '1' when (branch = BRANCH_TYPE_BEQ and alu_result = x"00000000")
                        or (branch = BRANCH_TYPE_BNE and alu_result /= x"00000000")
                        or (branch = BRANCH_TYPE_BLT and alu_result = x"00000001")
                        or (branch = BRANCH_TYPE_BGE and alu_result = x"00000000") else
                   '0';

    ----------------------------------------------------------------------------
    -- Register write data source selection
    -- Determines what value is written back to the destination register.
    --   - AUIPC: write PC + immediate (supplied by ALU, but selected here)
    --   - JAL/JALR: write PC + 4 (return address)
    --   - LUI: write immediate (shifted left 12)
    --   - LOAD: write data read from memory
    --   - All others: write ALU result
    ----------------------------------------------------------------------------
    rd_data_src <= RD_DATA_SRC_PC_IMM       when opcode = INSTR_OP_AUIPC else
                   RD_DATA_SRC_PC_4         when opcode = INSTR_OP_JAL or opcode = INSTR_OP_JALR else
                   RD_DATA_SRC_IMM          when opcode = INSTR_OP_LUI else
                   RD_DATA_SRC_MEM_DATA_OUT when opcode = INSTR_OP_LOAD else
                   RD_DATA_SRC_ALU_RESULT;   -- default for arithmetic, etc.

    ----------------------------------------------------------------------------
    -- Memory access width
    -- For load/store instructions, decode the funct3 field to determine
    -- whether the access is byte, halfword, or word.
    -- For loads, both signed and unsigned variants use the same width,
    -- sign/zero extension is handled inside the memory module.
    ----------------------------------------------------------------------------
    mem_access_width <=
        MEM_ACCESS_WIDTH_32 when (opcode = INSTR_OP_LOAD  and funct3 = INSTR_F3_LW)
                             or (opcode = INSTR_OP_STORE and funct3 = INSTR_F3_SW) else
        MEM_ACCESS_WIDTH_16 when (opcode = INSTR_OP_LOAD  and (funct3 = INSTR_F3_LH or funct3 = INSTR_F3_LHU))
                             or (opcode = INSTR_OP_STORE and funct3 = INSTR_F3_SH) else
        MEM_ACCESS_WIDTH_8;   -- default for byte accesses (LB/LBU/SB)

end architecture;