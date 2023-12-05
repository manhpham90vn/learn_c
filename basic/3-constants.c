#include <stdio.h>

#define OTHER_PI 3.14

void printOut(int * value) {
    printf("%d %p\n", *value, value);
}

int main() {

    double const PI = 3.14;

    printf("%f\n", PI);
    printf("%f\n", OTHER_PI);

    int a = 1000;
    printOut(&a);
    int b = 2000;
    printOut(&b);

    // một số cách khai báo khác liên quan tới pointer

    // kiểu số 1
    int * ptr = &a;
    printOut(ptr);
    // thay đổi giá trị của ptr
    *ptr = 100;
    printOut(ptr);
    // đổi con trỏ sang biến khác
    ptr = &b;
    printOut(ptr);

    // kiểu số 2
    const int * ptr1;

    // kiểu số 3
    int * const ptr2;

    // kiểu số 4
    const int * const ptr3;

    return 0;
}