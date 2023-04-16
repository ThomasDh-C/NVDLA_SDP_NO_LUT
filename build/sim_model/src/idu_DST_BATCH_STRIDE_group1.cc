#include <sdp.h>
bool sdp::decode_sdp_DST_BATCH_STRIDE_group1() {
sc_biguint<22> local_var_1 = 184;
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
auto local_var_16 = sdp_s_producer.range(0, 0);
sc_biguint<1> local_var_17 = 1;
bool local_var_18 = (local_var_16 == local_var_17);
bool local_var_19 = (local_var_14 & local_var_18);
auto local_var_21 = sdp_group1_d_op_en.range(0, 0);
sc_biguint<1> local_var_22 = 0;
bool local_var_23 = (local_var_21 == local_var_22);
bool local_var_24 = (local_var_19 & local_var_23);
auto& univ_var_66 = local_var_24;
return univ_var_66;
}
void sdp::update_sdp_DST_BATCH_STRIDE_group1() {
auto local_var_1 = sdp_csb_data.range(31, 5);
auto local_var_1_nxt_holder = local_var_1;
sdp_group1_d_dst_batch_stride = local_var_1_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "DST_BATCH_STRIDE_group1 state updates:" << std::endl;
instr_update_log << "    sdp_group1_d_dst_batch_stride => " << std::hex << "0x" << sdp_group1_d_dst_batch_stride << std::endl; 
instr_update_log << std::endl;
#endif
}
