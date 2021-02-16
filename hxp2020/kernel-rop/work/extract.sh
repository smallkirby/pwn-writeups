#!/bin/sh

sudo rm -rf ./extracted
mkdir extracted
gunzip ./initramfs.cpio.gz
cd extracted
cpio -idv < ../initramfs.cpio
cd ../
rm ./initramfs.cpio

## when gzip
# sudo rm -rf ./extracted
# mkdir extracted
# zcat ./initrd | cpio -idmv
# cd ../
