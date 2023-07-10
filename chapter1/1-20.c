#include "stdio.h"

//Exercise 1-20. Write a program `detab` that replaces tabs in the input
//with the proper number of blanks to space to the next tab stop.
//Assume a fixed set of tab stops, say every n columns.
//Should n be a variable or a symbolic parameter?
#define MAX_LINE 1000

int n;

void detab(char line[]);

void getLine(char line[]);

int main() {
    char line[MAX_LINE];

    getLine(line);
    printf("%s", line);

    detab(line);
    printf("detab:%s", line);
}

void detab(char line[]) {
    char c;
    int i;

    for (i = 0; (c = line[i]) != '\0'; i++) {
        if (c == '\t') {
            //replace tab with blank
            line[i] = ' ';
        }
    }
}

void getLine(char line[]) {
    int c;
    int i;

    for (i = 0; (c = getchar()) != EOF && c != '\n' && i < MAX_LINE - 1; i++) {
        line[i] = (char) c;
    }
    if (c == '\n') {
        line[i++] = (char) c;
    }
    line[i] = '\0';
}