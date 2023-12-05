#include <stdio.h>

typedef int number;

typedef enum {
    RED, BLUE, GREEN
} Colors;

enum Result {
    SUCCESS,
    ERROR
};

// struct là value type
struct Persion {
    int age;
    char * name;
};

typedef struct {
    int x;
    int y;
} Vector;

#define PI 3.14
#define sum(x, y) (x + y)

// ./a.out param1 param2 param3
int main(int argc, char * argv[]) {
    number age = 10;
    printf("%d\n", age);

    Colors main = RED;
    printf("%d\n", main);

    enum Result result = SUCCESS;
    printf("%d\n", result);

    struct Persion manh = {30, "Manh"};
    printf("%s %u\n", manh.name, manh.age);

    Vector x = {1, 2};
    printf("%d %d\n", x.x, x.y);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    printf("%d", sum(1, 2));

    #ifdef PI
        printf("PI");
    #else
        printf("NOT PI");
    #endif
} 