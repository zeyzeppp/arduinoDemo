void setup()
{
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop()
{
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  delay(500);

  digitalWrite(7, 0);
  digitalWrite(6, 1);
  delay(500);

  digitalWrite(6, 0);
  digitalWrite(5, 1);
  delay(500);

  digitalWrite(5, 0);
  digitalWrite(4, 1);
  delay(500);

  digitalWrite(4, 0);
  digitalWrite(3, 1);
  delay(500);

  digitalWrite(3, 0);
  digitalWrite(2, 1);
  delay(500);

  digitalWrite(2, 0);
  digitalWrite(3, 1);
  delay(500);

  digitalWrite(2, 0);
  digitalWrite(3, 1);
  delay(500);

  digitalWrite(3, 0);
  digitalWrite(4, 1);
  delay(500);

  digitalWrite(4, 0);
  digitalWrite(5, 1);
  delay(500);

  digitalWrite(5, 0);
  digitalWrite(6, 1);
  delay(500);
  
}
