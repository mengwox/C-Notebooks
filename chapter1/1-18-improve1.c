/*
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 */

#include "stdio.h"

#define MAX_LIMIT 100

int getLine(char line[], int limit) {
    int c;
    int i;//length of the current line

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

int rightTrim(char line[], int len) {
    char c;
    int nw;

    if (line[--len] == '\n') {
        line[len] = '\0';//remove newline character
        nw = 1;
    }

    while (--len > 0 && ((c = line[len]) == '\t' || c == ' ')) {
        line[len] = '\0';//remove blank or tab in the end of line
    }
    len++;
    if (nw) {
        line[len] = '\n';
    }
    return ++len;
}

int main() {
    char line[MAX_LIMIT];
    int len;

    while ((len = getLine(line, MAX_LIMIT)) > 0) {
        len = rightTrim(line, len);
        if (len == 1 && line[0] == '\n') {
            line[0] = '\0';
        }
        printf("%s输出完毕", line);
    }
}