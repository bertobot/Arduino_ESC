#ifndef __A2212_Motor_h_
#define __A2212_Motor_h_

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#include <Servo.h>

class A2212_Motor {
private:
    Servo mESC;
    uint8_t mMin, mMax;

public:
    Motor(uint8_t pin=9, uint8_t tmin=544, uint8_t tmax=2400);
    virtual ~Motor();

    void arm(uint8_t dur=2000);
    void calibrate();
    void throttle(uint8_t p);
    void throttlef(float percent);

};

#endif

