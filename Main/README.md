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


#include<avr/io.h>

bool converted;

void setup() 
{
  Serial.begin (115200);
  Serial.println ("ADC Polling Example");

  //  ADC Setup
  ADCSRA = 0b10000111;      // C1:: Enable ADC, pre-scaler = 128
  ADMUX  = 0b01000000;      // C2:: Use AVCC and A0 as input to ADC
  
  converted = true;
}

void loop() 
{
  if (converted) {
      bitSet(ADCSRA, ADSC); // C3:: start converting voltage on A0
      converted = false;
    }

    if (bit_is_clear(ADCSRA, ADSC)) {
      int value = ADC;      // C4:: when ADSC = 0 read result
      
      converted = true;
      Serial.println (value);
      delay (500);         // C5:: give you time to see the ouput
    }
}






