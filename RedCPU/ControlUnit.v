module ControlUnit
    (
    input wire clk,
    input wire [15 : 0] instruction,
    
    input wire RAM_ready,
    
    //register file's control signals
    output reg write_reg,
    output reg [3 : 0] reg_addr,

    //op1&op2 control signal
    output reg write_op1,
    output reg write_op2,

    //alu action
    output reg [2 : 0] alu_act,
    output reg save_alu_res,

    //input select signal
    output reg [1 : 0] in_data,
    
    //enable signal for counter
    output reg counter_en,
    
    output wire rst
    );
    
localparam reset                = 0;
localparam inc_mem              = 1;
localparam get_instr            = 2;
localparam set_reg1_alu         = 3;
localparam load_reg1_alu        = 4;
localparam set_reg2_alu         = 5;
localparam load_reg2_alu        = 6;
localparam save_res_alu         = 7;
localparam push_into_reg_alu    = 8;
localparam inc_mem_ldnext       = 9;
localparam wait_mem_ldnext      = 10;
localparam load_inf_mem_ldnext  = 11;

reg [4 : 0] state = 0;

reg [15 : 0] save_instruction = 0;

assign rst = state == reset;

always@ (posedge clk)
    begin
    
    if (state == reset)
        state <= get_instr;
    
    else if (state == inc_mem)
        state <= get_instr;
    
    else if (state == get_instr && RAM_ready)
        begin
        
        if (instruction[15 : 12] == 4'h1)
            state <= set_reg1_alu;
        
        if (instruction[15 : 12] == 4'h2)
            state <= inc_mem_ldnext;
            
        save_instruction <= instruction;
        
        end
      
    else if (state == set_reg1_alu)
        begin
        
        state <= load_reg1_alu;
        
        end
       
    else if (state == load_reg1_alu)
        begin
        
        state <= set_reg2_alu;
        
        end
    
    else if (state == set_reg2_alu)
        begin
        
        state <= load_reg2_alu;
        
        end
        
    else if (state == load_reg2_alu)
        begin
        
        state <= save_res_alu;
        
        end
        
    else if (state == save_res_alu)
        begin
        
        state <= push_into_reg_alu;
        
        end
        
    else if (state == push_into_reg_alu)
        begin
        
        state <= get_instr;
        
        end
       
    else if (state == inc_mem_ldnext)
        begin
        
        state <= wait_mem_ldnext;
        
        end
    
    else if (state == wait_mem_ldnext && RAM_ready)
        begin
        
        state <= load_inf_mem_ldnext;
        
        end
        
    else if (state == load_inf_mem_ldnext)
        begin
        
        state <= get_instr;
        
        end
    else
        begin
        
        state <= reset;
        
        end
    
    end

always@(*)
    begin
    
    case(state)
    
    reset: 
        begin
        
        write_reg    = 0;
        reg_addr     = 0;
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end 
    
    inc_mem:
        begin
        
        write_reg    = 0;
        reg_addr     = 0;
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 1;
        
        end
    
    get_instr:
        begin
        
        write_reg    = 0;
        reg_addr     = 0;
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end
        
    set_reg1_alu:
        begin
        
        write_reg    = 0;
        reg_addr     = save_instruction [11 : 8];
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end
        
    load_reg1_alu:
        begin
        
        write_reg    = 0;
        reg_addr     = save_instruction [11 : 8];
        write_op1    = 1;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end
        
    set_reg2_alu:
        begin
        
        write_reg    = 0;
        reg_addr     = save_instruction [7 : 4];
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end
        
    load_reg2_alu:
        begin
        
        write_reg    = 0;
        reg_addr     = save_instruction [7 : 4];
        write_op1    = 0;
        write_op2    = 1;
        alu_act      = save_instruction [3 : 1];
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end

    save_res_alu:
        begin
        
        write_reg    = 0;
        reg_addr     = save_instruction [11 : 8];;
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 1;
        in_data      = 0;
        counter_en   = 0;
        
        end
        
    push_into_reg_alu:
        begin
        
        write_reg    = 1;
        reg_addr     = save_instruction [11 : 8];
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 1;
        counter_en   = 1;
        
        end
        
    inc_mem_ldnext:
        begin
        
        write_reg    = 0;
        reg_addr     = 0;
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 1;
        
        end
        
    wait_mem_ldnext:
        begin
        
        write_reg    = 0;
        reg_addr     = save_instruction [11 : 8];
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 0;
        
        end
        
    load_inf_mem_ldnext:
        begin
        
        write_reg    = 1;
        reg_addr     = save_instruction [11 : 8];
        write_op1    = 0;
        write_op2    = 0;
        alu_act      = 0;
        save_alu_res = 0;
        in_data      = 0;
        counter_en   = 1;
        
        end
    
    endcase
    
    end

endmodule
