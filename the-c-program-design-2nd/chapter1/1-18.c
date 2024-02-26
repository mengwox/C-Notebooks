#include <stdio.h>

#define MAX_LEN 1000

int getLine(char *line, int limit);

void copy(const char *source, char *target);

/*
 * Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines.
 */
int main() {
    int len;/*length of the current line*/
    char line[MAX_LEN];
    char target[MAX_LEN];

    while ((len = getLine(line, MAX_LEN)) > 0) {
        if (len > 1) {
            copy(line, target);
            printf("%s", target);
        }
    }
    return 0;
}

int getLine(char line[], int limit) {
    int c;/*read the character of input*/
    int len;/*count length of the input current line*/

    len = 0;
    while ((c = getchar()) != EOF && c != '\n' && len < limit - 1) {
        if (c != ' ' && c != '\t') {
            line[len++] = c;
        }
    }
    if (c == '\n') {
        line[len++] = c;
    }
    line[len] = '\0';
    return len;
}

void copy(const char source[], char target[]) {
    int i;

    i = 0;
    while ((target[i] = source[i]) != EOF && target[i] != '\0')
        i++;
}