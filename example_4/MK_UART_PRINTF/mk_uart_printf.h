/*
 * my_printf.h
 *
 * 	MK MINI PRINTF  v.1.0
 *
 *  Created on: 21 wrz 2022
 *      Author: Miros�aw Karda�
 */

#ifndef MK_UART_PRINTF_H_
#define MK_UART_PRINTF_H_

/* inkludy potrzebne do pracy funkcji bibliotecznych */
#include <stdio.h>



/* KONFIGURACJA UART'a                           */
/* wybierz porz�dan� pr�dko�� baud rate          */
/********* baud rate config **********************/
#define UART_BAUD 			9600
/*************************************************/






/******** nag��wki funkcji kt�re udost�pnia biblioteka *********/

/* jedyna funkcja publiczna biblioteki                     */
/* nale�y j� wywo�a� w sekcji "INIT" g��wnej funkcji main()  */
extern void printf_init( void );


#endif /* MK_UART_PRINTF_H_ */
