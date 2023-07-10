#include "stdio.h"

int power(int base, int n) {
    int p;

    for (p = 1; n > 0; n--) {
        p = p * base;
    }
    return p;
}

int main() {
    int n = 5;
    printf("%d\n", power(2, n));
    printf("%d", n);
    return 0;
}