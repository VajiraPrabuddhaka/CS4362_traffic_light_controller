`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:26:26 07/06/2018 
// Design Name: 
// Module Name:    MainController 
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
module MainController(START_TIMER_SIGNAL, EXPIRED_SIGNAL, TIME_VALUE_TO_TIMER_VISUALIZE, INTERVAL_SELECTOR, reset, sensor, walk_request, reprogram, time_parameter_selector, time_value, clk ,Rm, Ym, Gm, Rs, Ys, Gs, Walk_light, state );

	input reset, sensor, walk_request, reprogram, time_parameter_selector, time_value, clk;
	
	output Rm, Ym, Gm, Rs, Ys, Gs, Walk_light;
	output START_TIMER_SIGNAL, EXPIRED_SIGNAL;
	
	reg START_TIMER_SIGNAL, EXPIRED_SIGNAL;
	output reg [3:0] TIME_VALUE_TO_TIMER_VISUALIZE;
	output reg [1:0] INTERVAL_SELECTOR;
	output state;
	
	wire sensor_sync, prog_sync, WR_sync, WR, WR_reset, start_timer, expired , reset_sync;
	//use reset_sync for rest of the parts
	wire [1:0] interval;
	wire [3:0] time_value_to_timer;
	
	always @ (posedge clk)
	begin
		START_TIMER_SIGNAL <= start_timer; 
		EXPIRED_SIGNAL <= expired;
		TIME_VALUE_TO_TIMER_VISUALIZE <= time_value_to_timer;
		INTERVAL_SELECTOR <= interval;
	end
	
	Synchronizer sn(.clk(clk), .Reset(reset),.Sensor(sensor), .Walk_request(walk_request), .Reprogram(reprogram), .Reset_Sync(reset_sync), .Sensor_Sync(sensor_sync), .Walk_request_Sync(WR_sync), .Reprogram_Sync(prog_sync));
	
	WalkRegister wr(.clk(clk) ,.walkPush(WR_sync) ,.reset(reset_sync) ,.pendingWalk(WR), .reset_by_fsm(WR_reset) );
	
	TimeParameters tp(.clk(clk), .selector(interval), .t_value_input(time_value), .reprogram(prog_sync), .reset(reset_sync), .t_value_output(time_value_to_timer), .selector_reprogram(time_parameter_selector) );
	
	timer tmr(.clk(clk), .reset(reset_sync), .value_input(time_value_to_timer), .startTimer(start_timer), .expired(expired));
	
	stateMachine sm(.clk(clk) ,.reset(reset_sync) , .trafficSensor(sensor_sync) , .pendingWalk(WR) ,.reprogram(prog_sync) , .expired(expired) ,.startTimer(start_timer) , .timeParameter(interval) , .resetWalk(WR_reset) ,.Rm(Rm), .Ym(Ym), .Gm(Gm), .Rs(Rs), .Ys(Ys), .Gs(Gs), .Walk_light(Walk_light), .state(state));


endmodule
