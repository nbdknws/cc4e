#include <stdio.h>

#define TAB_WIDTH 8 
/* Write a program detab which replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n positions.*/

int main() {
    char c;
    int counter = 0;
    int spaces = 0;
    int i;

    while((c = getchar()) != EOF) {
        if (c == '\t') {
            spaces = TAB_WIDTH - (counter % TAB_WIDTH);
            for (i=0; i<spaces; i++) {
                printf("%c", ' ');
                counter++;
            }
        } else if (c == '\n') {
            counter = 0;
            printf("\n");
        } else {
            printf("%c", c);
            counter++;
        }
    }
}