`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:14:18 07/03/2018 
// Design Name: 
// Module Name:    Synchronizer 
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
module Synchronizer(clk, Reset, Sensor, Walk_request, Reprogram, Reset_Sync, Sensor_Sync, Walk_request_Sync, Reprogram_Sync);
	
	input clk, Reset, Sensor, Walk_request, Reprogram;
	output Reset_Sync, Sensor_Sync, Walk_request_Sync, Reprogram_Sync;
	
	//wire reset_wire, Walk_request_wire, Reprogram_wire;
	
	//debounce inputs->Reset, Walk_request, Reprogram
	//debounce reset_debouncer(.reset(0), .clock(clk), .noisy(Reset), .clean(reset_wire));
	//debounce walk_request_debouncer(.reset(0), .clock(clk), .noisy(Walk_request), .clean(Walk_request_wire));
	//debounce reprogram_debouncer(.reset(0), .clock(clk), .noisy(Reprogram), .clean(Reprogram_wire));
	
	//synchronize debounced signals
	synchronize reset_synchronizer(.clk(clk),.in(Reset),.out(Reset_Sync));
	
	synchronize sensor_synchronizer(.clk(clk),.in(Sensor),.out(Sensor_Sync));
	
	synchronize walkrequest_synchronizer(.clk(clk),.in(Walk_request),.out(Walk_request_Sync));
	
	synchronize reprogram_synchronizer(.clk(clk),.in(Reprogram),.out(Reprogram_Sync));
	
endmodule
