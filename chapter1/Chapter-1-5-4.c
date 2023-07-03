#include <stdio.h>

#define IN 1/*inside a word*/
#define OUT 1/*outside a word*/


//1.5.4 Word Counting
/* counting lines, words, and characters in input */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            //统计行数
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
    printf("lines:%d, words:%d, characters:%d", nl, nw, nc);
}