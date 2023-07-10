#include <stdio.h>

int celsius_to_fahr();

double conversation(double celsius);

int main() {
    celsius_to_fahr();
}

/*
 * 摄氏度转华氏摄氏度
 * °F=32+(°C * 9)/5
 */
int celsius_to_fahr() {
    double celsius;
    int lower, upper, step;

    lower = 0;/*lower limit of temperature scale*/
    upper = 300;/*upper limit*/
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        printf("fahr:%.2f\tcelsius:%.2f\n", conversation(celsius), celsius);
        celsius += step;
    }
}

double conversation(double celsius) {
    return 32 + 5 * (celsius * 9);
}