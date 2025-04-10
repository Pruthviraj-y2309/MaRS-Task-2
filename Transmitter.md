Transmitter.    

I was handed the module RW54 and RW630
took me some time to find out which is which
Then I started with searching Wirrings as its the main skeleleton after understanding wirings of reciever and transmitter time to hope on code.

Problem Statement:Understanding and implementing
The question was pretty small and concise in regards to what needs to be done as it simply stated "Use a radio communication to run a motor remotely."(Using RF module )
I had no clue about these functions so for the code i got to the Arduino Website "https://docs.arduino.cc/language-reference/" and skimmed through the functions of communication. 
I got few libraries to include like virtualwire or radiohead . The code were available on the basis of these two on sites like chegg for refference purpose i decided to go with radio head as it looked more undersrandable and i could have manipulated it 
"https://www.chegg.com/homework-help/questions-and-answers/hello-trying-send-receive-numbers-using-arduino-microcontroller-however-receive-letters-tr-q73910964"
I knew by now what i would have to do to send some data like what maipulations needs to be done.

I was getting error in this line   driver.send((uint8_t *)msg, strlen(msg));   So i added specification of the type of data like the msg in string length also it worked,






