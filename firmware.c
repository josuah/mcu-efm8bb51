#include "libc.h"
#include "libefm8bb51.h"

void __reset_handler() {
	main();
}

char *__bss_end = (char *)0x;
char *__bss_start = (char *)0x;
char *__data_end = (char *)0x;
char *__data_load_start = (char *)0x;
char *__data_start = (char *)0x;

void __gptr_cmp(void) { __reset_handler(); }
void _gptrget(void) { __reset_handler(); }
void _gptrput(void) { __reset_handler(); }
void _mcs51_genRAMCLEAR(void) { __reset_handler(); }
void _mcs51_genXINIT(void) { __reset_handler(); }
void _mcs51_genXRAMCLEAR(void) { __reset_handler(); }
void _sdcc_gsinit_startup(void) { __reset_handler(); }

int
main(void)
{
	return 0;
}
