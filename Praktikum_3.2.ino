void setup(){
  DDRC=0x00;
  PORTC=0X07;
  DDRB=0x0F;
}
void loop(){
if (digitalRead(A2)==LOW) //S1
{
  PORTB=0x00;
}

else
{
  if (digitalRead(A0)==LOW) //S1
  {
    PORTB=0x01;
    delay(1000);
    PORTB=0x02;
    delay(1000);
    PORTB=0x04;
    delay(1000);
    PORTB=0x08;
    delay(1000);
  }
  else if (digitalRead(A1)==LOW) //S2 
  {
    digitalRead(A0)==HIGH;
    PORTB=0x08;
    delay(1000);
    PORTB=0x04;
    delay(1000);
    PORTB=0x02;
    delay(1000);
    PORTB=0x01;
    delay(1000);
  }
  else if (digitalRead(A2)==LOW) //RESET
  {
    PORTB=0x00;
  }
}
}
