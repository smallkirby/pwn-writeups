#!/bin/sh

rm ./myrootfs.cpio.gz
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../myrootfs.cpio
cd ../
gzip ./myrootfs.cpio
