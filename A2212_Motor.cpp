#include "A2212_Motor.h"

A2212_Motor::Motor(uint8_t pin=9, uint8_t tmin=544, uint8_t tmax=2400) {
    mESC.attach(pin);
    mMin = tmin;
    mMax = tmax;
}

A2212_Motor::~A2212_Motor() { }

void A2212_Motor::arm(uint8_t dur) {
    throttle(100);
    delay(dur);
    throttle(50);
    delay(dur);
}

void A2212_Motor::throttle(uint8_t p) {
    mESC.write(map(p, 0, 100, mMin, mMax));
}

void A2212_Motor::throttlef(float percent) {
    uint8_t v = int((mMin + (mMax - mMin)) * percent);
    mESC.write(v);
}

