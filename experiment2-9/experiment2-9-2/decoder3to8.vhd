----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:39:07 04/01/2015 
-- Design Name: 
-- Module Name:    decoder3to8 - Behavioral 
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

entity decoder3to8 is
port(
	input : in std_logic_vector(2 downto 0);
	enbl: in std_logic;
	outputMsb: out std_logic_vector(3 downto 0);
	outputLsb: out std_logic_vector(3 downto 0)
);
end decoder3to8;

architecture Behavioral of decoder3to8 is
	signal Nenable, Enable2: std_logic;
begin
	decodermsb: entity work.decoder2to4(struc_arch)
		port map(a(1) => input(1), a(0)=>input(0), enable=>Enable2,
						output => outputMsb);
	decoderlsb: entity work.decoder2to4(struc_arch)
		port map(a(1) => input(1), a(0)=>input(0), enable=>Nenable,
						output => outputLsb);
	Nenable <= (not input(2)) and enbl;
	Enable2 <= input(2) and enbl;
end Behavioral;

