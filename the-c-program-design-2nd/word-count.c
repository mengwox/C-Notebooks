//
// Created by Administrator on 2024/2/19.
//
#include <stdio.h>

#define IN 1
#define OUT 0

/*
 * count lines, words and characters in input
 */
int main() {
    int c, state, nl, nw, nc;

    state = OUT;
    nl = 0, nw = 0, nc = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }
        if (c == '\t' || c == '\n' || c == ' ') {
            state = OUT;
        } else if (state == OUT) {
            nw++;
            state = IN;
        }
    }
    printf("nc:%d, nw:%d, nl:%d\n", nc, nw, nl);
}