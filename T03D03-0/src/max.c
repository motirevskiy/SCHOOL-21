#include <stdio.h>

int find_max(int a, int b);

int main() {
    int a = 0;
    int b = 0;

    if (scanf("%d%d", &a, &b) == 2) {
        printf("%d", find_max(a, b));
    } else {
        printf("n/a");
    }
    return 0;
}

int find_max(int a, int b) { return a > b ? a : b; }