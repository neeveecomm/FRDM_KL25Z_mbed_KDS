#include "mbed.h"

PwmOut r(LED_RED);
PwmOut g(LED_GREEN);

int main()
{
    r.period(0.001f);
    g.period(0.001f);

    while (true) {
        for (float i = 0.0f; i < 1.0f ; i += 0.001f) {
            float p = 3 * i;
            r = 1.0f - ((p < 1.0f) ? 1.0f - p : (p > 2.0f) ? p - 2.0f : 0.0f);
            g = 1.0f - ((p < 1.0f) ? p : (p > 2.0f) ? 0.0f : 2.0f - p);
            wait (0.0025f);
        }
    }
}
