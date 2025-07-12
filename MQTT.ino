#include "MQTT.h"
#include "config.h"

WiFiMulti wifiMulti;
WiFiClient espClient; 
MQTT mqttClient;

void setup() {
  Serial.begin(115200);
  setupWifi();
  mqttClient.setBroker("test.mosquitto.org", 1883);
  mqttClient.setMQTTCallback();
}

void loop() {

}
