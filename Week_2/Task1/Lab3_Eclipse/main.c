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
#define PINA   *(( volatile u8*)0x39)

#define DDRB   *((u8*)0x37)
#define PORTB   *((u8*)0x38)
#define PINB   *(( volatile u8*)0x36)
int main(void)
{
    DDRB = 0b00000111;
    PORTB = 0b00000111;
    DDRA = 0b00000011;
    PORTA &=~ (1<<0);
    PORTA &=~ (1<<1);

    while(1)
    {
    if(((PINB>>0)&1) == 0)
    {
    	PORTA |= (1<<0);
    	PORTA &=~ (1<<1);

    }else if(((PINA>>0)&1) == 1)
    {
    	PORTA &=~ (1<<0);


    }
    if(((PINB>>1)&1) == 0)
        {
        	PORTA |= (1<<1);
        	PORTA &=~ (1<<0);

        }else if(((PINA>>1)&1) == 1)
        {
        	PORTA &=~ (1<<1);
        }
    if(((PINB>>2)&1) == 0)
            {
            	PORTA |= (1<<1);
            	PORTA |= (1<<0);

            }else if(((PINA>>1)&1) == 1)
            {
            	PORTA &=~ (1<<1);
            	PORTA &=~ (1<<0);
            }
    }
	return 0;
}

