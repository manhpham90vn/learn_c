#include <stdio.h>

// arithmetic operators: = + - * / %
// unary operators only take one operand: + - ++ --
// comparison operators: == != > < >= <=
// logical operators: ! && ||
// compound assignment operators: += -= *= /= %=
// ternary operator: a ? b : c

int main() {
    int a = 1;
    a++;
    // ternary operator
    int b = 2 ? a == 2 : 1;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("sizeof int: %ld, size of a: %ld", sizeof(int), sizeof(a));
}