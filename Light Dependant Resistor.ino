const int ldrPin = A0;
const int ledPin = 3;
const int threshold = 50;

void setup() 
{
 Serial.begin(9600);
 pinMode(ledPin,OUTPUT);

}

void loop() 
{
 int ldrValue = analogRead(ldrPin);
 Serial.println(ldrValue);
 if( ldrValue < threshold )
 {
  digitalWrite(ledPin,HIGH);
 }
else
{
  digitalWrite(ledPin,LOW);
}
delay(500);
}