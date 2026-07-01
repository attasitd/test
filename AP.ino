#include<WiFi.h>
#define WIFI_AP_NAME "ESP32 AP mode"
#define WIFI_AP_PASS 12345678
void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAP(WIFI_AP_NAME, WIFI_AP_PASS);
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
  pinMode(8,OUTPUT);
}
void loop() { 
  digitalWrite(8,LOW);
  delay(500);
  digitalWirit(8,HIGH);
  delay(500);
}
