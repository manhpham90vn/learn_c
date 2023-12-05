#include <stdio.h>

// struct là value type
struct Persion {
    int age;
    char * name;
};

typedef struct {
    int x;
    int y;
} Vector;

int main() {
    struct Persion manh = {30, "Manh"};
    printf("%s %u\n", manh.name, manh.age);

    Vector x = {1, 2};
    printf("%d %d\n", x.x, x.y);

    return 0;
} 