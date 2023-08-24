const int ledPin = 9;
const int potentiometer = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  int pot_value = analogRead(potentiometer);
  Serial.print("Potentiometer's value is: ");
  Serial.println(pot_value);
  int led_value = map(pot_value, 0, 1023, 0, 255);  //Map value 0-1023 to 0-255 (PWM)
  analogWrite(ledPin, led_value);
  Serial.print("LED's value is: ");
  Serial.println(led_value);
  delay(100);
}