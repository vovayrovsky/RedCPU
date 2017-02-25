module counter
    #(
    parameter width  = 16,              //data bus width
    parameter maxval = 1 << width - 1   //maximum value of counter
    )
    (
    input  wire clk,                    //clock signal
    input  wire rst,                    //reset signal
    input  wire en,                     //enable counting if 1
    input  wire we,                     //allow saving input data
    
    input  wire [width - 1 : 0] data,   //input data
    
    output wire [width - 1 : 0] value,  //increasing value
    output reg  overflow = 0            //set 1 if value is maximum 
    );

reg [width - 1 : 0] mem = 0;

assign value = mem;

always@ (posedge clk)
    begin
    
    if (rst)
        mem <= 0;
    
    else if (we)
        mem <= data;
    
    else if (mem >= maxval)
        begin
        
        mem <= 0;
        overflow <= 1;
        
        end
    
    else if (en)
        mem <= mem + 1;    
      
    if (overflow)
        overflow <= 0;
        
    end

endmodule
