-- Listing 4.14
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity disp_mux_test is
   port(
      poop: in std_logic;
		crap: in std_logic;

      btn: in std_logic_vector(2 downto 0);
      sw: in std_logic_vector(7 downto 0);
      an: out std_logic_vector(3 downto 0);
      sseg: out std_logic_vector(7 downto 0)
   );
end disp_mux_test;

architecture arch of disp_mux_test is
   signal d3_reg, d2_reg: std_logic_vector(7 downto 0);
   signal d1_reg, d0_reg: std_logic_vector(7 downto 0);
begin
   disp_unit: entity work.disp_mux
      port map(
        poop2=>crap, 
		  reset=>'0',
         in3=>d3_reg, in2=>d2_reg, in1=>d1_reg,
         in0=>d0_reg, an=>an, sseg=>sseg);
   -- registers for 4 led patterns
  process (crap)
	
  begin
      if (crap'event and crap='1') then
         if (poop='1') then
            d3_reg <= sw;
         end if;
         if (btn(2)='1') then
            d2_reg <= sw;
         end if;
         if (btn(1)='1') then
            d1_reg <= sw;
         end if;
         if (btn(0)='1') then
            d0_reg <= sw;
         end if;
      end if;
   end process;
end arch;