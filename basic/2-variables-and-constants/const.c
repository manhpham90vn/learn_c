#include <stdio.h>

#define PI 3.14

int main() {
    const int x = 1;

    printf("x: %d\n", x);
    printf("PI: %f\n", PI);

    int a = 1;
    printf("a = %d addr = %p\n", a, &a);
    int b = 2;
    printf("b = %d addr = %p\n", b, &b);

    // Pointer to Variable
    int * ptr1 = &a;
    printf("ptr 1 %d %p\n", *ptr1, ptr1);
    *ptr1 = 2;
    printf("ptr 1 %d %p\n", *ptr1, ptr1);
    ptr1 = &b;
    printf("ptr 1 %d %p\n", *ptr1, ptr1);

    // Pointer to Constant
    const int * ptr2 = &a;
    printf("ptr 2 %d %p\n", *ptr2, ptr2);
    // *ptr2 = 2; => error
    ptr2 = &b;
    printf("ptr 2 %d %p\n", *ptr2, ptr2);

    // Constant Pointer to Variable	
    int * const ptr3 = &a;
    printf("ptr 3 %d %p\n", *ptr3, ptr3);
    *ptr3 = 2;
    printf("ptr 3 %d %p\n", *ptr3, ptr3);
    // ptr3 = &b; => error

    // Constant Pointer to Constant
    const int * const ptr4 = &a;
    // *ptr4 = 2; => error
    // ptr4 = &b; => error
}