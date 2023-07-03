#include <stdio.h>

//Let's write a program to count the number of occurrences of each digit, of white space
//characters (blank, tab, newline), and of all other characters.
// This is artificial, but it permits us to illustrate several aspects of C in one program
//count digits, white space, others
int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d", nwhite, nother);
}