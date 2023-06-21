#include <stdio.h>

/*
 * 华氏摄氏度转摄氏度
 * °C=(5/9)*(°F-32)
 */
int fahr_to_celsius() {
    double fahr, celsius;
    int lower, upper, step;

    lower = 0;/*lower limit of temperature scale*/
    upper = 300;/*upper limit*/
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%6.2f\t%6.2f\n", fahr, celsius);
        fahr += step;
    }
}

int main() {
    fahr_to_celsius();
}