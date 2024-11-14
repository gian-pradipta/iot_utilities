#ifndef __MQTT_H__
#define __MQTT_H__

#include <WiFi.h>
#include <PubSubClient.h>

namespace mqtt {
  extern WiFiClient wifi_client;
  extern PubSubClient client;
  void init(WiFiClient& client, const char* server, int port);
  void connect(const char* client_id, const char* uname, const char* password);
  void subscribe(const char* topic);
  void publish(const char* topic, const char* data);
}

#endif
