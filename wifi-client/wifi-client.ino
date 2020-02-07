#include <SoftwareSerial.h>
SoftwareSerial ESP(3, 2); // RX | TX

void setup()
{  Serial.begin(9600);
   ESP.begin(9600);
}

void loop()
{
   if (ESP.available())
   {
     char c = ESP.read() ;
     Serial.print(c);
   }
       
   if (Serial.available())
   {  char c = Serial.read();
      ESP.print(c);
   }
 }
