module register
    #(
    parameter width = 16
    )
    (
    input  wire clk,
    input  wire we,
    input  wire rst,
    input  wire [15 : 0] data,
    output wire [15 : 0] value
    );

reg [15 : 0] mem = 0;

assign value = mem;

always@ (posedge clk)
    begin
    
    if (rst)
        mem <= 0;
    else if (we)
        mem <= data;
        
    
    end
    
endmodule
