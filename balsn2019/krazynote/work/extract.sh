#!/bin/sh

sudo rm -r ./extracted
mkdir extracted
cp ./initramfs.cpio.gz ./initramfs_temp.cpio.gz
gzip -d ./initramfs_temp.cpio.gz
cd extracted
cpio -idv < ../initramfs_temp.cpio
cd ../
rm ./initramfs_temp.cpio
