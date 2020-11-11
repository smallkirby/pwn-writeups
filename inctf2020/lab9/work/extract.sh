#!/bin/sh

sudo rm -r ./extracted
mkdir extracted
cd extracted
cpio -idv < ../exrootfs.img
cd ../
