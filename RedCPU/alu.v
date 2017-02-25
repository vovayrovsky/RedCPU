module alu
    #(
    parameter width = 16
    )
    (
    input wire [width - 1 : 0] op1,
    input wire [width - 1 : 0] op2,
    input wire [        2 : 0] act,
    output reg [width     : 0] res
    );

localparam ADD = 0;
localparam SUB = 1;
localparam AND = 2;
localparam OR  = 3;
localparam XOR = 4;
localparam SHL = 5;
localparam SHR = 6;
localparam NOT = 7;
            

always@ (*)
    begin
    
    case (act)
    
    ADD: res = op1 + op2;
    SUB: res = op1 - op2;
    AND: res = op1 & op2;
    OR:  res = op1 | op2;
    XOR: res = op1 ^ op2;
    SHL: res = op1 << op2;
    SHR: res = op1 >> op2;
    NOT: res = ~op1;
    
    endcase
    
    end

endmodule
