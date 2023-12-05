#include <stdio.h>

void printOut(int value) {
    printf("%d\n", value);
}

void printString(char * value) {
    printf("%s\n", value);
}

// param được truyền vào theo dạng copy (pure function)
void do_not_increment(int value) {
    value += 1;
}

// update giá trị bằng cách truyền vào pointer
void increment(int * value) {
    *value += 1;
}

int main(void) {
    printOut(10);
    printOut(20);
    printString("Hello");

    int test = 1;
    printOut(test);
    do_not_increment(test);
    printOut(test);

    int age = 10;
    printOut(age);
    increment(&age);
    printOut(age);
}