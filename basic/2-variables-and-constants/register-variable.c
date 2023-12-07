#include <stdio.h>

int main() {
    // biến x được lưu tại cpu
    register int x = 1;

    printf("%d", x);

    return 0;
}