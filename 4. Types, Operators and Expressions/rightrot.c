#include <stdio.h>

/* Exercise 2-7. Write the function rightrot(n, b) which rotates the integer n to the right by b bit positions. */

int size_of(int x) {
    int count = 0;
    while (x > 0) {
        x = x >> 1;
        count++;
    }
    return count;
}

int rightrot(int n, int b) {
    int s = size_of(n);
    b = b % s;
    if ((s == 0) || (b == 0)) return n; 
    
    int bac = n & ((1<< b)-1);
    return (bac << (s-b)) | (n >> b); 
}

void print_binary(int x) {
    int i = 0;
    int N = size_of(x);

    if (N == 0) printf("%d", 0);

    for(i = N-1; i >= 0; i--) {
        printf("%d", ((x>>i) & 1));
    }
}

int main() {
    int a = 0b101111;
    int r = rightrot(a, 3);
    print_binary(r);
}