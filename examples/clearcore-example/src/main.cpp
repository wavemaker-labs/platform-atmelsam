#include <Arduino.h>

void setup()
{
  pinMode(IO0, OUTPUT);
  pinMode(IO1, OUTPUT);
  pinMode(IO2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(IO0, HIGH);
  digitalWrite(IO1, HIGH);
  digitalWrite(IO2, HIGH);
  delay(1000);
  digitalWrite(IO0, LOW);
  digitalWrite(IO1, LOW);
  digitalWrite(IO2, LOW);
  delay(1000);
}