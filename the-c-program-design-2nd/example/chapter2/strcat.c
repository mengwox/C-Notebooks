#include <stdio.h>

/*
 * concatenate t to end of s; s must be big enough
 */
void strcat(char s[], char t[]);

int main() {
    return 0;
}

void strcat(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while (s[i] != '\0')//find the end of s
        i++;
    while ((s[i++] = t[j++]) != '\0');//copy t
}