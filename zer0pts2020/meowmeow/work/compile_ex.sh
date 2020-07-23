#!/bin/sh
gcc ./test2.c -o test2 --static
cp ./test2 ./extracted/dbg/
sh ./compress.sh
