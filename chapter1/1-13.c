#include "stdio.h"

void horizontal();
void horizontal();

/*Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal;
 a vertical orientation is more challenging.*/
//todo 暂时画不出来直方图和竖方图,后续补充
int main() {
    horizontal();
//    vertical();
//    printf("%d\n", 'a');
//    printf("%d\n", 'A');
//    printf("%d\n", 'z');
//    printf("%d\n", 'Z');
//    printf("%d\n", '0');
//    printf("%d\n", '9');
}

/*绘制直方图*/
void horizontal() {
    int c, nw;

    //nw = words length
    nw = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (nw != 0) {
                printf("%d ", nw);
            }
            nw = 0;
        } else if (c >= 'A' && c <= 'z') {
            nw++;
        }
    }
}

void vertical() {
    int c, nw;

    //nw = words length
    nw = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (nw != 0) {
                printf("%d\n", nw);
            }
            nw = 0;
        } else if (c >= 'A' && c <= 'z') {
            nw++;
        }
    }
}