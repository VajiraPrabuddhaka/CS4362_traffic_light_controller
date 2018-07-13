`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:05:37 07/04/2018
// Design Name:   timer
// Module Name:   /home/vajira/Desktop/CS4362_traffic_light_controller/timer_test.v
// Project Name:  CS4362_traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: timer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module timer_test;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] value_input;
	reg startTimer;

	// Outputs
	wire expired;

	// Instantiate the Unit Under Test (UUT)
	timer uut (
		.clk(clk), 
		.reset(reset), 
		.value_input(value_input), 
		.startTimer(startTimer), 
		.expired(expired)
	);
	
	initial begin
		clk = 0;
		forever #10 clk = ~ clk ;  //f = 50MHz
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		value_input = 0;
		startTimer = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#20;
		reset = 0;
		#20;
		value_input = 3;
		#10;
		startTimer =1;
		#30;
		startTimer = 0;
	end
      
endmodule

