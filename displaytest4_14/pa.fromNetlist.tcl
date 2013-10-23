
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name displaytest4_14 -dir "C:/SourceCode/fpga_vhdl_src/displaytest4_14/planAhead_run_1" -part xc3s200ft256-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/SourceCode/fpga_vhdl_src/displaytest4_14/disp_mux_test.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/SourceCode/fpga_vhdl_src/displaytest4_14} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "disp_mux_test.ucf" [current_fileset -constrset]
add_files [list {disp_mux_test.ucf}] -fileset [get_property constrset [current_run]]
link_design
