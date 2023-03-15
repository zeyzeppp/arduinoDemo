#include <Servo.h>

Servo motor;
int button = 6;
int led = 5;


void setup()
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  motor.attach(3);
  motor.write(0);
  delay(2500);
  digitalWrite(led, 0);
}

void loop()
{
  int click = digitalRead(button);
  if(click == 1)
  {
    motor.write(120);
    digitalWrite(led, 1);
    delay(2000);
  }
  else
  {
    motor.write(0);
    digitalWrite(led, 0);
  }
  delay(100);
}