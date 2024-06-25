#include<Servo.h> 

//create a servo object
Servo myServo;

 int pos = 0 ; //variable to store the servo position

void setup() 
{
  //attach the servo on pin 9 to the servo object
  myServo.attach(9);
  
}

void loop() 
{
  
 for (pos = 0 ; pos <= 180 ; pos += 1) //goes from 0 degree to 180 degrees
 {
  myServo.write(pos);
  delay(15);
 }
 
 for (pos = 180 ; pos >= 0 ; pos -= 1)
 {
  myServo.write(pos);
  delay(15);
 }
}