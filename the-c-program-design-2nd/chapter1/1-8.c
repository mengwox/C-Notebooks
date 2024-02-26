#include "stdio.h"

int main() {
    int c;
    int blankCount = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            blankCount++;
    }
    printf("%d\n", blankCount);
}