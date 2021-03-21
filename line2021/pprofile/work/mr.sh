#!/bin/bash

## extract filesystem
# sh ./extract.sh

# build and compile exploit
cwd=$(pwd)
rm -f ./extracted/tmp/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel -pthread
#gcc ./exploit2.c -o ./exploit2 --static -g -O0 -masm=intel
cp ./exploit ./extracted/home/pprofile
#cp ./exploit2 ./extracted/home/pprofile

# compress filesystem
rm -f ./initramfs.cpio
rm -f ./initramfs.cpio.gz
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../initramfs.cpio
cd ../
gzip ./initramfs.cpio
mv ./initramfs.cpio.gz ./initramfs.cpio

# find . | cpio -o -c -R root:root | gzip -9 > ../initrd

# run qemu
qemu-system-x86_64 \
  -cpu kvm64,+smep,+smap \
  -m 128M \
  -kernel ./bzImage \
  -initrd ./initramfs.cpio \
  -nographic \
  -monitor /dev/null \
  -no-reboot \
  -append "root=/dev/ram rw rdinit=/root/init kaslr console=ttyS0 loglevel=3 panic=1" \
  -s
