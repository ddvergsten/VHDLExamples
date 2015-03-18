----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:27:38 03/18/2015 
-- Design Name: 
-- Module Name:    greaterThan - Behavioral 
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

entity greaterThan is
	port(a, b: in std_logic_vector(1 downto 0);
	agtb: out std_logic);
end greaterThan;

architecture Behavioral of greaterThan is
	signal p0, p1, p2: std_logic;
begin
	agtb <= p0 or p1 or p2;
	p0 <= ((not b(1)) and a(1));
	p1 <= ((not b(1)) and (not b(0)) and a(0));
	p2 <= (a(1) and a(0) and (not b(0)));

end Behavioral;

