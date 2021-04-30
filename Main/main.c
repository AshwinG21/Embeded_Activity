#define F_CPU 1000000UL
#include <avr/io.h>
#include<util/delay.h>



int main(void)
{
	DDRB |= (1<<DDB2)|(1<<DDB3);
	
	while (1)
	{
		PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		_delay_ms(1000);
			
		PORTB &=~(1<<PORTB2);
		PORTB |=(1<<PORTB3);
		_delay_ms(1000);
	}
}



\\program for ADC output

#define F_CPU 1000000UL
#include <avr/io.h>
#include<util/delay.h>



int main(void)
{
	DDRB |= (1<<DDB2)|(1<<DDB3);
	
	while (1)
	{
		PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		_delay_ms(1000);
			
		PORTB &=~(1<<PORTB2);
		PORTB |=(1<<PORTB3);
		_delay_ms(1000);
	}
}



\\program for timer

#define F_CPU 1000000UL
#include <avr/io.h>
#include<util/delay.h>



int main(void)
{
	DDRB |= (1<<DDB2)|(1<<DDB3);
	
	while (1)
	{
		PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		_delay_ms(1000);
			
		PORTB &=~(1<<PORTB2);
		PORTB |=(1<<PORTB3);
		_delay_ms(1000);
	}
}



\\program for USART

#define F_CPU 1000000UL
#include <avr/io.h>
#include<util/delay.h>



int main(void)
{
	DDRB |= (1<<DDB2)|(1<<DDB3);
	
	while (1)
	{
		PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		_delay_ms(1000);
			
		PORTB &=~(1<<PORTB2);
		PORTB |=(1<<PORTB3);
		_delay_ms(1000);
	}
}
