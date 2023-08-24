const int pir = 2;
const int led = 3;

void setup() {
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int output = digitalRead(pir);

  Serial.println(output);
  delay(100);

  if (output == 1) {
    digitalWrite(led, HIGH);
    Serial.println("LED is ON");
  } else {
    digitalWrite(led, LOW);
    Serial.println("LED is OFF");
  }
}