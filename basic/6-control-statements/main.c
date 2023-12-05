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

    // for
    for (int i=0; i <= 10; i++) {
        if (i==5) {
            continue;
        }

        if (i==8) {
            break;;
        }
        printf("%d\n", i);
    }

    // while
    int i = 0;
    while (i < 10) {
        i++;
        printf("%d\n", i);
    }
} 