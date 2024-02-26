/*
 * Write a program detab that replaces tabs in the input
 * with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter?
 * todo
 */
#include <stdio.h>

#define FIXED_SIZE 3

void detab(void);

int main() {
    detab();
    return 0;
}

void detab() {
    int c, count;
    count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' && count < FIXED_SIZE) {
            count++;
            c = ' ';
        } else if (count >= FIXED_SIZE) {
            count = 0;
        }
        putchar(c);
    }
}