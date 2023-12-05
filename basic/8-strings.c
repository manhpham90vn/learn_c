#include <stdio.h>

int main() {
    // cần lưu ý về size của string và size của array: size array = size string + 1
    // vì cần chứa ký tự kết thúc
    char name[7] = "Flavio";

    for (int i=0;i<=7;i++) {
        printf("%c", name[i]);
    }

    printf("\n%s", name);
} 