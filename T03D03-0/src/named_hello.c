#include <stdio.h>

int main() {
    int name = 0;
    if (scanf("%d", &name) == 1) {
        printf("Hello, %d!", name);
    }
    return 0;
}