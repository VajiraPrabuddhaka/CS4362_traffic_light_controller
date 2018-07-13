`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:57:32 07/07/2018
// Design Name:   stateMachine
// Module Name:   /home/vajira/Desktop/CS4362_traffic_light_controller/stateMachine_test.v
// Project Name:  CS4362_traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stateMachine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stateMachine_test;

	// Inputs
	reg clk;
	reg reset;
	reg trafficSensor;
	reg pendingWalk;
	reg reprogram;
	reg expired;

	// Outputs
	wire startTimer;
	wire [1:0] timeParameter;
	wire resetWalk;
	wire Rm;
	wire Ym;
	wire Gm;
	wire Rs;
	wire Ys;
	wire Gs;
	wire Walk_light;
	wire [2:0] state;

	// Instantiate the Unit Under Test (UUT)
	stateMachine uut (
		.clk(clk), 
		.reset(reset), 
		.trafficSensor(trafficSensor), 
		.pendingWalk(pendingWalk), 
		.reprogram(reprogram), 
		.expired(expired), 
		.startTimer(startTimer), 
		.timeParameter(timeParameter), 
		.resetWalk(resetWalk), 
		.Rm(Rm), 
		.Ym(Ym), 
		.Gm(Gm), 
		.Rs(Rs), 
		.Ys(Ys), 
		.Gs(Gs), 
		.Walk_light(Walk_light), 
		.state(state)
	);
	
	initial begin
		clk = 0;
		forever #10 clk = ~ clk ;  //f = 50MHz
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		trafficSensor = 0;
		pendingWalk = 0;
		reprogram = 0;
		expired = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#200;
		reset = 0;
		#200;
		
		///////////////////////////Normal cycle
		expired =1;
		#20;
		expired =0;
		#200;
		expired = 1;
		#20;
		expired = 0;

	end
      
endmodule

