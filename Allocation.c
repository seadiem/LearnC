#include <stdio.h>

#define ALLOCSIZE 10000

char allocbuf[ALLOCSIZE];
char *allocp = allocbuf;

char *alloc(int n) {
    if ((allocbuf + ALLOCSIZE - allocp) >= n) {
        allocp += n;
        return allocp - n;
    } else {
        return NULL;
    }
}

char afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}

void arraysArithmetic() {
    char buffer[100];
    char *string = "Astring\0";
    char *ps = string;
    ps += 3;
    char *last =  string + 7;
    int number = last - ps;
    printf("number: %d", number);
}