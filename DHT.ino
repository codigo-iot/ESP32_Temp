//Codigo de temperatura. Modificado de:
// Example testing sketch for various DHT humidity/temperature sensors written by ladyada//
#include "DHT.h"

#define DHTPIN 12   

#define DHTTYPE DHT11   

 
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println(F("Prueba de coenxion"));

  dht.begin();
}

void loop() {
  delay(2000);

  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  
  if ( isnan(t) || isnan(f)) {
    Serial.println(F("No hay conexion"));
    return;
  }

 
  Serial.print(F("Temperatura en °C"));
  Serial.print(t);
  Serial.print(F("Temperatura en °F"));
  Serial.print(f);
  
}

