#!/bin/sh

cd ~/Pin/pin-3.11-97998-g7ecce2dac-gcc-linux/source/tools/SimpleExamples/
../../../pin -t obj-intel64/branchtrace -- ~/Documents/CTF/seccon2019/calc/calc 111,999,111,999,111,1111,111,mm-mM-111,111,111,mm-111,111,111,999,111,-+-M+111,111,111,mm*
cp ./branchtrace.out ~/Desktop/branchtrce3.out
cd ~/Documents/CTF/seccon2019/calc/
cp ~/Desktop/branchtrce3.out ./
python ./exploit.py
