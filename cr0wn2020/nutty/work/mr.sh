#!/bin/bash

## extract filesystem
# sh ./extract.sh

# build and compile exploit
cwd=$(pwd)
rm ./extracted/bin/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel -pthread
cp ./exploit ./extracted/bin

# compress filesystem
rm ./initramfs.cpio
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../initramfs.cpio
cd ../

# find . | cpio -o -c -R root:root | gzip -9 > ../initrd

# run qemu
qemu-system-x86_64 \
        -m 128 \
        -kernel bzImage \
        -initrd initramfs.cpio \
        -nographic \
        -smp 1 \
        -cpu kvm64,+smep,+smap \
        -append "console=ttyS0 quiet kaslr" \
        -monitor /dev/null \
        -s
