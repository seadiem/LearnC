char *cat;

void testing() {
    char *makeCatArray(void);
    void printCharArrayContent(char *, int);

    cat = makeCatArray();
    printCharArrayContent(cat, 10);
}

char *makeCatArray() {
    char *alloc(int);
    char *p = alloc(4);
    p[0] = 'c';
    p[1] = 'a';
    p[2] = 't';
    p[3] = 's';
    return p;
}