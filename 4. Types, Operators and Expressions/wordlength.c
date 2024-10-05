#include <stdio.h>

/* Exercise 2-6. Write a function wordlength() which computes the word length of the host machine, that is, the number of bits in an int. The function should be portable, in the sense that the same source code works on all machines. */

int wordlength() {
    unsigned c=0;
    unsigned int x = ~0; // The size of the C long type is guaranteed to be the machine's word size. 
    while (x > 0) {
        x = x >> 1;
        c++;
    }
    return c;
}


int main() {
    int wl = wordlength();
    printf("The word length is %d", wl);
}