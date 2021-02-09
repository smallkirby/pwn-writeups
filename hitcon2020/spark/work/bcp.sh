#!/bin/bash
cwd=$(pwd)
rm ./extracted/home/spark/exploit
rm ./extracted/home/spark/fuga
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel
cp ./exploit ./extracted/home/spark/
sh ./compress.sh
