obj-m += prusdr.o
prusdr-objs := main.o
mod_name=prusdr.ko
ccflags-y := -std=gnu99 -Wno-declaration-after-statement

all: module

module:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules $(ccflag-y)

clean:
	@make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean > /dev/null


