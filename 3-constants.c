#include <stdio.h>

#define OTHER_PI 3.14

int main() {

    double const PI = 3.14;

    printf("%f\n", PI);
    printf("%f\n", OTHER_PI);

    return 0;
}