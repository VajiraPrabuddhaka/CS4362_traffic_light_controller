`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:26:11 07/03/2018 
// Design Name: 
// Module Name:    stateMachine 
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
module stateMachine(clk ,reset , trafficSensor , pendingWalk ,reprogram , expired ,startTimer , timeParameter , resetWalk ,Rm, Ym, Gm, Rs, Ys, Gs, Walk_light ,state);
	input clk ;
	input reset , trafficSensor , pendingWalk , reprogram , expired ;

	output startTimer ;
	output [1:0] timeParameter ;

	output resetWalk ;

	output Rm, Ym, Gm, Rs, Ys, Gs;
	output Walk_light ;

	output [2:0] state ;

	reg startTimer ;
	reg [1:0] timeParameter ;
	reg resetWalk ;
	reg Rm, Ym, Gm, Rs, Ys, Gs;
	reg Walk_light ;

	// Constants used with walkLight .
	parameter ON = 1'b0 ;
	parameter OFF = 1'b1 ;
	
	reg [2:0] state ;
	reg trigger;

	parameter START_MAIN_GREEN = 0;
	parameter CONT_MAIN_GREEN_NO_TRAFFIC = 1;
	parameter CONT_MAIN_GREEN_TRAFFIC = 2;
	parameter MAIN_YELLOW = 3;
	parameter PEDESTRIAN_WALK = 4;
	parameter START_SIDE_GREEN = 5;
	parameter CONT_SIDE_GREEN_TRAFFIC = 6;
	parameter SIDE_YELLOW = 7;

	parameter INVALID_STATE = 8;

	// traffic light signal values
	parameter RED = 2'b00 ;
	parameter YELLOW = 2'b01 ;
	parameter GREEN = 2'b10 ;

	// timing parameter constants
	parameter BASE_SELECT = 2'b00 ;
	parameter EXT_SELECT = 2'b01 ;
	parameter YEL_SELECT = 2'b10 ;
	parameter ZERO_SELECT = 2'b11 ;

	always @ ( posedge clk )
	begin
		// startTimer ==1 triggers timer , so must reset it if it 's been triggered
		startTimer <= 0;
		// only want to reset walk register in one specific case
		resetWalk <= 0;
		
		if (trigger)
				begin
					startTimer <= 1;
					trigger <= 0;
				end

		if ( reset || reprogram )
			begin
			// set to start state -- outputs set in ~ expired below
			trigger <= 1;
			timeParameter <= BASE_SELECT ;
			state <= START_MAIN_GREEN ;
			end
		else if (~ expired )
			begin
			// if ~ expired , then we ' re either in the middle of a state or have
			// just transitioned into one -- set the outputs for that state
			case ( state )
				START_MAIN_GREEN, CONT_MAIN_GREEN_NO_TRAFFIC, CONT_MAIN_GREEN_TRAFFIC :
					begin
					Rm <= 0;
					Ym <= 0;
					Gm <= 1;
					Rs <= 1;
					Ys <= 0;
					Gs <= 0;
					Walk_light <=0;
					end

				MAIN_YELLOW :
					begin
					Rm <= 0;
					Ym <= 1;
					Gm <= 0;
					Rs <= 1;
					Ys <= 0;
					Gs <= 0;
					Walk_light <=0;
					end

				PEDESTRIAN_WALK :
					begin
					Rm <= 1;
					Ym <= 0;
					Gm <= 0;
					Rs <= 1;
					Ys <= 0;
					Gs <= 0;
					Walk_light <=1;
					end

				START_SIDE_GREEN, CONT_SIDE_GREEN_TRAFFIC :
					begin
					Rm <= 1;
					Ym <= 0;
					Gm <= 0;
					Rs <= 0;
					Ys <= 0;
					Gs <= 1;
					Walk_light <=0;
					end

				SIDE_YELLOW :
					begin
					Rm <= 1;
					Ym <= 0;
					Gm <= 0;
					Rs <= 0;
					Ys <= 1;
					Gs <= 0;
					Walk_light <=0;
					end

				default : // debugging
					begin
					Rm <= 0;
					Ym <= 1;
					Gm <= 0;
					Rs <= 0;
					Ys <= 1;
					Gs <= 0;
					Walk_light <=1;
					end
			endcase
		end
		else
			begin
			// it 's the end of the cycle -- we ' re always tr an si ti on in g
			trigger <= 1;
			
			// set next state and how long to stay in it
			case ( state )
				START_MAIN_GREEN :
					begin
						if ( trafficSensor )
							begin
								timeParameter <= EXT_SELECT ;
								state <= CONT_MAIN_GREEN_TRAFFIC ;
							end
						else
							begin
								timeParameter <= BASE_SELECT ;
								state <= CONT_MAIN_GREEN_NO_TRAFFIC ;
							end
					end

				CONT_MAIN_GREEN_NO_TRAFFIC,CONT_MAIN_GREEN_TRAFFIC :
					begin
						timeParameter <= YEL_SELECT ;
						state <= MAIN_YELLOW ;
					end

				MAIN_YELLOW :
					begin
						if ( pendingWalk )
							begin
								timeParameter <= EXT_SELECT ;
								state <= PEDESTRIAN_WALK ;
							end
						else
							begin
								timeParameter <= BASE_SELECT ;
								state <= START_SIDE_GREEN ;
							end
					end

				PEDESTRIAN_WALK :
					begin
						timeParameter <= BASE_SELECT ;
						state <= START_SIDE_GREEN ;

						// end of the walk cycle -- reset the pendingWalk flag
						resetWalk <= 1;
					end

				START_SIDE_GREEN :
					begin
						if ( trafficSensor )
							begin
								timeParameter <= EXT_SELECT ;
								state <= CONT_SIDE_GREEN_TRAFFIC ;
							end
						else
							begin
								timeParameter <= YEL_SELECT ;
								state <= SIDE_YELLOW ;

							end
					end

				CONT_SIDE_GREEN_TRAFFIC :
					begin
						timeParameter <= YEL_SELECT ;
						state <= SIDE_YELLOW ;
					end

				SIDE_YELLOW :
					begin
						timeParameter <= BASE_SELECT ;
						state <= START_MAIN_GREEN ;
					end

				default :
					begin
						state <= INVALID_STATE ; // stay here forever , hopefully !
					end
			endcase
		end
	end

endmodule
