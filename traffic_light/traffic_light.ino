  int red = 6;
  int yellow = 5;
  int green = 4;

  void setup()
  {
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);

  }

  void loop()
  {
    digitalWrite(red, 1);
    digitalWrite(yellow, 0);
    digitalWrite(green, 0);
    delay(5000);

    digitalWrite(red, 1);
    digitalWrite(yellow, 1);
    digitalWrite(green, 0);
    delay(1500);

    digitalWrite(red, 0);
    digitalWrite(yellow, 0);
    digitalWrite(green, 1);
    delay(5000);

  }