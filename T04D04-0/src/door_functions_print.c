#include <math.h>
#include <stdio.h>
#define verzFrom 0.0919997
#define verzTo 0.9498106
#define lamnFrom 0.3061966
#define lamnTo 0.4996003
#define gipeFrom 0.1013212
#define gipeTo 2.1027273

void verz(long double x);
void lamn(long double x);
void gipe(long double x);
void printVerz(long double PI);
void printLamn(long double PI);
void printGipe(long double PI);
double convert(double value, double From1, double From2, double To1, double To2);

int main() {
    long double PI = -3.14159265358979323846;
    printVerz(PI);
    printLamn(PI);
    printGipe(PI);
}

void verz(long double x) {
    long double answer = 1 / (1 + pow(x, 2));
    int graphValue = convert(answer, verzFrom, verzTo, 0, 21);
    graphValue = graphValue == 0 ? 1 : graphValue;
    for (int i = 0; i < graphValue; i++) printf("*");
}

void lamn(long double x) {
    long double firstSqrt = 0;
    long double secondSqrt = 0;
    long double temp = 0;
    firstSqrt = sqrtl(1 + (4 * (pow(x, 2) * 1)));
    temp = firstSqrt - pow(x, 2) - 1;
    if (temp < 0) {
        return;
    }
    secondSqrt = sqrtl(firstSqrt - pow(x, 2) - 1);
    if (secondSqrt <= 1) {
        int graphValue = convert(secondSqrt, lamnFrom, lamnTo, 0, 21);
        graphValue = graphValue == 0 ? 1 : graphValue;
        for (int i = 0; i < graphValue; i++) printf("*");
    }
}

void gipe(long double x) {
    long double answer = 1 / pow(x, 2);
    if (answer <= 2.1027273) {
        int graphValue = convert(answer, gipeFrom, gipeTo, 0, 21);
        graphValue = graphValue == 0 ? 1 : graphValue;
        for (int i = 0; i < graphValue; i++) printf("*");
    }
}

void printVerz(long double PI) {
    long double delta = 2 * (-PI) / 41;
    printf("    ----------------------\n");
    for (int i = 0; i < 42; i++) {
        if (i < 10)
            printf("%d  |  ", i);
        else
            printf("%d |  ", i);
        verz(PI);
        printf("\n");
        PI += delta;
    }
}
void printLamn(long double PI) {
    long double delta = 2 * (-PI) / 41;
    for (int i = 0; i < 42; i++) {
        if (i < 10)
            printf("%d  |  ", i);
        else
            printf("%d |  ", i);
        lamn(PI);
        printf("\n");
        PI += delta;
    }
}
void printGipe(long double PI) {
    printf("\n\n    ----------------------\n");
    long double delta = 2 * (-PI) / 41;
    for (int i = 0; i < 42; i++) {
        if (i < 10)
            printf("%d  |  ", i);
        else
            printf("%d |  ", i);
        gipe(PI);
        printf("\n");
        PI += delta;
    }
}

double convert(double value, double From1, double From2, double To1, double To2) {
    return (value - From1) / (From2 - From1) * (To2 - To1) + To1;
}
