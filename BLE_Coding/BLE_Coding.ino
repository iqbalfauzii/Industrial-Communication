
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>


#define SERVICE_UUID        "17f5c403-6443-47f7-8d69-0f132ce16bd5"
#define CHARACTERISTIC_UUID "e495dbf6-fdf1-4a96-a7bf-bb6f11e4f897"


int ledWhite = 13 ;
int ledGreen = 12;
int ledRed = 14;
int ledBlue = 27;
int buzzer = 26;


class MyCallbacks: public BLECharacteristicCallbacks 
{
    void onWrite(BLECharacteristic *pCharacteristic) 
    {
      std::string value = pCharacteristic->getValue();


  //Buzzer

  
        if (value =="MUSIC")    

{
   Serial.println("Blinking the led White");
     analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,50);
     delay(800);
     analogWrite(buzzer,100);
     delay(800);
     analogWrite(buzzer,150);
     delay(800);
     analogWrite(buzzer,120);
     delay(800);
     analogWrite(buzzer,200);
     delay(800);
     analogWrite(buzzer,230);
     delay(800);
     analogWrite(buzzer,60);
     delay(800);

}




















      

      //WHITELED
      
      if(value == "ONW")
      {
        Serial.println("Turning ON the led White");
        analogWrite(ledWhite,255);
      }
      if(value == "OFFW")
      {
        Serial.println("Turning OFF the led white");
        analogWrite(ledWhite,0);
      }

      if(value == "NMW")
      {
        Serial.println("Turning OFF the led white");
        analogWrite(ledWhite,10);
       
        
      }


        if (value =="BLW")

{
   Serial.println("Blinking the led White");
     analogWrite(ledWhite,255);
     delay(800);
     analogWrite(ledWhite,0);
     delay(800);
     analogWrite(ledWhite,255);
     delay(800);
     analogWrite(ledWhite,0);
     delay(800);
     analogWrite(ledWhite,255);
     delay(800);
     analogWrite(ledWhite,0);
     delay(800);
     analogWrite(ledWhite,255);
     delay(800);
     analogWrite(ledWhite,0);
     delay(800);

}


  //BLUELED

   if(value == "ONB")
      {
        Serial.println("Turning ON the BLUE ");
        analogWrite(ledBlue,255);
      }

      if(value == "OFFB")
      {
        Serial.println("Turning OFF the BLUE ");
        analogWrite(ledBlue,0);
      }


       if (value =="BLB")

{
   Serial.println("Blinking the led BLUE");
     analogWrite(ledBlue,255);
     delay(800);
     analogWrite(ledBlue,0);
     delay(800);
     analogWrite(ledBlue,255);
     delay(800);
     analogWrite(ledBlue,0);
     delay(800);
     analogWrite(ledBlue,255);
     delay(800);
     analogWrite(ledBlue,0);
     delay(800);
     analogWrite(ledBlue,255);
     delay(800);
     analogWrite(ledBlue,0);
     delay(800);

}

   if(value == "NMB")
      {
        Serial.println("Turning OFF the led white");
        analogWrite(ledBlue,10);
       
        
      }




     //REDLED

 if(value == "ONR")
      {
        Serial.println("Turning ON the BLUE ");
        analogWrite(ledRed,255);
      }

      if(value == "OFFR")
      {
        Serial.println("Turning Off the BLUE ");
        analogWrite(ledRed,0);
      }


  if (value =="BLR")

{
   Serial.println("Blinking the led BLUE");
     analogWrite(ledRed,255);
     delay(800);
     analogWrite(ledRed,0);
     delay(800);
     analogWrite(ledRed,255);
     delay(800);
     analogWrite(ledRed,0);
     delay(800);
     analogWrite(ledRed,255);
     delay(800);
     analogWrite(ledRed,0);
     delay(800);
     analogWrite(ledRed,255);
     delay(800);
     analogWrite(ledRed,0);
     delay(800);

}

 if(value == "NMR")
      {
        Serial.println("Turning OFF the led white");
        analogWrite(ledRed,10);
       
        
      }




