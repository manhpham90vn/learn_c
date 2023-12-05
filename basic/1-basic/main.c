// c is compiled programming language
// c is a statically typed language
// c not have garbage collected

// build
// gcc main.c && ./a.out
// gcc main.c -o application && ./application
// gcc main.c -Wall -o output -> enables all compiler’s warning messages
// gcc main.c -Wall -save-temps -o output -> shows all generated files

// static & dynamic linking
// compile as static: gcc -static  main.c
// compile gcc is dynamic by default can check width ldd: ldd ./a.out

// import c standard library
#include <stdio.h>

// entry point function is main()
int main() {
    printf("Hello World\n");
    return 0;
}