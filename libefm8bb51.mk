OBJCOPY = sdobjcopy
CC = sdcc -mmcs51
LD = sdld
EFM8LOAD = python3 efm8load.py

flash: firmware.ihx
	${EFM8LOAD} -p /dev/ttyU0 -w firmware.ihx

clean:
	rm -f *.rel *.elf *.map *.ihx *.asm *.lst *.sym

.SUFFIXES: .c .asm .elf .ihx .rel

firmware.ihx: ${OBJ}
	${LD} ${LDFLAGS} -mi $@ ${OBJ} ${LIBS}

.c.rel:
	${CC} ${CFLAGS} -c $<
