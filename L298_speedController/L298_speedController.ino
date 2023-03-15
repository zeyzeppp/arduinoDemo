int go = 3;
int back = 2;

int m1 = 10;
int m2 = 9;
int spd = 11;

void setup()
{

  Serial.begin(9600);
  pinMode(go, INPUT);
  pinMode(back, INPUT);

  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(spd, OUTPUT);

}

void loop()
{
  int info1 = digitalRead(go);
  int info2 = digitalRead(back);

  int speedPot = analogRead(A2);
  int speed = map(speedPot, 0, 1023, 0, 255);

  analogWrite(11, speed);

  if(info1 == 1 && info2 == 0)
  {
    digitalWrite(m1, 1);
    digitalWrite(m2, 0);
  }
  else if(info1 == 0 && info2 == 1)
  {
    digitalWrite(m1, 0);
    digitalWrite(m2, 1);
  }
  else
  {
    digitalWrite(m1, 0);
    digitalWrite(m2, 0);
  }
  delay(50);

  Serial.print("speed: ");
  Serial.println(speed);
  delay(500);

}