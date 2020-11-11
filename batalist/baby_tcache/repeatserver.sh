#!/bin/bash

for var in {0..100}
do
  socat -v tcp-listen:12800,fork,reuseaddr exec:./baby_tcache
done
