#include <ESC.h>

// connect signal to pin 9
ESC motor(9);

void setup() {
    motor.arm();
}

void use_1() {
    // set the throttle to 50 (180 / 2 = 90) percent
    motor.throttle(90);
}

void use_2() {
    // if your using floating point values, here's a convenience method
    motor.throttlef(0.5);
}

void use_3() {
    // if using a potentiometer, can do something like
    int pval = analogRead(A0);
    int val = map(pval, 0, 1023, 0, 180);
    motor.throttle(val);
}

void loop() {
    use_1();
    //use_2();
    //use_3();
}

