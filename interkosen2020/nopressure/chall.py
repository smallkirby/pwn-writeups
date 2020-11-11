from Crypto.Cipher import ARC4
from hashlib import sha256
from base64 import b64encode
import zlib
import os

flag = open("./flag.txt", "rb").read()

nonce = os.urandom(32)
while True:
    m = input("message: ")
    arc4 = ARC4.new(sha256(nonce + m.encode()).digest())
    c = arc4.encrypt(zlib.compress(flag + m.encode()))
    print("encrypted! :", b64encode(c).decode())
