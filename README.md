EFM8BB51
========
Library for the EFM8 microcontroller model "BB51".

In order to flash:

1. Connect P0.4 UART0 TX to USB-UART adapter TX;
2. Connect P0.5 UART0 RX to USB-UART adapter RX;
3. Connect C2D P2.0 to GND;
3. Connect RSTb to GND shortly (or press the reset button);
4. Run `make flash TTY=/dev/ttyUSB0` (or other TTY port);

For complete explanations, see the manual of the EFM8BB51 and efm8load:

<https://www.silabs.com/documents/public/reference-manuals/efm8bb51-rm.pdf>

<https://fishpepper.de/2016/10/15/efm8-bootloader-flash-tool-efm8load-py/>
