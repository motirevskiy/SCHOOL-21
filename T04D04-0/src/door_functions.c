#include <math.h>
#include <stdio.h>

void verz(long double x);
void lamn(long double x);
void gipe(long double x);

int main() {
    long double PI = -3.14159265358979323846;
    long double delta = 2 * (-PI) / 41;
    for (int i = 0; i < 42; i++) {
        printf("%.7Lf | ", PI);
        verz(PI);
        lamn(PI);
        gipe(PI);
        if (i != 41) printf("\n");
        PI += delta;
    }
}

void verz(long double x) {
    long double answer = 1 / (1 + pow(x, 2));
    printf("%.7Lf | ", answer);
}

void lamn(long double x) {
    long double firstSqrt = 0;
    long double secondSqrt = 0;
    long double temp = 0;
    firstSqrt = sqrtl(1 + (4 * (pow(x, 2) * 1)));
    temp = firstSqrt - pow(x, 2) - 1;
    if (temp < 0) {
        printf("- | ");
        return;
    }
    secondSqrt = sqrtl(firstSqrt - pow(x, 2) - 1);
    printf("%.7Lf | ", secondSqrt);
}

void gipe(long double x) {
    long double answer = 1 / pow(x, 2);
    printf("%.7Lf", answer);
}
