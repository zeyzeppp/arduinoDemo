int led = 4;
int button = 7;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT); 

}

void loop() {
  int info = digitalRead(button);

  digitalWrite(led, info);

}
