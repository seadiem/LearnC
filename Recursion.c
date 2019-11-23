#include <stdio.h>

void recursion() {
    void buggingtest(void);
    printf("I am in recursion \n");
    buggingtest();
}

void buggingtest() {
    void bugging(void);
    bugging();
}

void printd(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10) {
        printd(n / 10);
    }
    putchar(n % 10 + '0');
}