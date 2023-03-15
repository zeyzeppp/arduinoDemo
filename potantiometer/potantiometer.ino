void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int data = analogRead(A1);
  double voltage = data*0.0048;

  Serial.println("The value read from the potentiometer: ");
  Serial.print(data);
  Serial.println("Voltage value: ");
  Serial.print(voltage);

  delay(1000);

}