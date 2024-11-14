#ifndef __PING_SENSOR_H__
#define __PING_SENSOR_H__

namespace ping_sensor {
    extern int trig_pin;
    extern int echo_pin;

    void init(int trig, int echo);
    void set_trig_pin(int trig);
    void set_echo_pin(int echo);
    long measure_distance(int trig_pin, int echo_pin);
}

#endif