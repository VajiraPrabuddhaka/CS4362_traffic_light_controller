`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:21:58 07/04/2018
// Design Name:   WalkRegister
// Module Name:   /home/vajira/Desktop/CS4362_traffic_light_controller/WalkRegister_test.v
// Project Name:  CS4362_traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: WalkRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module WalkRegister_test;

	// Inputs
	reg clk;
	reg walkPush;
	reg reset;
	reg reset_by_fsm;

	// Outputs
	wire pendingWalk;

	// Instantiate the Unit Under Test (UUT)
	WalkRegister uut (
		.clk(clk), 
		.walkPush(walkPush), 
		.reset(reset), 
		.pendingWalk(pendingWalk), 
		.reset_by_fsm(reset_by_fsm)
	);

	initial begin
		clk = 0;
		forever #10 clk = ~ clk ;  //f = 50MHz
	end

	initial begin
		// Initialize Inputs
		walkPush = 0;
		reset = 0;
		reset_by_fsm = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#30;
		reset = 0;
		
		walkPush = 1;
		#30;
		walkPush = 0;
		
		#100;
		
		reset_by_fsm = 1;
		#20;
		reset_by_fsm = 0;
	end
      
endmodule

