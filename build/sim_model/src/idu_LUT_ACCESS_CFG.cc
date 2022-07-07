#include <sdp.h>
bool sdp::decode_sdp_LUT_ACCESS_CFG() {
sc_biguint<2> local_var_1 = 0;
univ_var_1 = (sc_biguint<22>(sdp_csb_addr), sc_biguint<2>(local_var_1));
auto local_var_3 = univ_var_1.range(11, 0);
sc_biguint<12> local_var_4 = 8;
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
auto& univ_var_3 = local_var_17;
return univ_var_3;
}
void sdp::update_sdp_LUT_ACCESS_CFG() {
auto local_var_1 = sdp_csb_data.range(17, 17);
auto local_var_1_nxt_holder = local_var_1;
auto local_var_2 = sdp_csb_data.range(9, 0);
auto local_var_2_nxt_holder = local_var_2;
auto local_var_3 = sdp_csb_data.range(16, 16);
auto local_var_3_nxt_holder = local_var_3;
sdp_s_lut_access_type = local_var_1_nxt_holder;
sdp_s_lut_addr = local_var_2_nxt_holder;
sdp_s_lut_table_id = local_var_3_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "LUT_ACCESS_CFG state updates:" << std::endl;
instr_update_log << "    sdp_s_lut_access_type => " << std::hex << "0x" << sdp_s_lut_access_type << std::endl; 
instr_update_log << "    sdp_s_lut_addr => " << std::hex << "0x" << sdp_s_lut_addr << std::endl; 
instr_update_log << "    sdp_s_lut_table_id => " << std::hex << "0x" << sdp_s_lut_table_id << std::endl; 
instr_update_log << std::endl;
#endif
}
