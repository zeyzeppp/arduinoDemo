int m1 = 10;
int m2 = 9;

int go = 2;
int back = 3;

void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);

  pinMode(go, INPUT);
  pinMode(back, INPUT);

}

void loop()
{
  int info1 = digitalRead(go);
  int info2 = digitalRead(back);

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
}