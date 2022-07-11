#include "ESC.h"

ESC::ESC(int pin, int tmin, int tmax) {
    mESC.attach(pin);
    mMin = tmin;
    mMax = tmax;
}

ESC::~ESC() { }

void ESC::arm(int dur) {
    throttle(50);
    delay(dur);
}

void ESC::throttle(int p) {
    mESC.writeMicroseconds(map(p, 0, 100, mMin, mMax));
}

void ESC::throttlef(float percent) {
    int v = int((mMin + (mMax - mMin)) * percent);
    mESC.write(v);
}

