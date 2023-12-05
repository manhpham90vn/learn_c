#include <stdio.h>

int main() {
    int a = 1;
    // if
    if (a == 1) {
        printf("if: a = 1\n");
    }

    // switch
    switch (a) {
        case 0:
            printf("a = 0");
            break;
        case 1:
            printf("a = 1");
            break;
        default:
            printf("default");
            break;
    }
} 