#!/bin/bash
sh ./bcp.sh

qemu-system-x86_64 \
  -kernel ./bzImage \
  -initrd ./myinitramfs.cpio.gz \
  -nographic \
  -monitor none \
  -cpu qemu64 \
  -append "console=ttyS0 kaslr panic=1" \
  -no-reboot \
  -s \
  -m 256M
