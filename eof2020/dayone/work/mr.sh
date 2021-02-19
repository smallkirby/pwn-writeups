#!/bin/bash

## extract filesystem
# sh ./extract.sh

# build and compile exploit
cwd=$(pwd)
rm ./extracted/tmp/exploit
gcc ./exploit.c -o ./exploit --static -g -O0 -masm=intel
cp ./exploit ./extracted/tmp

# compress filesystem
rm ./rootfs.cpio.gz
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../rootfs.cpio
cd ../
gzip ./rootfs.cpio

# run qemu
qemu-system-x86_64 \
  -kernel ./bzImage \
  -initrd ./rootfs.cpio.gz \
  -nographic \
  -monitor /dev/null \
  -cpu qemu64,+smep,+smap \
  -append "console=ttyS0 kaslr panic=-1 oops=panic quiet" \
  -s \
  -m 256M \
  -virtfs local,path=$(pwd)/extracted/tmp,mount_tag=shared,security_model=passthrough,readonly
