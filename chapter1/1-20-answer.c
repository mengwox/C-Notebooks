/*
 * Exercise 1-20. Write a program detab function that replaces tabs in the
 * input with the proper number of blanks to space to the next tab stop. Assume
 * a fixed set of tab stops, say every n columns. Should n be a variable or a
 * symbolic parameter.
 *
 * By Faisal Saadatmand
 */

/*
 * Answer: Here, n should be a symbolic constant, for the value of n
 * should remain constant throughout the duration of the program. It could also
 * be a const int.
 */

#include <stdio.h>

#define MAX_LEN 1000
#define N 4 /* tabstop for every n columns */

/* functions */
int getLine(char [], int);

void detab(const char [], char []);

int main(void) {
    char in[MAX_LEN]; /* currently read line */
    char out[MAX_LEN]; /* modified line */

    while (getLine(in, MAX_LEN) > 0) {
        detab(in, out);
        printf("in:%s", in);
        printf("out:%s", out);
    }
    return 0;
}

/* getLine function: read a line into line, return length */
int getLine(char line[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = (char) c;
    }
    if (c == '\n') {
        line[i] = (char) c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* detab function: replaces tabs with the proper number of blanks */
void detab(const char in[], char out[]) {
    int i; /* index for read line */
    int j; /* index for modified (written) line */
    int nblanks; /* number of blanks to the next tab stop */

    for (i = j = 0; in[i] != '\0'; ++i)
        if (in[i] == '\t') {
            nblanks = N - (j % N);
            while (nblanks-- > 0)
                out[j++] = ' ';
        } else
            out[j++] = in[i];
    out[j] = '\0';
}