import angr
import claripy
import time

start = time.time()

proj = angr.Project("./rsa", auto_load_libs=False)

input_len = 29 # without TWCTF{}

flag_chars = [claripy.BVS("flag_%d" % i, 8) for i in range(input_len)]
flag = claripy.Concat(* [claripy.BVV(c, 8) for c in "TWCTF{"] + flag_chars + [claripy.BVV(b'}')])
print(flag)

#st = proj.factory.full_init_state(args=["./rsa", flag], add_options=angr.options.unicorn)
st = proj.factory.full_init_state(args=["./rsa"], add_options=angr.options.unicorn, stdin=flag)

# allow only printable ascii
for c in flag_chars:
  st.solver.add(c<0x7f)
  st.solver.add(c>0x20)

sm = proj.factory.simulation_manager(st)
sm.run()

y = []
for x in sm.deadended:
  if b"Correct!" in x.posix.dumps(1): # only correct path shows "win" to stdout
    y.append(x)

print(y)
valid = y[0].posix.dumps(0)
print(valid)


print("\ntime: {} sec".format(time.time()-start))
