const int ir = 2;
const int led = 3;

void setup() {
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sig = digitalRead(ir);
  Serial.println(sig);

  if (sig == LOW) {
    digitalWrite(led, HIGH);
    Serial.println("LED is ON");
  } else {
    digitalWrite(led, LOW);
    Serial.println("LED is OFF");
  }
}