#include <stdio.h>

#define IN 1
#define OUT 0

/*
 * count lines, words and characters in input
 */
int main() {
    int c, state, nw;

    state = OUT;
    nw = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\n' || c == ' ') {
            state = OUT;
        } else {
            if (state == OUT) {
                putchar('\n');
                nw++;
                state = IN;
            }
            putchar(c);
        }
    }
}