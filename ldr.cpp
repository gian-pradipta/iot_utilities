#include <Arduino.h>
#include "ldr.h"
namespace ldr {
  int pin = 34;
  static bool is_init = false;
  void init(int pin_number) 
  {
    is_init = true;
    pin = pin_number;
    pinMode(pin_number, INPUT);
  }

  int get_value()
  {
    if (!is_init) {
      return -1;
    }
    int val = analogRead(pin);
    return val;
  }
}

