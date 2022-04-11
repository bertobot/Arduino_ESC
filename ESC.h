#ifndef __ESC_h_
#define __ESC_h_

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#include <Servo.h>

class ESC {
private:
    Servo mESC;
    uint8_t mMin, mMax;

public:
    ESC(uint8_t pin=9, uint8_t tmin=544, uint8_t tmax=2400);
    virtual ~ESC();

    void arm(uint8_t dur=3000);
    void throttle(uint8_t p);
    void throttlef(float percent);

};

#endif

