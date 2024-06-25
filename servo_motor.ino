#include<Servo.h> 

//create a servo object
Servo myServo;

//constant for the servo pin
const int servoPin = 9;

void setup() 
{
  //attach the servo to the pin
  myServo.attach(servoPin);
  
}

void loop() 
{
  //move servo to 0 degree
  myServo.write(0);
  delay(3000);

  //move servo to 90 degrees
   myServo.write(90);
  delay(3000);

  //move servo to 180 degrees
   myServo.write(180);
  delay(3000);
}