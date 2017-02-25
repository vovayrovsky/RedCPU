module reg_file
    #(
    parameter width       = 16,
    parameter addr_width  = 4,
    parameter mem_depth   = 1 << addr_width 
    )
    (
    input wire clk,
    input wire we,
    
    input wire [width - 1 : 0] data,
    input wire [addr_width - 1 : 0] addr,
    
    output wire [width - 1 : 0] value
    );

reg [width - 1 : 0] mem [mem_depth - 1 : 0];

assign value = mem[addr];

always@ (posedge clk)
    begin
    
    #0.1;
    
    if (we)
        mem[addr] <= data;
    
    end


integer i;

initial 
    begin
        
    for (i = 0; i < mem_depth; i = i + 1)
        begin
        
        mem[i] = 0;
        
        end
        
    end

endmodule
