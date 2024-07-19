/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED HAMDY
 */
#include "stdTypes.h"
#include <util/delay.h>

#define DDRA   *((u8*)0x3A)
#define PORTA   *((u8*)0x3B)
#define PINA   *( volatile (u8*)0x39)


int main(void)
{

	DDRA |= (1<<0);
	DDRA |= (1<<1);
	DDRA |= (1<<2);
	DDRA |= (1<<3);
	DDRA |= (1<<4);
	DDRA |= (1<<5);
	DDRA |= (1<<6);
	DDRA |= (1<<7);
	while(1)
	{
		for(int i=0;i<=7;i++)
		{
			PORTA |= (1<<i);
			_delay_ms(200);
		}
		for(int i=0;i<=7;i++)
		{
		  PORTA &=~ (1<<i);
		  _delay_ms(200);
		}
	/* PORTA |= (1<<0);
	 _delay_ms(500);
	 PORTA |= (1<<1);
	 _delay_ms(500);
	 PORTA |= (1<<2);
	 _delay_ms(500);
	 PORTA |= (1<<3);
	 _delay_ms(500);
	 PORTA |= (1<<4);
	 _delay_ms(500);
	 PORTA |= (1<<5);
	 _delay_ms(500);
	 PORTA |= (1<<6);
	 _delay_ms(500);
	 PORTA |= (1<<7);
	 _delay_ms(500);
	 PORTA &=~ (1<<0);
	 _delay_ms(500);
	 PORTA &=~ (1<<1);
	 _delay_ms(500);
	 PORTA &=~ (1<<2);
	 _delay_ms(500);
	 PORTA &=~ (1<<3);
	 _delay_ms(500);
	 PORTA &=~ (1<<4);
	 _delay_ms(500);
	 PORTA &=~ (1<<5);
	 _delay_ms(500);
	 PORTA &=~ (1<<6);
	 _delay_ms(500);
	 PORTA &=~ (1<<7);
	 _delay_ms(500);
	 */
	}
    return 0;
}

