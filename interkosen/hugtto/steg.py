from PIL import Image
from secret import flag
from datetime import datetime
import tarfile
import sys

import random

random.seed(int(datetime.now().timestamp()))

bin_flag = []
for c in flag:
    for i in range(8):
        bin_flag.append((ord(c) >> i) & 1)

img = Image.open("./emiru.png")
new_img = Image.new("RGB", img.size)

w, h = img.size

i = 0
for x in range(w):
    for y in range(h):
        r, g, b = img.getpixel((x, y))
        rnd = random.randint(0, 2)
        if rnd == 0:
            r = (r & 0xFE) | bin_flag[i % len(bin_flag)]
            new_img.putpixel((x, y), (r, g, b))
        elif rnd == 1:
            g = (g & 0xFE) | bin_flag[i % len(bin_flag)]
            new_img.putpixel((x, y), (r, g, b))
        elif rnd == 2:
            b = (b & 0xFE) | bin_flag[i % len(bin_flag)]
            new_img.putpixel((x, y), (r, g, b))
        i += 1

new_img.save("./steg_emiru.png")
with tarfile.open("stegano.tar.gz", "w:gz") as tar:
    tar.add("./steg_emiru.png")
    tar.add(sys.argv[0])
