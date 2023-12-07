#include <stdio.h>

typedef struct {
    int x;
    int y;
} Vector;


int main() {
    Vector v1 = {1, 2};
    printf("v1 x=%d y=%d\n", v1.x, v1.y);

    Vector * v2 = &v1;
    printf("v2 x=%d y=%d\n", (*v2).x, (*v2).y);
    // cú pháp rút gọn
    printf("v2 x=%d y=%d\n", v2->x, v2->y);
    return 0;
}