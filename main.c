/*
 * main.c    ATmega8    F_CPU = 18432000 Hz
 *
 * Created on: 18.01.2024
 *     Author: Paweł Stanek
*/
#include <avr/io.h>
#include <util/delay.h>


int main( void ) {

    DDRB |= ( 1 << PB5 );

    while ( 1 ) {

        PORTB ^= ( 1 << PB5 );
        _delay_ms( 100 );
    }
}
