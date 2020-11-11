# -*- coding: utf-8 -*-


def KSA(key):
    # key から256マスの変換テーブル S を作る
    S = range(256)
    j = 0
    for i in xrange(256):
        j = (j + S[i] + ord(key[i % len(key)])) % 256
        S[i], S[j] = S[j], S[i]
    return S

def PRGA(S):
    # S を更新しながら1バイトずつ数字を吐き出すジェネレータを返す
    i, j = 0, 0
    while True:
        i = (i + 1) % 256
        j = (j + S[i]) % 256
        S[i], S[j] = S[j], S[i]
        K = S[(S[i] + S[j]) % 256]
        yield K

def RC4(data, key):
    # data がメッセージなら暗号化、暗号文なら復号する
    S = KSA(key)
    gen = PRGA(S)
    data = bytearray(data)
    result = bytearray(c ^ n for c, n in zip(data, gen))
    return str(result)

encrypted_str = "A7A91F1EA45AE0BE03735A09577DA594230BDE854B"
en0 = "\xa7\xa9\x1f\x1e\xa4\x5a\xe0\xbe\x03\x73\x5a\x09\x57\x7d\xa5\x94\x23\x0b\xde\x85\x4b"
en1 = "\x02\x0c\x14\x12\x63\x6d\x75\x73\x63\x3e\x67\x39\x75\x73"
en2 = ""
en3 = "\xa7\xa9\x1f\x1e\xa4\x5a\xe0\xbe\x03\x73\x5a\x09\x57\x7d\xa5\x94\x23\x0b\xde\x85\x4b"
key = "0x7fffffff"

for i,c in enumerate(en1):
  en2 += chr(ord(c)+0x20)
print(en2)

print(len(encrypted_str))
print(RC4(en3,key))
