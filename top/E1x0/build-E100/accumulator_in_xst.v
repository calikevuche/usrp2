`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Trinity College, Virgina Tech
// Engineer: Kevin Anyanwu
// 
// Create Date:    22:47:24 08/07/2011 
// Design Name: 
// Module Name:    accumulator_in_xst 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
//
// Multiplier Up Accumulate with Register After Multiplication
//
module v_multipliers_7a (clk, reset, reset_dv, ce, A, accum, counter);

input clk, reset, reset_dv, ce;
input [15:0] A;
output reg [9:0] counter;
output reg [31:0] accum;

always @(posedge clk)
begin
	if (reset_dv) begin
		accum <= 0;
	end
	else if (ce)
	begin 		
		//if overflow is detected then set to maximum
		if (accum > 31'b1111111111111111111111111111111) accum <= 32'b11111111111111111111111111111111;
		else accum <= accum + A;
		//if(accum == 0) accum <= old_accum; //if we accum 0 then overwrite it with the previous valid (non-zero) value
		
	end
end

always @(posedge clk)
begin
	if (reset_dv) begin
		counter <= 0;
	end
else begin
		if(ce) counter <=counter + 1;
	end
end

//http://stackoverflow.com/questions/7931789/24-bit-counter-state-machine

endmodule
