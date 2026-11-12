#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("ESP32 WiFi Scanner");
  Serial.println("Starting WiFi Scan...");
}

void loop() {
  Serial.println();
  Serial.println("Scanning for WiFi Networks...");

  int n = WiFi.scanNetworks();

  if (n == 0) {
    Serial.println("No networks found.");
  } else {
    Serial.print("Number of networks found: ");
    Serial.println(n);

    for (int i = 0; i < n; i++) {
      Serial.print("SSID: ");
      Serial.print(WiFi.SSID(i));

      Serial.print(" | RSSI: ");
      Serial.print(WiFi.RSSI(i));
      Serial.print(" dBm");

      Serial.print(" | CH: ");
      Serial.print(WiFi.channel(i));

      Serial.print(" | Encryption: ");

      if (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) {
        Serial.println("Open");
      } else {
        Serial.println("Secured");
      }

      delay(10);
    }
  }

  WiFi.scanDelete();
  delay(5000);
}
