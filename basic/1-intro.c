// c is compiled programming language
// c is a statically typed language
// c not have garbage collected

// build
// gcc 1-intro.c && ./a.out
// gcc 1-intro.c -o application && ./application
// gcc 1-intro.c -Wall -o output -> enables all compiler’s warning messages
// gcc 1-intro.c -Wall -save-temps -o output -> shows all generated

// static & dynamic linking
// compile as static: gcc -static  1-intro.c
// compile gcc is dynamic by default can check width ldd: ldd ./a.out

// import c standard library
#include <stdio.h>

// entry point function is main()
int main() {
    printf("Hello World\n");
    return 0;
}