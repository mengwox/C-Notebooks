/*
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 */

#include "stdio.h"

#define MAX_LIMIT 100

int getLine(char line[], int limit);

void rightTrim(char line[], int len);

int main() {
    char line[MAX_LIMIT];
    int len;

    while ((len = getLine(line, MAX_LIMIT)) > 0) {
        if (line[0] != '\n') {
            rightTrim(line, len);
            printf("%s输出完毕", line);
        }
    }
}

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

/*
 * 去除右侧的空及tab,改用\0填充
 */
void rightTrim(char line[], int len) {
    int last, c;
    int state;//标识是否是行尾,1标识行尾

    last = len;
    state = 0;
    for (int i = len; i >= 0; i--) {
        c = line[i];
        if (c == '\n' || c == '\0') {
            state = 1;
            continue;
        }
        if (state && (c == ' ' || c == '\t')) {
            last = i;
            continue;
        }
        state = 0;
        trimLine[i] = c;
    }
}