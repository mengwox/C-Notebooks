#include "stdio.h"

#define MAX_LINE 1000/* maximum input line length */

int getLine(char line[], int limit);

void copy(const char from[], char to[]);

/**
 * let's write a program that reads a set of text lines
 * and prints the longest.
 */
int main() {
    int len;/*当前行长度*/
    int max;/*已检索过的行的最大长度*/
    char line[MAX_LINE];
    char longest[MAX_LINE];

    max = 0;
    while ((len = getLine(line, MAX_LINE)) != 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }
    if (max > 0) {
        printf("最长行有%d个字符, %s", longest, max);
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

/**
 * copy the new line to a safe place
 * @param from 拷贝源数据
 * @param to 拷贝存储区
 */
void copy(const char from[], char to[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
