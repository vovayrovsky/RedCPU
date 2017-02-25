module tst_cpu;

    wire [15 : 0] mem [50 : 0];
    
    assign mem [0] = 16'h2100; //mov R1, 
    assign mem [1] = 16'hFF00; //        FF00
    
    assign mem [2] = 16'h2200; //mov R2, 
    assign mem [3] = 16'h00FF; //        00FF
                                 
    assign mem [4] = 16'h1120; //add R1, R2   
                                 
	reg clk;
	wire [15:0] data;
	reg RAM_ready;

	wire [15:0] addr;

    assign data = mem[addr];

	cpu uut (
		.clk(clk), 
		.data(data), 
		.RAM_ready(RAM_ready), 
		.addr(addr)
	);

integer i = 0;

	initial begin
		// Initialize Inputs
		clk = 0;
		RAM_ready = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		for (i = 0; i < 50; i = i + 1)
            begin
            
            clk = 1; #5;
            clk = 0; #5;
            
            end

	end
      
endmodule

