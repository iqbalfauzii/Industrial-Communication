
#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

int ledWhite = 13 ;
int ledGreen = 14;
int ledRed = 12;
int ledBlue = 27;
int buzzer = 26;
int brightness =0;





void setup() {
  // put your setup code here, to run once:

SerialBT.begin("Smart Light");
Serial.begin(115200);
pinMode(ledWhite,OUTPUT);
pinMode(ledGreen,OUTPUT);
pinMode(ledRed,OUTPUT);
pinMode(ledBlue,OUTPUT);
pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  

if(SerialBT.available())
{


  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1000);
 
  
  int y = SerialBT.read();        
  Serial.write(y);
  

  


if (char(y)=='1')

{

digitalWrite(ledWhite,HIGH);
digitalWrite(ledRed,LOW);
digitalWrite(ledBlue,LOW);
digitalWrite(ledGreen,LOW);




  }

  if (char(y)=='0')

{

digitalWrite(ledWhite,LOW);

  }


if (char (y)=='2')

{
     digitalWrite(ledWhite,HIGH);
     delay(1000);
     digitalWrite(ledWhite,LOW);
     delay(1000);
     digitalWrite(ledWhite,HIGH);
     delay(1000);
     digitalWrite(ledWhite,LOW);
     delay(1000);
     digitalWrite(ledWhite,HIGH);
     delay(1000);
     digitalWrite(ledWhite,LOW);
     delay(1000);
     digitalWrite(ledWhite,HIGH);
     delay(1000);
     digitalWrite(ledWhite,LOW);
     delay(1000);



}


 if (char(y)=='3')

{

digitalWrite(ledRed,HIGH);
digitalWrite(ledWhite,LOW);
digitalWrite(ledBlue,LOW);
digitalWrite(ledGreen,LOW);

  }


  if (char(y)=='4')

{

digitalWrite(ledGreen,HIGH);
digitalWrite(ledWhite,LOW);
digitalWrite(ledRed,LOW);
digitalWrite(ledBlue,LOW);


  }



if (char(y)=='5')

{

digitalWrite(ledBlue,HIGH);
digitalWrite(ledWhite,LOW);
digitalWrite(ledRed,LOW);
digitalWrite(ledGreen,LOW);

  }


if (char (y)=='6')

{
     digitalWrite(ledRed,HIGH);
     delay(1000);
     digitalWrite(ledRed,LOW);
     delay(1000);
     digitalWrite(ledRed,HIGH);
     delay(1000);
     digitalWrite(ledRed,LOW);
     delay(1000);
     digitalWrite(ledRed,HIGH);
     delay(1000);
     digitalWrite(ledRed,LOW);
     delay(1000);
     digitalWrite(ledRed,HIGH);
     delay(1000);
     digitalWrite(ledRed,LOW);
     delay(1000);



}


if (char (y)=='7')

{
     digitalWrite(ledGreen,HIGH);
     delay(1000);
     digitalWrite(ledGreen,LOW);
     delay(1000);
     digitalWrite(ledGreen,HIGH);
     delay(1000);
     digitalWrite(ledGreen,LOW);
     delay(1000);
     digitalWrite(ledGreen,HIGH);
     delay(1000);
     digitalWrite(ledGreen,LOW);
     delay(1000);
     digitalWrite(ledGreen,HIGH);
     delay(1000);
     digitalWrite(ledGreen,LOW);
     delay(1000);



}


if (char (y)=='8')

{
     digitalWrite(ledBlue,HIGH);
     delay(1000);
     digitalWrite(ledBlue,LOW);
     delay(1000);
     digitalWrite(ledBlue,HIGH);
     delay(1000);
     digitalWrite(ledBlue,LOW);
     delay(1000);
     digitalWrite(ledBlue,HIGH);
     delay(1000);
     digitalWrite(ledBlue,LOW);
     delay(1000);
     digitalWrite(ledBlue,HIGH);
     delay(1000);
     digitalWrite(ledBlue,LOW);
     delay(1000);



}








  



  


  









  
}



}
