#include <Servo.h>
Servo motor;

void setup()
{
  Serial.begin(9600);
  motor.attach(6);
 
}

void loop()
{
  
  int info = analogRead(A0);
  int angle = map(info, 0, 1023, 0, 180);
  Serial.println(angle);
  motor.write(angle);
  delay(50);
}
