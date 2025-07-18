#ifndef WIFI_CONNECT_H
#define WIFI_CONNECT_H 

#include <WiFi.h>
#include "config.h"

bool isWifiConnected(){
  return WiFi.status() == WL_CONNECTED;
}

void reconnectWifi() {
  WiFi.begin(WIFI_SSID, WIFI_PSWD);
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);

  while(!isWifiConnected()) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("\nWIFI connected");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

#endif