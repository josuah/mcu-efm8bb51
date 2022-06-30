CFLAGS =
OBJ = firmware.rel libefm8bb51.rel libc.rel

all: firmware.ihx

ocd:
	${OPENOCD}
gdb:
	${GDB} -x script.gdb

include libefm8bb51.mk
