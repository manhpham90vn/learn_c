#include <stdio.h>

void myFunc() {
    static int x = 1;
    x++;
    printf("%d", x);
}

int main() {
    myFunc();
    myFunc();
    myFunc();
}