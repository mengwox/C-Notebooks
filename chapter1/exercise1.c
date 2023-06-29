#include <stdio.h>

/*Symbolic Constants by define*/
#define LOWER 0/* lower limit of table*/
#define UPPER 300/*upper limit*/
#define STEP 20

//Exercise 1-5.
//Modify the temperature conversion program to print the table in reverse order,
//that is, from 300 degrees to 0.
void reverse_order() {
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9) * (fahr - 32));
    }
}

//Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
void verifyEOF() {
    int c = getchar();
    printf("result: %d", c != EOF);
}

//Exercise 1-7. Write a program to print the value of EOF
void printEOF() {
    printf("%d", EOF);
}

//Exercise 1-8. Write a program to count blanks, tabs, and newlines.
/**
 * 统计字符的数量
 */
void counting() {
    long blankCount = 0;
    long tabCount = 0;
    long lineCount = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blankCount++;
        } else if (c == '\t') {
            tabCount++;
        } else if (c == '\n') {
            lineCount++;
        }
        printf("blank:%ld, tab:%ld, line:%ld\n",
               blankCount, tabCount, lineCount);
    }
}

//Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
//more blanks by a single blank.
void copyInputFromOutPut() {
    char input;
    char output;
    while ((input = getchar()) != EOF) {
        if (input != ' ' || output != ' ') {
            output = input;
            putchar(output);
        }
    }
}

void

int main() {
//    reverse_order();
//    verifyEOF();
//    printEOF();
//    counting();
    copyInputFromOutPut();
}