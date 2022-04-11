#include "ESC.h"

ESC::ESC(uint8_t pin=9, uint8_t tmin=544, uint8_t tmax=2400) {
    mESC.attach(pin);
    mMin = tmin;
    mMax = tmax;
}

ESC::~ESC() { }

void ESC::arm(uint8_t dur) {
    throttle(180);
    delay(dur);
    throttle(0);
    delay(dur);
}

void ESC::throttle(uint8_t p) {
    mESC.write(map(p, 0, 180, mMin, mMax));
}

void ESC::throttlef(float percent) {
    uint8_t v = int((mMin + (mMax - mMin)) * percent);
    mESC.write(v);
}

