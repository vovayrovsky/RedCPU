module cpu
    (
    input  wire clk,
    input  wire [15 : 0] data,
    input  wire RAM_ready,
    output wire [15 : 0] addr,
    output wire CU_rst
    );

//register file's control signals
wire write_reg;
wire [3 : 0] reg_addr;

//data path parts
wire [15 : 0] din;
wire [15 : 0] reg_out;
wire [15 : 0] op1_value;
wire [15 : 0] op2_value;
wire [16 : 0] alu_res;
wire [15 : 0] alu_saved;

//op1&op2 control signal
wire write_op1;
wire write_op2;

//alu action
wire [2 : 0] alu_act;
wire save_alu_res;

//input select signal
wire [1 : 0] in_data;

//counter increasing enable signal
wire counter_en;

//addres

reg_file regs (.clk(clk), .we(write_reg), .data(din), .addr (reg_addr), .value(reg_out));

register op1 (.clk(clk), .we(write_op1), .data(reg_out), .value(op1_value));
register op2 (.clk(clk), .we(write_op2), .data(reg_out), .value(op2_value));

alu main (.op1(op1_value), .op2(op2_value), .act(alu_act), .res(alu_res));
register save_alu (.clk(clk), .we(save_alu_res), .data(alu_res[15 : 0]), .value(alu_saved));

mux2 data_in (.addr(in_data), .input0(data), .input1(alu_saved), .input2(op1_value), .input3(16'b0), 
              .out(din));

counter #(16, 50) addr_cnt (.clk(clk), .rst(0), .en(counter_en), .we(0), .data(0), .value(addr));

ControlUnit cu (.clk(clk), .instruction(din), .RAM_ready(RAM_ready), .write_reg(write_reg), 
                .reg_addr(reg_addr), .write_op1(write_op1), .write_op2(write_op2), 
                .alu_act(alu_act), .save_alu_res(save_alu_res), .in_data(in_data), 
                .counter_en(counter_en), .rst(CU_rst));

endmodule
