#include <sdp.h>
bool sdp::decode_sdp_LUT_LE_SLOPE_SCALE() {
sc_biguint<22> local_var_1 = 40;
bool local_var_2 = (sdp_csb_addr == local_var_1);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (sdp_csb_rdy == local_var_4);
sc_biguint<1> local_var_7 = 1;
bool local_var_8 = (sdp_csb_vld == local_var_7);
bool local_var_9 = (local_var_5 & local_var_8);
bool local_var_10 = (local_var_2 & local_var_9);
sc_biguint<1> local_var_12 = 1;
bool local_var_13 = (sdp_csb_write == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
auto& univ_var_10 = local_var_14;
return univ_var_10;
}
void sdp::update_sdp_LUT_LE_SLOPE_SCALE() {
auto local_var_1 = sdp_csb_data.range(31, 16);
auto local_var_1_nxt_holder = local_var_1;
auto local_var_2 = sdp_csb_data.range(15, 0);
auto local_var_2_nxt_holder = local_var_2;
sdp_s_lut_le_slope_oflow_scale = local_var_1_nxt_holder;
sdp_s_lut_le_slope_uflow_scale = local_var_2_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "LUT_LE_SLOPE_SCALE state updates:" << std::endl;
instr_update_log << "    sdp_s_lut_le_slope_oflow_scale => " << std::hex << "0x" << sdp_s_lut_le_slope_oflow_scale << std::endl; 
instr_update_log << "    sdp_s_lut_le_slope_uflow_scale => " << std::hex << "0x" << sdp_s_lut_le_slope_uflow_scale << std::endl; 
instr_update_log << std::endl;
#endif
}