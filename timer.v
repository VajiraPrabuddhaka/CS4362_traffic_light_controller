`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:33:25 07/03/2018 
// Design Name: 
// Module Name:    timer 
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
module timer (clk, reset, value_input, startTimer, expired);
	input clk;
	input reset;
	input[3:0] value_input;
	input startTimer;
	output expired;
	reg expired;

	// contains the current count until expired should be asserted
	reg[3:0] count;

	// current 27 MHz count
	reg[2:0] clkCycleCount;

	// max / min values of count
	parameter MAX_COUNT = 4'b1111;
	parameter ZERO_COUNT = 4'b0000;

	parameter ONE_COUNT = 4'b0001;

	// values for the time parameter selector
	parameter BASE_SELECT = 2'b00;
	parameter EXT_SELECT = 2'b01;
	parameter YEL_SELECT = 2'b10;

	// values used to determine when 1s is up
	parameter CLK_COUNT_AFTER_ONE_SECOND = 3'd4 ;
	parameter CLK_COUNT_ZERO = 2'b0 ;

	always @ (posedge clk)
	begin
		expired <= 0;

		// 1s timer increments from 0 to 27 e6 -1 and repeats unless we're being
		// reset
		if(clkCycleCount==CLK_COUNT_AFTER_ONE_SECOND || reset==1)
			clkCycleCount <= CLK_COUNT_ZERO;
		else
			clkCycleCount <= clkCycleCount + 1;

		// note ordering : reset overrides startTimer , which overrides 1 Hz events
		if(reset)
			begin
				expired <= 0;
				count <= MAX_COUNT; // for debugging
			end
		else if(startTimer)
			begin
				expired <= 0;
				clkCycleCount <= CLK_COUNT_ZERO;
				count <= value_input;
			end
		else if (clkCycleCount == CLK_COUNT_AFTER_ONE_SECOND)
			begin
				expired <= (count==ONE_COUNT);
				count <= count - 1;
			end
	end
endmodule