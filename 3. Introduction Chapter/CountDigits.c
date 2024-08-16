#include <stdio.h>

int main() {
    int ndigits[10];
    int i;
    for (i = 0; i < 10; i++) {
        ndigits[i] = 0;
    }

    int chr;
    while((chr = getchar()) != EOF) {
        if ('0' <= chr <= '9') {
            ++ndigits[chr - '0'];
        }
    }

    for (i=0; i<10; i++) {
        printf("The number of %d is %d\n", i, ndigits[i]);
    }
}