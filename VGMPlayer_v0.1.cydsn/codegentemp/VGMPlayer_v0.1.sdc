# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\ingan\Documents\PSoC Creator\MegaDrive_player\VGMPlayer_v0.1.cydsn\VGMPlayer_v0.1.cyprj
# Date: Mon, 06 Nov 2023 18:37:13 GMT
#set_units -time ns
create_clock -name {Clock_2(routed)} -period 282.60869565217394 -waveform {0 141.304347826087} [list [get_pins {ClockBlock/aclk_0}]]
create_clock -name {Clock_1(routed)} -period 130.43478260869566 -waveform {0 65.2173913043478} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {Clock_3(routed)} -period 22673.91304347826 -waveform {0 11336.9565217391} [list [get_pins {ClockBlock/aclk_1}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 21.739130434782609 -waveform {0 10.8695652173913} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 21.739130434782609 -waveform {0 10.8695652173913} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 13 27} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 7 13} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Clock_3} -source [get_pins {ClockBlock/clk_sync}] -edges {1 1043 2087} -nominal_period 22673.91304347826 [list [get_pins {ClockBlock/aclk_glb_1}]]


# Component constraints for C:\Users\ingan\Documents\PSoC Creator\MegaDrive_player\VGMPlayer_v0.1.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\ingan\Documents\PSoC Creator\MegaDrive_player\VGMPlayer_v0.1.cydsn\VGMPlayer_v0.1.cyprj
# Date: Mon, 06 Nov 2023 18:37:09 GMT
