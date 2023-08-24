const int potentiometer = A0;

void setup() {
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potentiometer);
  Serial.print("Value is: ");
  Serial.println(value);
  delay(100);
}