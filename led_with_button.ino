int buttonPin=2;
int buttonState=0;
int led=5;
void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH)
  {
  digitalWrite(led,HIGH);
  }
  else
  {
  digitalWrite(led,LOW);
  }
}