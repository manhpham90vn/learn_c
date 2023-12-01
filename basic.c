// một phần của C standard library
// gcc basic.c && ./a.out
#include <stdio.h>

// preprocessor
#define PI 3.14

// main function
int main() {
    printf("Hello world\n");

    // gọi tới biến được định nghĩa trong preprocessor
    printf("PI: %f\n", PI);

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
    return 0;
}