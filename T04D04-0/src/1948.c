#include <math.h>
#include <stdio.h>

int simpleDividers(int n);
void divmod(int a, int b, int *div, int *mod);

int main() {
    int n;
    int answer;
    if (scanf("%d", &n) == 1) {
        answer = simpleDividers(n);
        printf("%d", answer);
    } else {
        return printf("n/a");
    }
    return 0;
}

int simpleDividers(int n) {
    int answer = 0;
    int d = 2;
    int div = 0;
    int mod = 0;
    if (n < 0) {
        n *= -1;
    }
    while (d * d <= n) {
        divmod(n, d, &div, &mod);
        if (mod == 0) {
            answer = d;
            n = div;
        } else {
            d += 1;
        }
    }
    if (n > 1) {
        answer = n;
    }
    return answer;
}

void divmod(int a, int b, int *div, int *mod) {
    if (a < b) {
        *div = 0;
        *mod = a;
        return;
    }
    divmod(a, b + b, div, mod);
    *div += *div;
    if (*mod >= b) {
        *mod -= b;
        ++*div;
    }
}
