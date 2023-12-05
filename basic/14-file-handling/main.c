#include <stdio.h>

// chỉ định rằng test đã được khai báo ở 1 nơi khác
// ở đây chỉ sử dụng lại và không cấp phát bộ nhớ cho test
extern int test;

// chỉ định rằng doSomething() đã được khai báo ở 1 nơi khác
extern void doSomething();

int main() {
    return 0;
}