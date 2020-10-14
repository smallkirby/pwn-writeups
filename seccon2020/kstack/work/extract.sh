#!/bin/sh
sudo rm -r ./extracted
mkdir extracted
cp ./rootfs.cpio ./rootfs_temp.cpio
cd ./extracted
cpio -idv < ../rootfs_temp.cpio
cd ../
rm ./rootfs_temp.cpio
