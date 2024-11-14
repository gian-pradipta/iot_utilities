#include "ping_sensor.h"
#include <Arduino.h>

namespace ping_sensor {
  int trig_pin = 0;
  int echo_pin = 0; 

  void init(int trig, int echo)
  {
    trig_pin = trig;
    echo_pin = echo;
  }

  void set_trig_pin(int trig) 
  {
    trig_pin = trig;
  }

  void set_echo_pin(int echo) 
  {
    echo_pin = echo;
  }

  long measure_distance(int trigPin, int echoPin) 
  {
    long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    return distance;
  }
}

