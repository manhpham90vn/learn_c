#include <stdio.h>

void printArrs() {

}

int main() {
    int arrs[10];

    int arr[3] = {1, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("size arr: %d\n", length);
    for (int i=0; i<length; i++) {
        printf("item: %d index: %d\n", arr[i], i);
    }

    int a[] = {1, 2, 3, 4, 5};
    int length_a = sizeof(a) / sizeof(a[0]);
    printf("size a: %d\n", length_a);

    // cần lưu ý về size của string và size của array: size array = size string + 1
    // vì cần chứa ký tự kết thúc
    char name[7] = "Flavio";

    for (int i=0;i<=7;i++) {
        printf("%c", name[i]);
    }

    printf("\n%s", name);

    // khai báo string thông qua pointer
    char * s = "Manh Pham";
    printf("%s", s);
}