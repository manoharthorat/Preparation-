obj-m += demo_5.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /usr/modules/$(shell uname -r)/build M=$(PWD) clean

