
module tstCnt;

	// Inputs
	reg clk;
	reg [15:0] command;

	// Outputs
	wire write_reg;
	wire [3:0] reg_addr;
	wire write_op1;
	wire write_op2;
	wire [2:0] alu_act;
	wire save_alu_res;
	wire [1:0] in_data;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.clk(clk), 
		.command(command), 
		.write_reg(write_reg), 
		.reg_addr(reg_addr), 
		.write_op1(write_op1), 
		.write_op2(write_op2), 
		.alu_act(alu_act), 
		.save_alu_res(save_alu_res), 
		.in_data(in_data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		command = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

