cp /glibc/2.23/64/lib/ld-2.23.so /tmp/ld-2.23.so
patchelf --set-interpreter /tmp/ld-2.23.so ./babyheap
LD_PRELOAD=/glibc/2.23/64/lib/libc.so.6 ./babyheap
