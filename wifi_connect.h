#include "HardwareSerial.h"
#ifndef WIFI_CONNECT_H
#define WIFI_CONNECT_H  

#include <WiFi.h>
#include "config.h"

bool isWifiConnected(){
  return WiFi.status() != WL_CONNECTED;
}

void setupWifi() {
  WiFi.begin(WIFI_SSID, WIFI_PSWD);
  Serial.print("Conectando a ");
  Serial.println(WIFI_SSID);

  while(isWifiConnected()) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("\nWIFI conectado");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

#endif