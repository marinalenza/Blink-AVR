/*
 * blink.cpp
 *
 * Created: 31/05/2018 18:51:21
 * Author : Marina
 */ 

#define F_CPU 16000000UL //Clock frequency

#include <avr/io.h>	     //registers
#include "util/delay.h"	    //delay functions

int main(void)			 
{
	DDRB = 0x20;	 //PB5 as output
	
	while(1)			 
	{
		PORTB^=(1<<PB5); //blink PB5
		_delay_ms(1000); //wait 1 second
	}
}

