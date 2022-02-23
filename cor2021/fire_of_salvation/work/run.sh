#!/bin/sh

qemu-system-x86_64 \
    -m 128M \
    -nographic \
    -no-reboot \
    -kernel "./bzImage" \
    -append "console=ttyS0 qiet loglevel=3 oops=panic panic=-1 pti=on kaslr" \
    -monitor /dev/null \
    -initrd "./initramfs.cpio.gz" \
    -cpu qemu64,+smep,+smap \
    -s \
    -smp cores=1
