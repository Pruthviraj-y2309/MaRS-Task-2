//Initial Code


#include <RH_ASK.h>

#include <SPI.h>

RH_ASK driver;

  const char incomingByte;

  // const char x = "F,B";


void setup() {
  Serial.begin(9600);
  if(!driver.init())
  {
    Serial.println("setup failed ");
    
  }
  // Serial.println("Sending data... ");

}

void loop() {
  
  while(Serial.available()==0){}
  int incomingByte = Serial.read();
  Serial.print("Data sent:");
  Serial.print((char)incomingByte);
  Serial.print("\n");
  //driver.send((uint8_t *)incomingByte, strlen(incomingByte));
  driver.send((uint8_t *)incomingByte, strlen((uint8_t *)incomingByte));
  driver.waitPacketSent();
  delay(10);

}
