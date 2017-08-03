
#ifndef NETWORK_H
#define NETWORK_H

#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <FS.h>
#include <ArduinoOTA.h>



bool loadConfig(String *ssid, String *pass);
bool saveConfig(String ssid, String pass);
void setupNetwork();

const char* ap_default_ssid = "lysbenk"; ///< Default SSID.
const char* ap_default_psk = ""; ///< Default PSK.
#define HOSTNAME "lysbenk-"


#endif 
