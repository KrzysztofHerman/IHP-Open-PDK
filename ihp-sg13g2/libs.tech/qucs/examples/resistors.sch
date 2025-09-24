<Qucs Schematic 25.2.0>
<Properties>
  <View=-315,-313,1892,971,1.46266,568,714>
  <Grid=10,10,1>
  <DataSet=resistors.dat>
  <DataDisplay=resistors.dpl>
  <OpenDisplay=0>
  <Script=resistors.m>
  <RunScript=0>
  <showFrame=3>
  <FrameText0=DC simulation resistors>
  <FrameText1=Drawn By:IHP PDK Authors>
  <FrameText2=Date:2024>
  <FrameText3=Revision:1>
</Properties>
<Symbol>
  <.ID -20 -16 SUB>
  <Line -20 20 40 0 #000080 2 1>
  <Line 20 20 0 -40 #000080 2 1>
  <Line -20 -20 40 0 #000080 2 1>
  <Line -20 20 0 -40 #000080 2 1>
</Symbol>
<Components>
  <INCLSCR INCLSCR1 1 130 50 -60 16 0 0 "\n.LIB cornerRES.lib res_wcs\n" 1 "" 0 "" 0>
  <.SW SW1 1 320 70 0 52 0 0 "DC1" 1 "lin" 1 "V2" 1 "0" 1 "10" 1 "301" 1>
  <Vdc V2 1 100 470 18 -26 0 1 "1 V" 1>
  <GND * 1 240 620 0 0 0 0>
  <GND * 1 100 620 0 0 0 0>
  <IProbe Pr1 1 170 360 -26 16 0 0>
  <GND * 1 180 760 0 0 0 0>
  <Vdc V3 1 180 730 18 -26 0 1 "0" 1>
  <GND * 1 430 620 0 0 0 0>
  <R R3 1 430 440 13 -26 0 1 "rppd" 1 "X" 0 "0.5" 1 "0.5" 1 "0" 0 "sub" 0 "1" 0 "396.917" 1>
  <R R4 1 430 560 13 -26 0 1 "rppd" 1 "X" 0 "0.5" 1 "0.5" 1 "0" 0 "sub" 0 "1" 0 "396.917" 1>
</Components>
<Wires>
  <100 500 100 620 "" 0 0 0 "">
  <100 360 140 360 "" 0 0 0 "">
  <100 360 100 440 "" 0 0 0 "">
  <200 360 240 360 "" 0 0 0 "">
  <240 580 240 620 "" 0 0 0 "">
  <240 440 240 520 "div1" 260 480 80 "">
  <240 360 240 380 "" 0 0 0 "">
  <240 360 430 360 "" 0 0 0 "">
  <430 360 430 410 "" 0 0 0 "">
  <430 470 430 530 "div2" 380 500 27 "">
  <430 590 430 620 "" 0 0 0 "">
  <180 700 180 700 "sub" 210 670 0 "">
</Wires>
<Diagrams>
  <Rect 679 431 791 379 3 #c0c0c0 1 00 1 0 1 10 1 -0.499996 1 5.49995 1 0 0.1 0.5256 315 0 225 1 0 0 "" "" "">
	<"ngspice/v(div2)" #ff0000 2 3 0 0 0>
	  <Mkr 5 437 -131 3 0 0>
	<"ngspice/v(div1)" #ff00ff 0 3 0 0 0>
	<"ngspice/v(div3)" #00ff00 2 3 0 0 0>
	<"ngspice/v(ntap)" #00ffff 3 3 0 0 1>
	<"ngspice/v(ptap)" #ffff00 2 3 0 0 1>
	<"ngspice/v(div2)" #ff00ff 0 3 0 0 0>
  </Rect>
</Diagrams>
<Paintings>
  <Text 60 810 12 #000000 0 "Bulk connections of the third terminal of the resistors are made with ptap1 devices\nUsually it should be connected to the lowest system potential (VSS)">
</Paintings>
