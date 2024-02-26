/*
 * Write a program to determine the ranges of char, short,
 * int, and long variables, both signed and unsigned, by printing
 * appropriate values from standard headers and by direct computation.
 * Harder if you compute them: determine the ranges of the various
 * floating-point types.
 */
#include <stdio.h>
#include <limits.h>

int strlen(char str[]);

enum BOOLEAN {
    NO = 0, YES = 0, YEAH = 0
};

int main() {
    printf("##############CHAR##############\n");
    printf("bit: %d\n", CHAR_BIT);
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("unsigned char max: %d\n", UCHAR_MAX);

    printf("##############INTEGER##############\n");
    printf("signed int min: %d\n", INT_MIN);
    printf("signed int max: %d\n", INT_MAX);
    printf("unsigned int max: %d\n", UINT_MAX);

    printf("############## SHORT INT ##############\n");
    printf("signed short int min: %d\n", SHRT_MIN);
    printf("signed short int max: %d\n", SHRT_MAX);
    printf("unsigned short int max: %d\n", USHRT_MAX);

    printf("############## LONG INT ##############\n");
    printf("signed long min: %ld\n", LONG_MIN);
    printf("signed long max: %ld\n", LONG_MAX);
    printf("unsigned long max: %ld\n", ULONG_MAX);

    printf("############## LONG LONG INT ##############\n");
    printf("signed long long min: %lld\n", LLONG_MIN);
    printf("signed long long max: %lld\n", LLONG_MAX);
    printf("unsigned long long max: %lld\n", ULLONG_MAX);

    printf("%ld\n", 0XFUL);
    printf("%ld\n ", 0xful);
    printf("%d\n", '\017');//17(八进制) = 15(十进制)
    printf("%d\n", '\x13');//13(十六进制) = 19(十进制)
    printf("%d\n", strlen("hello"));
    printf("%d\n", YES);
    printf("%d\n", YEAH);
    printf("%d\n", NO);
    const int arr[3] = {0, 1, 2};
    printf("%d\n", arr[2]);
    return 0;
}

int strlen(char str[]) {
    int len = 0;
    int c;
    while ((c = str[len]) != '\0') {
        len++;
    }
    return len;
}