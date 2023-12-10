#include <stdio.h>
#include <string.h>

void decimalToBase(int digit, int base) {
    int digits[32];
    int index = 0;

    if (digit == 0) {
        printf("0");
        return;
    }

    while (digit > 0) {
        digits[index] = digit % base;
        digit /= base;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
}

void debug(char * value) {
    size_t length = strlen(value);
    printf("Origin: %s - Size: %lu\n", value, length);

    // Biểu diễn trong hệ cơ số 2 (Binary)
    // 0 && 1
    printf("Binary: ");
    for (int i = 0; i < length; i++) {
        decimalToBase(value[i], 2);
        printf(" ");
    }
    printf("\n");

    // Biểu diễn trong hệ cơ số 8 (Octal)
    // 0 -> 7
    printf("Octal: ");
    for (int i = 0; i < length; i++) {
        decimalToBase(value[i], 8);
        printf(" ");
    }
    printf("\n");

    // Biểu diễn trong hệ cơ số 10 (Decimal)
    // 0 -> 9
    printf("Decimal: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", value[i]);
    }
    printf("\n");

    // Biểu diễn trong hệ cơ số 16 (Hexadecimal)
    // 0 -> 9 và A -> F
    printf("Hexadecimal: ");
    for (int i = 0; i < length; i++) {
        printf("%X ", value[i]);
    }
    printf("\n");
}