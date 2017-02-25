`define clk clk = 1; #5; clk = 0; #5;

module tsCnt;

	// Inputs
	reg clk;
	reg rst;
	reg en;
	reg we;
	reg [15:0] data;

	// Outputs
	wire [15:0] value;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.rst(rst), 
		.en(en), 
		.we(we), 
		.data(data), 
		.value(value), 
		.overflow(overflow)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		en = 1;
		we = 0;
		data = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		`clk;
		`clk;
		`clk;
		`clk;
		`clk;
		`clk;
		`clk;
        
        rst = 1;
		`clk;
        rst = 0;
        
        data = 1 << 16 - 1;
        we   = 1;
        `clk;
        
        we = 0;
        `clk;
        `clk;
        `clk;
        `clk;
        
	end
      
endmodule

