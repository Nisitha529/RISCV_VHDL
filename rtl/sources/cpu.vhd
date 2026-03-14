library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.cpu_pkg.all;

entity cpu is 

  port (

    clk               : in  std_logic;
    resetn            : in  std_logic;

    -- Instruction memory interface (Read only)

    imem_ready        : in  std_logic;
    imem_valid        : out std_logic;
    imem_addr         : out std_logic_vector (31 downto 0);
    imem_rdata        : in  std_logic_vector (31 downto 0);
    
    -- Data memory interface (Read / Write)

    dmem_ready        : in  std_logic;
    dmem_valid        : out std_logic;
    dmem_addr         : out std_logic_vector (31 downto 0);
    dmem_write_enable : out std_logic;
    dmem_access_width : out MEM_ACCESS_WIDTH_t;
    dmem_wdata        : out std_logic_vector (31 downto 0);
    dmem_rdata        : in  std_logic_vector (31 downto 0);

    -- Debug

    trace_regs        : out REGISTER_ARRAY_t
  );

end entity;

architecture rtl of cpu is 

  -- Initialization signals

  -- Decoder 

  signal instruction      : std_logic_vector (31 downto 0);

  signal rs1_addr         : std_logic_vector (4 downto 0);
  signal rs2_addr         : std_logic_vector (4 downto 0);

  signal rd_addr          : std_logic_vector (4 downto 0);

  signal imm              : std_logic_vector (31 downto 0);

  signal opcode           : std_logic_vector (6 downto 0);
  signal funct3           : std_logic_vector (2 downto 0);
  signal funct7           : std_logic_vector (6 downto 0);

  -- Regfile

  signal rs1_data         : std_logic_vector (31 downto 0);
  signal rs2_data         : std_logic_vector (31 downto 0);
  
  signal rd_data          : std_logic_vector (31 downto 0);

  -- ALU

  signal op1              : std_logic_vector (31 downto 0);
  signal op2              : std_logic_vector (31 downto 0);
  
  signal alu_result       : std_logic_vector (31 downto 0);

  -- Control unit

  signal alu_use_imm      : std_logic;

  signal write_mem        : std_logic;
  signal write_rd         : std_logic;
  signal take_branch      : std_logic;
  signal rd_data_src      : RD_DATA_SRC_t;

  signal jump             : std_logic;

  signal aluop            : ALU_OP_TYPE_t;

  signal memtoreg         : RD_DATA_SRC_t;

  -- Program counter

  signal pc_imm           : std_logic_vector(31 downto 0);
  signal pc_4             : std_logic_vector(31 downto 0);
  signal pc               : std_logic_vector(31 downto 0);
  signal pc_next          : std_logic_vector(31 downto 0);
  signal pc_next_sel      : PC_NEXT_SRC_t;

  -- Memory

  signal mem_data         : std_logic_vector(31 downto 0);
  signal mem_access       : std_logic;
  signal mem_access_width : MEM_ACCESS_WIDTH_t;

  -- Stall
  
  signal enable           : std_logic;

begin

  -- Instruction decoder

  decode_00: entity work.decode port map (
    instr            => instruction,

    rs1              => rs1_addr,
    rs2              => rs2_addr,

    rd               => rd_addr,

    imm              => imm,

    opcode           => opcode,
    funct3           => funct3,
    funct7           => funct7
  );

  -- Control unit

  control_unit_00: entity work.control_unit port map (
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

  -- Register file

  reg_file_00: entity work.regfile port map (
    clk              => clk,
    resetn           => resetn,
      
    regwrite         => write_rd,

    rs1_addr         => rs1_addr,
    rs2_addr         => rs2_addr,

    rd_addr          => rd_addr,
    rd_data          => rd_data,

    rs1_data         => rs1_data,
    rs2_data         => rs2_data,

    trace_regs       => trace_regs
  );

  -- ALU initialization

  alu_inst: entity work.alu port map (
    op1              => op1,
    op2              => op2,
    ALUop            => ALUop,
    result           => alu_result
  );

  -- ALU operand selection

  -- Operand A is always rs1_data.
  -- Operand B is either rs2_data or the immediate.

  op1       <= rs1_data;
  op2       <= imm when alu_use_imm = '1' else rs2_data;

  -- Program counter logic

  pc_imm    <= std_logic_vector(unsigned(pc) + unsigned(imm));
  pc_4      <= std_logic_vector(unsigned(pc) + 4);

  pc_next_sel <=  PC_NEXT_SRC_PC_ALU_RES    when    (jump = '1' and opcode = INSTR_OP_JALR) else
                  PC_NEXT_SRC_PC_IMM        when    (jump = '1' and opcode = INSTR_OP_JAL)
                                                 or (take_branch = '1')                     else
                  PC_NEXT_SRC_PC_4;

  -- Generate the next PC value according to the selected source.

  -- For JALR, the target is the ALU result (rs1 + imm) with the LSB forced to 0.
 
  pc_next   <= alu_result(31 downto 1) & '0' when pc_next_sel = PC_NEXT_SRC_PC_ALU_RES else
             
               pc_imm                        when pc_next_sel = PC_NEXT_SRC_PC_IMM     else
             
               pc_4;

  -- Register write‑back multiplexer

  -- Selects the value to write to the destination register based on rd_data_src.

  with rd_data_src select
    rd_data <= imm                           when RD_DATA_SRC_IMM,
               
               mem_data                      when RD_DATA_SRC_MEM_DATA_OUT,
      
               pc_4                          when RD_DATA_SRC_PC_4,
       
               pc_imm                        when RD_DATA_SRC_PC_IMM,
      
               alu_result                    when others;   

  -- Instruction memory interface

  imem_valid  <= '1';          -- The CPU always requests an instruction (imem_valid = '1') from the current PC.
  imem_addr   <= pc;
  instruction <= imem_rdata;   -- Capture the fetched instruction

  -- Data memory interface

  dmem_valid        <= mem_access;
  dmem_addr         <= alu_result;        -- Address is ALU result : base + offset         
  dmem_wdata        <= rs2_data;          -- Write data for stores      
  dmem_write_enable <= write_mem;
  dmem_access_width <= mem_access_width;

  -- Load data sign‑extension

  -- For load instructions, the data read from memory may need to be sign‑extended (LB, LH) or zero‑extended (LBU, LHU). 
  -- Currently only LB and LH are implemented. 
  -- Other loads simply pass the full word (LW) or are extended with zeros in future versions.

  mem_data          <= std_logic_vector(resize(signed(dmem_rdata(15 downto 0)), 32)) when (opcode = INSTR_OP_LOAD and funct3 = INSTR_F3_LH) else
                       
                       std_logic_vector(resize(signed(dmem_rdata(7 downto 0)), 32))  when (opcode = INSTR_OP_LOAD and funct3 = INSTR_F3_LB) else
    
                       dmem_rdata;                                                                                                                -- For LW (and for non‑load instructions, the value is unused)

  -- Stall / pipeline enable logic

  -- The CPU advances (PC updates) only when the instruction memory is ready and (if a data memory access is requested, the data memory is also ready).
  
  enable            <= imem_ready and ((not mem_access) or dmem_ready);

  -- Program counter register (synchronous)

  process(clk) begin
    if rising_edge(clk) then
      if resetn = '0' then
        pc <= (others => '0');          -- Reset PC to 0 (reset vector)
      else
        if enable = '1' then
          pc <= pc_next;                 -- Update PC when pipeline advances
        end if;
      end if;
    end if;
  end process;

end architecture;