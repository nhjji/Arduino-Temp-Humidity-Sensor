#include <DHT.h>
#define Type DHT22
int sensePin=2;
DHT HT(sensePin, Type);
float humidity;
float  tempC;
float tempF;
int setTime = 500;
int dt = 1000;

void setup() {
Serial.begin(9600);
HT.begin();
delay(setTime);
}

void loop() {
humidity = HT.readHumidity();
tempC = HT.readTemperature();
tempF = HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);

Serial.print(" Temperature in C ");
Serial.print(tempC);
Serial.print(" C ");

Serial.print("Temperature in F ");
Serial.print(tempF);
Serial.println(" F ");

delay(dt);
}
