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

#define DDRD   *((u8*)0x31)

int main(void)
{
	DDRA = 255;
	u8 SSeg[]={0x3F,0x06,0x5B,0x4F,0X66,0x6D,0x7D,0x07,0x7F,0x6F},PinState1=0,PinState2=0,Counter=0;
	DDRB = 0b11111100;
	PORTB = 0b00000011;
  while(1)
  {
	  PORTA =SSeg[Counter];



      if(((PINB>>0)&1) == 0 )
      {
    	  Counter++;
    	  PORTA =SSeg[Counter];
    	  while(((PINB>>0)&1) == 0);
    	  if(Counter>9)
    	      	  Counter =9;
      }
      else if(((PINB>>1)&1) == 0)
      {
          Counter--;
          PORTA =SSeg[Counter];
          while(((PINB>>1)&1) == 0);
          if(Counter>9)
              	  Counter =0;
      }
      if(Counter>9)
    	  Counter =9;

  }
  return 0;
}
