#!/bin/bash

qemu-system-x86_64 \
	-enable-kvm \
        -cpu kvm64 \
	-m 128 \
	-kernel  ./pure/bzImage \
	-nographic \
	-append "console=ttyS0 init=/init quiet nokaslr" \
	-initrd myrootfs.cpio \
	-monitor /dev/null \
  -s
