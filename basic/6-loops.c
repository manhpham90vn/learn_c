#include <stdio.h>

int main() {
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