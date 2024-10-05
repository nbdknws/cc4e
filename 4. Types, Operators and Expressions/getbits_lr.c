#include <stdio.h>

/* Exercise 2-5. Modify getbits to number bits from left to right. */

int size_of(int x) {
    int count = 0;
    while (x > 0) {
        x = x >> 1;
        count++;
    }
    return count;
}

int get_bits(int x, int p, int n) {
    int N = size_of(x); // count the total number of bits in x
    return (x >> (N-(p+1))) & ~(~0 << n);
}

void print_binary(int x) {
    int i = 0;
    int N = size_of(x);

    for(i = N-1; i >= 0; i--) {
        printf("%d", ((x>>i) & 1));
    }
}

int main() {
    unsigned int a = 0b111001010; 
    int result = get_bits(a, 7, 3);  
    print_binary(result);
    return 0;
}