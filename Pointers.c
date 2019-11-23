#include <stdio.h>

char *hackOne() {
    char *word;
    word[0] = 'O';
    word[1] = 'n';
    word[2] = 'e';
    word[3] = 'E';
    return word;
}

void testHack() {
    void printCharArrayContent(char *, int);
    char *w = hackOne();
    printCharArrayContent(w, 4);
}

void checkStrings() {
    char string[] = "Cat have eaten all Whiskass \0";
    int stringLengthNumber(char *);
    int stringLengthPointers(char *);
    int one = stringLengthNumber(string);
    int two = stringLengthPointers(string);
    printf("with number: %d, with pointers: %d", one, two);
}

int stringLengthNumber(char *pointer) {
    int number = 0;
    char *work = pointer;
    while (*work != '\0') {
        work += 1;
        number += 1;
    }
    return number;
}

int stringLengthPointers(char *p) {
    char *carr = p;
    while (*carr != '\0') {
        carr += 1;
    }
    return carr - p;
}


void simplePointers() {
    int c = 10;
    int *pc = &c;
    int restorec = *pc;
    printf("c: %d, restorec: %d \n", c, restorec);

    c = 20;
    printf("c: %d, restorec: %d \n", c, restorec);

    *pc = 40;
    printf("c: %d, restorec: %d \n", c, restorec);

    void modifyByAdress(int *);
    modifyByAdress(pc);
    printf("c: %d, restorec: %d \n", c, restorec);

    modifyByAdress(&restorec);
    printf("c: %d, restorec: %d \n", c, restorec);

    *pc = 300;
    printf("c: %d, restorec: %d \n", c, restorec);

    void toSwipeInt(int *, int *);
    toSwipeInt(&c, &restorec);
    printf("c: %d, restorec: %d \n", c, restorec);

    int z = 5;
    int y = 6;

    printf("z: %d, y: %d \n", z, y);

    void swap(int*, int*);
    swap(&z, &y);

    printf("z: %d, y: %d \n", z, y);

}

void swap(int *a, int *b) {
    int tempa = *a;
    int tempb = *b;
    *a = tempb;
    *b = tempa;
}

void modifyByAdress(int *pointer) {
    *pointer = 200;
}

void toSwipeInt(int *lhs, int *rhs) {
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}