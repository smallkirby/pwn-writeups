#!/bin/sh;
cwd=$(pwd)
cd /home/wataru/buildroot-2020.08.1/output/build/linux-5.4.58/
patch -R -b ./arch/x86/net/bpf_jit_comp.c -i $cwd/bpf_jit_comp.c.patch -Y .patch-bkup/
patch -R -b ./include/linux/tnum.h -i $cwd/tnum.h.patch -Y .patch-bkup/
patch -R -b ./include/uapi/linux/bpf.h -i $cwd/bpf.h.patch -Y .patch-bkup/
patch -R -b ./kernel/bpf/core.c -i $cwd/core.c.patch -Y .patch-bkup/
patch -R -b ./kernel/bpf/disasm.c -i $cwd/disasm.c.patch -Y .patch-bkup/
patch -R -b ./kernel/bpf/tnum.c -i $cwd/tnum.c.patch -Y .patch-bkup/
patch -R -b ./kernel/bpf/verifier.c -i $cwd/verifier.c.patch -Y .patch-bkup/