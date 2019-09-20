void setup()
{

  for(int i=10; i<=13;i++)
{
  pinMode(i, OUTPUT);
}
}

void loop()
{
  int t=500;
  for(int i=10; i<=13; i++ )
{
  digitalWrite(i, HIGH);
  delay(t);
  digitalWrite(i, LOW);
  delay(t);
}
}
