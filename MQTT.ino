#include <WiFi.h>
#include <WiFiMulti.h>
#include "MQTT.h"
#include "config.h"

WiFiMulti wifiMulti;
WiFiClient espClient; 
MQTT mqttClient;

void setup() {
  Serial.begin(115200);

  Serial.println("Adding Access points");
  wifiMulti.addAP(SSID1, PSWD1);
  wifiMulti.addAP(SSID2, PSWD2);

  Serial.println("Connecting Wifi...");
  if(wifiMulti.run() == WL_CONNECTED) {
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
  }

  mqttClient.init(espClient);
}

void loop() {
  if (wifiMulti.run(CONNECTION_TIME_OUT) == WL_CONNECTED) {
    Serial.print("WiFi connected: ");
    Serial.print(WiFi.SSID());
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
  }
  else {
    Serial.println("WiFi not connected!");
  }

  delay(1000);
}
