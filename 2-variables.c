#include <stdio.h>

int main() {
    // int
    int age;
    age = 37;
    printf("%d\n", age);

    // unsigned int
    unsigned int test;
    test = 1;
    printf("%d\n", test);

    // char
    char s = 'M';
    printf("%c\n", s);

    // float
    float f = 1.0;
    printf("%f\n", f);

    // double
    double d = 2.0;
    printf("%f\n", d);

    // overflow issue
    unsigned char j = 255;
    j = j + 10;
    printf("%d\n", j);
    
    // size of datatype
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
    return 0;
}