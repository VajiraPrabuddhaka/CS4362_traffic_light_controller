`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:59:00 07/04/2018
// Design Name:   TimeParameters
// Module Name:   /home/vajira/Desktop/CS4362_traffic_light_controller/TimeParameters_test.v
// Project Name:  CS4362_traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TimeParameters
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TimeParameters_test;

	// Inputs
	reg clk;
	reg [1:0] selector;
	reg [1:0] selector_reprogram;
	reg [3:0] t_value_input;
	reg reprogram;
	reg reset;

	// Outputs
	wire [3:0] t_value_output;
	
	
	parameter BASE_SELECT = 2'b00;
	parameter EXT_SELECT = 2'b01;
	parameter YEL_SELECT = 2'b10;

	// Instantiate the Unit Under Test (UUT)
	TimeParameters uut (
		.clk(clk), 
		.selector(selector), 
		.t_value_input(t_value_input), 
		.reprogram(reprogram), 
		.reset(reset), 
		.t_value_output(t_value_output),
		.selector_reprogram(selector_reprogram)
	);
	
	
	
	///////////////////////////////////////////////////////////////////
	task assertTimes ; // ( expected, to_be_checked , msg )
		input [3:0] expected, to_be_checked ;
		input [8*69:0] msg ;
		if ( expected !== to_be_checked )
		begin
			$display (" error : %s", msg );
			$display (" expected : (%d)", expected );
			$display (" actual : (%d)", to_be_checked );
		end
	endtask
	////////////////////////////////////////////////////////////////////
	
	initial begin
		clk = 0;
		forever #10 clk = ~ clk ;  //f = 50MHz
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		selector = 0;
		t_value_input = 0;
		reprogram = 0;
		reset = 0;
		selector_reprogram = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		reset = 1;
		#30
		reset = 0;
		selector = 2'b00; // default t_BASE
		#30;
		selector = 2'b01; // default t_EXT
		#30;
		selector = 2'b10; // default t_YEL
		#30;
		t_value_input = 10;
		selector_reprogram = 2'b00; // reprogramming for t_BASE
		#20;
		reprogram = 1;
		#20;
		reprogram = 0;
		#20;
		//let's check the t_BASE value
		selector = 2'b00;
	end
endmodule

