#include "Mqtt.h"
#include <Arduino.h>

namespace mqtt {
  WiFiClient wifi_client; 
  PubSubClient client(wifi_client);

  void init(WiFiClient& client, const char* server, int port) {
    client.setClient(client); 
    client.setServer(server, port); 
  }

  void connect(const char* client_id, const char* uname, const char* password) {
    while (!client.connected()) {
      String clientId = String(client_id) + WiFi.macAddress();
      Serial.printf("The client %s connects to the MQTT broker\n", clientId.c_str());
      if (client.connect(clientId.c_str(), uname, password)) {
        Serial.println("MQTT broker connected");
      } else {
        Serial.print("Connection failed with state ");
        Serial.println(client.state());
        delay(2000);
      }
    }
  }

  void subscribe(const char* topic) {
    client.subscribe(topic);
  }

  void publish(const char* topic, const char* data) {
    client.publish(topic, data);
  }
  
}

