# Arduino A2212 Motor interface

```c++
// first time use / calibrate
#include <A2212_Motor.h>

// connect signal to pin 9
A2212_Motor motor(9);

void setup() {
    motor.calibrate();

    // plug the power in, wait for 3 beeps
    // remove power
    // plug
}

void loop() {
}
```

```c++
#include <A2212_Motor.h>

// connect signal to pin 9
A2212_Motor motor(9);

void setup() {
}

void use_1() {
    // set the throttle to 50 percent
    motor.throttle(50);
}

void use_2() {
    motor.throttlef(0.5);
}

void use_3() {
    // if using a potentiometer, can do something like
    int pval = analogRead(A0);
    int val = map(pval, 0, 1023, 0, 100);
    motor.throttle(val);
}

void loop() {
    use_1();
    //use_2();
    //use_3();
}
```
