----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:07:14 04/01/2015 
-- Design Name: 
-- Module Name:    decoder2to4 - Behavioral 
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

entity decoder2to4 is
port(
	a: in std_logic_vector(1 downto 0);
	enable: in std_logic;
	output: out std_logic_vector(3 downto 0)
);
end decoder2to4;

architecture struc_arch of decoder2to4 is
	signal p0, p1, p2, p3: std_logic;
begin
	p3 <= a(1) and a(0) and enable;
	p2 <= a(1) and (not a(0)) and enable;
	p1 <= (not a(1)) and a(0) and enable;
	p0 <= (not a(1)) and (not a(0)) and enable;
	
	output(3) <= p3;
	output(2) <= p2;
	output(1) <= p1;
	output(0) <= p0;
end struc_arch;

