#include "WiFi.h"

// Set your access point network
const char *ssid = "superLBJ";
const char *password = "030510..";

void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);

  WiFi.mode(WIFI_AP);
  if(!WiFi.softAPConfig(IPAddress(192, 168, 43, 1), IPAddress(192, 168, 43, 1), IPAddress(255, 255, 255, 0))){
      Serial.println("AP Config Failed");
  }
  WiFi.softAP(ssid, password, 1, 0, 10); //(ssid,password,通道,是否隐藏接入点[0--不隐藏],最大连接数[1~6,默认4])

  IPAddress IP = WiFi.softAPIP();
  Serial.print("\n WiFi接入的IP: ");
  Serial.println(IP);
}

void loop() {
}
