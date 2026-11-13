#include <WiFi.h>
#include <WebServer.h>

// Replace these placeholders with your own 2.4 GHz Wi-Fi credentials.
// Do not upload real credentials to a public GitHub repository.
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// HTTP web server uses the standard HTTP port 80.
WebServer server(80);

void handleRoot() {
server.send(200, "text/plain", "Hello from Alya!");
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi connected.");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();

  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
