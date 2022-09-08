#include "libc.h"
#include "libefm8bb51.h"

//void __reset_handler() { }

//char *__bss_end = (char *)0x00;
//char *__bss_start = (char *)0x00;
//char *__data_end = (char *)0x00;
//char *__data_load_start = (char *)0x00;
//char *__data_start = (char *)0x00;

//void __gptr_cmp(void) { __reset_handler(); }
//void _gptrget(void) { __reset_handler(); }
//void _gptrput(void) { __reset_handler(); }
//void _mcs51_genRAMCLEAR(void) { __reset_handler(); }
//void _mcs51_genXINIT(void) { __reset_handler(); }
//void _mcs51_genXRAMCLEAR(void) { __reset_handler(); }
//void _sdcc_gsinit_startup(void) { __reset_handler(); }

__sfr __at (0xE1) XBR0;
#define XBR0_SYSCKE	(1u << 7)
#define XBR0_CP1AE	(1u << 6)
#define XBR0_CP1E	(1u << 5)
#define XBR0_CP0AE	(1u << 4)
#define XBR0_CP0E	(1u << 3)
#define XBR0_SMB0E	(1u << 2)
#define XBR0_SPI0E	(1u << 1)
#define XBR0_URT0E	(1u << 0)

__sfr __at (0xFE) P0MASK;
__sfr __at (0xFD) P0MAT;
__sfr __at (0x80) P0;
__sbit __at (0x80) P0_0;
__sbit __at (0x81) P0_1;
__sbit __at (0x82) P0_2;
__sbit __at (0x83) P0_3;
__sbit __at (0x84) P0_4;
__sbit __at (0x85) P0_5;
__sbit __at (0x86) P0_6;
__sbit __at (0x87) P0_7;
__sfr __at (0xF1) P0MDIN;
__sfr __at (0xA4) P0MDOUT;
__sfr __at (0xD4) P0SKIP;

__sfr __at (0xEE) P1MASK;
__sfr __at (0xED) P1MAT;
__sfr __at (0x90) P1;
__sbit __at (0x90) P1_0;
__sbit __at (0x91) P1_1;
__sbit __at (0x92) P1_2;
__sbit __at (0x93) P1_3;
__sbit __at (0x94) P1_4;
__sbit __at (0x95) P1_5;
__sbit __at (0x96) P1_6;
__sbit __at (0x97) P1_7;
__sfr __at (0xF2) P1MDIN;
__sfr __at (0xA5) P1MDOUT;
__sfr __at (0xD5) P1SKIP;

__sfr __at (0xA0) P2;
__sbit __at (0xA0) P2_0;
__sfr __at (0xF3) P2MDIN;
__sfr __at (0xA6) P2MDOUT;

int
main(void)
{
	P0_0 = 1;
	P0_1 = 1;
	P0_2 = 1;
	P0_3 = 1;
	P0_6 = 1;
	P0_7 = 1;
	P1_0 = 1;
	P1_1 = 1;
	P1_2 = 1;
	P1_3 = 1;
	P1_4 = 1;
	while(1);
}
