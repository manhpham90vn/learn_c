// một phần của C standard library
// gcc basic.c && ./a.out
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// preprocessor
#define PI 3.14

// định nghĩa const
const char BASE_URL[] = "https://google.com";

// main function
int main() {
    printf("Hello world\n");

    // gọi tới biến được định nghĩa trong preprocessor
    printf("PI: %f\n", PI);

    // gọi tới const
    // strlen cần include string.h
    printf("BASE_URL: %s Lenth: %ld\n", BASE_URL, strlen(BASE_URL));

    // reading input from the terminal
    char name[100];
    printf("Enter a name: ");
    scanf("%s", name);
    printf("\nYou name: %s\n", name);

    int age;
    printf("Enter a age: ");
    scanf("%d", &age);
    printf("\nYou age: %d\n", age);

    // variable and datatypes
    int x;
    int y = 1;

    float z = 1.0;
    double d = 1e+9;
    char s;
    _Bool isSuccess = 0;

    // bool và true cần include stdbool
    bool isLogin = true;
    printf("isLogin: %d\n", isLogin);

    // enum & char
    // https://funix.udemy.com/course/c-programming-for-beginners-/learn/lecture/8795124#search

    return 0;
}