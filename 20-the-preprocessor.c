#include <stdio.h>

#define PI 3.14
#define sum(x, y) (x + y)

const int DEBUG = 1;

int main(void) {
    #if DEBUG == 1
        printf("DEBUG");
    #else
        printf("NOT DEBUG");
    #endif

    printf("%d", sum(1, 2));

    #ifdef PI
        printf("PI");
    #else
        printf("NOT PI");
    #endif
} 