module tst_mem_ctrl;

	// Inputs
	reg clk;
	reg we;
	reg [15:0] data;
	reg [3:0] addr;

    // Outputs
    wire [15:0] value;
    wire memory_ready;
    wire error;

	// Instantiate the Unit Under Test (UUT)
	memory_controller #(16, 4, 5) uut (
		.clk(clk), 
		.we(we), 
		.data(data), 
		.addr(addr),
        .value(value),
        .memory_ready(memory_ready),
        .error(error)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		we = 0;
		data = 0;
		addr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		clk = 1; #5;
		clk = 0; #5;

        addr = 1;
        clk = 1; #5;
		clk = 0; #5;

        clk = 1; #5;
		clk = 0; #5;

        addr = 6;
        clk = 1; #5;
		clk = 0; #5;

        clk = 1; #5;
		clk = 0; #5;

        clk = 1; #5;
		clk = 0; #5;

	end
      
endmodule

