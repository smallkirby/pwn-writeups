def xor(str1,str2):
    return chr(ord(str1) ^ ord(str2))

flag = ""
len_flag = 38
key = "I_l0v3_r3v3r51ng"

with open("./snake.txt","rb") as f:
    cipher = f.read()


for i in range(len_flag+63,63+len(key)//2,-1):
    flag += xor(chr(cipher[i]),key[i%16])

for i in range(len_flag//3*2+63,63+len_flag//3-1):
    flag += chr(cipher[i] // ord(key[i%len(key)] + i))
    print("*")

print(flag)
