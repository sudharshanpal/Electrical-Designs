// C++ code
//
int val = 0;

int counter;

int counter2;

int counter3;

int counter4;

int counter5;

int counter6;

int counter7;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);

  for (counter = 0; counter < 1; ++counter) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  for (counter2 = 0; counter2 < 1; ++counter2) {
    digitalWrite(9, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  for (counter3 = 0; counter3 < 1; ++counter3) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(8, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  for (counter4 = 0; counter4 < 1; ++counter4) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(8, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  for (counter5 = 0; counter5 < 1; ++counter5) {
    digitalWrite(9, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  for (counter6 = 0; counter6 < 1; ++counter6) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  for (counter7 = 0; counter7 < 1; ++counter7) {
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}

void loop()
{
  val = 0.01723 * readUltrasonicDistance(2, 1);
  if (val < 30) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
