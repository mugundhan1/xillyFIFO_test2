`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:25:39 10/24/2016 
// Design Name: 
// Module Name:    hdr_ram 
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
module hdr_ram( input [3:0] addr,
input [31:0] pps_count, frame_count,
input rd_en,
output reg [31:0] data_out=0
    );

reg [31:0] Mem [3:0];
//Mem[1]=0; Mem[0]=0;

always @*
begin
		Mem[0]=0;
		Mem[1]=frame_count;
		Mem[2]=pps_count;
		Mem[3]=0;
end

always @(addr)
begin
	if (rd_en)
		data_out=Mem[addr];
	end

endmodule
