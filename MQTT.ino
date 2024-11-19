#include <WiFi.h>
#include <WiFiMulti.h>
#include "MQTT.h"
#include "config.h"

WiFiMulti wifiMulti;
WiFiClient espClient; 
MQTT mqttClient;

void setupWifi() {
  delay(1000);
  wifiMulti.addAP(SSID1, PSWD1);
  wifiMulti.addAP(SSID2, PSWD2);
  // Add more AP if you need

  Serial.println("Connecting Wifi...");

  while (wifiMulti.run() != WL_CONNECTED) {
    delay(100);
  }

  Serial.print("Connected to: ");
  Serial.println(WiFi.SSID());
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);
  setupWifi();
  mqttClient.setBroker("test.mosquitto.org", 1883);
  mqttClient.setMQTTCallback();
}

void loop() {
  delay(100);

  if (wifiMulti.run(CONNECTION_TIME_OUT) == WL_CONNECTED) {
    Serial.print("WiFi connected: ");
    Serial.println(WiFi.SSID());
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  }
  else {
    Serial.println("WiFi not connected!");
  }

  mqttClient.reconnect();

}
