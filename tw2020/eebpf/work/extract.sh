#!/bin/sh
#sudo rm -r ./myextracted
#mkdir myextracted
#cp ./myrootfs.cpio ./myrootfs_temp.cpio
#cd ./myextracted
#cpio -idv < ../myrootfs_temp.cpio
#cd ../
#rm ./myrootfs_temp.cpio

sudo rm -r ./extracted
mkdir extracted
cp ./rootfs.cpio ./rootfs_temp.cpio
cd ./extracted
cpio -idv < ../rootfs_temp.cpio
cd ../
rm ./rootfs_temp.cpio
