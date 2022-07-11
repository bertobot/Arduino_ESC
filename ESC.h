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
    int mMin, mMax;

public:
    ESC(int pin=9, int tmin=1000, int tmax=2000);
    virtual ~ESC();

    void arm(int dur=3100);
    void throttle(int p);
    void throttlef(float percent);

};

#endif

