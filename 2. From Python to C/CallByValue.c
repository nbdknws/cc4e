#include <stdio.h>

int main() {

    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Anser: %d\n", retval);
}

int mymult(a, b) int a, b ;
{
    int c = a*b;
    return c;
}