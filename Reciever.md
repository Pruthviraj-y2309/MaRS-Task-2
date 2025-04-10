Receiver RW54

As the transmitter , the reciever base code  from the same website ie chuggs 

"https://www.chegg.com/homework-help/questions-and-answers/hello-trying-send-receive-numbers-using-arduino-microcontroller-however-receive-letters-tr-q73910964"
I got the basic code which i can manipulate according to my need 
i wanted to transfer only 2 things ie -- One for making the motor move forwards and one for the motor to move bvackwords.
The speed control or PWM i decide to keep constant for this project But for now. We can also modify it as required by the user .

I had a doubt going forward  as
"If i sent a data from transmitter and it gets recieved it would go and do the function , but now when i send the next data will it be directly able to change the function or will it need interrupt ."
This arose due to the way i learned about interrups is based on led so if i click once it remains like that if interrupt not added . And If interrupt added then only it changes 
my idea of interrupts was vague . So i got it cleared from Senior present there, Outcome : interrupt was not needed for proper functioning of the code.

Now as i can send 2 different inputs with meaning from trasnmitting end. I had to make a function here in in reciever to make it run on the basis of those two inputs only.
So, i put a if condition that if input is F it has to go forward , and if input is 'B' it has to go backward.
Accordingto that i set the code usin digtal pins and all
I knew how to do this so no need to use any net for setting up motor with motor driver.


The motor driver MD10C was into play.
https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.cytron.io%2Fampp-10amp-5v-30v-dc-motor-driver&psig=AOvVaw3OBeP7iIyIqbKm8vM0SX_I&ust=1744364276543000&source=images&cd=vfe&opi=89978449&ved=0CBQQjRxqFwoTCJjU2q_9zYwDFQAAAAAdAAAAABAJ
This was the diagram i reffered to get to know the connections .
I was not given this as it was ebeing complicated and was told to justr recieve and transmit Data.


So I got to know its wirring . As i had worked only with L293D before. This one was just to control one motor so it was fine . 
the code was ready . But when i ran it after doing all the  cpnnections and congigurations . The serial monitor showed garbage values for very long time .
we had to configure what was wrong . we changed the buf size  , the data type which was being sent . The code seemed with a bug but i couldnt fugure what was it .
The output on reciever side was that it printed out data recieverd and then some garbage value instead of what actually was sent .

The errors happening in the driver.send and driver.recieve regarding the DISPARITY in the output i tried checking it changing different data typees i took help from this site.
https://circuitdigest.com/microcontroller-projects/interfacing-433mhz-rf-module-with-arduino


After many tries being unsucesfull to properly get accurate data instead of garbage value .
I was suggested by senior to do using Virtualwire library which was initislly what i thought but the implmentation of syntax seemed to be more complicated for me to understand.
i got on github and got this repository which used virtaulwire and to work on it 
https://github.com/iseerobot/RF433Mhz
This has code with virtual wire 
we tried running it after downloading the library. 
it was showing the same thing as previuous or not running properly in some instance .
I checked the wirings and redid them properly bu still no change 
Now as i checked the wiring i wante to do again using my own thing of the radiohead library , 
but time seemed off so i was suggested to document all the process.
![task2_2](https://github.com/user-attachments/assets/3c897df5-c79f-4266-aad7-6bbd41611123)
![task2_1](https://github.com/user-attachments/assets/5a49cbab-b879-4fe1-933a-9daa003cddc3)

This is the note or diagrams or wiring and idea i had during the task it is vague in sense but shows my understanding of subject.
ignore roll no


