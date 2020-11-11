#!/bin/sh

for i in 0 ... 1000
do
  socat -v tcp-listen:12300,fork,reuseaddr exec:./sum
done
