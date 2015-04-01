-- Listing 1.5
library ieee;
use ieee.std_logic_1164.all;
entity eq292_testbench is
end eq292_testbench;

architecture tb_arch of eq292_testbench is
   signal test_input: std_logic_vector(1 downto 0);
	signal en: std_logic;
   signal test_out: std_logic_vector(3 downto 0);
begin
   -- instantiate the circuit under test
   uut: entity work.decoder2to4(struc_arch)
      port map(a=>test_input, output=>test_out, enable=>en);
   -- test vector generator
   process
   begin
      -- test vector 1
      test_input <= "00";
		en <= '0';
      wait for 200 ns;
		
		test_input <= "01";
		en <= '0';
      wait for 200 ns;
		
		test_input <= "10";
		en <= '0';
      wait for 200 ns;
		
		test_input <= "11";
		en <= '0';
      wait for 200 ns;
		
		
		
		test_input <= "00";
		en <=  '1';
      wait for 200 ns;
		
		test_input <= "01";
		en <=  '1';
      wait for 200 ns;
		
		test_input <= "10";
		en <=  '1';
      wait for 200 ns;
		
		test_input <= "11";
		en <=  '1';
      wait for 200 ns;
		
      -- test vector 2
--      test_in0 <= "01";
--      test_in1 <= "00";
--      wait for 200 ns;
--      -- test vector 3
--      test_in0 <= "01";
--      test_in1 <= "11";
--      wait for 200 ns;
--      -- test vector 4
--      test_in0 <= "10";
--      test_in1 <= "10";
--      wait for 200 ns;
--      -- test vector 5
--      test_in0 <= "10";
--      test_in1 <= "00";
--      wait for 200 ns;
--      -- test vector 6
--      test_in0 <= "11";
--      test_in1 <= "11";
--      wait for 200 ns;
--      -- test vector 7
--      test_in0 <= "11";
--      test_in1 <= "01";
--      wait for 200 ns;
      -- terminate simulation
      assert false
         report "Simulation Completed"
       severity failure;
   end process;
end tb_arch;