/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: AHMED HAMDY
 */
#include "stdTypes.h"
#include <util/delay.h>

#define DDRA   *((u8*)0x3A)
#define PORTA   *((u8*)0x3B)
#define PINA   *((u8*)0x39)


int main(void)
{

	DDRA |= (1<<0);
	while(1)
	{
	 PORTA |= (1<<0);
	 _delay_ms(1000);
	 PORTA &=~ (1<<0);
	 _delay_ms(1000);
	}
    return 0;
}
