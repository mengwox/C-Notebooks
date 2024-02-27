/*
 * Write an alternative version of squeeze(s1,s2) that
 * deletes each character in s1 that matches any character in the string s2.
 */
#include <stdio.h>

void squeeze(char s1[], const char s2[]);

int main() {
    char s1[] = {'a', 'b', 'c', 'd', '\0'};
    char s2[] = {'b', 'c', 'e', '\0'};
    squeeze(s1, s2);
    printf("%s", s1);
    return 0;
}

void squeeze(char s1[], const char s2[]) {
    int i, j, k, mark;
    k = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        mark = 1;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                mark = 0;
                break;
            }
        }

        if (mark) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}