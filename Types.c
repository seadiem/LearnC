#include <stdio.h>
#include <limits.h>

void checkChars() {
    int c = '9';
    printf("c: %d \n", c);
    int d = c - '0';
    printf("d: %d \n", d);
    int O = '0';
    printf("O: %d \n", O);
}

void checkSizes() {
    char z = 'Z';
    int x = 10;

    int sizeOne = sizeof x * 10;
    int sizeTwo = (sizeof x) * 10;
    int sizeThree = sizeof(int) * 10;
    printf("sizeOne: %d, sizeTwo: %d, sizeThree: %d", sizeOne, sizeTwo, sizeThree);
    putchar('\n');

    char toobig = 1000;
    int failtoobig = toobig;
    printf("to big: %c, fail to big: %d", toobig, failtoobig);
    putchar('\n');
    toobig = 100;
    int itobig = toobig;
    char citoobig = itobig;
    printf("to big: %c, int toobig: %d, char inttoobig: %c", toobig, itobig, citoobig);
 //   printf("size of z: %d, z: %c, size of x: %d, x: %d", sizeof z * CHAR_BIT, z, sizeof x * CHAR_BIT, x);
}