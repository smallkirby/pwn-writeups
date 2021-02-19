#!/bin/sh

sudo rm -rf ./extracted
mkdir extracted
cd extracted
cp ../rootfs.cpio.gz ./
gunzip ./rootfs.cpio.gz
cpio -idv < ./rootfs.cpio
rm ./rootfs.cpio
cd ../

## when gzip
# sudo rm -rf ./extracted
# mkdir extracted
# zcat ./initrd | cpio -idmv
# cd ../
