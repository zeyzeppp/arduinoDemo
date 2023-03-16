void setup()
{
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  int i;
}

void loop()
{
  for(i = 5; i < = 7; i++)
  {
    digitalWrite(i, 1);
    delay(500);
    digitalWrite(i, 0);
  }
}