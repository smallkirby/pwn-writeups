#!/bin/bash

## extract filesystem
#sudo rm -rf ./extracted
#mkdir extracted
#cd extracted
#cpio -idv < ../initramfs.cpio
#cd ../

# build and compile exploit
cwd=$(pwd)
rm ./extracted/tmp/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel
cp ./exploit ./extracted/tmp

# compress filesystem
rm ./myrootfs.cpio
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../myrootfs.cpio
cd ../

# runt qemu
qemu-system-x86_64 \
    -m 256M \
    -kernel ./bzImage \
    -initrd ./myrootfs.cpio \
    -append "root=/dev/ram rw console=ttyS0 oops=panic panic=1 nokaslr pti=off quiet" \
    -cpu qemu64,+smep \
    -monitor /dev/null \
    -nographic \
    -s
