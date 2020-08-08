 
#!/bin/bash

qemu-system-x86_64 \
    -m 128M \
    -nographic \
    -kernel ./bzImage \
    -append 'console=ttyS0 loglevel=3 oops=panic panic=1' \
    -monitor /dev/null \
    -initrd ./myrootfs.cpio.gz  \
    -smp cores=4,threads=4 \
    -cpu kvm64,smep,smap \
    -s
