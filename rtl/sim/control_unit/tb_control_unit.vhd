library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.math_real.all;                
use std.textio.all;
use ieee.std_logic_textio.all;

library work;
use work.cpu_pkg.all;
use work.memory_pkg.all;

entity tb_control_unit is

end entity;

architecture sim of tb_control_unit is 

  -- A reference module to return a record of all control outputs.

  type control_out_t is record
    alu_use_imm      : std_logic;
    
    write_rd         : std_logic;
    write_mem        : std_logic;
    take_branch      : std_logic;
    rd_data_src      : RD_DATA_SRC_t;

    jump             : std_logic;

    aluop            : ALU_OP_TYPE_t;

    mem_access_width : MEM_ACCESS_WIDTH_t;
    mem_access       : std_logic;
  end record;

  function control_unit_ref (
    opcode     : std_logic_vector (6 downto 0);
    funct3     : std_logic_vector (2 downto 0);
    funct7     : std_logic_vector (6 downto 0);

    alu_result : std_logic_vector (31 downto 0)
  ) return control_out_t is 
      variable branch : BRANCH_TYPE_t;
      variable result : control_out_t;

  begin 

    -- Defaults value setting.

    result.alu_use_imm      := '0';

    result.write_rd         := '1';
    result.write_mem        := '0';
    result.take_branch      := '0';
    result.rd_data_src      := RD_DATA_SRC_ALU_RESULT;

    result.jump             := '0';

    result.aluop            := ALU_OP_TYPE_ADD;

    result.mem_access_width := MEM_ACCESS_WIDTH_8;
    result.mem_access       := '0';

    -- Unconditional jumping
    if opcode = INSTR_OP_JAL or opcode = INSTR_OP_JALR then
      result.jump := '1';
    end if;

    -- Branch type decoding

    branch     := BRANCH_TYPE_NONE;

    if opcode =INSTR_OP_BRANCH then
      if funct3 = INSTR_F3_BEQ then
        branch := BRANCH_TYPE_BEQ;
      elsif funct3 = INSTR_F3_BNE then
        branch := BRANCH_TYPE_BNE;
      elsif funct3 = INSTR_F3_BLT or funct3 = INSTR_F3_BLTU then
        branch := BRANCH_TYPE_BLT;
      elsif funct3 = INSTR_F3_BGE or funct3 = INSTR_F3_BGEU then
        branch := BRANCH_TYPE_BGE;
      end if;

    end if;

    -- ALU operation selection

    result.aluop   := ALU_OP_TYPE_ADD; 

    if (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SUB and funct7 = INSTR_F7_SUB) or (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BEQ or funct3 = INSTR_F3_BNE)) then
      result.aluop := ALU_OP_TYPE_SUB;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLTI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLT and funct7 = INSTR_F7_SLT) or (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLT or funct3 = INSTR_F3_BGE)) then
      result.aluop := ALU_OP_TYPE_SLT;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLTIU) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLTU and funct7 = INSTR_F7_SLTU) or (opcode = INSTR_OP_BRANCH and (funct3 = INSTR_F3_BLTU or funct3 = INSTR_F3_BGEU)) then
      result.aluop := ALU_OP_TYPE_SLTU;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_ANDI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_AND and funct7 = INSTR_F7_AND) then
      result.aluop := ALU_OP_TYPE_AND;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_ORI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_OR and funct7 = INSTR_F7_OR) then
      result.aluop := ALU_OP_TYPE_OR;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_XORI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_XOR and funct7 = INSTR_F7_XOR) then
      result.aluop := ALU_OP_TYPE_XOR;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SLLI and funct7 = INSTR_F7_SLLI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SLL and funct7 = INSTR_F7_SLL) then
      result.aluop := ALU_OP_TYPE_SLL;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SRLI and funct7 = INSTR_F7_SRLI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SRL and funct7 = INSTR_F7_SRL) then
      result.aluop := ALU_OP_TYPE_SRL;
    elsif (opcode = INSTR_OP_REG_IMM and funct3 = INSTR_F3_SRAI and funct7 = INSTR_F7_SRAI) or (opcode = INSTR_OP_REG_REG and funct3 = INSTR_F3_SRA and funct7 = INSTR_F7_SRA) then
      result.aluop := ALU_OP_TYPE_SRA;
    end if;

    -- ALU operand B immediate value source 

    if opcode = INSTR_OP_REG_IMM or opcode = INSTR_OP_JALR or opcode = INSTR_OP_LOAD or opcode = INSTR_OP_STORE then
      result.alu_use_imm := '1';
    end if;

    -- Register write enable

    if opcode = INSTR_OP_BRANCH or opcode = INSTR_OP_STORE or opcode = INSTR_OP_FENCE or opcode = INSTR_OP_SYSTEM then 
      result.write_rd    := '0';
    end if;

    -- Data memory write enable

    if opcode = INSTR_OP_STORE then
      result.write_mem   := '1';
    end if;

     -- Memory access enable

    if opcode = INSTR_OP_LOAD or opcode = INSTR_OP_STORE then
      result.mem_access  := '1';
    end if;

    -- Branch taken condition

    if opcode = INSTR_OP_BRANCH then
      if (branch = BRANCH_TYPE_BEQ and alu_result = x"00000000") or (branch = BRANCH_TYPE_BNE and alu_result /= x"00000000") or (branch = BRANCH_TYPE_BLT and alu_result = x"00000001") or (branch = BRANCH_TYPE_BGE and alu_result = x"00000000") then
        result.take_branch := '1';
      end if;
    end if;  

    -- Register write data source

    if opcode = INSTR_OP_AUIPC then
      result.rd_data_src   := RD_DATA_SRC_PC_IMM;
    elsif opcode = INSTR_OP_JAL or opcode = INSTR_OP_JALR then
      result.rd_data_src   := RD_DATA_SRC_PC_4;
    elsif opcode = INSTR_OP_LUI then
      result.rd_data_src   := RD_DATA_SRC_IMM;
    elsif opcode = INSTR_OP_LOAD then
      result.rd_data_src   := RD_DATA_SRC_MEM_DATA_OUT;
    else
      result.rd_data_src   := RD_DATA_SRC_ALU_RESULT;
    end if;

    -- Memory access width

    if (opcode = INSTR_OP_LOAD  and funct3 = INSTR_F3_LW) or (opcode = INSTR_OP_STORE and funct3 = INSTR_F3_SW) then
      result.mem_access_width := MEM_ACCESS_WIDTH_32;
    elsif (opcode = INSTR_OP_LOAD  and (funct3 = INSTR_F3_LH or funct3 = INSTR_F3_LHU)) or (opcode = INSTR_OP_STORE and funct3 = INSTR_F3_SH) then
      result.mem_access_width := MEM_ACCESS_WIDTH_16;
    else 
      result.mem_access_width := MEM_ACCESS_WIDTH_8;
    end if;

    return result;

  end function;

  -- DUT Signals

  signal opcode           : std_logic_vector(6 downto 0);
  signal funct3           : std_logic_vector(2 downto 0);
  signal funct7           : std_logic_vector(6 downto 0);

  signal alu_result       : std_logic_vector(31 downto 0);

  signal alu_use_imm      : std_logic;

  signal write_rd         : std_logic;
  signal write_mem        : std_logic;
  signal take_branch      : std_logic;
  signal rd_data_src      : RD_DATA_SRC_t;

  signal jump             : std_logic;

  signal aluop            : ALU_OP_TYPE_t;

  signal mem_access_width : MEM_ACCESS_WIDTH_t;
  signal mem_access       : std_logic;  

  -- Test control

  constant NUM_RANDOM_TESTS : natural := 100;

  begin 

  dut_control_unit: entity work.control_unit port map (
    opcode           => opcode,
    funct3           => funct3,
    funct7           => funct7,

    alu_result       => alu_result,

    alu_use_imm      => alu_use_imm,

    write_rd         => write_rd,
    write_mem        => write_mem,
    take_branch      => take_branch,
    rd_data_src      => rd_data_src,

    jump             => jump,
    
    aluop            => aluop,
    
    mem_access_width => mem_access_width,
    mem_access       => mem_access
  );

  -- Main stimulus process

  process
    variable error_cnt : natural := 0;
    variable test_cnt  : natural := 0;
    variable l         : line;

    -- Apply one test vector and compare with reference

    procedure test_vector(
      vec_opcode     : std_logic_vector(6 downto 0);
      vec_funct3     : std_logic_vector(2 downto 0);
      vec_funct7     : std_logic_vector(6 downto 0);

      vec_alu_result : std_logic_vector(31 downto 0);

      description    : string
    ) is
      
      variable expected : control_out_t;

    begin
      -- Apply inputs
      opcode     <= vec_opcode;
      funct3     <= vec_funct3;
      funct7     <= vec_funct7;

      alu_result <= vec_alu_result;

      wait for 10 ns;

      expected   := control_unit_ref (vec_opcode, vec_funct3, vec_funct7, vec_alu_result);

      test_cnt   := test_cnt + 1;

      -- Compare each output

      if alu_use_imm /= expected.alu_use_imm then
        write (l, string'("Mismatch: " & description & " alu_use_imm="));
        write (l, alu_use_imm); 
        write (l, string'(" exp=")); 
        write (l, expected.alu_use_imm);

        report l.all severity error; 

        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if write_rd /= expected.write_rd then
        write (l, string'("Mismatch: " & description & " write_rd="));
        write (l, write_rd); 
        write (l, string'(" exp=")); 
        write (l, expected.write_rd);

        report l.all severity error; 
        
        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if write_mem /= expected.write_mem then
        write (l, string'("Mismatch: " & description & " write_mem="));
        write (l, write_mem); 
        write (l, string'(" exp=")); 
        write (l, expected.write_mem);

        report l.all severity error; 
        
        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if take_branch /= expected.take_branch then
        write (l, string'("Mismatch: " & description & " take_branch="));
        write (l, take_branch); 
        write (l, string'(" exp=")); 
        write (l, expected.take_branch);

        report l.all severity error; 

        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if rd_data_src /= expected.rd_data_src then
        write (l, string'("Mismatch: " & description & " rd_data_src="));
        write (l, RD_DATA_SRC_t'image(rd_data_src));   
        write (l, string'(" exp="));
        write (l, RD_DATA_SRC_t'image(expected.rd_data_src));

        report l.all severity error; 

        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if jump /= expected.jump then
        write (l, string'("Mismatch: " & description & " jump="));
        write (l, jump); 
        write (l, string'(" exp=")); 
        write (l, expected.jump);

        report l.all severity error; 
        
        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if aluop /= expected.aluop then
        write (l, string'("Mismatch: " & description & " aluop="));
        write (l, ALU_OP_TYPE_t'image(aluop));       
        write (l, string'(" exp="));
        write (l, ALU_OP_TYPE_t'image(expected.aluop));

        report l.all severity error; 
        
        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if mem_access_width /= expected.mem_access_width then
        write (l, string'("Mismatch: " & description & " mem_access_width="));
        write (l, MEM_ACCESS_WIDTH_t'image(mem_access_width)); 
        write (l, string'(" exp="));
        write (l, MEM_ACCESS_WIDTH_t'image(expected.mem_access_width));

        report l.all severity error; 
        
        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;

      if mem_access /= expected.mem_access then
        write (l, string'("Mismatch: " & description & " mem_access="));
        write (l, mem_access); 
        write (l, string'(" exp=")); 
        write (l, expected.mem_access);

        report l.all severity error; 
        
        deallocate (l); 
        error_cnt := error_cnt + 1;
      end if;
    end procedure;

    -- Random value generator
    impure function random_32 return std_logic_vector is
      variable seed1, seed2 : positive := 1;

      variable rand_val     : real;
      variable rand_int     : integer;
    begin
      uniform (seed1, seed2, rand_val);
      rand_int := integer (rand_val * real(2**31 - 1));

      return std_logic_vector (to_unsigned(rand_int, 32));
    end function;

    -- Test each instruction types.

    procedure test_instruction_set is
      variable rand_opcode : std_logic_vector(6 downto 0);
      variable rand_funct3 : std_logic_vector(2 downto 0);
      variable rand_funct7 : std_logic_vector(6 downto 0);

      variable rand_result : std_logic_vector(31 downto 0);
    begin
      report "Testing LUI..." severity note;
      test_vector(INSTR_OP_LUI, "000", "0000000", x"00000000", "LUI");

      report "Testing AUIPC..." severity note;
      test_vector(INSTR_OP_AUIPC, "000", "0000000", x"00000000", "AUIPC");

      report "Testing JAL..." severity note;
      test_vector(INSTR_OP_JAL, "000", "0000000", x"00000000", "JAL");

      report "Testing JALR..." severity note;
      test_vector(INSTR_OP_JALR, "000", "0000000", x"00000000", "JALR");

      -- Branch instructions (test both taken and not taken)

      report "Testing BEQ (taken)..." severity note;
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BEQ, "0000000", x"00000000", "BEQ taken");
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BEQ, "0000000", x"00000001", "BEQ not taken");

      report "Testing BNE (taken)..." severity note;
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BNE, "0000000", x"00000001", "BNE taken");
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BNE, "0000000", x"00000000", "BNE not taken");

      report "Testing BLT (taken)..." severity note;
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BLT, "0000000", x"00000001", "BLT taken");
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BLT, "0000000", x"00000000", "BLT not taken");

      report "Testing BGE (taken)..." severity note;
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BGE, "0000000", x"00000000", "BGE taken");
      test_vector(INSTR_OP_BRANCH, INSTR_F3_BGE, "0000000", x"00000001", "BGE not taken");

      -- Load instructions

      report "Testing LB..." severity note;
      test_vector(INSTR_OP_LOAD, INSTR_F3_LB, "0000000", x"00000000", "LB");
      test_vector(INSTR_OP_LOAD, INSTR_F3_LH, "0000000", x"00000000", "LH");
      test_vector(INSTR_OP_LOAD, INSTR_F3_LW, "0000000", x"00000000", "LW");
      test_vector(INSTR_OP_LOAD, INSTR_F3_LBU, "0000000", x"00000000", "LBU");
      test_vector(INSTR_OP_LOAD, INSTR_F3_LHU, "0000000", x"00000000", "LHU");

      -- Store instructions
      report "Testing SB..." severity note;
      test_vector(INSTR_OP_STORE, INSTR_F3_SB, "0000000", x"00000000", "SB");
      test_vector(INSTR_OP_STORE, INSTR_F3_SH, "0000000", x"00000000", "SH");
      test_vector(INSTR_OP_STORE, INSTR_F3_SW, "0000000", x"00000000", "SW");

      -- Register‑immediate ALU
      report "Testing ADDI..." severity note;
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_ADDI, "0000000", x"00000000", "ADDI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_SLTI, "0000000", x"00000000", "SLTI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_SLTIU, "0000000", x"00000000", "SLTIU");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_ANDI, "0000000", x"00000000", "ANDI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_ORI, "0000000", x"00000000", "ORI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_XORI, "0000000", x"00000000", "XORI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_SLLI, INSTR_F7_SLLI, x"00000000", "SLLI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_SRLI, INSTR_F7_SRLI, x"00000000", "SRLI");
      test_vector(INSTR_OP_REG_IMM, INSTR_F3_SRAI, INSTR_F7_SRAI, x"00000000", "SRAI");

      -- Register‑register ALU
      report "Testing ADD..." severity note;
      test_vector(INSTR_OP_REG_REG, INSTR_F3_ADD, INSTR_F7_ADD, x"00000000", "ADD");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_SUB, INSTR_F7_SUB, x"00000000", "SUB");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_SLT, INSTR_F7_SLT, x"00000000", "SLT");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_SLTU, INSTR_F7_SLTU, x"00000000", "SLTU");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_AND, INSTR_F7_AND, x"00000000", "AND");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_OR, INSTR_F7_OR, x"00000000", "OR");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_XOR, INSTR_F7_XOR, x"00000000", "XOR");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_SLL, INSTR_F7_SLL, x"00000000", "SLL");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_SRL, INSTR_F7_SRL, x"00000000", "SRL");
      test_vector(INSTR_OP_REG_REG, INSTR_F3_SRA, INSTR_F7_SRA, x"00000000", "SRA");

      -- FENCE and SYSTEM (ECALL/EBREAK)
      report "Testing FENCE..." severity note;
      test_vector(INSTR_OP_FENCE, "000", "0000000", x"00000000", "FENCE");
      test_vector(INSTR_OP_SYSTEM, "000", "0000000", x"00000000", "SYSTEM");

      -- Random tests
      for i in 1 to NUM_RANDOM_TESTS loop
        rand_opcode := random_32(6 downto 0);
        rand_funct3 := random_32(2 downto 0);
        rand_funct7 := random_32(6 downto 0);
        rand_result := random_32;
        test_vector(rand_opcode, rand_funct3, rand_funct7, rand_result,
                    "random_" & integer'image(i));
      end loop;
    end procedure;

  begin
    report "Control Unit Testbench started.";

    -- Run all tests
    test_instruction_set;

    -- Summary
    report "Total tests: " & integer'image(test_cnt);
    if error_cnt = 0 then
      report "SUCCESS: All tests passed." severity note;
    else
      report "FAILURE: " & integer'image(error_cnt) & " errors occurred." severity failure;
    end if;

    wait;
  end process;

end architecture;