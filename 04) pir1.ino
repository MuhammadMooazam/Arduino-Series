const int pir = 2;

void setup() {
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop() {
  int output = digitalRead(pir);

  Serial.println(output);
  delay(100);
}