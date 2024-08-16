#include <stdio.h>

int main() {
    int chr;
    int blanks = 0, nlines = 0;
    
    while ((chr=getchar()) != EOF) {
        if (chr == ' ') {
            ++blanks;
        }
        else if (chr == '\n') {
            ++nlines;
        }
    }
    printf("The number of blanks is %d\n", blanks);
    printf("The number of new lines is %d\n", nlines);
}