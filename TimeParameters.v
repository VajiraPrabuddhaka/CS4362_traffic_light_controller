`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:45 07/03/2018 
// Design Name: 
// Module Name:    TimeParameters 
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
module TimeParameters(clk, selector, selector_reprogram, t_value_input, reprogram, reset,
						    t_value_output);
	input clk;
	input[1:0] selector;
	input [1:0] selector_reprogram;
	input[3:0] t_value_input;
	input reprogram, reset;
	output [3:0] t_value_output;
	
	reg[3:0] t_value_output;

	(* KEEP = "TRUE" *)reg[3:0] tBASE, tEXT, tYEL;
	

	// values of selector for the different inputs
	parameter BASE_SELECT = 2'b00;
	parameter EXT_SELECT = 2'b01;
	parameter YEL_SELECT = 2'b10;

	// default time parameter settings
	parameter DEFAULT_BASE = 4'b0110;
	parameter DEFAULT_EXT = 4'b0011;
	parameter DEFAULT_YEL = 4'b0010;

	// maximum value for any time parameter
	parameter MAX_TIME = 4'b1111;
	parameter ZERO_TIME = 4'b0000;
	
	always @ (posedge clk)
		case(selector)
				BASE_SELECT: t_value_output <= tBASE;
				EXT_SELECT: t_value_output <= tEXT;
				YEL_SELECT: t_value_output <= tYEL;
					
				default: t_value_output <= ZERO_TIME;
				
		endcase

	always @ (posedge clk)
	begin	
		if(reset)
			begin
				tBASE = DEFAULT_BASE;
				tEXT = DEFAULT_EXT;
				tYEL = DEFAULT_YEL;
			end
		else if(reprogram)
			begin
				// Reprogram the appropriate value ; note that we explicitly disallow
				// a value of 0 for any parameter and replace it with a small number :
				//
				// tYEL
				// 	- a traffic light having a yellow - light cycle time of 0s would be
				//    a VERY BAD IDEA for obvious reasons
				// tBASE
				// 	- when the traffic sensor is low , Main St . gets a green for
				// 	  2* tBASE , so if tBASE ==0 and there 's no further traffic on Side
				// 	  St . after their initial green , Main St . traffic is stuck
				// tEXT
				// 	- the walk light is lit for tEXT time , so if we allow 0s for tEXT ,
				//    pedestrians are forced to jaywalk
				//
				// Despite this forbidding of 0 , the circuit has been tested to still
				// work correctly if we were to remove the 0= >1 forcing code below
				// and replace the assignments with simply " value ".
				
				case(selector_reprogram)
					BASE_SELECT: tBASE = (t_value_input != ZERO_TIME) ? t_value_input : 4'b0001;
					EXT_SELECT: tEXT = (t_value_input != ZERO_TIME) ? t_value_input : 4'b0001;
					YEL_SELECT: tYEL = (t_value_input != ZERO_TIME) ? t_value_input : 4'b0001;
					
					default:
					
						// Try to make logic errors elsewhere as obvious as possible ;
						// note that this also takes effect if the human operator 
						// accidentally sets the selector to the wrong value , but we ' re
						// not optimizing for human interaction with the device at this
						// level
						begin
							tBASE = MAX_TIME;
							tEXT = MAX_TIME;
							tYEL = MAX_TIME;
						end
				endcase
			end
			
		
	end
 endmodule
