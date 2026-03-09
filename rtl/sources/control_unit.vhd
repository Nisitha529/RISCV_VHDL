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


            -- Set less than (signed): Used for SLTI, SLT and for signed branches
            ALU_OP_TYPE_SLT when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLTI) or 

            -- 
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLT and funct7 = INSTR_F7_SLT) or 
                                 
                                 
                                 (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLT or funct3 = INSTR_F3_BGE)) else

            -- Set less than (unsigned): used for SLTIU, SLTU, and for unsigned branches
            ALU_OP_TYPE_SLTU when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLTIU) or 
                  
                                  (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLTU and funct7 = INSTR_F7_SLTU) or 
                                  
                                  (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLTU or funct3 = INSTR_F3_BGEU)) else

            -- Bitwise AND
            ALU_OP_TYPE_AND when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_ANDI) or 
                   
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_AND and funct7 = INSTR_F7_AND) else

            -- Bitwise OR
            ALU_OP_TYPE_OR  when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_ORI) or 
              
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_OR and funct7 = INSTR_F7_OR) else

            -- Bitwise XOR
            ALU_OP_TYPE_XOR when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_XORI) or 
            
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_XOR and funct7 = INSTR_F7_XOR) else

            -- Logical left shift
            ALU_OP_TYPE_SLL when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLLI and funct7 = INSTR_F7_SLLI) or 
            
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLL and funct7 = INSTR_F7_SLL) else

            -- Logical right shift
            ALU_OP_TYPE_SRL when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SRLI and funct7 = INSTR_F7_SRLI) or 
            
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SRL and funct7 = INSTR_F7_SRL) else

            -- Arithmetic right shift
            ALU_OP_TYPE_SRA when (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SRAI and funct7 = INSTR_F7_SRAI) or 
            
                                 (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SRA and funct7 = INSTR_F7_SRA) else

            -- Default : ADD 
            ALU_OP_TYPE_ADD;

  -- ALU operand B selection
  alu_use_imm <= '1' when opcode = INSTR_OP_REG_IMM or 
                     
                          opcode = INSTR_OP_JALR or 
                          
                          opcode = INSTR_OP_LOAD or 
                          
                          opcode = INSTR_OP_STORE else
                   
                 '0';  
            
  -- Register file write enable
  write_rd    <= '0' when opcode = INSTR_OP_BRANCH or 
  
                          opcode = INSTR_OP_STORE or 
                          
                          opcode = INSTR_OP_FENCE or 
                          
                          opcode = INSTR_OP_SYSTEM else
                 '1';

  -- Data memory write enable
  write_mem   <= '1' when opcode = INSTR_OP_STORE else 
  
                 '0';

  -- Memory access enable
  mem_access  <= '1' when opcode = INSTR_OP_LOAD or 
  
                          opcode = INSTR_OP_STORE else 
                          
                 '0';

  -- Branch taken condition
  take_branch <= '1' when (branch = BRANCH_TYPE_BEQ and alu_result = x"00000000") or 
  
                          (branch = BRANCH_TYPE_BNE and alu_result /= x"00000000") or 
                          
                          (branch = BRANCH_TYPE_BLT and alu_result = x"00000001") or 
                          
                          (branch = BRANCH_TYPE_BGE and alu_result = x"00000000") else
                   
                 '0';       

  -- Register write data source selection
  rd_data_src <= RD_DATA_SRC_PC_IMM       when opcode = INSTR_OP_AUIPC else
                   
                 RD_DATA_SRC_PC_4         when opcode = INSTR_OP_JAL or opcode = INSTR_OP_JALR else
                   
                 RD_DATA_SRC_IMM          when opcode = INSTR_OP_LUI else

                 RD_DATA_SRC_MEM_DATA_OUT when opcode = INSTR_OP_LOAD else

                 RD_DATA_SRC_ALU_RESULT;   

  -- Memory access width
  mem_access_width <= MEM_ACCESS_WIDTH_32 when (opcode = INSTR_OP_LOAD  and funct3 = INSTR_F3_LW) or 
                                               
                                               (opcode = INSTR_OP_STORE and funct3 = INSTR_F3_SW) else
        
                      MEM_ACCESS_WIDTH_16 when (opcode = INSTR_OP_LOAD  and (funct3 = INSTR_F3_LH or funct3 = INSTR_F3_LHU)) or 
                      
                                               (opcode = INSTR_OP_STORE and funct3 = INSTR_F3_SH) else
                      
                      MEM_ACCESS_WIDTH_8;

end architecture;

