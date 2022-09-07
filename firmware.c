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

__sbit __at 0xFE P0MASK;
__sbit __at 0xFD P0MAT;
__sbit __at 0x80 P0;
__sbit __at 0xF1 P0MDIN;
__sbit __at 0xA4 P0MDOUT;
__sbit __at 0xD4 P0SKIP;

__sbit __at 0xEE P1MASK;
__sbit __at 0xED P1MAT;
__sbit __at 0x90 P1;
__sbit __at 0xF2 P1MDIN;
__sbit __at 0xA5 P1MDOUT;
__sbit __at 0xD5 P1SKIP;

__sbit __at 0xA0 P2;
__sbit __at 0xF3 P2MDIN;
__sbit __at 0xA6 P2MDOUT;

int
main(void)
{
	//P1 = 0xFF;
	while(1);
}
