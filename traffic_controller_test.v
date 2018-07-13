`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:31:49 07/08/2018
// Design Name:   MainController
// Module Name:   /home/vajira/Desktop/CS4362_traffic_light_controller/traffic_controller_test.v
// Project Name:  CS4362_traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MainController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module traffic_controller_test;

	// Inputs
	reg reset;
	reg sensor;
	reg walk_request;
	reg reprogram;
	reg time_parameter_selector;
	reg time_value;
	reg clk;

	// Outputs
	wire Rm;
	wire Ym;
	wire Gm;
	wire Rs;
	wire Ys;
	wire Gs;
	wire Walk_light;
	wire START_TIMER, EXPIRED;
	wire [3:0] TIME_VALUE_TO_TIMER;
	wire [1:0] INTERVAL_SELECTOR;
	wire [2:0] state;

	// Instantiate the Unit Under Test (UUT)
	MainController uut (
		.reset(reset), 
		.sensor(sensor), 
		.walk_request(walk_request), 
		.reprogram(reprogram), 
		.time_parameter_selector(time_parameter_selector), 
		.time_value(time_value), 
		.clk(clk), 
		.Rm(Rm), 
		.Ym(Ym), 
		.Gm(Gm), 
		.Rs(Rs), 
		.Ys(Ys), 
		.Gs(Gs), 
		.Walk_light(Walk_light),
		.START_TIMER_SIGNAL(START_TIMER),
		.EXPIRED_SIGNAL(EXPIRED),
		.TIME_VALUE_TO_TIMER_VISUALIZE(TIME_VALUE_TO_TIMER),
		.INTERVAL_SELECTOR(INTERVAL_SELECTOR),
		.state(state)
	);
	
	initial begin
		clk = 0;
		forever #10 clk = ~ clk ;  //f = 50MHz
	end

	initial begin
		// Initialize Inputs
		reset = 0;
		sensor = 0;
		walk_request = 0;
		reprogram = 0;
		time_parameter_selector = 0;
		time_value = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#30;
		reset = 0;
		#170;
		reset = 1;
		#30;
		reset = 0;
	end
      
endmodule

