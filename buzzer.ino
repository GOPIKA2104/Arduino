const int buzzer = 9;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  tone(buzzer, 1000); // send 1khz sound signal to buzzer
  delay(1000); // Wait for 1000 millisecond(s)
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)
}