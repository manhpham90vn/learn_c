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
}