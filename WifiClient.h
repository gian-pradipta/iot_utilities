#ifndef __WIFI_CLIENT_H__
#define __WIFI_CLIENT_H__
#include <WiFi.h> 

namespace wifi_client {
    extern char* ssid;
    extern char* password;
    extern WiFiClient client; 
    void init(const char* new_ssid, const char* new_password);
    bool connect_to_wifi();
    bool is_connected();
}

#endif
