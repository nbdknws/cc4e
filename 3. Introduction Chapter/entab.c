#include <stdio.h>

#define TABINC 8 
/* Write a program detab which replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n positions.*/


/* solution 1*/
/*
int main() {
    int sp_counter, chr_counter;
    sp_counter = chr_counter = 0;
    int c;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            sp_counter++;
        } else if ((c != ' ') && (sp_counter > 0)){
            int tab_fill = 8 - ((chr_counter-sp_counter) % 8);
            if (sp_counter < tab_fill) {
                for (int i = 0; i < sp_counter; i++ ) { 
                    putchar(' ');
                }
            } else {
                int left_chrs = sp_counter - tab_fill;
                int left_spaces = left_chrs % 8;
                int left_tabs = left_chrs / 8;

                putchar('\t');
                for (int i = 0; i < left_tabs; i++) {
                    putchar('\t');
                }
                for (int i = 0; i < left_spaces; i++) {
                    putchar(' ');
                }
            }
            sp_counter = 0;
            putchar(c);
        } else if ((c != ' ') && (sp_counter == 0)) {
            putchar(c);
        }
        
        chr_counter++;
        if (c == '\n') {
            chr_counter = 0;
        }
    }
}
*/

/* solution 2*/