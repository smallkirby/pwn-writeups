#!/bin/sh

sudo rm -rf ./extracted
mkdir extracted
cd extracted
cpio -idv < ../initramfs.cpio
cd ../
