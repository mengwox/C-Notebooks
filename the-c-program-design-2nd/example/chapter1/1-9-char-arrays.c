#include <stdio.h>

#define MAX_LINE 1000

int getline(char line[], int maxline);

void copy(char source[], char target[]);

/*
 * reads a set of text lines and prints the longest
 */
int main() {
    int len, max;
    char line[MAX_LINE], longest[MAX_LINE];

    max = 0;
    while ((len = getline(line, MAX_LINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }
    if (max > 0) {
        printf("%d\n", max);
        printf("%s", longest);
    }
    return 0;
}

int getline(char line[], int maxline) {
    int c, i;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';//mark the end
    return i;
}

void copy(char from[], char to[]) {
    int i = 0;
    //keep copying until reaching the marked position
    while ((to[i] = from[i]) != '\0')
        i++;
}
