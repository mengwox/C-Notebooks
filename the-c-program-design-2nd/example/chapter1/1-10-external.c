#include <stdio.h>
#include "external-const.h"


int getLine(void);

void copy(void);

/*
 * print longest input line; specialized version
 */
int main() {
    int len;

    max = 0;
    while ((len = getLine()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

int getLine() {
    int len, c;

    len = 0;
    while ((c = getchar()) != EOF && len < MAX_LEN - 1 && c != '\n') {
        line[len++] = c;
    }
    if (c == '\n') {
        line[len++] = c;
    }
    line[len] = '\0';//mark the end of line

    return len;
}

void copy() {
    int i;

    i = 0;
    while ((longest[i] = line[i]) != EOF && longest[i] != '\0')
        i++;
}