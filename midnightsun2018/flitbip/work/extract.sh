#!/bin/sh

sudo rm -rf ./extracted
mkdir extracted
cd extracted
cp ../initrd ./
zcat ./initrd | cpio -idmv
rm ./initrd
cd ../
