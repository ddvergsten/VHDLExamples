----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:23:07 02/17/2014 
-- Design Name: 
-- Module Name:    shifter - Behavioral 
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

entity shifter is
   port(
      clk: in std_logic;
      sw0: in std_logic;
      sw1: in std_logic;
		sw2: in std_logic
   );
end shifter;

architecture Behavioral of shifter is
 signal d0, d1, d2: std_logic;
  signal q0, q1, q2: std_logic;

begin
	process(clk)
	begin
		if(clk'event and clk = '1')then
			d0 <= q1;
			d1 <= q2;
			d2 <= q0;
		end if;
	end process;
end Behavioral;

