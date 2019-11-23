#include <stdio.h>
#include "Functions.h"

#define MAXLINE 1000

int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);
void patternSearch(void);

int max;
char line[MAXLINE];
char longest[MAXLINE];
char pattern[] = "cat";

void patternSearch(void) {
    char line[MAXLINE];
    int found = 0;
    extern char pattern[];
    while (getLine(line, MAXLINE) > 0){
        if (strindex(line, pattern) >= 0) {
            printf("string found: \" \"\n");
        }
    }
}

int strindex(char s[], char t[]) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; i = i + 1) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j = j + 1, k = k + 1) {
            if (k > 0 && t[k] == '\0') {
                return i;
            }
        }
    }
    return -1;
}


void checkArrays() {
    int c[10];
    c[3] = 4 / 2 * 1000;
    printf("c[3]: %d, c[5]: %d", c[3], c[5]);
}

void checkCharaecters() {
    int result = 8 < 7;
    result = '8' < 7;
    result = '8' - '5';
    printf("'8' - '5' = %d", '8' - '5');
}

void countWords() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF ) {
        nc = nc + 1;
        printf("nc: %d\n", c);
        if (c == '\n') { nl = nl + 1; }

        if (c == ' ' || c == '\n' || c == '\t') { state = OUT; }
        else if (state == OUT) { state = IN; nw = nw + 1; }
    }
    printf("%d, %d, %d\n", nl, nw, nc);
}

void countLines() {
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl = nl + 1;
        }
    }
}

void countCharacters() {
    long nc;
    nc = 0;
    while (getchar() != EOF ) {
        nc = nc + 1;
    }
    printf("nc: %ld", nc);

    double dnc;
    dnc = 0;
    for (nc = 0; getchar() != EOF; nc = dnc + 1) {}
    printf("dnc: %.f", dnc);
}

void copyCharacters() {
    int c;
    while ((c = getchar()) != EOF ) {
        putchar(c);
    }
}