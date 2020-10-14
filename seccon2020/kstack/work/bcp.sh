#!/bin/bash
gcc ./exploit.c -o exploit --static -pthread
cp ./exploit ./extracted/
sh ./compress.sh
