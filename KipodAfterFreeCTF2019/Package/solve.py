orig = "n9ain9ain9ai_n9aik9l"
hashed = ""

for a in orig:
  if ord('a')<=ord(a)<=ord('z'):
    hashed += chr(ord(a)+2)
  elif ord('0')<=ord(a)<=ord('9'):
    hashed += chr(ord(a)-5)
  else:
    hashed += a
print("hashed: "+hashed)
