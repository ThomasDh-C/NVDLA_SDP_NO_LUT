#include <sdp.h>
bool sdp::decode_sdp_Compute_Max_group1() {
auto local_var_1 = sdp_group1_d_bs_bypass.range(0, 0);
sc_biguint<1> local_var_2 = 0;
bool local_var_3 = (local_var_1 == local_var_2);
auto local_var_5 = sdp_group1_d_bn_bypass.range(0, 0);
sc_biguint<1> local_var_6 = 1;
bool local_var_7 = (local_var_5 == local_var_6);
bool local_var_8 = (local_var_3 & local_var_7);
auto local_var_10 = sdp_group1_d_ew_bypass.range(0, 0);
sc_biguint<1> local_var_11 = 1;
bool local_var_12 = (local_var_10 == local_var_11);
bool local_var_13 = (local_var_8 & local_var_12);
auto local_var_15 = sdp_group1_d_bs_alu_bypass.range(0, 0);
sc_biguint<1> local_var_16 = 0;
bool local_var_17 = (local_var_15 == local_var_16);
auto local_var_19 = sdp_group1_d_bs_alu_algo.range(1, 0);
sc_biguint<2> local_var_20 = 0;
bool local_var_21 = (local_var_19 == local_var_20);
bool local_var_22 = (local_var_17 & local_var_21);
auto local_var_24 = sdp_group1_d_bs_relu_bypass.range(0, 0);
sc_biguint<1> local_var_25 = 1;
bool local_var_26 = (local_var_24 == local_var_25);
bool local_var_27 = (local_var_22 & local_var_26);
auto local_var_29 = sdp_group1_d_bs_mul_bypass.range(0, 0);
sc_biguint<1> local_var_30 = 1;
bool local_var_31 = (local_var_29 == local_var_30);
bool local_var_32 = (local_var_27 & local_var_31);
bool local_var_33 = (local_var_13 & local_var_32);
auto local_var_34 = sdp_group1_d_bn_bypass.range(0, 0);
sc_biguint<1> local_var_35 = 0;
bool local_var_36 = (local_var_34 == local_var_35);
auto local_var_37 = sdp_group1_d_bs_bypass.range(0, 0);
sc_biguint<1> local_var_38 = 1;
bool local_var_39 = (local_var_37 == local_var_38);
bool local_var_40 = (local_var_36 & local_var_39);
auto local_var_41 = sdp_group1_d_ew_bypass.range(0, 0);
sc_biguint<1> local_var_42 = 1;
bool local_var_43 = (local_var_41 == local_var_42);
bool local_var_44 = (local_var_40 & local_var_43);
auto local_var_46 = sdp_group1_d_bn_alu_bypass.range(0, 0);
sc_biguint<1> local_var_47 = 0;
bool local_var_48 = (local_var_46 == local_var_47);
auto local_var_50 = sdp_group1_d_bn_alu_algo.range(1, 0);
sc_biguint<2> local_var_51 = 0;
bool local_var_52 = (local_var_50 == local_var_51);
bool local_var_53 = (local_var_48 & local_var_52);
auto local_var_55 = sdp_group1_d_bn_relu_bypass.range(0, 0);
sc_biguint<1> local_var_56 = 1;
bool local_var_57 = (local_var_55 == local_var_56);
bool local_var_58 = (local_var_53 & local_var_57);
auto local_var_60 = sdp_group1_d_bn_mul_bypass.range(0, 0);
sc_biguint<1> local_var_61 = 1;
bool local_var_62 = (local_var_60 == local_var_61);
bool local_var_63 = (local_var_58 & local_var_62);
bool local_var_64 = (local_var_44 & local_var_63);
bool local_var_65 = (local_var_33 | local_var_64);
sc_biguint<1> local_var_67 = 0;
bool local_var_68 = (sdp_s_consumer == local_var_67);
bool local_var_69 = (local_var_65 & local_var_68);
auto local_var_71 = sdp_group1_d_op_en.range(0, 0);
sc_biguint<1> local_var_72 = 0;
bool local_var_73 = (local_var_71 == local_var_72);
bool local_var_74 = !local_var_73;
bool local_var_75 = (local_var_69 & local_var_74);
auto& univ_var_36 = local_var_75;
return univ_var_36;
}
void sdp::update_sdp_Compute_Max_group1() {
sc_biguint<16> local_var_0 = 0;
auto local_var_2 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_3 = 1;
bool local_var_4 = (local_var_2 == local_var_3);
auto local_var_7 = (local_var_4) ? sdp_dma_data_0 : sdp_regs_data_0;
sc_biguint<10> local_var_8 = 0;
univ_var_37 = (sc_biguint<10>(local_var_8), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_11 = (local_var_7 << univ_var_37);
univ_var_38 = (sc_biguint<16>(local_var_0), sc_biguint<16>(local_var_11));
auto univ_var_38_nxt_holder = univ_var_38;
sc_biguint<16> local_var_13 = 0;
auto local_var_14 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_15 = 1;
bool local_var_16 = (local_var_14 == local_var_15);
auto local_var_19 = (local_var_16) ? sdp_dma_data_1 : sdp_regs_data_1;
sc_biguint<10> local_var_20 = 0;
univ_var_39 = (sc_biguint<10>(local_var_20), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_22 = (local_var_19 << univ_var_39);
univ_var_40 = (sc_biguint<16>(local_var_13), sc_biguint<16>(local_var_22));
auto univ_var_40_nxt_holder = univ_var_40;
sc_biguint<16> local_var_24 = 0;
auto local_var_25 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_26 = 1;
bool local_var_27 = (local_var_25 == local_var_26);
auto local_var_30 = (local_var_27) ? sdp_dma_data_10 : sdp_regs_data_10;
sc_biguint<10> local_var_31 = 0;
univ_var_41 = (sc_biguint<10>(local_var_31), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_33 = (local_var_30 << univ_var_41);
univ_var_42 = (sc_biguint<16>(local_var_24), sc_biguint<16>(local_var_33));
auto univ_var_42_nxt_holder = univ_var_42;
sc_biguint<16> local_var_35 = 0;
auto local_var_36 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_37 = 1;
bool local_var_38 = (local_var_36 == local_var_37);
auto local_var_41 = (local_var_38) ? sdp_dma_data_11 : sdp_regs_data_11;
sc_biguint<10> local_var_42 = 0;
univ_var_43 = (sc_biguint<10>(local_var_42), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_44 = (local_var_41 << univ_var_43);
univ_var_44 = (sc_biguint<16>(local_var_35), sc_biguint<16>(local_var_44));
auto univ_var_44_nxt_holder = univ_var_44;
sc_biguint<16> local_var_46 = 0;
auto local_var_47 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_48 = 1;
bool local_var_49 = (local_var_47 == local_var_48);
auto local_var_52 = (local_var_49) ? sdp_dma_data_12 : sdp_regs_data_12;
sc_biguint<10> local_var_53 = 0;
univ_var_45 = (sc_biguint<10>(local_var_53), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_55 = (local_var_52 << univ_var_45);
univ_var_46 = (sc_biguint<16>(local_var_46), sc_biguint<16>(local_var_55));
auto univ_var_46_nxt_holder = univ_var_46;
sc_biguint<16> local_var_57 = 0;
auto local_var_58 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_59 = 1;
bool local_var_60 = (local_var_58 == local_var_59);
auto local_var_63 = (local_var_60) ? sdp_dma_data_13 : sdp_regs_data_13;
sc_biguint<10> local_var_64 = 0;
univ_var_47 = (sc_biguint<10>(local_var_64), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_66 = (local_var_63 << univ_var_47);
univ_var_48 = (sc_biguint<16>(local_var_57), sc_biguint<16>(local_var_66));
auto univ_var_48_nxt_holder = univ_var_48;
sc_biguint<16> local_var_68 = 0;
auto local_var_69 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_70 = 1;
bool local_var_71 = (local_var_69 == local_var_70);
auto local_var_74 = (local_var_71) ? sdp_dma_data_14 : sdp_regs_data_14;
sc_biguint<10> local_var_75 = 0;
univ_var_49 = (sc_biguint<10>(local_var_75), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_77 = (local_var_74 << univ_var_49);
univ_var_50 = (sc_biguint<16>(local_var_68), sc_biguint<16>(local_var_77));
auto univ_var_50_nxt_holder = univ_var_50;
sc_biguint<16> local_var_79 = 0;
auto local_var_80 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_81 = 1;
bool local_var_82 = (local_var_80 == local_var_81);
auto local_var_85 = (local_var_82) ? sdp_dma_data_15 : sdp_regs_data_15;
sc_biguint<10> local_var_86 = 0;
univ_var_51 = (sc_biguint<10>(local_var_86), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_88 = (local_var_85 << univ_var_51);
univ_var_52 = (sc_biguint<16>(local_var_79), sc_biguint<16>(local_var_88));
auto univ_var_52_nxt_holder = univ_var_52;
sc_biguint<16> local_var_90 = 0;
auto local_var_91 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_92 = 1;
bool local_var_93 = (local_var_91 == local_var_92);
auto local_var_96 = (local_var_93) ? sdp_dma_data_2 : sdp_regs_data_2;
sc_biguint<10> local_var_97 = 0;
univ_var_53 = (sc_biguint<10>(local_var_97), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_99 = (local_var_96 << univ_var_53);
univ_var_54 = (sc_biguint<16>(local_var_90), sc_biguint<16>(local_var_99));
auto univ_var_54_nxt_holder = univ_var_54;
sc_biguint<16> local_var_101 = 0;
auto local_var_102 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_103 = 1;
bool local_var_104 = (local_var_102 == local_var_103);
auto local_var_107 = (local_var_104) ? sdp_dma_data_3 : sdp_regs_data_3;
sc_biguint<10> local_var_108 = 0;
univ_var_55 = (sc_biguint<10>(local_var_108), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_110 = (local_var_107 << univ_var_55);
univ_var_56 = (sc_biguint<16>(local_var_101), sc_biguint<16>(local_var_110));
auto univ_var_56_nxt_holder = univ_var_56;
sc_biguint<16> local_var_112 = 0;
auto local_var_113 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_114 = 1;
bool local_var_115 = (local_var_113 == local_var_114);
auto local_var_118 = (local_var_115) ? sdp_dma_data_4 : sdp_regs_data_4;
sc_biguint<10> local_var_119 = 0;
univ_var_57 = (sc_biguint<10>(local_var_119), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_121 = (local_var_118 << univ_var_57);
univ_var_58 = (sc_biguint<16>(local_var_112), sc_biguint<16>(local_var_121));
auto univ_var_58_nxt_holder = univ_var_58;
sc_biguint<16> local_var_123 = 0;
auto local_var_124 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_125 = 1;
bool local_var_126 = (local_var_124 == local_var_125);
auto local_var_129 = (local_var_126) ? sdp_dma_data_5 : sdp_regs_data_5;
sc_biguint<10> local_var_130 = 0;
univ_var_59 = (sc_biguint<10>(local_var_130), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_132 = (local_var_129 << univ_var_59);
univ_var_60 = (sc_biguint<16>(local_var_123), sc_biguint<16>(local_var_132));
auto univ_var_60_nxt_holder = univ_var_60;
sc_biguint<16> local_var_134 = 0;
auto local_var_135 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_136 = 1;
bool local_var_137 = (local_var_135 == local_var_136);
auto local_var_140 = (local_var_137) ? sdp_dma_data_6 : sdp_regs_data_6;
sc_biguint<10> local_var_141 = 0;
univ_var_61 = (sc_biguint<10>(local_var_141), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_143 = (local_var_140 << univ_var_61);
univ_var_62 = (sc_biguint<16>(local_var_134), sc_biguint<16>(local_var_143));
auto univ_var_62_nxt_holder = univ_var_62;
sc_biguint<16> local_var_145 = 0;
auto local_var_146 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_147 = 1;
bool local_var_148 = (local_var_146 == local_var_147);
auto local_var_151 = (local_var_148) ? sdp_dma_data_7 : sdp_regs_data_7;
sc_biguint<10> local_var_152 = 0;
univ_var_63 = (sc_biguint<10>(local_var_152), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_154 = (local_var_151 << univ_var_63);
univ_var_64 = (sc_biguint<16>(local_var_145), sc_biguint<16>(local_var_154));
auto univ_var_64_nxt_holder = univ_var_64;
sc_biguint<16> local_var_156 = 0;
auto local_var_157 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_158 = 1;
bool local_var_159 = (local_var_157 == local_var_158);
auto local_var_162 = (local_var_159) ? sdp_dma_data_8 : sdp_regs_data_8;
sc_biguint<10> local_var_163 = 0;
univ_var_65 = (sc_biguint<10>(local_var_163), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_165 = (local_var_162 << univ_var_65);
univ_var_66 = (sc_biguint<16>(local_var_156), sc_biguint<16>(local_var_165));
auto univ_var_66_nxt_holder = univ_var_66;
sc_biguint<16> local_var_167 = 0;
auto local_var_168 = sdp_group1_d_bs_alu_src.range(0, 0);
sc_biguint<1> local_var_169 = 1;
bool local_var_170 = (local_var_168 == local_var_169);
auto local_var_173 = (local_var_170) ? sdp_dma_data_9 : sdp_regs_data_9;
sc_biguint<10> local_var_174 = 0;
univ_var_67 = (sc_biguint<10>(local_var_174), sc_biguint<6>(sdp_group1_d_bs_alu_shift_value));
sc_biguint<16> local_var_176 = (local_var_173 << univ_var_67);
univ_var_68 = (sc_biguint<16>(local_var_167), sc_biguint<16>(local_var_176));
auto univ_var_68_nxt_holder = univ_var_68;
sdp_pdp_output_0 = univ_var_38_nxt_holder;
sdp_pdp_output_1 = univ_var_40_nxt_holder;
sdp_pdp_output_10 = univ_var_42_nxt_holder;
sdp_pdp_output_11 = univ_var_44_nxt_holder;
sdp_pdp_output_12 = univ_var_46_nxt_holder;
sdp_pdp_output_13 = univ_var_48_nxt_holder;
sdp_pdp_output_14 = univ_var_50_nxt_holder;
sdp_pdp_output_15 = univ_var_52_nxt_holder;
sdp_pdp_output_2 = univ_var_54_nxt_holder;
sdp_pdp_output_3 = univ_var_56_nxt_holder;
sdp_pdp_output_4 = univ_var_58_nxt_holder;
sdp_pdp_output_5 = univ_var_60_nxt_holder;
sdp_pdp_output_6 = univ_var_62_nxt_holder;
sdp_pdp_output_7 = univ_var_64_nxt_holder;
sdp_pdp_output_8 = univ_var_66_nxt_holder;
sdp_pdp_output_9 = univ_var_68_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "Compute_Max_group1 state updates:" << std::endl;
instr_update_log << "    sdp_pdp_output_0 => " << std::hex << "0x" << sdp_pdp_output_0 << std::endl; 
instr_update_log << "    sdp_pdp_output_1 => " << std::hex << "0x" << sdp_pdp_output_1 << std::endl; 
instr_update_log << "    sdp_pdp_output_10 => " << std::hex << "0x" << sdp_pdp_output_10 << std::endl; 
instr_update_log << "    sdp_pdp_output_11 => " << std::hex << "0x" << sdp_pdp_output_11 << std::endl; 
instr_update_log << "    sdp_pdp_output_12 => " << std::hex << "0x" << sdp_pdp_output_12 << std::endl; 
instr_update_log << "    sdp_pdp_output_13 => " << std::hex << "0x" << sdp_pdp_output_13 << std::endl; 
instr_update_log << "    sdp_pdp_output_14 => " << std::hex << "0x" << sdp_pdp_output_14 << std::endl; 
instr_update_log << "    sdp_pdp_output_15 => " << std::hex << "0x" << sdp_pdp_output_15 << std::endl; 
instr_update_log << "    sdp_pdp_output_2 => " << std::hex << "0x" << sdp_pdp_output_2 << std::endl; 
instr_update_log << "    sdp_pdp_output_3 => " << std::hex << "0x" << sdp_pdp_output_3 << std::endl; 
instr_update_log << "    sdp_pdp_output_4 => " << std::hex << "0x" << sdp_pdp_output_4 << std::endl; 
instr_update_log << "    sdp_pdp_output_5 => " << std::hex << "0x" << sdp_pdp_output_5 << std::endl; 
instr_update_log << "    sdp_pdp_output_6 => " << std::hex << "0x" << sdp_pdp_output_6 << std::endl; 
instr_update_log << "    sdp_pdp_output_7 => " << std::hex << "0x" << sdp_pdp_output_7 << std::endl; 
instr_update_log << "    sdp_pdp_output_8 => " << std::hex << "0x" << sdp_pdp_output_8 << std::endl; 
instr_update_log << "    sdp_pdp_output_9 => " << std::hex << "0x" << sdp_pdp_output_9 << std::endl; 
instr_update_log << std::endl;
#endif
}