# Basic

## What is c
- c is compiled programming language
- c is a statically typed language
- c not have garbage collected

## Build c program

- basic
```shell
gcc main.c && ./a.out
```

- with -o flag
```shell
gcc main.c -o application && ./application
```

- enables all compiler’s warning messages
```shell
gcc main.c -Wall -o output
```

- shows all generated files
```shell
gcc main.c -Wall -save-temps -o output
```

## Compilation process
- pre-processing
- compilation
- asembly
- linking

## Linking
- static linking
- dynamic linking