// C++ code
//
int counter;

int counter2;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

  for (counter = 0; counter < 4; ++counter) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(8, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  for (counter2 = 0; counter2 < 2; ++counter2) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}
