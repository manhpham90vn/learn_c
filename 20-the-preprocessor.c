#include <stdio.h>

#define PI 3.14
#define sum(x, y) (x + y)

int main(void) {
    printf("%d", sum(1, 2));

    #ifdef PI
        printf("PI");
    #else
        printf("NOT PI");
    #endif
} 