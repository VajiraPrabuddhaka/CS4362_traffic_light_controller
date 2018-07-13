`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:28:44 07/03/2018 
// Design Name: 
// Module Name:    WalkRegister 
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
module WalkRegister (clk ,walkPush ,reset ,pendingWalk, reset_by_fsm );
	input clk ;
	input walkPush , reset, reset_by_fsm ;
	output pendingWalk;
	reg pendingWalk = 0;
	

	always @ ( posedge clk )
	begin
		pendingWalk <= reset || reset_by_fsm ? 0 : pendingWalk ? pendingWalk : walkPush ;
	end
endmodule
