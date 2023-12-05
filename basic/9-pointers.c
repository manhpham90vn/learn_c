#include <stdio.h>

int main() {
    int age = 1;

    // get address of age
    printf("%p\n", &age);

    // create variable
    int *address = &age;
    printf("address: %p value: %d\n", address, *address);

    // pointer in array
    // biến là mảng thì thực chất là pointer đến phần tử đầu tiên của mảng
    int prices[3] = {1, 2, 3};
    printf("%u\n", *prices);
    // truy cập phần tử thứ 2
    printf("%u\n", *(prices + 1));
} 