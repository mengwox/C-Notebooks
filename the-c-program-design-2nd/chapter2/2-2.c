/*
 * Write a loop equivalent to the for loop above without
 * using && or ||.
 */
#include <stdio.h>
#include <ctype.h>

void str_upper(char str[]);

int main() {
    char str[3] = {'a', 'b', 'c'};
    printf("%s\n", str);
    str_upper(str);
    printf("%s\n", str);
    return 0;
}

void str_upper(char str[]) {
    int c;
    int i = 0;
    while ((c = str[i]) != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}