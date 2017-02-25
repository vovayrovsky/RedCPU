module memory_controller    
    #(
    parameter width       = 16,
    parameter addr_width  = 4,
    parameter mem_depth   = 1 << addr_width
    )
    (
    input wire clk,
    input wire [addr_width - 1 : 0] addr,
    
    output reg memory_ready,
    output reg error
    );
    
reg [width - 1 : 0] old_addr = 0;

reg wait_mem = 0;

always@ (posedge clk)
    begin
    
    if (old_addr != addr)
        begin
        
        wait_mem <= 0;
        memory_ready <= 0;
        
        end
        
    if (wait_mem == 0)
        begin
        
        wait_mem <= 1;
        memory_ready <= 1;
        
        end
        
    if (addr > mem_depth - 1)
        error <= 1;
    else
        error <= 0;
        
    end

initial 
    begin
    
    error = 0;
    memory_ready = 0;
    
    end
    
endmodule
