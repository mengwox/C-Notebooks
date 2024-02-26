#include <stdio.h>

int my_power(int m, int n);

int main() {
    int i;
    for (i = 0; i < 10; ++i) {
        printf("%d %3d %6d\n", i, my_power(2, i), my_power(-3, i));
    }
    return 0;
    }

int my_power(int m, int n) {
    int res = 1;
    while (n-- > 0) {
        res *= m;
    }
    return res;
}