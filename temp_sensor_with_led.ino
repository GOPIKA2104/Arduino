// define the pins
const int tempPin = A0; // analog pin for temperature sensor
const int buzzerPin = 7;// digital pin for buzzer 

int led1 = 3;
int led2 = 2;

// temperatute threshold in degree celsius
const float tempThreshold = 5.0;

void setup() 
{
Serial.begin(9600);

pinMode(buzzerPin, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);

// ensure the buzzerpin is off initially
digitalWrite(buzzerPin, LOW);
digitalWrite(led2,LOW);
digitalWrite(led1,LOW);
}

void loop() 
{
  int sensorValue = analogRead(tempPin);
  float temp = sensorValue * ( 3.0 / 1023.0 ) * 10  ;


  Serial.print("Temperature: "); // Prints string "Distance" on the Serial monitor
  Serial.print(temp); // Prints the distance value from the sensor
  Serial.println("C");

  if ( temp > tempThreshold )
  {
    tone(buzzerPin, 1000);
    digitalWrite(led1,LOW);
    
    digitalWrite(led2,HIGH);
    
  }
  else
  {
    noTone(buzzerPin);
    digitalWrite(led2,LOW);
   
    digitalWrite(led1,HIGH);
   
  }
  delay(1000);
}