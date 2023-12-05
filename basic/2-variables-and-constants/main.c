// size of datatype khác nhau phụ thuộc vào môi trường triển khai và architecture
// global variables: là biến dịnh nghĩa bên ngoài function
// local variables: là biến định nghĩa bên trong function
// biến global có thể được gọi ở bất cứ đâu

#include <stdio.h>

#define OTHER_PI 3.14

void printOut(int * value) {
    printf("%d %p\n", *value, value);
}

int incrementAge() {
    static int age = 0;
    age++;
    return age;
}

int main() {
    // int
    int age;
    age = 37;
    printf("age: %d\n", age);

    // unsigned int
    unsigned int test;
    test = 1;
    printf("test: %d\n", test);

    // char
    char s = 'M';
    printf("s: %c\n", s);

    // float
    float f = 1.0;
    printf("f: %f\n", f);

    // double
    double d = 2.0;
    printf("d: %f\n", d);

    // overflow issue
    unsigned char j = 255;
    j = j + 10;
    printf("j: %d\n", j);
    
    // size of datatype
    // depend on os & architecuture
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));


    // const
    double const PI = 3.14;

    printf("%f\n", PI);
    printf("%f\n", OTHER_PI);

    // một số cách khai báo khác liên quan tới pointer

    int a = 1000;
    printOut(&a);
    int b = 2000;
    printOut(&b);

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

    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());

    return 0;
}