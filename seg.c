/*****************************************************
This program was produced by the
CodeWizardAVR V1.25.3 Professional
Automatic Program Generator
© Copyright 1998-2007 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 4/13/2008
Author  : Ahmad                           
Company : Farahani                        
Comments: 


Chip type           : ATmega8
Program type        : Application
Clock frequency     : 1.000000 MHz
Memory model        : Small
External SRAM size  : 0
Data Stack size     : 256
*****************************************************/

#include <mega8.h>
#include <delay.h>

unsigned char q,w,r;
unsigned char e[]={63,6,91,79,102,109,125,7,127,111};
void main(void)
{  
DDRD=0xFF;
DDRB=0xFF;
DDRC=0x7F;
r=2;
shoro: 
PORTC.0=1;
PORTC.1=0;
PORTB=e[w];
delay_ms(50);
PORTC.0=0;
PORTC.1=1;   
PORTB=e[q];
delay_ms(50);
r=r-1;
//sdfsdfsd
if (r==0){
        q=q+1;
        r=2;
        }
if (q==10){
        q=0;
        w=w+1;
     }
        if (w==10){
        w=0;
        goto shoro;
        }
else goto shoro;
}
