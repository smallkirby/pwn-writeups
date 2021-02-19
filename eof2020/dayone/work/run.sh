#!/bin/bash

# /init will mount $SHARED_DIR to /mnt
# fill in some path you want to share with vm (e.g. /tmp)
# SHARED_DIR=$1

qemu-system-x86_64 \
  -kernel bzImage \
  -initrd rootfs.cpio.gz \
  -append "console=ttyS0 oops=panic panic=-1 kaslr quiet" \
  -monitor /dev/null \
  -nographic \
  -cpu qemu64,+smep,+smap \
  -m 256M \
  -s
