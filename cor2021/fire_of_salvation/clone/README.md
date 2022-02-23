Difficulty: insane

Author: D3v17 and FizzBuzz101

Description:
```
Elastic objects in kernel have more power than you think. A kernel config file is provided as well, but some of the important options include:

CONFIG_SLAB=y
CONFIG_SLAB_FREELIST_RANDOM=y
CONFIG_SLAB_FREELIST_HARDEN=y
CONFIG_STATIC_USERMODEHELPER=y
CONFIG_STATIC_USERMODEHELPER_PATH=""
CONFIG_FG_KASLR=y

SMEP, SMAP, and KPTI are of course on. Note that this is an easier variation of the Wall of Perdition challenge.

hint: Using the correct elastic object you can achieve powerful primitives such as arb read and arb write. While arb read for this object has been documented, arb write has not to the extent of our knowledge (it is not a 0 day tho so don't worry).
```

Flag: `corctf{MsG_MsG_c4n_d0_m0r3_th@n_sPr@Y}`
