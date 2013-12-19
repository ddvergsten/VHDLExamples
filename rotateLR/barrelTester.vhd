----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:40:31 12/19/2013 
-- Design Name: 
-- Module Name:    barrelTester - Behavioral 
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

entity shift_test is
port(
sw: in std_logic_vector(7 downto 0);
btn: in std_logic_vector(2 downto 0);
led: out std_logic_vector(7 downto 0)
);
end shift_test;

architecture arch of shift_test is

begin
shift_unit: entity work.barrel_shifter(multi_stage_arch)
	port map(a=>sw, amt=>btn, y=>led);

end arch;

