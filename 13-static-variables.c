#include <stdio.h>

// biến global mặc định là static
// biến static được giữa nguyên bất kể nó có là local variables
int incrementAge() {
    static int age = 0;
    age++;
    return age;
}

int main() {
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
} 