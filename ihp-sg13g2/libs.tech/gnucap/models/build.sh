#!/bin/sh 
#
gnucap-mg-vams -I ../../verilog-a/r3_cmc/ -I /usr/local/include/gnucap --cc  resistors_paramsets.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared - -o ../plugins/resistors_paramsets.so
gnucap-mg-vams -I /usr/local/include/gnucap --cc  resistors_stat.vams | g++ -xc++ -I/usr/local/include/gnucap -fPIC -shared - -o ../plugins/resistors_stat.so
