#include <stdio.h>

//Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
//backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
//unambiguous way
int main() {
    int input;

    while ((input = getchar()) != EOF) {
        if (input == '\t') {
            putchar('\\');
            putchar('t');
        } else if (input == '\b') {
            putchar('\\');
            putchar('b');
        } else if (input == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(input);
        }
    }
}