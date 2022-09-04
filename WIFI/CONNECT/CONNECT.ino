#include <WiFi.h>

const char* ssid = "superLBJ";
const char* password = "030510..";

void setup() {
  Serial.begin(115200);
  Serial.setDebugOutput(true);
  Serial.println();

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  Serial.println("WiFi.localIP:");
  Serial.print(WiFi.localIP());

}

void loop() {
  delay(10000);
}
