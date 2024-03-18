/*
 * common.c
 *
 *  Created on: 15 lut 2024
 *      Author: PC-Komp
 */


#include <avr/io.h>
#include <util/delay.h>

#include "common.h"



void mDelay( uint16_t ms ) {
	while( ms-- ) _delay_ms(1);
}


