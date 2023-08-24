#include "DHT.h"
DHT dht(2, DHT11);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 test!");
  dht.begin();
}

void loop() {
  delay(2000);

  // Read temperature as Celsius (the default)
  float t_c = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(t_c);
  Serial.println(" C");
}