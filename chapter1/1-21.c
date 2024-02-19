/*
 * Exercise 1-21. Write a program entab that replaces strings of blanks
 * by the minimum number of tabs and blanks to achieve the same spacing.
 * Use the same tab stops as for detab. When either a tab or a single blank
 * would suffice to reach a tab stop, which should be given preference?
 * 编写一个名为entab的程序, 能够将多个空字符串替换为单个tab或空
 */
#include "stdio.h"

#define MAX_LINE 1000

int getLine(char [], int limit);

void entab(const char [], char []);

int main() {
    char line[MAX_LINE];
    char out[MAX_LINE];

    while (getLine(line, MAX_LINE) > 0) {
        printf("line:%s", line);
        entab(line, out);
        printf("out:%s", out);
    }
    return 0;
}

/*
 * replaces strings of blanks
 * by the minimum number of tabs and blanks to achieve the same spacing.
 * Use the same tab stops as for detab.
 */
void entab(const char line[], char out[]) {
    int i;
    char c;

    int state = 1;
    //good  \t\tfood ==> abc food
    for (i = 0; (c = line[i]) != '\0'; i++) {
        //todo
    }
}