# include <stdio.h>

void print_file() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

void print_eof() {
    printf("%d", EOF);
}

int main() {
    print_file();
//    print_eof();
}