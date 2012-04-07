`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Trinity College, Virginia Tech
// Engineer: Kevin Anyanwu
//
// Create Date: 17:00:27 06/23/2011
// Design Name:
// Module Name: average_component
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
// When buffer has at least one entry, the buffer will output the entry
// automatically
//////////////////////////////////////////////////////////////////////////////////

module cs_datapath(
//input to data path
input [15:0] real_value,
input [15:0] img_value,
input clk,
input rst,
input wr_en,
input en_comp,
input rst_dev,
input run_rx0 ,
input [31:0] threshold_out,
input threshold_changed,


//output to upper layer
output present_nextOUT,
output reg ready_threshold,
output reg ready_sample,
output [31:0] present_nextcountOUT,
output reg max_min

);

//parameters to be set initially, threshold has been deactivated
parameter [9:0] threshold_val = 9'b0; // number of magnitudes taken from the adc
parameter [9:0] threshold_bit = 9'b0;
parameter [9:0] sample_val = 9'b0;
parameter [9:0] sample_bit = 9'b0;

wire [15:0] quotient_sum_threshold;
wire [15:0] threshold;
wire [31:0] quotient_sum_sample;
wire [9:0] Tcounter;
wire [9:0] Scounter;
wire [15:0] dout_i, dout_q;
wire [15:0] x_out_mag;
wire rdy_mag;
wire done_add;

//local registers
reg [15:0] real_value_delay, img_value_delay;
reg present_next;
reg [31:0] stored_out_out;
reg [31:0] present_nextcount;

//delay the input signals by one clock cycle
always @ (posedge clk )
begin
if(rst) real_value_delay <= 0;
else real_value_delay <= real_value;
end

always @ (posedge clk )
begin
if(rst) img_value_delay <= 0;
else img_value_delay <= img_value;
end

//4 clock cycles delay
fifo_in u1_r_samples (
.clk(clk), // input clk
.srst(rst), // input srst
.din(real_value_delay), // input [17 : 0] din
.wr_en(wr_en & ~full_i), // input wr_en
//.rd_en(rdy_mag), // input rd_en
.rd_en(~empty_i), // input rd_en
.dout(dout_i), // output [17 : 0] dout
.full(full_i), // output full
.almost_full(almost_full_i), // output almost_full
.wr_ack(wr_ack_i), // output wr_ack
.overflow(overflow_i), // output overflow
.empty(empty_i), // output empty
.valid(valid_i) // output valid
);

fifo_in u2_i_samples (
.clk(clk), // input clk
.srst(rst), // input srst
.din(img_value_delay), // input [17 : 0] din
.wr_en(wr_en & ~full_q), // input wr_en
//.rd_en(rdy_mag), // input rd_en
.rd_en(~empty_q), // input rd_en
.dout(dout_q), // output [17 : 0] dout
.full(full_q), // output full
.almost_full(almost_full_q), // output almost_full
.wr_ack(wr_ack_q), // output wr_ack
.overflow(overflow_q), // output overflow
.empty(empty_q), // output empty
.valid(valid_q) // output valid
);

//take the magnitude of the real and imaginary signals
//two clock cycles delay
cordic_in u3_iq_mag (
.x_in(dout_i), // input [17 : 0] x_in
.y_in(dout_q), // input [17 : 0] y_in
.nd(valid_q), // input nd (new i and q values per clock cycle when rd_en is asserted)
.ce(1), //NOTE: might want to connect empty or valid to this input
.x_out(x_out_mag), // ouput [17 : 0] x_out
.rdy(rdy_mag), // driven high when magnitude of i and q has been calculated. logic high of this signal also signifies i and q registers to output next i and q.
.sclr(rst),
.clk(clk)); // input clk

//shift and sum (takes two clock cycles)
//track the number of samples calculated. when that number is
//equal to the maximum values, then assert the ready signal.

v_multipliers_7a accumulator_in_sample (
.clk(clk),
.reset(rst), //rst_dev
.reset_dv(rst_dev),
.A(x_out_mag),
//.B(sample_bit), //depends on how many magnitude values we use
.ce(rdy_mag),
.accum(quotient_sum_sample),
.counter(Scounter));

//now stored_out_out will never be zero at any time after initialization
always @ (posedge clk) begin
if(rst) begin
stored_out_out <= 0;
end
else begin
if((Scounter == sample_val) & (ready_sample != 1)) begin
stored_out_out <= quotient_sum_sample;
end
else begin
stored_out_out <= stored_out_out ;
end
end
end

always @ (posedge clk) begin
if(rst_dev) begin
ready_sample <= 0;
end
else begin
if((Scounter == sample_val) & (ready_sample != 1)) begin
ready_sample <= 1;
end
else begin
ready_sample <= ready_sample;
end
end
end

wire [31:0] threshold_out_const;
//assign  threshold_out_const = 512000;

assign  threshold_out_const = 100;//compare the threshold average to the sample average
comparator_component u8_compare_threshold(
//.A(threshold_out), // static threshold, next version will have threshold training module
.A(threshold_out_const), // static threshold, next version will have threshold training module
.B(stored_out_out),
.Comp_out(present), //asserted if carrier is present
.threshold_changed(threshold_changed),
.max_min(max_min),
.run_rx0(run_rx0), 
.en_comp(en_comp),
.rst(rst),
.clk(clk)
);


//delay the present signal and delay it by one clock cycle
always @ (posedge clk) begin
if(rst) present_next <= 0;
else present_next <= present;
end

/*
//add this portion to give the present_next signal a time dimension
//that is, the count tells how long the channel has been busy and
//when it is really ideal. corrects for fluctuating present_signal !
//write code to determine when the above counter is at max or min
//for every clock cycle that the channel is busy, the present_nextcount gets incremented. 
//for every clock cycle that the channel is free, the present_nextcount gets decreemented
//at max or min, the max_min gets asserted

always @ (posedge clk) 
begin
if(rst) begin
present_nextcount <= 4'b0;
max_min <= 0;
end
else begin
//if(present_next == 1'b1 && present_nextcount != 32'b11111111111111111111111111111111 & en_comp ) present_nextcount <= present_nextcount + 1;
//else if (present_next == 1'b0 & present_nextcount != 32'b0 & en_comp)  present_nextcount <= present_nextcount - 1;

if(present_next == 1'b1 && present_nextcount != 4'b1111 & en_comp ) present_nextcount <= present_nextcount + 2;
else if (present_next == 1'b0 & present_nextcount != 4'b0000 & en_comp)  present_nextcount <= present_nextcount - 2;
/*

//The following code determines how much time the channel has been high and the time the channel has been low using two up/down
//counters.

if(present_next == 1'b1 & present_nextcountHIGH != 16'b1111111111111111 ) present_nextcountHIGH <= present_nextcountHIGH + 1;
else if (present_next == 1'b0 & present_nextcountHIGH != 0)  present_nextcountHIGH <= present_nextcountHIGH - 1;

if(present_next == 1'b0 & present_nextcountLOW != 0) present_nextcountLOW <= present_nextcountLOW + 1;
else if (present_next == 1'b0 & present_nextcountLOW != 16'b1111111111111111 ) present_nextcountLOW - 1;

if((present_nextcount == 32'b11111111111111111111111111111111) & (present_next == 1'b1)) begin
max_min <= 1;
end
else if ((present_nextcount == 0) & (present_next == 1'b0)) 
max_min <= 1;
else
max_min <= 0;  //has not reach neither max nor min
end
end

*/

//assign resent to a different signal
assign present_nextOUT = present_next; //channel sensing per clock time
//assign max_min_present_nextOUT = max_min; //if the max or min has been reached when sensing the channel
//assign present_nextcountOUT = present_nextcount; //how long it is channel is busy

endmodule