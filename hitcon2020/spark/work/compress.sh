#!/bin/sh
rm ./myinitramfs.cpio.gz
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../myinitramfs.cpio
cd ../
gzip ./myinitramfs.cpio

