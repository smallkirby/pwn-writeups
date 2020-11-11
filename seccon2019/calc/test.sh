#!/bin/sh

cd ~/Pin/pin-3.11-97998-g7ecce2dac-gcc-linux/source/tools/SimpleExamples/
../../../pin -t obj-intel64/branchtrace -- ~/Documents/CTF/seccon2019/calc/calc 999,100,511,111,111,1111,111,mm-mM-111,111,111,mm-119,911,130,913,300,-+-M+001,001,001,mm*
cp ./branchtrace.out ~/Desktop/branchtrce3.out
cd ~/Documents/CTF/seccon2019/calc/
cp ~/Desktop/branchtrce3.out ./
python ./exploit.py
