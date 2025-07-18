#include "MQTT.h"
#include "config.h"
#include "wifi_connect.h"

MQTT mqttClient;

void setup() {
  Serial.begin(115200);
  reconnectWifi();
  Serial.println("--------------------");

  mqttClient.setBroker(MQTT_BROKER, MQTT_PORT);
  mqttClient.setMQTTCallback();
}

void loop() {
  if(!isWifiConnected()) {
    Serial.println("--------------------");
    Serial.println("Wifi disconnected");
      reconnectWifi();
  }

  delay(1000);
}
