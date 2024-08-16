#include <stdio.h>

/* Write a program which prints the words in its input, one per line. A word is any string separated by a space or newline. */

int main() {
    int chr = '\0';
    /* any assignment can be used as an expression; its value is the value being assigned */
    while ((chr = getchar()) != EOF) {
        if (chr == ' ' || chr == '\t') {
            putchar('\n');
        } else {
            putchar(chr);
        }
    }
}