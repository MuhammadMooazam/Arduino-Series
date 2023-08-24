#define smoke A5

void setup() {
  pinMode(smoke, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smoke);

  Serial.print("Value is: ");
  Serial.println(analogSensor);

  delay(100);
}