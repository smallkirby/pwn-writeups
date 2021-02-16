#!/bin/bash

## extract filesystem
# sh ./extract.sh

# build and compile exploit
cwd=$(pwd)
rm ./extracted/tmp/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel
cp ./exploit ./extracted/

# compress filesystem
rm ./myinitramfs.cpio.gz
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../myinitramfs.cpio
cd ../
gzip ./myinitramfs.cpio

# find . | cpio -o -c -R root:root | gzip -9 > ../initrd

# runt qemu
qemu-system-x86_64 \
    -m 128M \
    -cpu kvm64,+smep,+smap \
    -kernel vmlinuz \
    -initrd myinitramfs.cpio.gz \
    -hdb flag.txt \
    -snapshot \
    -nographic \
    -monitor /dev/null \
    -no-reboot \
    -append "console=ttyS0 kaslr kpti=1 quiet panic=1" \
    -s
