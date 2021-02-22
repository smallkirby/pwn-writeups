#!/bin/sh;
cwd=$(pwd)
cd /home/wataru/buildroot-2020.08.1/output/build/linux-5.4.58/
patch  -b ./arch/x86/net/bpf_jit_comp.c -i $cwd/bpf_jit_comp.c.patch
patch  -b ./include/linux/tnum.h -i $cwd/tnum.h.patch
patch  -b ./include/uapi/linux/bpf.h -i $cwd/bpf.h.patch
patch  -b ./kernel/bpf/core.c -i $cwd/core.c.patch
patch  -b ./kernel/bpf/disasm.c -i $cwd/disasm.c.patch
patch  -b ./kernel/bpf/tnum.c -i $cwd/tnum.c.patch
patch  -b ./kernel/bpf/verifier.c -i $cwd/verifier.c.patch