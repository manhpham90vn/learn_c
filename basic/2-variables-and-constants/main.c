// size of datatype khác nhau phụ thuộc vào môi trường triển khai và architecture
// global variables: là biến dịnh nghĩa bên ngoài function
// local variables: là biến định nghĩa bên trong function
// biến global có thể được gọi ở bất cứ đâu

#include <stdio.h>

#define OTHER_PI 3.14

void printOut(int * value) {
    printf("%d %p\n", *value, value);
}

// static variable
int incrementAge() {
    static int age = 0;
    age++;
    return age;
}

// chỉ định rằng test đã được khai báo ở 1 nơi khác
// ở đây chỉ sử dụng lại và không cấp phát bộ nhớ cho test
extern int test;

// chỉ định rằng doSomething() đã được khai báo ở 1 nơi khác
extern void doSomething();

int main() {
    // variable
    int age = 1;
    char s;

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