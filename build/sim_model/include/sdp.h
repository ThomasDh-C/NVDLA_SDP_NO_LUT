#include <fstream>
#include <systemc.h>
#include <map>
SC_MODULE(sdp) {
  std::ofstream instr_log;
  std::ofstream instr_update_log;
  int GetInstrCntr();
  void IncrementInstrCntr();
  void LogInstrSequence(const std::string& instr_name);
  sc_in<sc_biguint<16>> sdp_dma_data_15_in;
  sc_biguint<16> sdp_dma_data_15;
  sc_in<sc_biguint<16>> sdp_regs_data_15_in;
  sc_biguint<16> sdp_regs_data_15;
  sc_in<sc_biguint<32>> sdp_mrdma_data_15_in;
  sc_biguint<32> sdp_mrdma_data_15;
  sc_in<sc_biguint<32>> sdp_cacc_data_15_in;
  sc_biguint<32> sdp_cacc_data_15;
  sc_in<sc_biguint<16>> sdp_dma_data_14_in;
  sc_biguint<16> sdp_dma_data_14;
  sc_in<sc_biguint<16>> sdp_regs_data_14_in;
  sc_biguint<16> sdp_regs_data_14;
  sc_in<sc_biguint<32>> sdp_mrdma_data_14_in;
  sc_biguint<32> sdp_mrdma_data_14;
  sc_in<sc_biguint<32>> sdp_cacc_data_14_in;
  sc_biguint<32> sdp_cacc_data_14;
  sc_in<sc_biguint<16>> sdp_dma_data_13_in;
  sc_biguint<16> sdp_dma_data_13;
  sc_in<sc_biguint<16>> sdp_regs_data_13_in;
  sc_biguint<16> sdp_regs_data_13;
  sc_in<sc_biguint<32>> sdp_mrdma_data_13_in;
  sc_biguint<32> sdp_mrdma_data_13;
  sc_in<sc_biguint<32>> sdp_cacc_data_13_in;
  sc_biguint<32> sdp_cacc_data_13;
  sc_in<sc_biguint<16>> sdp_dma_data_12_in;
  sc_biguint<16> sdp_dma_data_12;
  sc_in<sc_biguint<16>> sdp_regs_data_12_in;
  sc_biguint<16> sdp_regs_data_12;
  sc_in<sc_biguint<32>> sdp_mrdma_data_12_in;
  sc_biguint<32> sdp_mrdma_data_12;
  sc_in<sc_biguint<32>> sdp_cacc_data_12_in;
  sc_biguint<32> sdp_cacc_data_12;
  sc_in<sc_biguint<16>> sdp_dma_data_11_in;
  sc_biguint<16> sdp_dma_data_11;
  sc_in<sc_biguint<16>> sdp_regs_data_11_in;
  sc_biguint<16> sdp_regs_data_11;
  sc_in<sc_biguint<32>> sdp_mrdma_data_11_in;
  sc_biguint<32> sdp_mrdma_data_11;
  sc_in<sc_biguint<32>> sdp_cacc_data_11_in;
  sc_biguint<32> sdp_cacc_data_11;
  sc_in<sc_biguint<16>> sdp_dma_data_10_in;
  sc_biguint<16> sdp_dma_data_10;
  sc_in<sc_biguint<16>> sdp_regs_data_10_in;
  sc_biguint<16> sdp_regs_data_10;
  sc_in<sc_biguint<32>> sdp_mrdma_data_10_in;
  sc_biguint<32> sdp_mrdma_data_10;
  sc_in<sc_biguint<32>> sdp_cacc_data_10_in;
  sc_biguint<32> sdp_cacc_data_10;
  sc_in<sc_biguint<16>> sdp_dma_data_9_in;
  sc_biguint<16> sdp_dma_data_9;
  sc_in<sc_biguint<16>> sdp_regs_data_9_in;
  sc_biguint<16> sdp_regs_data_9;
  sc_in<sc_biguint<32>> sdp_mrdma_data_9_in;
  sc_biguint<32> sdp_mrdma_data_9;
  sc_in<sc_biguint<32>> sdp_cacc_data_9_in;
  sc_biguint<32> sdp_cacc_data_9;
  sc_in<sc_biguint<16>> sdp_dma_data_8_in;
  sc_biguint<16> sdp_dma_data_8;
  sc_in<sc_biguint<16>> sdp_regs_data_8_in;
  sc_biguint<16> sdp_regs_data_8;
  sc_in<sc_biguint<32>> sdp_mrdma_data_8_in;
  sc_biguint<32> sdp_mrdma_data_8;
  sc_in<sc_biguint<32>> sdp_cacc_data_8_in;
  sc_biguint<32> sdp_cacc_data_8;
  sc_in<sc_biguint<16>> sdp_dma_data_7_in;
  sc_biguint<16> sdp_dma_data_7;
  sc_in<sc_biguint<16>> sdp_regs_data_7_in;
  sc_biguint<16> sdp_regs_data_7;
  sc_in<sc_biguint<32>> sdp_mrdma_data_7_in;
  sc_biguint<32> sdp_mrdma_data_7;
  sc_in<sc_biguint<32>> sdp_cacc_data_7_in;
  sc_biguint<32> sdp_cacc_data_7;
  sc_in<sc_biguint<16>> sdp_dma_data_6_in;
  sc_biguint<16> sdp_dma_data_6;
  sc_in<sc_biguint<16>> sdp_regs_data_1_in;
  sc_biguint<16> sdp_regs_data_1;
  sc_in<sc_biguint<32>> sdp_mrdma_data_1_in;
  sc_biguint<32> sdp_mrdma_data_1;
  sc_in<sc_biguint<32>> sdp_cacc_data_1_in;
  sc_biguint<32> sdp_cacc_data_1;
  sc_in<sc_biguint<16>> sdp_dma_data_0_in;
  sc_biguint<16> sdp_dma_data_0;
  sc_in<sc_biguint<16>> sdp_regs_data_0_in;
  sc_biguint<16> sdp_regs_data_0;
  sc_in<sc_biguint<32>> sdp_mrdma_data_0_in;
  sc_biguint<32> sdp_mrdma_data_0;
  sc_in<sc_biguint<32>> sdp_cacc_data_0_in;
  sc_biguint<32> sdp_cacc_data_0;
  sc_in<sc_biguint<1>> sdp_done_in;
  sc_biguint<1> sdp_done;
  sc_in<sc_biguint<1>> sdp_fifo_clr_in;
  sc_biguint<1> sdp_fifo_clr;
  sc_in<sc_biguint<1>> sdp_sg2wt_vld_in;
  sc_biguint<1> sdp_sg2wt_vld;
  sc_in<sc_biguint<32>> sdp_csb_data_in;
  sc_biguint<32> sdp_csb_data;
  sc_in<sc_biguint<22>> sdp_csb_addr_in;
  sc_biguint<22> sdp_csb_addr;
  sc_in<sc_biguint<1>> sdp_csb_write_in;
  sc_biguint<1> sdp_csb_write;
  sc_in<sc_biguint<1>> sdp_csb_vld_in;
  sc_biguint<1> sdp_csb_vld;
  sc_in<sc_biguint<1>> sdp_pending_clr_in;
  sc_biguint<1> sdp_pending_clr;
  sc_in<sc_biguint<1>> sdp_sg2dl_vld_in;
  sc_biguint<1> sdp_sg2dl_vld;
  sc_in<sc_biguint<16>> sdp_dma_data_1_in;
  sc_biguint<16> sdp_dma_data_1;
  sc_in<sc_biguint<32>> sdp_cacc_data_2_in;
  sc_biguint<32> sdp_cacc_data_2;
  sc_in<sc_biguint<32>> sdp_mrdma_data_2_in;
  sc_biguint<32> sdp_mrdma_data_2;
  sc_in<sc_biguint<16>> sdp_regs_data_2_in;
  sc_biguint<16> sdp_regs_data_2;
  sc_in<sc_biguint<16>> sdp_dma_data_2_in;
  sc_biguint<16> sdp_dma_data_2;
  sc_in<sc_biguint<32>> sdp_cacc_data_3_in;
  sc_biguint<32> sdp_cacc_data_3;
  sc_in<sc_biguint<32>> sdp_mrdma_data_3_in;
  sc_biguint<32> sdp_mrdma_data_3;
  sc_in<sc_biguint<16>> sdp_regs_data_3_in;
  sc_biguint<16> sdp_regs_data_3;
  sc_in<sc_biguint<16>> sdp_dma_data_3_in;
  sc_biguint<16> sdp_dma_data_3;
  sc_in<sc_biguint<32>> sdp_cacc_data_4_in;
  sc_biguint<32> sdp_cacc_data_4;
  sc_in<sc_biguint<32>> sdp_mrdma_data_4_in;
  sc_biguint<32> sdp_mrdma_data_4;
  sc_in<sc_biguint<16>> sdp_regs_data_4_in;
  sc_biguint<16> sdp_regs_data_4;
  sc_in<sc_biguint<16>> sdp_dma_data_4_in;
  sc_biguint<16> sdp_dma_data_4;
  sc_in<sc_biguint<32>> sdp_cacc_data_5_in;
  sc_biguint<32> sdp_cacc_data_5;
  sc_in<sc_biguint<32>> sdp_mrdma_data_5_in;
  sc_biguint<32> sdp_mrdma_data_5;
  sc_in<sc_biguint<16>> sdp_regs_data_5_in;
  sc_biguint<16> sdp_regs_data_5;
  sc_in<sc_biguint<16>> sdp_dma_data_5_in;
  sc_biguint<16> sdp_dma_data_5;
  sc_in<sc_biguint<32>> sdp_cacc_data_6_in;
  sc_biguint<32> sdp_cacc_data_6;
  sc_in<sc_biguint<32>> sdp_mrdma_data_6_in;
  sc_biguint<32> sdp_mrdma_data_6;
  sc_in<sc_biguint<16>> sdp_regs_data_6_in;
  sc_biguint<16> sdp_regs_data_6;
  sc_biguint<2> sdp_sdp_state;
  sc_biguint<35> sdp_fraction;
  sc_biguint<9> sdp_index;
  sc_biguint<1> sdp_oflow;
  sc_biguint<1> sdp_uflow;
  sc_biguint<35> sdp_lo_fraction;
  sc_biguint<9> sdp_lo_index;
  sc_biguint<1> sdp_lo_oflow;
  sc_biguint<1> sdp_lo_uflow;
  std::map<sc_biguint<32>, sc_biguint<257>> sdp_lo_tbl;
  sc_biguint<35> sdp_le_fraction;
  sc_biguint<9> sdp_le_index;
  sc_biguint<1> sdp_le_oflow;
  sc_biguint<1> sdp_le_uflow;
  std::map<sc_biguint<32>, sc_biguint<65>> sdp_le_tbl;
  sc_biguint<32> sdp_group1_d_lut_lo_hit;
  sc_biguint<32> sdp_group1_d_lut_le_hit;
  sc_biguint<32> sdp_group1_d_lut_hybrid;
  sc_biguint<32> sdp_group1_d_out_saturation;
  sc_biguint<32> sdp_group1_d_lut_oflow;
  sc_biguint<32> sdp_group1_d_lut_uflow;
  sc_biguint<32> sdp_group1_d_wdma_stall;
  sc_biguint<1> sdp_group1_d_perf_dma_en;
  sc_biguint<1> sdp_group1_d_perf_lut_en;
  sc_biguint<1> sdp_group1_d_perf_sat_en;
  sc_biguint<1> sdp_group1_d_perf_nan_inf_count_en;
  sc_biguint<32> sdp_group1_d_status_nan_output_num;
  sc_biguint<32> sdp_group1_d_status_inf_input_num;
  sc_biguint<32> sdp_group1_d_status_nan_input_num;
  sc_biguint<1> sdp_group1_d_status_unequal;
  sc_biguint<6> sdp_group1_d_cvt_shift;
  sc_biguint<16> sdp_group1_d_cvt_scale;
  sc_biguint<32> sdp_group1_d_cvt_offset;
  sc_biguint<2> sdp_group1_d_proc_precision;
  sc_biguint<2> sdp_group1_d_out_precision;
  sc_biguint<27> sdp_group1_d_dst_batch_stride;
  sc_biguint<1> sdp_group1_d_dst_ram_type;
  sc_biguint<1> sdp_group1_d_flying_mode;
  sc_biguint<1> sdp_group1_d_output_dst;
  sc_biguint<1> sdp_group1_d_winograd;
  sc_biguint<1> sdp_group1_d_nan_to_zero;
  sc_biguint<5> sdp_group1_d_batch_number;
  sc_biguint<10> sdp_group1_d_dp_ew_truncate;
  sc_biguint<6> sdp_group1_d_ew_mul_cvt_truncate;
  sc_biguint<16> sdp_group1_d_ew_mul_cvt_scale;
  sc_biguint<32> sdp_group1_d_ew_mul_cvt_offset;
  sc_biguint<32> sdp_group1_d_ew_mul_operand;
  sc_biguint<1> sdp_group1_d_ew_mul_src;
  sc_biguint<1> sdp_group1_d_ew_mul_cvt_bypass;
  sc_biguint<6> sdp_group1_d_ew_alu_cvt_truncate;
  sc_biguint<16> sdp_group1_d_ew_alu_cvt_scale;
  sc_biguint<16> sdp_group0_d_bn_mul_operand;
  sc_biguint<1> sdp_group0_d_bn_mul_src;
  sc_biguint<8> sdp_group0_d_bn_mul_shift_value;
  sc_biguint<16> sdp_group0_d_bn_alu_operand;
  sc_biguint<1> sdp_group0_d_bn_alu_src;
  sc_biguint<6> sdp_group0_d_bn_alu_shift_value;
  sc_biguint<1> sdp_group0_d_bn_bypass;
  sc_biguint<1> sdp_group0_d_bn_alu_bypass;
  sc_biguint<2> sdp_group0_d_bn_alu_algo;
  sc_biguint<1> sdp_group0_d_bn_mul_bypass;
  sc_biguint<1> sdp_group0_d_bn_mul_prelu;
  sc_biguint<1> sdp_group0_d_bn_relu_bypass;
  sc_biguint<16> sdp_group0_d_bs_mul_operand;
  sc_biguint<1> sdp_group0_d_bs_mul_src;
  sc_biguint<8> sdp_group0_d_bs_mul_shift_value;
  sc_biguint<16> sdp_group0_d_bs_alu_operand;
  sc_biguint<1> sdp_group0_d_bs_alu_src;
  sc_biguint<6> sdp_group0_d_bs_alu_shift_value;
  sc_biguint<1> sdp_group0_d_bs_bypass;
  sc_biguint<1> sdp_group0_d_bs_alu_bypass;
  sc_biguint<2> sdp_group0_d_bs_alu_algo;
  sc_biguint<1> sdp_group0_d_bs_mul_bypass;
  sc_biguint<1> sdp_group0_d_bs_mul_prelu;
  sc_biguint<1> sdp_group0_d_bs_relu_bypass;
  sc_biguint<27> sdp_group0_d_dst_surface_stride;
  sc_biguint<27> sdp_group0_d_dst_line_stride;
  sc_biguint<32> sdp_group0_d_dst_base_addr_high;
  sc_biguint<27> sdp_group0_d_dst_base_addr_low;
  sc_biguint<13> sdp_group0_d_channel;
  sc_biguint<13> sdp_group0_d_height;
  sc_biguint<13> sdp_group0_d_width;
  sc_biguint<1> sdp_group0_d_op_en;
  sc_biguint<5> sdp_s_lut_lo_slope_uflow_shift;
  sc_biguint<5> sdp_s_lut_lo_slope_oflow_shift;
  sc_biguint<16> sdp_s_lut_lo_slope_uflow_scale;
  sc_biguint<16> sdp_s_lut_lo_slope_oflow_scale;
  sc_biguint<5> sdp_s_lut_le_slope_uflow_shift;
  sc_biguint<5> sdp_s_lut_le_slope_oflow_shift;
  sc_biguint<16> sdp_s_lut_le_slope_uflow_scale;
  sc_biguint<16> sdp_s_lut_le_slope_oflow_scale;
  sc_biguint<32> sdp_s_lut_lo_end;
  sc_biguint<32> sdp_s_lut_lo_start;
  sc_biguint<32> sdp_pdp_output_12;
  sc_biguint<32> sdp_pdp_output_11;
  sc_biguint<32> sdp_pdp_output_10;
  sc_biguint<32> sdp_pdp_output_9;
  sc_biguint<32> sdp_pdp_output_8;
  sc_biguint<32> sdp_pdp_output_7;
  sc_biguint<32> sdp_pdp_output_6;
  sc_biguint<32> sdp_pdp_output_5;
  sc_biguint<32> sdp_pdp_output_4;
  sc_biguint<32> sdp_pdp_output_3;
  sc_biguint<1> sdp_weight_valid;
  sc_biguint<1> sdp_data_valid;
  sc_biguint<1> sdp_csb_rdy;
  sc_biguint<32> sdp_pdp_output_0;
  sc_biguint<32> sdp_pdp_output_1;
  sc_biguint<32> sdp_pdp_output_2;
  sc_biguint<32> sdp_pdp_output_13;
  sc_biguint<32> sdp_pdp_output_14;
  sc_biguint<32> sdp_pdp_output_15;
  sc_biguint<2> sdp_s_status0;
  sc_biguint<2> sdp_s_status1;
  sc_biguint<1> sdp_s_producer;
  sc_biguint<1> sdp_s_consumer;
  sc_biguint<1> sdp_s_lut_access_type;
  sc_biguint<1> sdp_s_lut_table_id;
  sc_biguint<10> sdp_s_lut_addr;
  sc_biguint<16> sdp_s_lut_data;
  sc_biguint<1> sdp_s_lut_hybrid_priority;
  sc_biguint<1> sdp_s_lut_oflow_priority;
  sc_biguint<1> sdp_s_lut_uflow_priority;
  sc_biguint<1> sdp_s_lut_le_function;
  sc_biguint<8> sdp_s_lut_lo_index_select;
  sc_biguint<8> sdp_s_lut_le_index_select;
  sc_biguint<8> sdp_s_lut_le_index_offset;
  sc_biguint<32> sdp_s_lut_le_start;
  sc_biguint<32> sdp_s_lut_le_end;
  sc_biguint<1> sdp_group0_d_ew_lut_bypass;
  sc_biguint<1> sdp_group0_d_ew_mul_prelu;
  sc_biguint<1> sdp_group0_d_ew_mul_bypass;
  sc_biguint<2> sdp_group0_d_ew_alu_algo;
  sc_biguint<1> sdp_group0_d_ew_alu_bypass;
  sc_biguint<1> sdp_group0_d_ew_bypass;
  sc_biguint<1> sdp_group0_d_ew_alu_cvt_bypass;
  sc_biguint<1> sdp_group0_d_ew_alu_src;
  sc_biguint<32> sdp_group0_d_ew_alu_operand;
  sc_biguint<32> sdp_group0_d_ew_alu_cvt_offset;
  sc_biguint<16> sdp_group0_d_ew_alu_cvt_scale;
  sc_biguint<6> sdp_group0_d_ew_alu_cvt_truncate;
  sc_biguint<1> sdp_group0_d_ew_mul_cvt_bypass;
  sc_biguint<1> sdp_group0_d_ew_mul_src;
  sc_biguint<32> sdp_group0_d_ew_mul_operand;
  sc_biguint<32> sdp_group0_d_ew_mul_cvt_offset;
  sc_biguint<16> sdp_group0_d_ew_mul_cvt_scale;
  sc_biguint<6> sdp_group0_d_ew_mul_cvt_truncate;
  sc_biguint<10> sdp_group0_d_dp_ew_truncate;
  sc_biguint<5> sdp_group0_d_batch_number;
  sc_biguint<1> sdp_group0_d_nan_to_zero;
  sc_biguint<1> sdp_group0_d_winograd;
  sc_biguint<1> sdp_group0_d_output_dst;
  sc_biguint<1> sdp_group0_d_flying_mode;
  sc_biguint<1> sdp_group0_d_dst_ram_type;
  sc_biguint<27> sdp_group0_d_dst_batch_stride;
  sc_biguint<2> sdp_group0_d_out_precision;
  sc_biguint<2> sdp_group0_d_proc_precision;
  sc_biguint<32> sdp_group0_d_cvt_offset;
  sc_biguint<16> sdp_group0_d_cvt_scale;
  sc_biguint<6> sdp_group0_d_cvt_shift;
  sc_biguint<1> sdp_group0_d_status_unequal;
  sc_biguint<32> sdp_group0_d_status_nan_input_num;
  sc_biguint<32> sdp_group0_d_status_inf_input_num;
  sc_biguint<32> sdp_group0_d_status_nan_output_num;
  sc_biguint<1> sdp_group0_d_perf_nan_inf_count_en;
  sc_biguint<1> sdp_group0_d_perf_sat_en;
  sc_biguint<1> sdp_group0_d_perf_lut_en;
  sc_biguint<1> sdp_group0_d_perf_dma_en;
  sc_biguint<32> sdp_group0_d_wdma_stall;
  sc_biguint<32> sdp_group0_d_lut_uflow;
  sc_biguint<32> sdp_group0_d_lut_oflow;
  sc_biguint<32> sdp_group0_d_out_saturation;
  sc_biguint<32> sdp_group0_d_lut_hybrid;
  sc_biguint<32> sdp_group0_d_lut_le_hit;
  sc_biguint<32> sdp_group0_d_lut_lo_hit;
  sc_biguint<1> sdp_group1_d_op_en;
  sc_biguint<13> sdp_group1_d_width;
  sc_biguint<13> sdp_group1_d_height;
  sc_biguint<13> sdp_group1_d_channel;
  sc_biguint<27> sdp_group1_d_dst_base_addr_low;
  sc_biguint<32> sdp_group1_d_dst_base_addr_high;
  sc_biguint<27> sdp_group1_d_dst_line_stride;
  sc_biguint<27> sdp_group1_d_dst_surface_stride;
  sc_biguint<1> sdp_group1_d_bs_relu_bypass;
  sc_biguint<1> sdp_group1_d_bs_mul_prelu;
  sc_biguint<1> sdp_group1_d_bs_mul_bypass;
  sc_biguint<2> sdp_group1_d_bs_alu_algo;
  sc_biguint<1> sdp_group1_d_bs_alu_bypass;
  sc_biguint<1> sdp_group1_d_bs_bypass;
  sc_biguint<6> sdp_group1_d_bs_alu_shift_value;
  sc_biguint<1> sdp_group1_d_bs_alu_src;
  sc_biguint<16> sdp_group1_d_bs_alu_operand;
  sc_biguint<8> sdp_group1_d_bs_mul_shift_value;
  sc_biguint<1> sdp_group1_d_bs_mul_src;
  sc_biguint<16> sdp_group1_d_bs_mul_operand;
  sc_biguint<1> sdp_group1_d_bn_relu_bypass;
  sc_biguint<1> sdp_group1_d_bn_mul_prelu;
  sc_biguint<1> sdp_group1_d_bn_mul_bypass;
  sc_biguint<2> sdp_group1_d_bn_alu_algo;
  sc_biguint<1> sdp_group1_d_bn_alu_bypass;
  sc_biguint<1> sdp_group1_d_bn_bypass;
  sc_biguint<6> sdp_group1_d_bn_alu_shift_value;
  sc_biguint<1> sdp_group1_d_bn_alu_src;
  sc_biguint<16> sdp_group1_d_bn_alu_operand;
  sc_biguint<8> sdp_group1_d_bn_mul_shift_value;
  sc_biguint<1> sdp_group1_d_bn_mul_src;
  sc_biguint<16> sdp_group1_d_bn_mul_operand;
  sc_biguint<1> sdp_group1_d_ew_lut_bypass;
  sc_biguint<1> sdp_group1_d_ew_mul_prelu;
  sc_biguint<1> sdp_group1_d_ew_mul_bypass;
  sc_biguint<2> sdp_group1_d_ew_alu_algo;
  sc_biguint<1> sdp_group1_d_ew_alu_bypass;
  sc_biguint<1> sdp_group1_d_ew_bypass;
  sc_biguint<1> sdp_group1_d_ew_alu_cvt_bypass;
  sc_biguint<1> sdp_group1_d_ew_alu_src;
  sc_biguint<32> sdp_group1_d_ew_alu_operand;
  sc_biguint<32> sdp_group1_d_ew_alu_cvt_offset;
  sc_biguint<24> univ_var_1;
  void compute();
  bool decode_sdp_CVT_OFFSET_group0();
  bool decode_sdp_CVT_OFFSET_group1();
  bool decode_sdp_CVT_SCALE_group0();
  bool decode_sdp_CVT_SCALE_group1();
  bool decode_sdp_CVT_SHIFT_group0();
  bool decode_sdp_CVT_SHIFT_group1();
  bool decode_sdp_Compute_Max();
  bool decode_sdp_Compute_ReLU();
  bool decode_sdp_DATA_CUBE_CHANNEL_group0();
  bool decode_sdp_DATA_CUBE_CHANNEL_group1();
  bool decode_sdp_DATA_CUBE_HEIGHT_group0();
  bool decode_sdp_DATA_CUBE_HEIGHT_group1();
  bool decode_sdp_DATA_CUBE_WIDTH_group0();
  bool decode_sdp_DATA_CUBE_WIDTH_group1();
  bool decode_sdp_DATA_FORMAT_group0();
  bool decode_sdp_DATA_FORMAT_group1();
  bool decode_sdp_DP_BN_ALU_CFG_group0();
  bool decode_sdp_DP_BN_ALU_CFG_group1();
  bool decode_sdp_DP_BN_ALU_SRC_VALUE_group0();
  bool decode_sdp_DP_BN_ALU_SRC_VALUE_group1();
  bool decode_sdp_DP_BN_CFG_group0();
  bool decode_sdp_DP_BN_CFG_group1();
  bool decode_sdp_DP_BN_MUL_CFG_group0();
  bool decode_sdp_DP_BN_MUL_CFG_group1();
  bool decode_sdp_DP_BN_MUL_SRC_VALUE_group0();
  bool decode_sdp_DP_BN_MUL_SRC_VALUE_group1();
  bool decode_sdp_DP_BS_ALU_CFG_group0();
  bool decode_sdp_DP_BS_ALU_CFG_group1();
  bool decode_sdp_DP_BS_ALU_SRC_VALUE_group0();
  bool decode_sdp_DP_BS_ALU_SRC_VALUE_group1();
  bool decode_sdp_DP_BS_CFG_group0();
  bool decode_sdp_DP_BS_CFG_group1();
  bool decode_sdp_DP_BS_MUL_CFG_group0();
  bool decode_sdp_DP_BS_MUL_CFG_group1();
  bool decode_sdp_DP_BS_MUL_SRC_VALUE_group0();
  bool decode_sdp_DP_BS_MUL_SRC_VALUE_group1();
  bool decode_sdp_DP_EW_ALU_CFG_group0();
  bool decode_sdp_DP_EW_ALU_CFG_group1();
  bool decode_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group0();
  bool decode_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group1();
  bool decode_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group0();
  bool decode_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group1();
  bool decode_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group0();
  bool decode_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group1();
  bool decode_sdp_DP_EW_ALU_SRC_VALUE_group0();
  bool decode_sdp_DP_EW_CFG_group0();
  bool decode_sdp_DP_EW_CFG_group1();
  bool decode_sdp_DP_EW_MUL_CFG_group0();
  bool decode_sdp_DP_EW_MUL_CFG_group1();
  bool decode_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group0();
  bool decode_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group1();
  bool decode_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group0();
  bool decode_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group1();
  bool decode_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group0();
  bool decode_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group1();
  bool decode_sdp_DP_EW_MUL_SRC_VALUE_group0();
  bool decode_sdp_DP_EW_MUL_SRC_VALUE_group1();
  bool decode_sdp_DP_EW_TRUNCATE_VALUE_group0();
  bool decode_sdp_DP_EW_TRUNCATE_VALUE_group1();
  bool decode_sdp_DST_BASE_ADDR_HIGH_group0();
  bool decode_sdp_DST_BASE_ADDR_HIGH_group1();
  bool decode_sdp_DST_BASE_ADDR_LOW_group0();
  bool decode_sdp_DST_BASE_ADDR_LOW_group1();
  bool decode_sdp_DST_BATCH_STRIDE_group0();
  bool decode_sdp_DST_BATCH_STRIDE_group1();
  bool decode_sdp_DST_DMA_CFG_group0();
  bool decode_sdp_DST_DMA_CFG_group1();
  bool decode_sdp_DST_LINE_STRIDE_group0();
  bool decode_sdp_DST_LINE_STRIDE_group1();
  bool decode_sdp_DST_SURFACE_STRIDE_group0();
  bool decode_sdp_DST_SURFACE_STRIDE_group1();
  bool decode_sdp_FEATURE_MODE_CFG_group0();
  bool decode_sdp_FEATURE_MODE_CFG_group1();
  bool decode_sdp_LUT_ACCESS_CFG();
  bool decode_sdp_LUT_ACCESS_DATA();
  bool decode_sdp_LUT_CFG();
  bool decode_sdp_LUT_INFO();
  bool decode_sdp_LUT_LE_END();
  bool decode_sdp_LUT_LE_SLOPE_SCALE();
  bool decode_sdp_LUT_LE_SLOPE_SHIFT();
  bool decode_sdp_LUT_LE_START();
  bool decode_sdp_LUT_LO_END();
  bool decode_sdp_LUT_LO_SLOPE_SCALE();
  bool decode_sdp_LUT_LO_SLOPE_SHIFT();
  bool decode_sdp_LUT_LO_START();
  bool decode_sdp_OP_ENABLE_group0();
  bool decode_sdp_OP_ENABLE_group1();
  bool decode_sdp_PERF_ENABLE_group0();
  bool decode_sdp_PERF_ENABLE_group1();
  bool decode_sdp_SET_PRODUCER();
  void setup_initial_condition();
  void update_sdp_CVT_OFFSET_group0();
  void update_sdp_CVT_OFFSET_group1();
  void update_sdp_CVT_SCALE_group0();
  void update_sdp_CVT_SCALE_group1();
  void update_sdp_CVT_SHIFT_group0();
  void update_sdp_CVT_SHIFT_group1();
  void update_sdp_Compute_Max();
  void update_sdp_Compute_ReLU();
  void update_sdp_DATA_CUBE_CHANNEL_group0();
  void update_sdp_DATA_CUBE_CHANNEL_group1();
  void update_sdp_DATA_CUBE_HEIGHT_group0();
  void update_sdp_DATA_CUBE_HEIGHT_group1();
  void update_sdp_DATA_CUBE_WIDTH_group0();
  void update_sdp_DATA_CUBE_WIDTH_group1();
  void update_sdp_DATA_FORMAT_group0();
  void update_sdp_DATA_FORMAT_group1();
  void update_sdp_DP_BN_ALU_CFG_group0();
  void update_sdp_DP_BN_ALU_CFG_group1();
  void update_sdp_DP_BN_ALU_SRC_VALUE_group0();
  void update_sdp_DP_BN_ALU_SRC_VALUE_group1();
  void update_sdp_DP_BN_CFG_group0();
  void update_sdp_DP_BN_CFG_group1();
  void update_sdp_DP_BN_MUL_CFG_group0();
  void update_sdp_DP_BN_MUL_CFG_group1();
  void update_sdp_DP_BN_MUL_SRC_VALUE_group0();
  void update_sdp_DP_BN_MUL_SRC_VALUE_group1();
  void update_sdp_DP_BS_ALU_CFG_group0();
  void update_sdp_DP_BS_ALU_CFG_group1();
  void update_sdp_DP_BS_ALU_SRC_VALUE_group0();
  void update_sdp_DP_BS_ALU_SRC_VALUE_group1();
  void update_sdp_DP_BS_CFG_group0();
  void update_sdp_DP_BS_CFG_group1();
  void update_sdp_DP_BS_MUL_CFG_group0();
  void update_sdp_DP_BS_MUL_CFG_group1();
  void update_sdp_DP_BS_MUL_SRC_VALUE_group0();
  void update_sdp_DP_BS_MUL_SRC_VALUE_group1();
  void update_sdp_DP_EW_ALU_CFG_group0();
  void update_sdp_DP_EW_ALU_CFG_group1();
  void update_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group0();
  void update_sdp_DP_EW_ALU_CVT_OFFSET_VALUE_group1();
  void update_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group0();
  void update_sdp_DP_EW_ALU_CVT_SCALE_VALUE_group1();
  void update_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group0();
  void update_sdp_DP_EW_ALU_CVT_TRUNCATE_VALUE_group1();
  void update_sdp_DP_EW_ALU_SRC_VALUE_group0();
  void update_sdp_DP_EW_CFG_group0();
  void update_sdp_DP_EW_CFG_group1();
  void update_sdp_DP_EW_MUL_CFG_group0();
  void update_sdp_DP_EW_MUL_CFG_group1();
  void update_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group0();
  void update_sdp_DP_EW_MUL_CVT_OFFSET_VALUE_group1();
  void update_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group0();
  void update_sdp_DP_EW_MUL_CVT_SCALE_VALUE_group1();
  void update_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group0();
  void update_sdp_DP_EW_MUL_CVT_TRUNCATE_VALUE_group1();
  void update_sdp_DP_EW_MUL_SRC_VALUE_group0();
  void update_sdp_DP_EW_MUL_SRC_VALUE_group1();
  void update_sdp_DP_EW_TRUNCATE_VALUE_group0();
  void update_sdp_DP_EW_TRUNCATE_VALUE_group1();
  void update_sdp_DST_BASE_ADDR_HIGH_group0();
  void update_sdp_DST_BASE_ADDR_HIGH_group1();
  void update_sdp_DST_BASE_ADDR_LOW_group0();
  void update_sdp_DST_BASE_ADDR_LOW_group1();
  void update_sdp_DST_BATCH_STRIDE_group0();
  void update_sdp_DST_BATCH_STRIDE_group1();
  void update_sdp_DST_DMA_CFG_group0();
  void update_sdp_DST_DMA_CFG_group1();
  void update_sdp_DST_LINE_STRIDE_group0();
  void update_sdp_DST_LINE_STRIDE_group1();
  void update_sdp_DST_SURFACE_STRIDE_group0();
  void update_sdp_DST_SURFACE_STRIDE_group1();
  void update_sdp_FEATURE_MODE_CFG_group0();
  void update_sdp_FEATURE_MODE_CFG_group1();
  void update_sdp_LUT_ACCESS_CFG();
  void update_sdp_LUT_ACCESS_DATA();
  void update_sdp_LUT_CFG();
  void update_sdp_LUT_INFO();
  void update_sdp_LUT_LE_END();
  void update_sdp_LUT_LE_SLOPE_SCALE();
  void update_sdp_LUT_LE_SLOPE_SHIFT();
  void update_sdp_LUT_LE_START();
  void update_sdp_LUT_LO_END();
  void update_sdp_LUT_LO_SLOPE_SCALE();
  void update_sdp_LUT_LO_SLOPE_SHIFT();
  void update_sdp_LUT_LO_START();
  void update_sdp_OP_ENABLE_group0();
  void update_sdp_OP_ENABLE_group1();
  void update_sdp_PERF_ENABLE_group0();
  void update_sdp_PERF_ENABLE_group1();
  void update_sdp_SET_PRODUCER();
  bool valid_sdp();
  SC_HAS_PROCESS(sdp);
  sdp(sc_module_name name_) : sc_module(name_) {
    SC_METHOD(compute);
    sensitive << sdp_dma_data_15_in << sdp_regs_data_15_in << sdp_mrdma_data_15_in << sdp_cacc_data_15_in << sdp_dma_data_14_in << sdp_regs_data_14_in << sdp_mrdma_data_14_in << sdp_cacc_data_14_in << sdp_dma_data_13_in << sdp_regs_data_13_in << sdp_mrdma_data_13_in << sdp_cacc_data_13_in << sdp_dma_data_12_in << sdp_regs_data_12_in << sdp_mrdma_data_12_in << sdp_cacc_data_12_in << sdp_dma_data_11_in << sdp_regs_data_11_in << sdp_mrdma_data_11_in << sdp_cacc_data_11_in << sdp_dma_data_10_in << sdp_regs_data_10_in << sdp_mrdma_data_10_in << sdp_cacc_data_10_in << sdp_dma_data_9_in << sdp_regs_data_9_in << sdp_mrdma_data_9_in << sdp_cacc_data_9_in << sdp_dma_data_8_in << sdp_regs_data_8_in << sdp_mrdma_data_8_in << sdp_cacc_data_8_in << sdp_dma_data_7_in << sdp_regs_data_7_in << sdp_mrdma_data_7_in << sdp_cacc_data_7_in << sdp_dma_data_6_in << sdp_regs_data_1_in << sdp_mrdma_data_1_in << sdp_cacc_data_1_in << sdp_dma_data_0_in << sdp_regs_data_0_in << sdp_mrdma_data_0_in << sdp_cacc_data_0_in << sdp_done_in << sdp_fifo_clr_in << sdp_sg2wt_vld_in << sdp_csb_data_in << sdp_csb_addr_in << sdp_csb_write_in << sdp_csb_vld_in << sdp_pending_clr_in << sdp_sg2dl_vld_in << sdp_dma_data_1_in << sdp_cacc_data_2_in << sdp_mrdma_data_2_in << sdp_regs_data_2_in << sdp_dma_data_2_in << sdp_cacc_data_3_in << sdp_mrdma_data_3_in << sdp_regs_data_3_in << sdp_dma_data_3_in << sdp_cacc_data_4_in << sdp_mrdma_data_4_in << sdp_regs_data_4_in << sdp_dma_data_4_in << sdp_cacc_data_5_in << sdp_mrdma_data_5_in << sdp_regs_data_5_in << sdp_dma_data_5_in << sdp_cacc_data_6_in << sdp_mrdma_data_6_in << sdp_regs_data_6_in;
  }
};
