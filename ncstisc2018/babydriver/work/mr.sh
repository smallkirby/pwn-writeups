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
rm ./rootfs.cpio
chmod 777 -R ./extracted
cd ./extracted
find ./ -print0 | cpio --owner root --null -o --format=newc > ../rootfs.cpio
cd ../

# runt qemu
qemu-system-x86_64 \
  -initrd rootfs.cpio \
  -kernel bzImage \
  -append 'console=ttyS0 root=/dev/ram oops=panic panic=1 nokaslr' \
  -enable-kvm \
  -monitor /dev/null \
  -m 64M \
  --nographic  \
  -smp cores=1,threads=1 \
  -cpu kvm64,+smep \
  -s
