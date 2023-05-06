#include <stdio.h>

void code();
void decode();

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("n/a");
        return 0;
    }

    if (argv[1][0] == '0') {
        code();
    } else if (argv[1][0] == '1') {
        decode();
    }
}

void code() {
    int result;
    int spaceSymbol;
    while ((result = getchar()) != '\n') {
        spaceSymbol = getchar();
        if (spaceSymbol != ' ' && spaceSymbol != '\n') {
            printf("n/a");
            break;
        }
        printf("%x", result);
        if (spaceSymbol == '\n') {
            break;
        }
        printf(" ");
    }
}

void decode() {
    int charAscii = 1;
    while (scanf("%x", &charAscii)) {
        int spaceSymbol = getchar();
        if ((spaceSymbol != ' ' && spaceSymbol != '\n') || (charAscii > '~' || charAscii < 32)) {
            printf("n/a");
            break;
        }
        printf("%c", charAscii);
        if (spaceSymbol == '\n') {
            break;
        }
        printf(" ");
    }
}