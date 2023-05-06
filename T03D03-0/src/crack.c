#include <stdio.h>

int checkIsCorrect(float a, float b);

int main() {
    float a = 0;
    float b = 0;

    if (scanf("%f%f", &a, &b) == 2) {
        if (checkIsCorrect(a, b)) {
            printf("GOTCHA");
        } else {
            printf("MISS");
        }
    } else {
        printf("n/a");
    }
    return 0;
}

int checkIsCorrect(float a, float b) { return ((a * a + b * b) < 25); }