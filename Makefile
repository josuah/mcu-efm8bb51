CFLAGS =
OBJ = firmware.rel

all: firmware.ihx

ocd:
	${OPENOCD}
gdb:
	${GDB} -x script.gdb

include libefm8bb51.mk
