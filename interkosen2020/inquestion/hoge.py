import angr
import claripy
import time

start = time.time()

proj = angr.Project("./edited-chall", auto_load_libs=False)

input_len =  30 - len("KosenCTF..}") # without FLAG{}

flag_chars = [claripy.BVS("flag_%d" % i, 8) for i in range(input_len)]
flag = claripy.Concat(* [claripy.BVV(c, 8) for c in "KosenCTF{"] + flag_chars + [claripy.BVV(b'}\n')])
print(flag)

st = proj.factory.full_init_state(args=["./edited-chall"], add_options=angr.options.unicorn,stdin=flag)

# allow only printable ascii
for c in flag_chars:
  st.solver.add(c<0x7f)
  st.solver.add(c>0x20)

sm = proj.factory.simulation_manager(st)
sm.run()

y = []
for x in sm.deadended:
  if b"Wrong" not in x.posix.dumps(1): # only correct path shows "win" to stdout
    y.append(x)

print(y)
valid = y[0].posix.dumps(0)
print(valid)


print("\ntime: {} sec".format(time.time()-start))
