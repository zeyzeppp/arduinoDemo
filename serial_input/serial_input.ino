void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    char data = Serial.read();
    delay(500);
    Serial.print(data);
  }
}