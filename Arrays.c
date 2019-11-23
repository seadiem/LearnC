#include <stdio.h>
#include <stdlib.h>

void initialArrayWay() {
    int array[] = {1, 3, 8, 10, 12, 5};
    void printIntArrayContent(int* array, int size);
    void printCharArrayContent(char* array, int size);
    printIntArrayContent(array, 6);

    int *pa = &array[0];
    putchar('\n');

    printIntArrayContent(pa, 6);

    printf("pa[2]: %d \n", pa[2]);

    int *pointer = array;

    putchar('\n');

    printIntArrayContent(pointer, 6);
}

void checkPointers() {
    char array[3];
    array[0] = 'c';
    array[1] = 'm';
    array[2] = 'k';

    char element = array[2];
    printf("element: %c, size: %d \n", element, sizeof element);


    void printIntArrayContent(int* array, int size);
    void printCharArrayContent(char* array, int size);

    printCharArrayContent(array, 3);

    char string[] = "String";

    putchar('\n');

    printCharArrayContent(string, 7);
}

void buffers() {
    int size = 40;
    char buffer[size];

    void printIntArrayContent(int* array, int size);
    void printCharArrayContent(char* array, int size);

    buffer[20] = 'z';

//    printCharArrayContent(buffer, size);

    char buffer1wo[] = "as\0";
    buffer1wo[10] = 'Q';
    printCharArrayContent(buffer1wo, 12);
    putchar('\n');
    printIntArrayContent(buffer1wo, 12);
}

void inspect(char *buffer) {

}

void checkAriphmetics() {

    void pointerAriphmetics(int* array);

    int size;
    size = 10;

    int array[size];
    int counter = 0;
    while (counter < size) {
        array[counter] = 10 + counter;
        counter += 1;
    }

    pointerAriphmetics(array);
}

void arrays() {

    int size;
    size = 10;

    int* makeArray(int length);
    int* array;
    array = makeArray(size);

    void printIntArrayContent(int* array, int size);
    int *topass = array;
    printIntArrayContent(topass, size);
    putchar('\n');

    void modifyArrayByPointer(int* array);
    void modifyArrayBySubscript(int* array);

    topass = &array[0];
    modifyArrayByPointer(topass);

    topass = array;
    modifyArrayBySubscript(topass);

    printIntArrayContent(topass, size);
}

void printIntArrayContent(int* array, int size) {
    for (int index = 0; index <= size - 1; index += 1) {
        printf("index: %d, content: %d \n", index, array[index]);
    }
}

void printCharArrayContent(char* array, int size) {
    for (int index = 0; index <= size - 1; index += 1) {
        int checker = array[index];
        if (checker > 256 / 2 * -1 && checker < 256 / 2) {
            printf("index: %d, content: %c \n", index, array[index]);
        } else {
            printf("char is not char on index: %d, content: %d \n", index, array[index]);
        }

    }
}

void modifyArrayByPointer(int* array) {
    int index = 5;
    *(array + 5) = 100;
}

void modifyArrayBySubscript(int* array) {
    int index = 6;
    array[index] = 200;
}

void pointerAriphmetics(int* array) {
    int* result = array + 5;
    printf("result: %p", result);
}

void workWithDynamic() {
    int* makeDynamicArray(int);
    int *p  = makeDynamicArray(10);
    *p = 1;
    *(p + 1) = 2;
    *(p + 2) = 3;
    printIntArrayContent(p, 10);
}

void memoryHack() {
    int* makeArray(int);
    int *p  = makeArray(10);
    *p = 1;
    *(p + 1) = 2;
    *(p + 3) = 3;
    printIntArrayContent(p, 10);
}

int* makeDynamicArray(int length) {
    int *array = malloc((sizeof length) * length);
    int counter = 0;
    while (counter < length) {
        array[counter] = 10 + counter;
        array[counter] = 21;
        counter += 1;
    }
    return  &array[0];
}

int* makeArray(int length) {
    int size = length;
    int array[size];
    int counter = 0;
    while (counter < size) {
        array[counter] = 10 + counter;
        counter += 1;
    }
    return  &array[0];
}