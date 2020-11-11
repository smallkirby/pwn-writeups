#!/bin/sh

for var in {0..100}
do
  echo "***TRY SHELL: ""$var"
  python2 ./exploit.py
done
