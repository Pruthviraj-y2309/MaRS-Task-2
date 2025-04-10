//Overall logic is like i send a data through the transmitter and then the reciever stores it in an array of buff it checks what buff is and based on that it goes to if conditions
//like forward or backward 


#include <RH_ASK.h>  //Including radiohead library 
#include <SPI.h> 

RH_ASK driver;
int pwmpin=3;         // for the motor speed here its digital and set to constant but we could have used analog to change it differently 
int direction=4;      // For the motor direction high or low 




void setup()
{
   pinMode(pwmpin, OUTPUT);
  pinMode(direction, OUTPUT);
Serial.begin(9600); // Debugging only
if (!driver.init())  //To check whether the drive is working properly or not 
Serial.println("init failed");
}

void loop()
{
uint8_t buf[12];          //Made an array buff of 12 blocks , uint_t is unsigned integer of 8 bits but after neimg pointed out w
uint8_t buflen = sizeof(buf);   //Tells the size of buff , here already specified initially as 12 
if (driver.recv(buf, &buflen))  //recieves radio signal stores it in buf , and checks how much space it has and stores that number in buflen
{
int i;

Serial.print("Message: "); 
Serial.println((char*)buf);  //temporarily converts buf from uint8_t* to char* so Serial.println() can print it properly. using typecast
}

//As good practice the buffer must be set to null   
  
if(buf=="F") //What we did here was the wrong thing as buf is specified as an array and i am comparing whole array woth a single chracter . it shoul be more like buf[0] 
            //that is specifying index. 
{
  digitalWrite(direction,HIGH);
  analogWrite(pwmpin,100);
  delay(2000);

}
if(buf=="B") //Same error as of F function
{
   digitalWrite(direction,LOW);
  analogWrite(pwmpin,100);
  delay(2000);

}


}
