#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include "../headers/convert.h"

int main() {

    // stdio func
    printf("Hello\n");
    debug("Hello");

    // math func
    int result = sqrt(4);
    printf("%d\n", result);

    // time func
    time_t now;
    time(&now);
    printf("Today is %s\n", ctime(&now));

    // string func
    char s1[] = "ABC";
    char s2[] = "DEF";
    strcat(s1, s2);
    printf("%s\n", s1);

    int compare = strcmp(s1, s2);
    printf("%d\n", compare);

    strcpy(s1, s2);
    printf("%s\n", s1);

    printf("len = %zu\n", strlen(s1));

    // assert
    int x = 1;
    assert(x == 1);

    // bool
    bool isSuccess = true;
    printf("isSuccess: %d", isSuccess);

    return 0;
}