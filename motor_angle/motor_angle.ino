#include <Servo.h>

Servo mg995;

void setup()
{
  mg995.attach(3);
}

void loop()
{
  mg995.write(60);
  delay(5000);
}