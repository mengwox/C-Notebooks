#include <stdio.h>

/*
 * delete all c from char array 's'
 */
void squeeze(char s[], int c);

int main() {
    char s[] = {'a', 'a', 'b', 'c', 'd'};
    squeeze(s, 'a');
    printf("%s", s);
    return 0;
}

void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}