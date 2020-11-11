# No Risc No Future
Running a program in a foreign architecture can feel like an arcane, hard to debug endeavor.

To help you get started, we list some handy commands to bootstrap a more familiar setup.

qemu-user allows exposing a gdb stub before running the binary. This can be connected to from gdb.

In a first shell, expose the stub:
```
./qemu-mipsel-static -g 1234 no_risc_no_future
```

In a second shell, connect to the waiting process:
```
gdb-multiarch -ex "break main" -ex "target remote localhost:1234" -ex "continue" ./no_risc_no_future
```

Now the process should break at main and you can debug the process.

Enjoy!