#include "WiFiClient.h"
#include <WiFi.h>

namespace wifi_client {
    char* ssid = nullptr;
    char* password = nullptr;
    WiFiClient client;
    
    void init(const char* new_ssid, const char* new_password) {
        ssid = const_cast<char*>(new_ssid);    // Convert const char* to char* for assignment
        password = const_cast<char*>(new_password);  // Convert const char* to char*
        Serial.print("WiFi credentials set to SSID: ");
        Serial.println(ssid);
    }

    bool connect_to_wifi() {
        WiFi.begin(ssid, password);
        while (WiFi.status() != WL_CONNECTED) {
            delay(500);
            Serial.print(".");
        }
        if (WiFi.status() == WL_CONNECTED) {
            Serial.println("Connected to WiFi");
            return true;
        } else {
            Serial.println("WiFi connection failed");
            return false;
        }
    }

    bool is_connected() {
        return WiFi.status() == WL_CONNECTED;
    }

}
