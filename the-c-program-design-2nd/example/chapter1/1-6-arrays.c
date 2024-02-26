#include <stdio.h>

/*count digits, white space, others*/
int main() {
    int c, nspace, nothers;
    int digits[10];

    nspace = 0, nothers = 0;
    for (int i = 0; i < 10; ++i)
        digits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            digits[c - '0']++;
        } else if (c == '\t' || c == '\n' || c == ' ') {
            nspace++;
        } else {
            nothers++;
        }
    }

    printf("digits = ");
    for (int i = 0; i < 10; ++i) {
        printf("(%d: %d) ", i, digits[i]);
    }
    printf("\nwhite space = %d, others:%d", nspace, nothers);
}