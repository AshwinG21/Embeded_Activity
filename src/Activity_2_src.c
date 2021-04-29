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