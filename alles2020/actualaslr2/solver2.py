
import socket,ssl
from pwn import *

host = "7b000000b041785d15fb3a1e.challenges.broker2.allesctf.net"
port = 1337

context = ssl.SSLContext(ssl.PROTOCOL_TLSv1_2)
context.verify_mode = ssl.CERT_REQUIRED
context.check_hostname = True
context.load_default_certs()

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
ssl_sock = context.wrap_socket(s, server_hostname=host)
ssl_sock.connect((host,port))
r = remote.fromsocket(ssl_sock)

cons = 0xf1ea5eed
from time import time
nowtime=int(time())
states = [ (cons,nowtime+i,nowtime+i,nowtime+i)for i in range(-30,31)]
def prng(state):
    mask=(1<<64)-1
    a,b,c,d=state
    tmp1=a-((b>>5)|((b<<0x1b)&mask))
    tmp1&=mask
    a=b^((c>>0xf)|((c<<0x11)&mask))
    a&=mask
    tmp2=a+tmp1
    tmp2&=mask
    b=c+d
    b&=mask
    c=d+tmp1
    c&=mask
    d=tmp2
    return (tmp2,(a,b,c,d))
def dice(state):
    x,y=prng(state)
    return (x%6+1,y)

for i in range(0x16):
    newstates=[]
    for j in states:
        x,y= prng(j)
        newstates.append(y)
    states=newstates

def wait():
    r.recvuntil("Select menu Item:\n")

def throw_dice():
    wait()
    r.sendline("1")
    r.recvuntil("[>] Threw dice: ")
    ret=int(r.recvuntil("\n"))
    return ret

def create(data):
    wait()
    r.sendline("2")
    r.recvuntil("Enter your data (max length: 100):\n")
    r.sendline(data)
    r.recvuntil("[>] Created new entry at index ")
    return int(r.recvuntil("\n"))

def read(idx):
    wait()
    r.sendline("3")
    r.recvuntil(":\n")
    r.sendline(str(idx))
    r.recvuntil(". ")
    return r.recvuntil("\n")

while len(states)>1:
    newstates=[]
    x = throw_dice()
    for j in states:
        xx,y=dice(j)
        if xx==x:
            newstates.append(y)
    states=newstates
assert(len(states)==1)
realstate = states[0]
print(realstate)
