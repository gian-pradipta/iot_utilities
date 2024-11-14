#ifndef __LDR_H__
#define __LDR_H__

namespace ldr {
  extern int pin;
  void init(int pin_number);
  int get_value();
}

#endif