/*
 * my_printf.h
 *
 * 	MK MINI PRINTF  v.1.0
 *
 *  Created on: 21 wrz 2022
 *      Author: Miros³aw Kardaœ
 */

#ifndef MK_UART_PRINTF_H_
#define MK_UART_PRINTF_H_

/* inkludy potrzebne do pracy funkcji bibliotecznych */
#include <stdio.h>



/* KONFIGURACJA UART'a                           */
/* wybierz porz¹dan¹ prêdkoœæ baud rate          */
/********* baud rate config **********************/
#define UART_BAUD 			9600
/*************************************************/






/******** nag³ówki funkcji które udostêpnia biblioteka *********/

/* jedyna funkcja publiczna biblioteki                     */
/* nale¿y j¹ wywo³aæ w sekcji "INIT" g³ównej funkcji main()  */
extern void printf_init( void );


#endif /* MK_UART_PRINTF_H_ */
