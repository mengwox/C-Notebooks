#include <stdio.h>

void reverse(char string[]);

int length(char string[]);

void demo(char str[]);

/* todo
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */
int main() {
    char str[10];
    demo(str);
    char *addr = str;
    printf("%p", addr);
}

void demo(char str[]) {
    for (int i = 0; i < 10; ++i) {
        str[i] = 'a';
    }
}