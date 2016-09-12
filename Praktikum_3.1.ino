void setup(){
  DDRC=0x07;
  PORTC=0X07;
  DDRB=0x3F;
}
void loop(){
  if (digitalRead(A2)==HIGH)
  {
    if (digitalRead(A0)==LOW) //mengeset A0 bernilai low 
    {
      PORTB=0b0001;
      delay(1000);
      PORTB=0b0010;
      delay(1000);
      PORTB=0b0011;
      delay(1000);
      PORTB=0b0100;
      delay(1000);
      PORTB=0b0101;
      delay(1000);
      PORTB=0b0110;
      delay(1000);
      PORTB=0b0111;
      delay(1000);
      PORTB=0b1000;
      delay(1000);
      PORTB=0b1001;
      delay(1000);
      PORTB=0b1010;
      delay(1000);
      PORTB=0b1011;
      delay(1000);
      PORTB=0b1100;
      delay(1000);
      PORTB=0b1101;
      delay(1000);
      PORTB=0b1111;
      delay(1000);
      digitalRead(A0)==HIGH;
      }
    else if (digitalRead(A1)==LOW) //mengeset A1 bernilai low 
    {
      PORTB=0b1111;
      delay(1000);
      PORTB=0b1101;
      delay(1000);
      PORTB=0b1010;
      delay(1000);
      PORTB=0b1001;
      delay(1000);
      PORTB=0b1000;
      delay(1000);
      PORTB=0b0111;
      delay(1000);
      PORTB=0b0110;
      delay(1000);
      PORTB=0b0101;
      delay(1000);
      PORTB=0b0100;
      delay(1000);
      PORTB=0b0011;
      delay(1000);
      PORTB=0b0010;
      delay(1000);
      PORTB=0b0001;
      delay(1000);
      }
      else if(digitalRead(A2)==LOW)
      {
       PORTB=0x00;
      }
     }
     }
  
  
  
}

