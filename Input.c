#include <stdio.h>

void input() {
    int getLine(char *, int);
    void myGetLineIn(char *, int);
    void printCharArrayContent(char* array, int size);

    int length = 100;
    char line[length];

    myGetLineIn(line, length);
    putchar('\n');
    printCharArrayContent(line, length);
}

void myGetLineIn(char *line, int lim) {
    char c;
    int index;
    c = getchar();
    index = 0;
    while (c != '\n' && index < lim) {
        c = getchar();
        index += 1;
        *(line + index) = c;
    }
}

int getLine(char line[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i = i + 1) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i = i + 1;
    }
    line[i] = '\0';
    return i;
}

void checkWhile() {
    int i = 0;
    char c;
    c = getchar();
    while (i != 1 && c != 'k') {
        printf("we entered into while, char: %c \n", c);
        c = getchar();
    }
    printf("end");
}