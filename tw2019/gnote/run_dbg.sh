#!/bin/sh
cd ./rootfs_filesystem
find ./ -print0 | cpio --null -o --format=newc > ./dbgrootfs.cpio
mv ./dbgrootfs.cpio ../
cd ../
cp -r ../gnote/ /home/
cd /home/gnote
stty intr ^]
#exec timeout 120 qemu-system-x86_64 -m 64M -kernel bzImage -initrd rootfs.cpio -append "loglevel=3 console=ttyS0 oops=panic panic=1 kaslr" -nographic -net user -net nic -device e1000 -smp cores=2,threads=2 -cpu kvm64,+smep -monitor /dev/null 2>/dev/null
qemu-system-x86_64  -S -m 64M -kernel bzImage -initrd dbgrootfs.cpio -append "loglevel=3 console=ttyS0 oops=panic panic=1 nokaslr" -nographic -net user -net nic -device e1000 -smp cores=2,threads=2 -cpu kvm64,+smep -monitor /dev/null -gdb tcp::12300 
