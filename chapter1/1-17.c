/*
 * Write a program to print all input lines that are longer than 80 characters.
 */

#include "stdio.h"

#define MAX_LIMIT 1000

int getLine(char line[], int limit);

int main() {
    char line[MAX_LIMIT];
    int len;
    while ((len = getLine(line, MAX_LIMIT)) > 0) {
        if (len > 80) {
            printf(line);
        }
    }
}

int getLine(char line[], int limit) {
    int c;
    int i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i++] = '\n';
    }
    line[i] = '\0';
    return i;
}