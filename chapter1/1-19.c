/*
 * Write a function reverse(s) that reverses the character string s. Use it to
 * write a program that reverses its input a line at a time.
 */
#include <stdio.h>

#define MAX_LIMIT 1000

void reversePrint(char str[], int index) {
    //用操作符--,把str末尾的'\0'排除
    while (--index >= 0) {
        putchar(str[index]);
    }
    putchar('\n');
}

void reverse() {
    int c, index;
    char str[MAX_LIMIT];

    index = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        str[index++] = (char) c;
    }
    str[index] = '\0';
    reversePrint(str, index);
}

int main() {
    reverse();
    return 0;
}
