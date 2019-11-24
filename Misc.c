#include <stdio.h>
void printAfterDote(float f) {
    int c = f;
    float fraction = f - c;
    printf("fraction: %f \n", fraction);
    float bigDivider = 1.0;
    float smallDivider = 1.0 / bigDivider;
    printf("small divider: %f \n", smallDivider);
    int ranksAfterDote = 0;


    while (fraction < smallDivider) {
        bigDivider *= 10;
        smallDivider = 1.0 / bigDivider;
        ranksAfterDote += 1;
        printf("small divider: %f \n", smallDivider);
    }

    printf("ranks after dote: %d \n", ranksAfterDote);

    int size = ranksAfterDote;
    char zeros[size];
    int index = 0;
    while (index < (size - 1)) {
        zeros[index] = '0';
        index += 1;
    }
    int extractdigits = fraction * bigDivider * 1000;

    if (size > 1) {
        printf(".%s%d \n", zeros, extractdigits);
    } else {
        printf(".%d \n", extractdigits);
    }
}

void testPrint() {
    float f = 43.064;
    printAfterDote(f);
}

void testCustomPrint() {
    float f = 4345342.45134535;
    printf("%.2f \n", f);
}