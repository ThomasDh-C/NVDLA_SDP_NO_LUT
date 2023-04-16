#include <iomanip>
#include <sdp.h>
#include <chrono>
static int instr_cntr = 0;
int sdp::GetInstrCntr() {
  return instr_cntr;
}
void sdp::IncrementInstrCntr() {
  instr_cntr++;
}
void sdp::LogInstrSequence(const std::string& instr_name, const long int& exec_time) {
  instr_log << "Instr No. " << std::setw(8) << GetInstrCntr() << '\t';
  instr_log << instr_name << " is activated\t";
  instr_log << "exec_time: " << exec_time * 1e-3 << " us\n";
  IncrementInstrCntr();
}
static bool g_initialized = false;
void sdp::compute() {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
sdp_csb_addr = sdp_csb_addr_in.read();
sdp_csb_data = sdp_csb_data_in.read();
sdp_csb_write = sdp_csb_write_in.read();
sdp_csb_vld = sdp_csb_vld_in.read();
sdp_csb_rdy = sdp_csb_rdy_in.read();
sdp_fifo_clr = sdp_fifo_clr_in.read();
sdp_done = sdp_done_in.read();
sdp_cacc_data_0 = sdp_cacc_data_0_in.read();
sdp_mrdma_data_0 = sdp_mrdma_data_0_in.read();
sdp_regs_data_alu_0 = sdp_regs_data_alu_0_in.read();
sdp_regs_data_mult_0 = sdp_regs_data_mult_0_in.read();
sdp_dma_data_alu_0 = sdp_dma_data_alu_0_in.read();
sdp_dma_data_mult_0 = sdp_dma_data_mult_0_in.read();
sdp_cacc_data_1 = sdp_cacc_data_1_in.read();
sdp_mrdma_data_1 = sdp_mrdma_data_1_in.read();
sdp_regs_data_alu_1 = sdp_regs_data_alu_1_in.read();
sdp_regs_data_mult_1 = sdp_regs_data_mult_1_in.read();
sdp_dma_data_alu_1 = sdp_dma_data_alu_1_in.read();
sdp_dma_data_mult_1 = sdp_dma_data_mult_1_in.read();
sdp_cacc_data_2 = sdp_cacc_data_2_in.read();
sdp_mrdma_data_2 = sdp_mrdma_data_2_in.read();
sdp_regs_data_alu_2 = sdp_regs_data_alu_2_in.read();
sdp_regs_data_mult_2 = sdp_regs_data_mult_2_in.read();
sdp_dma_data_alu_2 = sdp_dma_data_alu_2_in.read();
sdp_dma_data_mult_2 = sdp_dma_data_mult_2_in.read();
sdp_cacc_data_3 = sdp_cacc_data_3_in.read();
sdp_mrdma_data_3 = sdp_mrdma_data_3_in.read();
sdp_regs_data_alu_3 = sdp_regs_data_alu_3_in.read();
sdp_regs_data_mult_3 = sdp_regs_data_mult_3_in.read();
sdp_dma_data_alu_3 = sdp_dma_data_alu_3_in.read();
sdp_dma_data_mult_3 = sdp_dma_data_mult_3_in.read();
sdp_cacc_data_4 = sdp_cacc_data_4_in.read();
sdp_mrdma_data_4 = sdp_mrdma_data_4_in.read();
sdp_regs_data_alu_4 = sdp_regs_data_alu_4_in.read();
sdp_regs_data_mult_4 = sdp_regs_data_mult_4_in.read();
sdp_dma_data_alu_4 = sdp_dma_data_alu_4_in.read();
sdp_dma_data_mult_4 = sdp_dma_data_mult_4_in.read();
sdp_cacc_data_5 = sdp_cacc_data_5_in.read();
sdp_mrdma_data_5 = sdp_mrdma_data_5_in.read();
sdp_regs_data_alu_5 = sdp_regs_data_alu_5_in.read();
sdp_regs_data_mult_5 = sdp_regs_data_mult_5_in.read();
sdp_dma_data_alu_5 = sdp_dma_data_alu_5_in.read();
sdp_dma_data_mult_5 = sdp_dma_data_mult_5_in.read();
sdp_cacc_data_6 = sdp_cacc_data_6_in.read();
sdp_mrdma_data_6 = sdp_mrdma_data_6_in.read();
sdp_regs_data_alu_6 = sdp_regs_data_alu_6_in.read();
sdp_regs_data_mult_6 = sdp_regs_data_mult_6_in.read();
sdp_dma_data_alu_6 = sdp_dma_data_alu_6_in.read();
sdp_dma_data_mult_6 = sdp_dma_data_mult_6_in.read();
sdp_cacc_data_7 = sdp_cacc_data_7_in.read();
sdp_mrdma_data_7 = sdp_mrdma_data_7_in.read();
sdp_regs_data_alu_7 = sdp_regs_data_alu_7_in.read();
sdp_regs_data_mult_7 = sdp_regs_data_mult_7_in.read();
sdp_dma_data_alu_7 = sdp_dma_data_alu_7_in.read();
sdp_dma_data_mult_7 = sdp_dma_data_mult_7_in.read();
sdp_cacc_data_8 = sdp_cacc_data_8_in.read();
sdp_mrdma_data_8 = sdp_mrdma_data_8_in.read();
sdp_regs_data_alu_8 = sdp_regs_data_alu_8_in.read();
sdp_regs_data_mult_8 = sdp_regs_data_mult_8_in.read();
sdp_dma_data_alu_8 = sdp_dma_data_alu_8_in.read();
sdp_dma_data_mult_8 = sdp_dma_data_mult_8_in.read();
sdp_cacc_data_9 = sdp_cacc_data_9_in.read();
sdp_mrdma_data_9 = sdp_mrdma_data_9_in.read();
sdp_regs_data_alu_9 = sdp_regs_data_alu_9_in.read();
sdp_regs_data_mult_9 = sdp_regs_data_mult_9_in.read();
sdp_dma_data_alu_9 = sdp_dma_data_alu_9_in.read();
sdp_dma_data_mult_9 = sdp_dma_data_mult_9_in.read();
sdp_cacc_data_10 = sdp_cacc_data_10_in.read();
sdp_mrdma_data_10 = sdp_mrdma_data_10_in.read();
sdp_regs_data_alu_10 = sdp_regs_data_alu_10_in.read();
sdp_regs_data_mult_10 = sdp_regs_data_mult_10_in.read();
sdp_dma_data_alu_10 = sdp_dma_data_alu_10_in.read();
sdp_dma_data_mult_10 = sdp_dma_data_mult_10_in.read();
sdp_cacc_data_11 = sdp_cacc_data_11_in.read();
sdp_mrdma_data_11 = sdp_mrdma_data_11_in.read();
sdp_regs_data_alu_11 = sdp_regs_data_alu_11_in.read();
sdp_regs_data_mult_11 = sdp_regs_data_mult_11_in.read();
sdp_dma_data_alu_11 = sdp_dma_data_alu_11_in.read();
sdp_dma_data_mult_11 = sdp_dma_data_mult_11_in.read();
sdp_cacc_data_12 = sdp_cacc_data_12_in.read();
sdp_mrdma_data_12 = sdp_mrdma_data_12_in.read();
sdp_regs_data_alu_12 = sdp_regs_data_alu_12_in.read();
sdp_regs_data_mult_12 = sdp_regs_data_mult_12_in.read();
sdp_dma_data_alu_12 = sdp_dma_data_alu_12_in.read();
sdp_dma_data_mult_12 = sdp_dma_data_mult_12_in.read();
sdp_cacc_data_13 = sdp_cacc_data_13_in.read();
sdp_mrdma_data_13 = sdp_mrdma_data_13_in.read();
sdp_regs_data_alu_13 = sdp_regs_data_alu_13_in.read();
sdp_regs_data_mult_13 = sdp_regs_data_mult_13_in.read();
sdp_dma_data_alu_13 = sdp_dma_data_alu_13_in.read();
sdp_dma_data_mult_13 = sdp_dma_data_mult_13_in.read();
sdp_cacc_data_14 = sdp_cacc_data_14_in.read();
sdp_mrdma_data_14 = sdp_mrdma_data_14_in.read();
sdp_regs_data_alu_14 = sdp_regs_data_alu_14_in.read();
sdp_regs_data_mult_14 = sdp_regs_data_mult_14_in.read();
sdp_dma_data_alu_14 = sdp_dma_data_alu_14_in.read();
sdp_dma_data_mult_14 = sdp_dma_data_mult_14_in.read();
sdp_cacc_data_15 = sdp_cacc_data_15_in.read();
sdp_mrdma_data_15 = sdp_mrdma_data_15_in.read();
sdp_regs_data_alu_15 = sdp_regs_data_alu_15_in.read();
sdp_regs_data_mult_15 = sdp_regs_data_mult_15_in.read();
sdp_dma_data_alu_15 = sdp_dma_data_alu_15_in.read();
sdp_dma_data_mult_15 = sdp_dma_data_mult_15_in.read();
if (valid_sdp() && decode_sdp_SET_PRODUCER()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_SET_PRODUCER();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("SET_PRODUCER", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_OP_ENABLE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_OP_ENABLE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("OP_ENABLE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_OP_ENABLE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_OP_ENABLE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("OP_ENABLE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_CUBE_WIDTH_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_CUBE_WIDTH_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_CUBE_WIDTH_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_CUBE_WIDTH_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_CUBE_WIDTH_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_CUBE_WIDTH_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_CUBE_HEIGHT_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_CUBE_HEIGHT_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_CUBE_HEIGHT_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_CUBE_HEIGHT_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_CUBE_HEIGHT_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_CUBE_HEIGHT_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_CUBE_CHANNEL_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_CUBE_CHANNEL_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_CUBE_CHANNEL_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_CUBE_CHANNEL_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_CUBE_CHANNEL_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_CUBE_CHANNEL_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_BASE_ADDR_LOW_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_BASE_ADDR_LOW_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_BASE_ADDR_LOW_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_BASE_ADDR_LOW_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_BASE_ADDR_LOW_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_BASE_ADDR_LOW_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_BASE_ADDR_HIGH_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_BASE_ADDR_HIGH_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_BASE_ADDR_HIGH_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_BASE_ADDR_HIGH_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_BASE_ADDR_HIGH_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_BASE_ADDR_HIGH_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_LINE_STRIDE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_LINE_STRIDE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_LINE_STRIDE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_LINE_STRIDE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_LINE_STRIDE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_LINE_STRIDE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_SURFACE_STRIDE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_SURFACE_STRIDE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_SURFACE_STRIDE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_SURFACE_STRIDE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_SURFACE_STRIDE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_SURFACE_STRIDE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_ALU_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_ALU_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_ALU_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_ALU_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_ALU_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_ALU_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_ALU_SRC_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_ALU_SRC_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_ALU_SRC_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_ALU_SRC_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_ALU_SRC_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_ALU_SRC_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_MUL_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_MUL_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_MUL_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_MUL_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_MUL_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_MUL_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_MUL_SRC_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_MUL_SRC_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_MUL_SRC_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BS_MUL_SRC_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BS_MUL_SRC_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BS_MUL_SRC_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_ALU_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_ALU_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_ALU_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_ALU_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_ALU_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_ALU_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_ALU_SRC_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_ALU_SRC_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_ALU_SRC_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_ALU_SRC_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_ALU_SRC_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_ALU_SRC_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_MUL_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_MUL_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_MUL_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_MUL_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_MUL_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_MUL_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_MUL_SRC_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_MUL_SRC_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_MUL_SRC_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_BN_MUL_SRC_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_BN_MUL_SRC_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_BN_MUL_SRC_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_SRC_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_SRC_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_SRC_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CVT_OFFSET_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CVT_OFFSET_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CVT_SCALE_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CVT_SCALE_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CVT_TRUNCATE_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_ALU_CVT_TRUNCATE_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_SRC_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_SRC_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_SRC_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_SRC_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_SRC_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_SRC_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CVT_OFFSET_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CVT_OFFSET_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CVT_SCALE_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CVT_SCALE_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CVT_TRUNCATE_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_MUL_CVT_TRUNCATE_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_TRUNCATE_VALUE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_TRUNCATE_VALUE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_TRUNCATE_VALUE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DP_EW_TRUNCATE_VALUE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DP_EW_TRUNCATE_VALUE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DP_EW_TRUNCATE_VALUE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_FEATURE_MODE_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_FEATURE_MODE_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("FEATURE_MODE_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_FEATURE_MODE_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_FEATURE_MODE_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("FEATURE_MODE_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_DMA_CFG_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_DMA_CFG_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_DMA_CFG_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_DMA_CFG_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_DMA_CFG_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_DMA_CFG_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_BATCH_STRIDE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_BATCH_STRIDE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_BATCH_STRIDE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DST_BATCH_STRIDE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DST_BATCH_STRIDE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DST_BATCH_STRIDE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_FORMAT_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_FORMAT_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_FORMAT_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DATA_FORMAT_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DATA_FORMAT_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DATA_FORMAT_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_CVT_OFFSET_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_CVT_OFFSET_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("CVT_OFFSET_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_CVT_OFFSET_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_CVT_OFFSET_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("CVT_OFFSET_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_CVT_SCALE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_CVT_SCALE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("CVT_SCALE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_CVT_SCALE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_CVT_SCALE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("CVT_SCALE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_CVT_SHIFT_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_CVT_SHIFT_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("CVT_SHIFT_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_CVT_SHIFT_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_CVT_SHIFT_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("CVT_SHIFT_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_PERF_ENABLE_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_PERF_ENABLE_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("PERF_ENABLE_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_PERF_ENABLE_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_PERF_ENABLE_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("PERF_ENABLE_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_DONE()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_DONE();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("DONE", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_ReLU_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_ReLU_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_ReLU_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_ReLU_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_ReLU_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_ReLU_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Max_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Max_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Max_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Max_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Max_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Max_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Min_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Min_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Min_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Min_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Min_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Min_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Add_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Add_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Add_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Add_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Add_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Add_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Equal_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Equal_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Equal_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Equal_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Equal_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Equal_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Multiply_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Multiply_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Multiply_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_Multiply_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_Multiply_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_Multiply_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_PReLU_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_PReLU_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_PReLU_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_PReLU_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_PReLU_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_PReLU_group1", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_BatchNorm_group0()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_BatchNorm_group0();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_BatchNorm_group0", exec_time);
#endif
}
if (valid_sdp() && decode_sdp_Compute_BatchNorm_group1()) {
#ifdef ILATOR_PROFILING
  auto start = std::chrono::high_resolution_clock::now();
#endif
  update_sdp_Compute_BatchNorm_group1();
  
#ifdef ILATOR_PROFILING
  auto stop = std::chrono::high_resolution_clock::now();
  auto exec_time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop-start).count();
  LogInstrSequence("Compute_BatchNorm_group1", exec_time);
#endif
}
while (1) {
  int schedule_counter = 0;
  if (schedule_counter == 0) {
    break;
  }
}
}
