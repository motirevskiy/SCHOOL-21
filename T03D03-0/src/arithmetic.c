#include <stdio.h>

int summa(int a, int b);

int sub(int a, int b);

int mult(int a, int b);

int div(int a, int b);

int main() {
    float a = 0;
    float b = 0;

    if (scanf("%f%f", &a, &b) == 2 && (int)a == a && (int)b == b) {
        if (b != 0) {
            printf("%d %d %d %d", summa(a, b), sub(a, b), mult(a, b), div(a, b));
        } else {
            printf("%d %d %d n/a", summa(a, b), sub(a, b), mult(a, b));
        }
    } else {
        printf("n/a");
    }
}

int summa(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mult(int a, int b) { return a * b; }

int div(int a, int b) { return a / b; }