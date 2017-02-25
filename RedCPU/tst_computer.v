module tst_computer;

	// Inputs
	reg clk;

	// Outputs
	wire mem_error;
	wire cpu_reset;

	// Instantiate the Unit Under Test (UUT)
	computer uut (
		.clk(clk), 
		.mem_error(mem_error), 
		.cpu_reset(cpu_reset)
	);

    integer i = 0;

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
        
        
		for (i = 0; i < 50; i = i + 1)
            begin
            
            clk = 1; #5;
            clk = 0; #5;
            
            end

	end
      
endmodule

