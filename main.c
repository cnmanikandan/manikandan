/*
 * led_blinking.c
 *
 * Created: 4/5/2018 6:18:56 AM
 * Author : MANI
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 14745600
void port_init(void)
{
	DDRB=0xFF;
	PORTB=0x00;
}


int main(void)
{
   port_init();
    while (1) 
    {

	PORTB=0xFF;
	_delay_ms(1000);
	PORTB=0x00;
	_delay_ms(1000);
	PORTB=0x01;
	_delay_ms(1000);
	PORTB=0x02;
	_delay_ms(1000);
	PORTB=0x04;
	_delay_ms(1000);
	PORTB=0x08;
	_delay_ms(1000);
	PORTB=0x10;
	_delay_ms(1000);
	PORTB=0x20;
	_delay_ms(1000);
	PORTB=0x40;
	_delay_ms(1000);
	PORTB=0x80;
	_delay_ms(1000);
	PORTB=0x03;
	_delay_ms(1000);
	PORTB=0x06;
	_delay_ms(1000);
	PORTB=0x0C;
	_delay_ms(1000);
	PORTB=0x18;
	_delay_ms(1000);
	PORTB=0x30;
	_delay_ms(1000);
	PORTB=0x60;
	_delay_ms(1000);
	PORTB=0xC0;
	_delay_ms(1000);
	PORTB=0x07;
	_delay_ms(1000);
	PORTB=0x0E;
	_delay_ms(1000);
	PORTB=0x1C;
	_delay_ms(1000);
	PORTB=0x38;
	_delay_ms(1000);
	PORTB=0x70;
	_delay_ms(1000);
	PORTB=0xE0;
	_delay_ms(1000);
	PORTB=0x0F;
	_delay_ms(1000);
	PORTB=0xF0;
	_delay_ms(1000);
	PORTB=0x81;
	_delay_ms(1000);
	PORTB=0x42;
	_delay_ms(1000);
	PORTB=0x24;
	_delay_ms(1000);
	PORTB=0x18;	
	_delay_ms(1000);
	PORTB=0x24;
	_delay_ms(1000);
	PORTB=0x42;
	_delay_ms(1000);
	PORTB=0x81;
	_delay_ms(1000);
	PORTB=0xC3;
	_delay_ms(1000);
	PORTB=0x66;
	_delay_ms(1000);
	PORTB=0x3C;
	_delay_ms(1000);
	PORTB=0x66;	
	_delay_ms(1000);
	PORTB=0xC3;
	_delay_ms(1000);


    }
}

