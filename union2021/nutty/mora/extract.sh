#!/bin/sh

sudo rm -rf ./extracted
mkdir extracted
cd extracted
cpio -idv < ../initramfs.cpio
cd ../

## when gzip
# sudo rm -rf ./extracted
# mkdir extracted
# zcat ./initrd | cpio -idmv
# cd ../
