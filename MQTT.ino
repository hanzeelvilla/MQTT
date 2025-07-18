#include "MQTT.h"
#include "config.h"
#include "wifi_connect.h"

MQTT mqttClient;

void setup() {
  Serial.begin(115200);
  setupWifi();

  mqttClient.setBroker(MQTT_BROKER, MQTT_PORT);
  mqttClient.setMQTTCallback();
}

void loop() {

}
