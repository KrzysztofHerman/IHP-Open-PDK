#!/bin/sh 
#
#gnucap-mg-vams -I ../../verilog-a/r3_cmc/ -I /usr/local/include/gnucap -D res_typ  --cc  cornerRES.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared -DNDEBUG - -o ../plugins/cornerRES_typ.so
#gnucap-mg-vams -I ../../verilog-a/r3_cmc/ -I /usr/local/include/gnucap -D res_bcs  --cc  cornerRES.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared -DNDEBUG - -o ../plugins/cornerRES_bcs.so
#gnucap-mg-vams -I ../../verilog-a/r3_cmc/ -I /usr/local/include/gnucap -D res_wcs  --cc  cornerRES.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared -DNDEBUG - -o ../plugins/cornerRES_wcs.so
#gnucap-mg-vams -I ../../verilog-a/r3_cmc/ -I /usr/local/include/gnucap -D res_stat --cc  cornerRES.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared -DNDEBUG - -o ../plugins/cornerRES_stat.so

gnucap-mg-vams -I ../../verilog-a/r3_cmc/ -I /usr/local/include/gnucap -D cap_typ --cc  cornerCAP.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared -DNDEBUG - -o ../plugins/cornerCAP_typ.so
