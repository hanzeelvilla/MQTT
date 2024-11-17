#ifndef MQTT_H
#define MQTT_H 

#include "PubSubClient.h"
#include <WiFiClient.h>

class MQTT {
  private:
    PubSubClient client;

  public:
    void init(WiFiClient& wifiClient);
    void setBroker(String broker);
};

#endif