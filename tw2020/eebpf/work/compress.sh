#!/bin/sh
rm ./myrootfs.cpio
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../myrootfs.cpio
cd ../

#rm ./rootfs.cpio
#chmod 777 -R ./extracted
#cd ./extracted
#find ./ -print0 | cpio --owner root --null -o --format=newc > ../rootfs.cpio
#cd ../
