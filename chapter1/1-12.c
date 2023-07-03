#include <stdio.h>

#define WORD 1 /*mark is a word*/
#define NOT_WORD 0 /*mark isn't a word*/

//Exercise 1-12. Write a program that prints its input one word per line
int main() {
    int c, state;

    state = WORD;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == WORD) {
                putchar('\n');
                state = NOT_WORD;
            }
        } else {
            state = WORD;
            putchar(c);
        }
    }
}