/*
 * main.c    ATmega328p    F_CPU = 16000000 Hz
 *
 * Created on: 25.01.2024
 *     Author: Paweł Stanek
*/



#include <avr/io.h>
#include <util/delay.h>




int main(void) {
    DDRC = 0xFF;  				  // Set all pins of port C as outputs.
    DDRD &= ~(1 << PD6); 		 // Set pin PD2 as input (button).

    uint8_t a = 1; 			   // Variable controlling LEDs (set to 1 to initially turn off the LEDs).
    uint8_t buttonState = 1;  // Button state (1 means not pressed).

    while (1) {

        uint8_t currentButtonState = PIND & (1 << PD6);	 // Read the state of the button.


        if (!currentButtonState && buttonState) {	  // If the button is pressed, and in the previous iteration it was not pressed.
            a = !a; 								 // Change the state of variable 'a'.
            _delay_ms(100);  					    // the delay (debouncing).
        }


        PORTC = (a == 1) ? 0b00000111 : 0b00111000; // Set LEDs according to the value of variable 'a'.


        buttonState = currentButtonState;         // Update the button state in the previous iteration.
    }

    return 0;
}


