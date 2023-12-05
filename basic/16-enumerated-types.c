#include <stdio.h>

typedef enum {
    RED, BLUE, GREEN
} Colors;

enum Result {
    SUCCESS,
    ERROR
};

int main() {
    Colors main = RED;
    printf("%d\n", main);

    enum Result result = SUCCESS;
    printf("%d\n", result);
} 