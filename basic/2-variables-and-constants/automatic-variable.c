#include <stdio.h>
#include <stdlib.h>

int * ptr;

// Dangling pointers example 1
void myFunc() {
    // biến x là biến local và auto
    // sẽ tự động giải phóng khỏi bộ nhớ sau khi hàm thực hiện song 
    auto int x = 1;
    ptr = &x;
    printf("value: %d - address: %p\n", x, &x);
}

// Dangling pointers example 2
int *myFuncPointer() {
    int x = 1;
    return &x;
}
 
int main() {
    // myFunc();
    // printf("check: %d %p", *ptr, ptr);
    // free(ptr);

    ptr = myFuncPointer();
    printf("check: %d %p", *ptr, ptr);
    return 0;
}