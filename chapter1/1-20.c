#include "stdio.h"

//Exercise 1-20. Write a program `detab` that replaces tabs in the input
//with the proper number of blanks to space to the next tab stop.
//Assume a fixed set of tab stops, say every n columns.
//Should n be a variable or a symbolic parameter?
//todo 有待按answer调整改造
#define MAX_LINE 1000

void detab(char []);

int getLine(char []);

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
            //replace tab with one number of blank
            line[i] = ' ';
        }
    }
}

int getLine(char line[]) {
    int c;
    int index;

    for (index = 0; (c = getchar()) != EOF && c != '\n' && index < MAX_LINE - 1; index++) {
        line[index] = (char) c;
    }
    if (c == '\n') {
        line[index] = (char) c;
        index++;
    }
    line[index] = '\0';
    return index;
}