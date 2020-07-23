# meowmeow
zer0pts CTF 2020
  
This is a easy kernel pwn challenge.  
Suitable for studying the basics of kernel pwn.  

## Directory Structure
### original
Original files distributed by the organizer.  
  
### work
Working directory.  
- build: for build of LKM  
- extracted: extracted filesystem  
- pure: kernel images built from original kernel source code  
- start.sh: starting script for QEMU  
- extract.sh: extract distributed rootfs.cpio into a directory named extracted  
- compres.sh: compress extracted filesystem named extracted into myrootfs.cpio
- compile_ex.sh: compile test program and copy it to extracted directory, then compress it   
  
## Reference  
https://smallkirby.hatenablog.com/entry/2020/07/23/221605  

