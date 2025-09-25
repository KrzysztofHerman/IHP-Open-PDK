<Qucs Schematic 25.2.0>
<Properties>
  <View=-283,-588,2714,1422,0.821278,231,463>
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
  <GND * 1 100 620 0 0 0 0>
  <IProbe Pr1 1 170 360 -26 16 0 0>
  <GND * 1 100 760 0 0 0 0>
  <Vdc V3 1 100 730 18 -26 0 1 "0" 1>
  <GND * 1 430 620 0 0 0 0>
  <INCLSCR INCLSCR1 1 130 50 -60 16 0 0 "\n.LIB cornerRES.lib res_typ\n" 1 "" 0 "" 0>
  <.DC DC1 1 360 80 0 32 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Idc I1 1 100 470 18 -26 0 1 "1m" 1>
  <.SW SW1 1 230 140 0 52 0 0 "DC1" 1 "lin" 1 "I1" 1 "0" 1 "1m" 1 "20" 1>
  <R_IHP R2 1 430 480 13 -26 0 1 "rppd" 1 "X" 0 "0.5" 1 "1" 1 "0" 0 "sub" 0 "1" 0 "653.834" 1>
</Components>
<Wires>
  <100 500 100 620 "" 0 0 0 "">
  <100 360 140 360 "" 0 0 0 "">
  <100 360 100 440 "" 0 0 0 "">
  <200 360 430 360 "rnet" 410 330 184 "">
  <430 360 430 450 "" 0 0 0 "">
  <430 510 430 620 "" 0 0 0 "">
  <100 700 100 700 "sub" 130 670 0 "">
</Wires>
<Diagrams>
  <Rect 653 603 737 531 3 #c0c0c0 1 00 1 0 0.0001 0.000947369 1 -0.0246316 0.05 0.270948 1 -1 0.2 1 315 0 225 1 0 0 "" "" "">
	<"ngspice/sw1.v(rnet)" #ff0000 0 3 0 0 0>
	  <Mkr 0.000947369 797 -548 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
  <Text 50 890 12 #000000 0 "Bulk connections of the third terminal of the resistors are made with ptap1 devices\nUsually it should be connected to the lowest system potential (VSS)">
</Paintings>
