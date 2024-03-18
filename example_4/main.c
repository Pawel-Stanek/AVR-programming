/*
 * main.c    ATmega328p    F_CPU = 16000000 Hz
 *
 * Created on: 25.01.2024
 *     Author: Paweł Stanek
 *
 *     linker: -Wl,--gc-sections
*/


#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#include "common.h"
#include "MK_UART_PRINTF/mk_uart_printf.h"

#define arr_SIZE(x) 	(sizeof(x)/sizeof(x[0]))
//#define arr_SIZE(x) (sizeof(x)/sizeof( *x ))


//
char arr[] = {1,2,3,4,5};


uint32_t ip_addr;
uint8_t ip_addr4[4] = { 10, 0, 0, 26 };   // 4 element array


uint8_t * ptr = (uint8_t*)&ip_addr;


int main( void ) {

	printf_init();	// UART(0) initialization of printf() function
	mDelay(100);
	printf("\r\nATmega328(P) - Hello pointers\r\n\r\n");

	printf("elemntes in array:\r\n");
	printf("%d,%d,%d,%d,%d\r\n", arr[0], arr[1], arr[2], arr[3], arr[4] );

	// 192.168.3.100
	ptr[3] = 100;
	ptr[2] = 2;
	ptr[1] = 168;
	ptr[0] = 192;


	printf("\rmaking ip address by pointers:\r\n");
	printf("ip_addr: %d,%d,%d,%d\r\n", ptr[0], ptr[1], ptr[2], ptr[3] );

	printf("\rconnection of numbers in ip adress:\r\n");
	printf("%lu\r\n", ip_addr );

	printf("\rmaking ip address by pointers from array (ip_addr4):\r\n");
	printf("ip_addr4: %d,%d,%d,%d\r\n", ip_addr4[0], ip_addr4[1], ip_addr4[2], ip_addr4[3] );

	ptr[0] = ip_addr4[0];
	ptr[1] = ip_addr4[1];
	ptr[2] = ip_addr4[2];
	ptr[3] = ip_addr4[3];

	printf("\rgetting ip address from array (ip_addr4):\r\n");
	printf("ip_addr: %d,%d,%d,%d\r\n", ptr[0], ptr[1], ptr[2], ptr[3] );
	printf("%lu\r\n", ip_addr );


	mDelay(1000);


	while(1) {

	}
}






