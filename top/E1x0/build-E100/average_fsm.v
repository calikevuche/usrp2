`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Trinity College, Virgina Tech
// Engineer: Kevin Anyanwu
//
// Create Date: 02:22:17 06/29/2011
// Design Name:
// Module Name: average_fsm
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
module cs_mealyfsm(
clk,
rst,
ready_sample,
ce,
en_comp,
wr_en,
rst_dev,
strobe_writer,
run,
state
);

//state symbols
parameter IDLE = 4'd0;
parameter WRITE_FIFO_S = 4'd1;
parameter STORE_SAMPLE = 4'd2;
parameter DETECTION = 4'd3;
parameter WAIT = 4'd4;

//state register
output reg [3:0] state;

//output to data path
output reg ce;
output reg rst_dev;
output reg en_comp;
output reg wr_en;

//input to controller
input clk, rst, strobe_writer, run;
input ready_sample;

//local register
reg rst_counter;

always@(posedge clk) begin

if (rst) begin

//CONTROL SIGNALS
en_comp <= 0; //disable comparator
wr_en <= 0; //disable writer into the fifo
rst_dev <=1; //reset all fifos in the data path
//state transition
state <= IDLE; //go to writing

end

else begin
case (state)

IDLE : begin

//CONTROL SIGNALS
en_comp <= 0; //disable comparator
wr_en <= 0; //disable writer into the fifo
rst_dev <=0; //reset all fifos in the data path
//state transition
if(strobe_writer) begin
wr_en <= strobe_writer;
state <= WRITE_FIFO_S;
end
else begin
wr_en <= 0;
state <= IDLE;
end

end

WRITE_FIFO_S : begin

//control
en_comp <= 0;
//note: at this point, strobe writer might be low, and i and q into the buffers might be zero,
//so, we should check if strobe write is low, and if it is, exit out!
wr_en <= strobe_writer;
rst_dev <=0;

//state
if (ready_sample) begin
state <= STORE_SAMPLE;
rst_dev <= 0; //reset adder, divider-register should be empty already
end
else
state <= WRITE_FIFO_S;

end

STORE_SAMPLE : begin

//control
en_comp <= 0; //NEEDED ?
wr_en <= 0; //NEEDED ? SINCE DETECTION MAKES WR_EN ZERO !
rst_dev <= 0; //NEEDED ?
//state
state <= DETECTION;

end

DETECTION : begin

//control
en_comp <= 1;
wr_en <= 0;
rst_dev <= 1;
//state
state <= WAIT;

end

WAIT : begin

//control
en_comp <= 0;
rst_dev <= 0;
//state
state<=WRITE_FIFO_S;

end

endcase
end

end
endmodule