#include <math.h>
#include <stdio.h>

float calculation(float x);

int main() {
    float x = 0;

    if (scanf("%f", &x) == 1) {
        printf("%.1f", calculation(x));
    } else {
        printf("n/a");
    }
    return 0;
}

float calculation(float x) {
    return (7e-3 * pow(x, 4) + ((22.8 * pow(x, 1 / 3) - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2 / x) -
            1.01);
}