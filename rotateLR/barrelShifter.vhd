----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:37:02 12/11/2013 
-- Design Name: 
-- Module Name:    barrelShifter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity barrel_shifter is
    Port ( a : in  STD_LOGIC_VECTOR(7 downto 0);
				--dir: in STD_LOGIC;
           amt : in  STD_LOGIC_VECTOR(2 downto 0);
           y : out  STD_LOGIC_VECTOR(7 downto 0)
			  );
end barrel_shifter;

architecture sel_arch of barrel_shifter is

begin
	with amt select
	y<= a										when "000",
		a(0) & a(7 downto 1) 			when "001",
		a(1 downto 0) & a(7 downto 2) when "010",
		a(2 downto 0) & a(7 downto 3) when "011",
		a(3 downto 0) & a(7 downto 4) when "100",
		a(4 downto 0) & a(7 downto 5) when "101",
		a(5 downto 0) & a(7 downto 6) when "110",
		a(6 downto 0) & a(7) 			when others; --111
end sel_arch;

architecture multi_stage_arch of barrel_shifter is
	signal s0, s1: std_logic_vector(7 downto 0);
begin
	s0 <= a(0) & a(7 downto 1) when amt(0)='1' else
			a;
	s1 <= s0(1 downto 0) & s0(7 downto 2) when amt(1) = '1' else
			s0;
	y <= s1(3 downto 0) & s1(7 downto 4) when amt(2) = '1' else
			s1;
--process(s0, s1, s2, dir, a, amt)
--begin

--if dir = '1' then
	--y <= s2;
	--stage 0, shift 0 or 1 bit
	
			--else
			--y <= s2;
	--stage 0,
			--end if;
	--end process;
end multi_stage_arch;

