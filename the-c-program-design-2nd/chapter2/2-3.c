/*
 * Write a function htoi(s), which converts a string of
 * hexadecimal digits (including an optional 0x or 0X) into its equivalent
 * integer value. The allowable digits are 0 through 9,
 * a through f, and A through F.
 */
#include <stdio.h>

int htoi(char s[]);

int power(int n, int exp);

int main() {
    //AD = 173, FF = 255
    char str[] = {'F', 'F', 'X', '0'};
    printf("%d", htoi(str));
    return 0;
}

int htoi(char s[]) {
    int res, i;
    char c;
    res = 0;
    for (i = 0;; i++) {
        c = s[i];
        if (c >= 'a' && c <= 'f') {
            res += power(16, i) * (c + 10 - 'a');
        } else if (c >= 'A' && c <= 'F') {
            res += power(16, i) * (c + 10 - 'A');
        } else if (c >= '0' && c <= '9') {
            res += power(16, i) * (c - '0');
        } else {
            break;
        }
    }
    return res;
}

/**
 * 求n的exp次方
 * @param n 底
 * @param exp 幂次
 * @return n的exp次方
 */
int power(int n, int exp) {
    int res = 1;
    while (--exp >= 0) {
        res *= n;
    }
    return res;
}