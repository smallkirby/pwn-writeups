#!/bin/bash
sh ./bcp.sh
qemu-system-x86_64 \
  -kernel mybzImage \
  -initrd myrootfs.cpio \
  -append "loglevel=3 root=/dev/ram console=ttyS0 oops=panic panic=1"\
  -nographic \
  -monitor /dev/null \
  -net user \
  -net nic \
  -device e1000 \
  -smp cores=1,threads=1 \
  -s \
  -cpu kvm64,+smep,+smap

#qemu-system-x86_64 \
#  -kernel bzImage \
#  -initrd rootfs.cpio \
#  -append "loglevel=3 root=/dev/ram console=ttyS0 oops=panic panic=1 nokaslr"\
#  -nographic \
#  -monitor /dev/null \
#  -net user \
#  -net nic \
#  -device e1000 \
#  -smp cores=1,threads=1 \
#  -s \
#  -cpu kvm64,+smep,+smap
