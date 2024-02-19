//
// Created by Administrator on 2024/2/18.
//
#include <stdio.h>

/*
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */
int main() {
    int c;
    int blank = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ') {
            blank++;
        } else {
            if (blank != 0) {
                putchar(' ');
                blank = 0;
            }
            putchar(c);
        }
    }
}