import struct

filename = input("filename > ")
with open(filename,"r") as f:
  line = f.readline()
  print(line)


data = line.split(' ')
with open("output","wb") as f:
  for d in data:
    if d=='':
      break
    f.write(struct.pack("B",int(d,16)))
