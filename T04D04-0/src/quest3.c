#include <stdio.h>

int fibo(int n);

int main() {
    float n = 0;
    int result = 0;
    if (scanf("%f", &n) == 1 && n == (int)n) {
        result = fibo(n);
        printf("%d", result);
    } else {
        printf("n/a");
    }
    return 0;
}

int fibo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}