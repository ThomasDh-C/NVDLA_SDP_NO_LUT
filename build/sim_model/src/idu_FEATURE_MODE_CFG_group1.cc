#include <sdp.h>
bool sdp::decode_sdp_FEATURE_MODE_CFG_group1() {
sc_biguint<2> local_var_1 = 0;
univ_var_1 = (sc_biguint<22>(sdp_csb_addr), sc_biguint<2>(local_var_1));
auto local_var_3 = univ_var_1.range(11, 0);
sc_biguint<12> local_var_4 = 176;
bool local_var_5 = (local_var_3 == local_var_4);
sc_biguint<1> local_var_7 = 1;
bool local_var_8 = (sdp_csb_rdy == local_var_7);
sc_biguint<1> local_var_10 = 1;
bool local_var_11 = (sdp_csb_vld == local_var_10);
bool local_var_12 = (local_var_8 & local_var_11);
bool local_var_13 = (local_var_5 & local_var_12);
sc_biguint<1> local_var_15 = 1;
bool local_var_16 = (sdp_csb_write == local_var_15);
bool local_var_17 = (local_var_13 & local_var_16);
sc_biguint<1> local_var_19 = 1;
bool local_var_20 = (sdp_s_producer == local_var_19);
bool local_var_21 = (local_var_17 & local_var_20);
sc_biguint<1> local_var_23 = 0;
bool local_var_24 = (sdp_group1_d_op_en == local_var_23);
bool local_var_25 = (local_var_21 & local_var_24);
auto& univ_var_75 = local_var_25;
return univ_var_75;
}
void sdp::update_sdp_FEATURE_MODE_CFG_group1() {
auto local_var_1 = sdp_csb_data.range(12, 8);
auto local_var_1_nxt_holder = local_var_1;
auto local_var_2 = sdp_csb_data.range(0, 0);
auto local_var_2_nxt_holder = local_var_2;
auto local_var_3 = sdp_csb_data.range(3, 3);
auto local_var_3_nxt_holder = local_var_3;
auto local_var_4 = sdp_csb_data.range(1, 1);
auto local_var_4_nxt_holder = local_var_4;
auto local_var_5 = sdp_csb_data.range(2, 2);
auto local_var_5_nxt_holder = local_var_5;
sdp_group1_d_batch_number = local_var_1_nxt_holder;
sdp_group1_d_flying_mode = local_var_2_nxt_holder;
sdp_group1_d_nan_to_zero = local_var_3_nxt_holder;
sdp_group1_d_output_dst = local_var_4_nxt_holder;
sdp_group1_d_winograd = local_var_5_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "FEATURE_MODE_CFG_group1 state updates:" << std::endl;
instr_update_log << "    sdp_group1_d_batch_number => " << std::hex << "0x" << sdp_group1_d_batch_number << std::endl; 
instr_update_log << "    sdp_group1_d_flying_mode => " << std::hex << "0x" << sdp_group1_d_flying_mode << std::endl; 
instr_update_log << "    sdp_group1_d_nan_to_zero => " << std::hex << "0x" << sdp_group1_d_nan_to_zero << std::endl; 
instr_update_log << "    sdp_group1_d_output_dst => " << std::hex << "0x" << sdp_group1_d_output_dst << std::endl; 
instr_update_log << "    sdp_group1_d_winograd => " << std::hex << "0x" << sdp_group1_d_winograd << std::endl; 
instr_update_log << std::endl;
#endif
}
