#define push_button 2
#define led 3

void setup() {
  pinMode(push_button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(push_button);
  Serial.println(value);
  if (value == HIGH) {
    digitalWrite(led, HIGH);
    delay(1000);
  } else {
    digitalWrite(led, LOW);
    delay(1000);
  }
}