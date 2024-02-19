//
// Created by Administrator on 2024/2/18.
//
#include <stdio.h>

int main() {
    int c, nl;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            nl++;
    }
    printf("%d\n", nl);
}