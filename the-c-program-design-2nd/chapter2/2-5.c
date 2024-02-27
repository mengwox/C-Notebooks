/*
 * Write the function any(s1,s2), which returns the first
 * location in a string s1 where any character from the string s2 occurs, or
 * -1 if s1 contains no characters from s2. (The standard library function
 * strpbrk does the same job but returns a pointer to the location.)
 */
#include <stdio.h>
#include "string.h"

int any(const char s1[], const char s2[]);

int main() {
    char s1[] = {'a', 'b', 'c', 'd', '\0'};
    char s2[] = {'d', 'g', 'e', '\0'};
    printf("%d\n", any(s1, s2));
    printf("%s", strpbrk(s1, s2));
    return 0;
}

int any(const char s1[], const char s2[]) {
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}