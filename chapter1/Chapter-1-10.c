#include "stdio.h"

#define MAX_LINE 1000

int max;
char line[MAX_LINE];
char longest[MAX_LINE];

int getLine(void);

void copy(void);

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
    int c;
    int index;

    index = 0;
    while ((c = getchar()) != EOF && c != '\n' && index < MAX_LINE - 1) {
        line[index++] = (char) c;
    }
    if (c == '\n') {
        line[index++] = '\n';
    }
    line[index] = '\0';
    return index;
}

void copy() {
    int i;

    i = 0;
    while ((longest[i] = line[i]) != '\0') {
        i++;
    }
}