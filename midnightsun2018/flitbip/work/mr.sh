#!/bin/bash

## extract filesystem
# sh ./extract.sh

# build and compile exploit
cwd=$(pwd)
rm ./extracted/home/flitbip/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel
cp ./exploit ./extracted/home/flitbip

# compress filesystem
rm ./initrd
chmod 777 -R ./extracted
cd ./extracted
#find . | cpio -o -c -R root:root | gzip -9 > ../initrd
find ./ -print0 | cpio --owner root --null -o --format=newc | gzip -9 > ../initrd
cd ../

# runt qemu
qemu-system-x86_64 \
  -m 128M \
  -kernel ./bzImage \
  -initrd ./initrd \
  -nographic \
  -monitor /dev/null \
  -append "nokaslr root=/dev/ram rw console=ttyS0 oops=panic paneic=1 quiet" 2>/dev/null \
  -s

