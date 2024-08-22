#include <stdio.h>

/* Exercise 1-21. Write a program to "fold" long input lines before the n-th column of input, where n is a parameter. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. */

#define MAX_SIZE 4

void clear_buf(char buf[MAX_SIZE + 1]) {
    for (int i = 0; i <= MAX_SIZE; i++) {
        buf[i] = '\0';
    }
}

int update_buf(char buf[MAX_SIZE + 1], char c, int n) {
    if (n == MAX_SIZE) { 
        printf("%s\n", buf);
        clear_buf(buf);
        buf[0] = c; 
        n = 1;
    } else {
        buf[n] = c;
        n++;
    }
    return n;
}

int main() {
    char c;
    int n = 0; 
    int tb;    

    char buf[MAX_SIZE + 1];
    clear_buf(buf);

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            tb = 8 - (n % 8);
            for (int i = 0; i < tb; i++) {
                n = update_buf(buf, ' ', n);
            }
        } else if (c == '\n') {
            if (n>0 && n<(MAX_SIZE + 1)) { // avoid addtional new lines after the output
                printf("%s\n", buf);
            }
            clear_buf(buf);
            n = 0; 
        } else {
            n = update_buf(buf, c, n);
        }
    }

    if (n > 0) {
        printf("%s", buf);
    }

    return 0;
}