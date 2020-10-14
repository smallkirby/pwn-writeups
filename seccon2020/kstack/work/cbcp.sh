#!/bin/bash
gcc ./exploit.c -o exploit --static -pthread
cp ./exploit ./extracted/
cp ./build/kstack.ko ./extracted/root/kstack.ko
sh ./compress.sh
