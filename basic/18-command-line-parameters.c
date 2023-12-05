#include <stdio.h>

// ./a.out param1 param2 param3
int main(int argc, char * argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
} 