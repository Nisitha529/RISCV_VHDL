---

-- Testbench: tb_alu
-- Description: Self-checking testbench for the RV32I ALU.
--              Tests all operations with fixed corner cases and random inputs.
--              Random numbers are generated using a 32-bit LFSR.
-----------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use std.textio.all;
use ieee.std_logic_textio.all;

library work;
use work.cpu_pkg.all;
use work.memory_pkg.all;

entity tb_alu is
end entity;

architecture sim of tb_alu is

---

## -- Reference function for expected ALU results

function expected_result(
a, b : std_logic_vector(31 downto 0);
op   : ALU_OP_TYPE_t
) return std_logic_vector is

variable shamt : natural range 0 to 31;

begin

shamt := to_integer(unsigned(b(4 downto 0)));

case op is

```
when ALU_OP_TYPE_ADD =>
  return std_logic_vector(unsigned(a) + unsigned(b));

when ALU_OP_TYPE_PASS =>
  return b;

when ALU_OP_TYPE_SUB =>
  return std_logic_vector(unsigned(a) - unsigned(b));

when ALU_OP_TYPE_AND =>
  return a and b;

when ALU_OP_TYPE_OR =>
  return a or b;

when ALU_OP_TYPE_XOR =>
  return a xor b;

when ALU_OP_TYPE_SLL =>
  return std_logic_vector(shift_left(unsigned(a), shamt));

when ALU_OP_TYPE_SRL =>
  return std_logic_vector(shift_right(unsigned(a), shamt));

when ALU_OP_TYPE_SRA =>
  return std_logic_vector(shift_right(signed(a), shamt));

when ALU_OP_TYPE_SLT =>
  if signed(a) < signed(b) then
    return x"00000001";
  else
    return x"00000000";
  end if;

when ALU_OP_TYPE_SLTU =>
  if unsigned(a) < unsigned(b) then
    return x"00000001";
  else
    return x"00000000";
  end if;

when others =>
  return (others => '0');
```

end case;

end function;

---

-- 32-bit LFSR random generator
-- Polynomial: x^32 + x^22 + x^2 + x + 1
----------------------------------------

function lfsr_random(
variable seed : inout std_logic_vector(31 downto 0)
) return std_logic_vector is

variable feedback : std_logic;
variable rand     : std_logic_vector(31 downto 0);

begin

feedback := seed(31) xor seed(21) xor seed(1) xor seed(0);

rand := seed(30 downto 0) & feedback;

seed := rand;

return rand;

end function;

---

## -- DUT signals

signal op1, op2, result : std_logic_vector(31 downto 0);
signal aluop            : ALU_OP_TYPE_t;

---

## -- Test control

constant NUM_RANDOM_TESTS : natural := 100;

shared variable error_cnt : natural := 0;
shared variable test_cnt  : natural := 0;

begin

---

## -- Instantiate ALU

uut: entity work.alu
port map(
op1    => op1,
op2    => op2,
aluop  => aluop,
result => result
);

---

## -- Main stimulus

process

---

## -- Apply and check one vector

procedure test_vector(
a, b   : std_logic_vector(31 downto 0);
op     : ALU_OP_TYPE_t;
name   : string
) is

```
variable exp : std_logic_vector(31 downto 0);
variable l   : line;
```

begin

```
op1 <= a;
op2 <= b;
aluop <= op;

wait for 10 ns;

exp := expected_result(a, b, op);

test_cnt := test_cnt + 1;

if result /= exp then

  write(l, string'("Mismatch for " & name & ": "));
  write(l, string'("a=0x")); hwrite(l, a);
  write(l, string'(" b=0x")); hwrite(l, b);
  write(l, string'(" expected=0x")); hwrite(l, exp);
  write(l, string'(" got=0x")); hwrite(l, result);

  report l.all severity error;

  deallocate(l);

  error_cnt := error_cnt + 1;

end if;
```

end procedure;

---

## -- Test each operation

procedure test_op(op : ALU_OP_TYPE_t; name : string) is

```
type word_array is array (natural range <>) of std_logic_vector(31 downto 0);

constant corner_a : word_array(0 to 5) :=
(
  x"00000000",
  x"FFFFFFFF",
  x"55555555",
  x"AAAAAAAA",
  x"80000000",
  x"7FFFFFFF"
);

constant corner_b : word_array(0 to 5) :=
(
  x"00000000",
  x"FFFFFFFF",
  x"55555555",
  x"AAAAAAAA",
  x"00000001",
  x"0000001F"
);

variable seed : std_logic_vector(31 downto 0) := x"12345678";

variable rand_a : std_logic_vector(31 downto 0);
variable rand_b : std_logic_vector(31 downto 0);


begin

```
report "Testing " & name & " ...";

-- Corner cases
for i in corner_a'range loop
  for j in corner_b'range loop
    test_vector(corner_a(i), corner_b(j), op, name);
  end loop;
end loop;

-- Random tests
for k in 1 to NUM_RANDOM_TESTS loop

  rand_a := lfsr_random(seed);
  rand_b := lfsr_random(seed);

  test_vector(rand_a, rand_b, op, name);

end loop;
```

end procedure;

begin

test_op(ALU_OP_TYPE_ADD,  "ADD");
test_op(ALU_OP_TYPE_PASS, "PASS");
test_op(ALU_OP_TYPE_SUB,  "SUB");
test_op(ALU_OP_TYPE_AND,  "AND");
test_op(ALU_OP_TYPE_OR,   "OR");
test_op(ALU_OP_TYPE_XOR,  "XOR");
test_op(ALU_OP_TYPE_SLL,  "SLL");
test_op(ALU_OP_TYPE_SRL,  "SRL");
test_op(ALU_OP_TYPE_SRA,  "SRA");
test_op(ALU_OP_TYPE_SLT,  "SLT");
test_op(ALU_OP_TYPE_SLTU, "SLTU");

---

## -- Summary

report "Total tests: " & integer'image(test_cnt);

if error_cnt = 0 then
report "SUCCESS: All tests passed." severity note;
else
report "FAILURE: " & integer'image(error_cnt) & " errors occurred."
severity failure;
end if;

wait;

end process;

end architecture;
