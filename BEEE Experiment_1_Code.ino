void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 100 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  delay(1000); // Wait for 100 millisecond(s)
}
