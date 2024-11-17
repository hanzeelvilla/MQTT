#include "MQTT.h"


void MQTT::init(WiFiClient& wifiClient) {
  Serial.println("Setting wifi client");
  client.setClient(wifiClient);
}


void MQTT::setBroker(String broker) {

}
