int button1 = 7;
int button2 = 6;

int red = 4;
int blue = 3;
int green = 2;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop()
{
  int info1 = digitalRead(button1);
  int info2 = digitalRead(button2);

  if(info1 == 1 && info2 == 0)
  {
    digitalWrite(red, 1);
  }
  else if(info1 == 0 && info2 == 1)
  {
    digitalWrite(blue, 1);
  }
  else if(info1 == 1 && info2 == 1)
  {
    digitalWrite(green, 1);
  }
  else
  {
    digitalWrite(red, 0);
    digitalWrite(blue, 0);
    digitalWrite(green, 0);
  }

}
