/*
 * Rewrite the function lower, which converts upper case
 * letters to lower case, with a conditional expression instead of if-else.
 */
#include <stdio.h>

void lower(char s[]);

int main() {
    char s[] = {'A', 'B', 'C', '\0'};
    lower(s);
    printf("%s", s);
    return 0;
}

void lower(char s[]) {
    char c;
    for (int i = 0; (c = s[i]) != '\0'; i++) {
        s[i] = c >= 'A' && c <= 'Z' ? (c - 'A' + 'a') : c;
    }
}