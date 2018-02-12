#include <dht.h>

#define dht_apin 7

dht DHT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  //Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  DHT.read11(dht_apin);
  //Serial.print("@");
  //Serial.print(DHT.humidity);
  //Serial.print(";");
  Serial.print("@");
  Serial.print(DHT.temperature); 
  Serial.print("#");
  //Serial.println("");
  
  delay(5000);
}
