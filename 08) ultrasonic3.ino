#define echoPin 2
#define trigPin 3
#define led1 4
#define led2 5

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  float duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  float distance = duration * 0.034 / 2;  // Speed of sound wave divided by 2 (go and back)

  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance >= 0 && distance <= 50) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    Serial.println("LED 1 is ON");
  } else if (distance >= 50 && distance <= 100) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    Serial.println("LED 2 is ON");
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    Serial.println("Both LEDs are OFF");
  }
}
