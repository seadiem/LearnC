#include <stdio.h>

void input() {
    int getLine(char *, int);
    int myGetLineIn(char *, int);
    void printCharArrayContent(char* array, int size);

    int length = 20;
    char line[length];

    myGetLineIn(line, length);
    putchar('\n');
    printCharArrayContent(line, length);
    putchar('\n');
}

void storeLines() {
    char *pointets[10];
    int readLines(char **, int);
    void writeLines(char **, int);
    int numbers =  readLines(pointets, 10);
    printf("done, numbers: %d \n", numbers);
    writeLines(pointets, numbers);
}

int readLines(char *linepointers[], int maxlines) {

    int myGetLineIn(char *, int);
    int getLine(char *, int);
    char *alloc(int);
    void copy(char *, char *);

    int len, linesnumber;
    char *p, line[1000];
    linesnumber = 0;

    len = myGetLineIn(line, 1000);

    while (len > 0 && linesnumber < maxlines) {
        char *p;
        p = alloc(len);
        if (p == NULL) {
            return -1;
        } else {
            line[len - 1] = '\0';
            copy(line, p);
            linepointers[linesnumber] = p;
            linesnumber += 1;
        }
        len = myGetLineIn(line, 1000);
    }

    return linesnumber;

}

void writeLines(char *linepointers[], int linesnumber) {
    int i = 0;
    while (i < linesnumber) {
        char *p = linepointers[i];
        printf("string: %s \n", p);
        i += 1;
    }
}

int myGetLineIn(char *line, int lim) {
    char c;
    int index;
    c = getchar();
    index = 0;
    while (c != '\n' && index < lim) {
        *(line + index) = c;
        c = getchar();
        index += 1;
    }
    *(line + index) = 'E';
    return index + 1;
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

void copy(char *from, char *to) {
    int offset = 0;
    char next = *(from + offset);
    while (next != '\0') {
        *(to + offset) = next;
        offset += 1;
        next = *(from + offset);
    }
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

void checkPrintf() {
    char s[] = {'d', 'd', 'd', 'd', '\0','s', 's', 's'};
    printf("%s", s);
}