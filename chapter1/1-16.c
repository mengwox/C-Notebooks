/*
 * Revise the main routine of the longest-line program.
 * so it will correctly print the length of arbitrary long input lines, and as much as possible of the text.
 */
#include "stdio.h"

#define MAX_LINE 10/* maximum input line length */

int getLine(char line[], int limit);

/**
 * let's write a program that reads a set of text lines
 * and prints the longest.
 */
int main() {
    char line[MAX_LINE];

    while (getLine(line, MAX_LINE) != 0) {
        printf(line);
    }
    return 0;
}

/**
 * return current line's length, if zero means the end of file
 * @param line 存储当前行数据
 * @param limit 行数据长度最大限制
 * @return 当前行长度
 */
int getLine(char line[], int limit) {
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}