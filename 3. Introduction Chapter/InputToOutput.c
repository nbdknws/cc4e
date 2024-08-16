#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

int main() {
    int chr;
    int prev_chr = '\0';

    while ((chr = getchar()) != EOF) {
      if (chr != ' ' || prev_chr != ' ') {
        putchar(chr);
      }
      prev_chr = chr;
    }
}