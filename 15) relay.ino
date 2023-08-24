#define relay 2

void setup() {
  pinMode(relay , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(relay , HIGH);
  delay(5000);
  digitalWrite(relay , LOW);
  delay(5000);
}