module tstregfile;

	// Inputs
	reg clk;
	reg we;
	reg [15:0] data;
	reg [3:0] addr;

	// Outputs
	wire [15:0] value;

	// Instantiate the Unit Under Test (UUT)
	reg_file uut (
		.clk(clk), 
		.we(we), 
		.data(data), 
		.addr(addr), 
		.value(value)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		we = 0;
		data = 0;
		addr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
        addr = 4;
        data = 16'hF0F0;
        we = 1;
        clk = 1; #5;
        clk = 0; #5;
        
        we = 0;
        addr = 3;
        clk = 1; #5;
        clk = 0; #5;
        
        addr = 4;
        clk = 1; #5;
        clk = 0; #5;
        
	end
      
endmodule

