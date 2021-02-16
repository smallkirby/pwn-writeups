#!/usr/bin/env python
#encoding: utf-8;

"""
wrapper of rp++ to find gadgets not affected with FGKASLR.

pareparation:
  - configure RPPP_PATH for your env.

"""
RPPP_PATH = "$HOME/rp/rp-lin-x64"

from pwn import *
import os
import sys
import re

strippers = ["\x1b[0m", "\x1b[92m", "\x1b[91m"]

class section:
  def __init__(self, name, addr, off, size, entsize):
    self.name = name
    self.addr = addr
    self.off = off
    self.size = size
    self.entsize = entsize

  def __str__(self):
    return "{}: {} ~ {} ({}, {})".format(self.name, hex(self.addr), hex(self.addr + self.size), hex(self.off), hex(self.entsize))
  def __repr__(self):
    return "{}: {} ~ {} ({}, {})".format(self.name, hex(self.addr), hex(self.addr + self.size), hex(self.off), hex(self.entsize))

class gadget:
  def __init__(self, addr, info):
    self.addr = addr
    self.info = info

  def __str__(self):
    return "gad @ {}".format(hex(self.addr))

sections = []
gadgets = []

def binsearch(addr):
  l = 0
  r = len(sections) - 1
  while l < r:
    m = (l + r) // 2
    try:
      if sections[m].addr <= addr and addr <= sections[m+1].addr:
        return m
      elif addr < sections[m].addr:
        r = m - 1
      else:
        l = m + 1
    except:
      print("{} {} {}".format(hex(l), hex(m), hex(r)))
  return l

def check_have_text(addr):
  idx = binsearch(addr)
  if sections[idx].addr + sections[idx].size < addr:
    return False
  elif ".text." in sections[idx].name:
    return True
  print("[?] Unknown({}): {}".format(hex(addr), sections[idx]))
  return False

# they should be stored in addr order
def parse_sections(rl):
  global sections
  for ix in range(len(rl)//2):
    l1 = rl[ix*2]
    l2 = rl[ix*2+1]
    l = l1[l1.index("]")+1:].split() + l2.split()
    if "X" not in l[6]:
      continue
    sections.append(section(l[0], int("0x"+l[2], 16), int("0x"+l[3], 16), int("0x"+l[4], 16), int("0x"+l[5], 16)))
  sections = sorted(sections, key=lambda s: s.addr)

def parse_gadgets(gl):
  global gadgets
  for l in gl:
    ls = l.split()
    try:
      gadgets.append(gadget(int(ls[0][:-1], 16), " ".join(ls[1:])))
    except:
      continue

def strip_rp(a):
  idx = -1
  for i in range(0x30):
    try:
      idx = a[i].index("gadgets found.")
      break
    except ValueError:
      continue
  if idx == -1:
    print("[ERROR] something is wrong with rp++")
    exit(1)
  a = a[idx + 1:]

  tmp = []
  for l in a:
    tmp.append(re.sub('\x1b\[\d+m', '', l))
  return tmp


if __name__ == "__main__":
  args = sys.argv[1:]
  try:
    fidx = args.index("-f")
  except ValueError:
    print("[ERROR] specify filename with -f option")
    exit(1)
  fname = args[fidx + 1]
  if not os.path.exists(fname):
    print("[ERROR] file {} doesn't exists".format(fname))
    exit(1)

  # get readelf section information
  readelf_res = os.popen("readelf -S {}".format(fname)).read().splitlines()[5+2:-5]
  print("[+] parsing sections...")
  parse_sections(readelf_res)
  print("[+] found {} sections".format(hex(len(sections))))

  # get gadget information
  if "--unique" in args:
    print("[ERROR] don't specify unique option")
    exit(1)
  try:
    roption = args[args.index("-r") + 1]
  except ValueError:
    print("[ERROR] specify gadget length with -r option")
    exit(1)
  print("[+] collecting gadgets...")
  rp_res = strip_rp(os.popen("{} -f {} -r {} ".format(RPPP_PATH, fname, roption)).read().splitlines())
  print("[+] parsing gadgets...")
  parse_gadgets(rp_res)

  # print result
  for g in gadgets:
    if not check_have_text(g.addr):
      print("{}: {}".format(hex(g.addr), g.info))
