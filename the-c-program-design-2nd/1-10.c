//
// Created by Administrator on 2024/2/18.
//
#include <stdio.h>

/*
 * Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 */
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\b' || c == '\\') {
            putchar('\\');
            if (c == '\t') {
                putchar('t');
            } else if (c == '\b') {
                putchar('b');
            } else {
                putchar('\\');
            }
        } else {
            putchar(c);
        }
    }
}