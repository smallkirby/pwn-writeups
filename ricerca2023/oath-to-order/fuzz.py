#!/usr/bin/env python
#encoding: utf-8;

from pwn import *
import sys

FILENAME = "chall"
LIBCNAME = ""

hosts = ("oath-to-order.2023.ricercactf.com","localhost","localhost")
ports = (9003,12301,23947)
rhp1 = {'host':hosts[0],'port':ports[0]}    #for actual server
rhp2 = {'host':hosts[1],'port':ports[1]}    #for localhost 
rhp3 = {'host':hosts[2],'port':ports[2]}    #for localhost running on docker
context(os='linux',arch='amd64')
binf = ELF(FILENAME)
libc = ELF(LIBCNAME) if LIBCNAME!="" else None


## utilities #########################################

NOTESIZE = 300
NUM_NOTES = 10

def create(ix: int, align: int, size: int, data: bytes):
  global c
  print(f"[CREATE] ix:{ix}, align:{align}, size:{size}, datalen:{len(data)}")
  print(c.recvuntil("1. Create"))
  c.sendlineafter("> ", b"1")
  c.sendlineafter("index: ",str(ix))
  if "inv" in str(c.recv(4)):
    return
  c.sendlineafter(": ", str(size))
  if "inv" in str(c.recv(4)):
    return
  c.sendlineafter(": ", str(align))
  if "inv" in str(c.recv(4)):
    return
  if '\n' in str(data):
    c.sendlineafter(": ", str(data).split('\n')[0])
  elif len(data) == size and size != 0 and len(data) != 0:
    c.sendafter(": ", data)
  else:
    c.sendlineafter(": ", data)

def show(ix: int):
  global c
  print(f"[SHOW] ix:{ix}")
  print(c.recvuntil("1. Create"))
  c.sendlineafter("> ", b"2")
  c.sendlineafter("index: ", str(ix))

def quit():
  global c
  c.sendlineafter("> ", b"3")

  c.interactive()

def wait():
  global c
  i = input("WAITING INPUT...> ").strip()
  if i == "i":
    c.interactive()

## exploit ###########################################

def fuzz():
  global c

  while True:
    choice = random.choice([1,2])
    wait()
    if choice == 1:
      ix = random.randint(0,NUM_NOTES)
      size = random.randint(0,NOTESIZE)
      align = random.randint(0,NOTESIZE)
      #data = os.urandom(random.randint(0,size))
      data = b"A" * random.randint(0, size)
      create(ix, align, size, data)
    elif choice == 2:
      ix = random.randint(0,NUM_NOTES)
      show(ix)

## main ##############################################

if __name__ == "__main__":
    global c
    c = remote(rhp2['host'],rhp2['port'])
    fuzz()
    sys.exit(0)


