CC = sdcc -mmcs51 \
	--code-loc 0x0000 --code-size 0x3800 \
	--xram-loc 0x0000 --xram-size 0x0400 \
	--data-loc 0x30 \
	--idata-loc 0x80
EFM8LOAD = python3 efm8load.py
TTY = /dev/ttyUSB0

flash: firmware.ihx
	${EFM8LOAD} -p ${TTY} -w firmware.ihx

clean:
	rm -f *.rel *.elf *.map *.ihx *.asm *.lst *.sym

.SUFFIXES: .c .asm .elf .ihx .rel

firmware.ihx: ${OBJ}
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ ${OBJ} ${LIBS}

.c.rel:
	${CC} ${CFLAGS} -c $<
