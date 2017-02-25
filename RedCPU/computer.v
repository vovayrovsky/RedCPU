module computer
    (
    input wire clk,
    output wire mem_error,
    output wire cpu_reset
    );

wire [15 : 0] data;
wire [15 : 0] addr;
wire RAM_ready;
        
cpu proc1 (.clk(clk), .data(data), .RAM_ready(RAM_ready), .addr(addr), .CU_rst(cpu_reset));

memory_controller   #(16, 16, 5) mc (.clk(clk), .addr(addr), .memory_ready(RAM_ready), .error(mem_error)); 

wire [15 : 0] ROM [4 : 0];

assign ROM[0] = 16'h2000; //mov R0, 
assign ROM[1] = 16'hFF00; //        FF00
assign ROM[2] = 16'h2100; //mov R1, 
assign ROM[3] = 16'h00FF; //        00FF
assign ROM[4] = 16'h1010; //add R0, R1 
    
assign data = ROM[addr];    
    
endmodule
