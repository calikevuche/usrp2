`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Trinity College, Virgina Tech
// Engineer: Kevin Anyanwu
// 
// Create Date:    08:00:15 07/14/2011 
// Design Name: 
// Module Name:    cs_component 
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
module cs_component( 
input clk,
input rst,
input [15:0] real_value,
input [15:0] img_value,
input strobe,
input run,
input [31:0] threshold_out,

output present_next,
output [31:0] present_nextcount
);

wire [3:0] state;

//i believe strobe is sufficient for the attempt_sample_write
assign attempt_sample_write = (strobe); //attempt to write when strobe and run is high
//assign attempt_sample_write = (run & strobe);
cs_mealyfsm uut1 (

		//INPUTS.
		.clk(clk), 		
		.rst(rst), 
		.ready_sample(ready_sample),
		.strobe_writer(attempt_sample_write),			
		.run(run),
		
		//OUTPUTS.
		.state(state),
		.rst_dev(rst_dev),		
		.en_comp(en_comp),
		.wr_en(wr_en)

	);

//32 since we divide by four clock cycles of delay between idle and store
cs_datapath #(256,8,128,7) uut2 (
		//INPUTS
		.real_value(real_value), 
		.img_value(img_value), 		
		.clk(clk), 
		.rst(rst),
		.rst_dev(rst_dev),
		.wr_en(wr_en),
		.threshold_out(threshold_out),
		.threshold_changed(threshold_changed),
		
		//OUTPUT
		.en_comp(en_comp), 	
		.ready_sample(ready_sample),
		.present_nextOUT(present_next),
		.run_rx0 (run),
		.present_nextcountOUT(present_nextcount)

		);

endmodule
