#!/bin/bash
qemu-system-x86_64 \
    -m 128M \
    -kernel ./bzImage \
    -initrd ./initrd \
    -nographic \
    -monitor /dev/null \
    -append "nokaslr root=/dev/ram rw console=ttyS0 oops=panic paneic=1 quiet" 2>/dev/null
