#include "DHT.h"
DHT dht(2, DHT11);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 test!");
  dht.begin();
}

void loop() {

  delay(2000);
  float h = dht.readHumidity();
  float t_c = dht.readTemperature();
  float t_f = dht.readTemperature(true);

  if (isnan(h) || isnan(t_c) || isnan(t_f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(t_f, h);

  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t_c, h, false);

  Serial.print(" Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t_c);
  Serial.println(" C");
  Serial.print("Temperature: ");
  Serial.print(t_f);
  Serial.println(" F");

  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.println(" C");
  Serial.print("Heat index: ");
  Serial.print(hif);
  Serial.println(" F");
}