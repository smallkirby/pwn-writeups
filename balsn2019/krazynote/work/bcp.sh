#!/bin/bash
gcc ./exploit.c -o exploit --static -pthread
cp ./exploit ./extracted/home/note
sh ./compress.sh
