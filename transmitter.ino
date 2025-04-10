//Initial Code
//The main idea of the transmitter is to take the input from the user on serial monitor and then send it to the the receiving module of the part
//

#include <RH_ASK.h>

#include <SPI.h>

RH_ASK driver;

  const char incomingByte;

  // const char x = "F,B";


void setup() {
  //To check the module is setup properly
  Serial.begin(9600);
  if(!driver.init())
  {
    Serial.println("setup failed ");
    
  }
  // Serial.println("Sending data... ");

}

void loop() {

  //read the data from serial monotr store it in incomingbyte
  while(Serial.available()==0){}
  int incomingByte = Serial.read();
  Serial.print("Data sent:");
  Serial.println((char)incomingByte); //Print the data to be sent
  //driver.send((uint8_t *)incomingByte, strlen(incomingByte));
  driver.send((uint8_t *)incomingByte, strlen((uint8_t *)incomingByte));//To send the data the type of data is to be specified and to send the length od string sent
  driver.waitPacketSent(); //Wait till it is sent
  delay(10); 

}
