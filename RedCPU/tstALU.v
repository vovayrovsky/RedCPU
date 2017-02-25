module tstALU;

	reg [15 : 0] op1;
	reg [15 : 0] op2;
	reg [15 : 0] act;

    wire [16 : 0] res;

	alu #(16) uut(
		.op1 (op1),
		.op2 (op2),
        .act (act),
        .res (res)
    );

	initial 
        begin
		
        op1 = 0;
        op2 = 0;
        act = 0;
        
		#100;
        
        op1 = 8; #5;
        op2 = 8; #5;
        act = 1; #5;
        
        end
        
endmodule

