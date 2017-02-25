module mux1
    #(
    parameter  width = 16
    )
    (
    input  wire addr,
    input  wire [width - 1 : 0] input0,
    input  wire [width - 1 : 0] input1,
    
    output wire [width - 1 : 0] out
    );

assign out = (addr)? input1 : input0;

endmodule

//------------------------------------------------------------------------------------------------

module mux2
    #(
    parameter  width = 16
    )
    (
    input  wire [1 : 0] addr,
    input  wire [width - 1 : 0] input0,
    input  wire [width - 1 : 0] input1,
    input  wire [width - 1 : 0] input2,
    input  wire [width - 1 : 0] input3,
    
    output wire [width - 1 : 0] out
    );

wire [width - 1 : 0] m1o;
wire [width - 1 : 0] m2o;

mux1 #(width) m1 (addr[0], input0, input1, m1o);
mux1 #(width) m2 (addr[0], input2, input3, m2o);
mux1 #(width) m3 (addr[1], m1o, m2o, out);

endmodule
