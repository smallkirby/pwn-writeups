#!/bin/sh

sudo rm -rf ./extracted
mkdir extracted
mv ./initramfs.cpio ./initramfs.cpio.gz
gunzip ./initramfs.cpio.gz
cd extracted
cpio -idv < ../initramfs.cpio
#cat ../initramfs.cpio | cpio -idv
cd ../

## when gzip
# sudo rm -rf ./extracted
# mkdir extracted
# zcat ./initrd | cpio -idmv
# cd ../
