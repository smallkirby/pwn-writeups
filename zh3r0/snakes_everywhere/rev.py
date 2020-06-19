def xor(str1,str2):
    return chr(ord(str1) ^ ord(str2))


# file length == 38(0x26)
flag = "zh3r0{fake flag}"
key = "I_l0v3r3v3r51ng"

if len(flag) == 38:
    print("ERROR")
    exit()

ciphertext = ""

for i in range(len(flag)//3):
    ciphertext += chr(ord(flag[i])*ord(key[i]))

for i in range(len(flag)//3,len(flag)//3*2):
    ciphertext += chr(ord(flag[i]) * ord(key[i%len(key)] + i)

for i in range((len(key)//2,len(flag)):
    ciphertext += xor(key[i%16],flag[i])