  //GREENLED
 if(value == "ONG")
      {
        Serial.println("Turning ON the BLUE ");
        analogWrite(ledGreen,255);
      }

      if(value == "OFFG")
      {
        Serial.println("Turning Off the BLUE ");
        analogWrite(ledGreen,0);
      }


  if (value =="BLR")

{
   Serial.println("Blinking the led BLUE");
     analogWrite(ledGreen,255);
     delay(800);
     analogWrite(ledGreen,0);
     delay(800);
     analogWrite(ledGreen,255);
     delay(800);
     analogWrite(ledGreen,0);
     delay(800);
     analogWrite(ledGreen,255);
     delay(800);
     analogWrite(ledGreen,0);
     delay(800);
     analogWrite(ledGreen,255);
     delay(800);
     analogWrite(ledGreen,0);
     delay(800);

}





       if(value == "NMG")
      {
        Serial.println("Turning OFF the led white");
        analogWrite(ledGreen,10);
       
        
      }



if (value == "PARTY")

{

  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(buzzer,255);
     delay(200);
       analogWrite(buzzer,0);
         delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(buzzer,155);
     delay(800);
       analogWrite(buzzer,0);
         delay(800);
  analogWrite(ledGreen,0);
  delay(500);
 analogWrite(buzzer,125);
     delay(500);
       analogWrite(buzzer,0);
         delay(500);
       analogWrite(buzzer,155);
         delay(500);
          analogWrite(buzzer,0);
           delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(buzzer,255);
     delay(800);
       analogWrite(buzzer,0);
         delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(buzzer,255);
     delay(500);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(buzzer,255);
     delay(200);
     analogWrite(buzzer,0);
         delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(buzzer,255);
     delay(800);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(ledBlue,0);
  delay(800);
    analogWrite(ledGreen,255);
  delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(500);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(4000);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(buzzer,255);
     delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(buzzer,255);
     delay(800);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(buzzer,200);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(buzzer,200);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(ledBlue,0);
  delay(800);
    analogWrite(ledGreen,255);
  delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(buzzer,100);
     delay(200);
     analogWrite(buzzer,0);
         delay(500);
  analogWrite(ledBlue,255);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(buzzer,125);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  analogWrite(ledBlue,0);
  delay(800);
  analogWrite(ledGreen,255);
  delay(800);
  analogWrite(buzzer,255);
     delay(800);
     analogWrite(buzzer,0);
         delay(800);
  analogWrite(ledRed,255);
  delay(200);
  analogWrite(ledGreen,0);
  delay(500);
  analogWrite(buzzer,100);
     delay(800);
     analogWrite(buzzer,0);
         delay(500);
  analogWrite(ledRed,0);
  delay(800);
  analogWrite(ledWhite,255);
  delay(200);
  analogWrite(ledBlue,0);
  delay(500);
  analogWrite(ledWhite,0);
  delay(200);
  analogWrite(buzzer,125);
     delay(800);
     analogWrite(buzzer,0);
         delay(200);
  
               
  





  
}



 

    





    }
};








void setup() {
  // put your setup code here, to run once:


 Serial.begin(115200);
  pinMode(ledWhite,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(buzzer,OUTPUT);
  


  BLEDevice::init("Smart Light ");
  BLEServer *pServer = BLEDevice::createServer();

  BLEService *pService = pServer->createService(SERVICE_UUID);

  BLECharacteristic *pCharacteristic = pService->createCharacteristic(
                                         CHARACTERISTIC_UUID,
                                         BLECharacteristic::PROPERTY_READ |
                                         BLECharacteristic::PROPERTY_WRITE
                                       );

  pCharacteristic->setCallbacks(new MyCallbacks());

  pCharacteristic->setValue("Hello World");
  pService->start();

  BLEAdvertising *pAdvertising = pServer->getAdvertising();
  pAdvertising->start();





}

void loop() {
  // put your main code here, to run repeatedly:

  delay(200);


  





}
