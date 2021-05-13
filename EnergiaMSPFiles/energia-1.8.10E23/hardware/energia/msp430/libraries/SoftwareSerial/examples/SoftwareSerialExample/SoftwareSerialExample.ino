/*
  Software serial multple serial test
 
 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.
 
 The circuit: 
 * RX is digital pin P1.4 (connect to TX of other device)
 * TX is digital pin P1.3 (connect to RX of other device)
 
 created back in the mists of time
 modified 25 May 2012
 by Tom Igoe
 based on Mikal Hart's example
 modified again 8 Feb 2013
 by Brian Baker for MSP430
 
 This example code is in the public domain.
 
 */
#include <SoftwareSerial.h>


int test_array[10] = {1,2,3,4,5,6,7,8,9,10};

void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  for(int i=0; i < 10; i++)
  {
    Serial.print(test_array[i]);
  }
}

void loop() // run over and over
{
  if (Serial.available())
    Serial.write(Serial.read());
}
