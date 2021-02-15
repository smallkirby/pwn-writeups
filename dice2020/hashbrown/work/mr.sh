#!/bin/bash

## extract filesystem
# sh ./extract.sh

# build and compile exploit
cwd=$(pwd)
rm ./extracted/tmp/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel -pthread
cp ./exploit ./extracted/tmp

# compress filesystem
rm ./myinitramfs.cpio
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../myinitramfs.cpio
cd ../

# find . | cpio -o -c -R root:root | gzip -9 > ../initrd

# run qemu
exec qemu-system-x86_64 \
    -m 128M \
    -nographic \
    -kernel "bzImage" \
    -append "console=ttyS0 loglevel=3 oops=panic panic=-1 pti=on nokaslr" \
    -no-reboot \
    -cpu qemu64,+smep,+smap \
    -monitor /dev/null \
    -initrd "myinitramfs.cpio" \
    -smp 2 \
    -smp cores=2 \
    -smp threads=1 \
    -s
