// define the pins
const int tempPin = A0; // analog pin for temperature sensor
const int buzzerPin = 7; // digital pin for buzzer 

// temperatute threshold in degree celsius
const float tempThreshold = 5.0;

void setup() 
{
Serial.begin(9600);

pinMode(buzzerPin, OUTPUT);

// ensure the buzzerpin is off initially
digitalWrite(buzzerPin, LOW);

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
  }
  else
  {
    noTone(buzzerPin);
  }
  delay(1000);
}