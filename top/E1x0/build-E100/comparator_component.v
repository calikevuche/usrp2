`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Trinity College, Virgina Tech
// Engineer: Kevin Anyanwu
// 
// Create Date:    16:30:03 06/24/2011 
// Design Name: 
// Module Name:    comparator_component 
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
module comparator_component(
     A,
	  B,
	  en_comp,
	  Comp_out,
	  rst,
	  clk	,
	  run_rx0 ,
	  threshold_changed,
	  max_min
	  //present_nextcount
    );

input [31:0] A;
input [31:0] B;

reg Comp;
input en_comp;
output wire Comp_out;
input rst;
input clk;
input run_rx0; 
input threshold_changed;
input max_min;
//input [31:0] present_nextcount;

//not sure if i need this
reg [31:0] B_out;
always @ (posedge clk) begin
if(rst) B_out <= 16'b1;
else B_out <= B;
end

//might need to be worked on due to fluctation of comp_out signal = present_next signal!
always @ (posedge clk) begin
if(rst) Comp <= 1; //initially, do not transmit
else begin	
	if ((en_comp & (A >= B_out)) & run_rx0  & B_out>32'b0 )	Comp <= 1'b0; //threshold is higher than B_out, then transmit
	//else if (en_comp & present_nextcountLOW >0 & B_out > 0) Comp <= 1'b0;
	//else if ((en_comp & present_nextcount == 0 & B_out == 0 )) Comp <= 1'b0; //detect decrease and error in I and Q then keep low
	if((en_comp & (A < B_out) ) & run_rx0 & B_out>32'b0) Comp <= 1'b1; //threshold is lower than B_out, then dont transmit
	//else if  (en_comp & present_nextcountHIGH > 0 & B_out >0) Comp <= 1'b1;
	//else if ((en_comp & present_nextcount > 0 & B_out == 0 )) Comp <=  1'b1; //detect increase and error in I and Q then keep high
end

end

assign Comp_out = Comp;

endmodule
