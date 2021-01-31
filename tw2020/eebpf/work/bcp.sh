#!/bin/bash
#cwd=$(pwd)
#gcc ./test.c -o ./test --static -pthread -g -O0
#cp ./test ./myextracted/root
#sh ./compress.sh

cwd=$(pwd)
gcc ./exploit.c -o ./test --static -pthread -g -O0
cp ./test ./extracted/tmp
sh ./compress.sh
