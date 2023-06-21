#include <stdio.h>

/*
 * 摄氏度转华氏摄氏度
 * °F=32+(°C * 9)/5
 */
int celsius_to_fahr() {
    double celsius, fahr;
    int lower, upper, step;

    lower = 0;/*lower limit of temperature scale*/
    upper = 300;/*upper limit*/
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = 32 + 5 * (celsius * 9);
        printf("fahr:%.2f\tcelsius:%.2f\n", fahr, celsius);
        celsius += step;
    }
}

int main() {
    celsius_to_fahr();
}