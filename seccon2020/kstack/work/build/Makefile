obj-m += kstack.o
all:
		make -C /home/wataru/buildroot-2020.02.5/output/build/linux-4.19.91/ M=$(PWD)  modules
		EXTRA_CFLAGS="-g DDEBUG"
clean:
		make -C /home/wataru/buildroot-2020.02.5/output/build/linux-4.19.91/ M=$(PWD)  clean
