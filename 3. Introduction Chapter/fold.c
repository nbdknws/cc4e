#include <stdio.h>

#define MAX_SIZE 4

int is_char_or_blank(char c) {
    if ( c == '\n' || c == '\t') {
        return 0;
    }
    return 1;
}
void clear_buf(char buf[MAX_SIZE+1]) {
    for (int i = 0; i <= (MAX_SIZE); i++) {
        buf[i] = '\0';
    }
}
int update_buf(char buf[MAX_SIZE + 1], char c, int n) {
    if (c == '\n') {
            if (n>0 && n<=MAX_SIZE) {
                printf("%s\n", buf);
            }
            clear_buf(buf);
            n = 0;
        }
        if (is_char_or_blank(c)) {
            if (n < MAX_SIZE) {
                buf[n] = c;
                n++;
            } else {
                printf("%s\n", buf);
                clear_buf(buf);
                buf[0] = c;
                n=1;
            }
        }
    return n;
}

int main() {
    char c;
    int n = 0;
    int tb = 0;
    
    char buf[MAX_SIZE+1];
    for(int i = 0; i <= MAX_SIZE; i++) {
        buf[i] = '\0';
    }

    while ((c=getchar()) != EOF ) {
        if (c == '\t') {
            tb = 8 - (n % 8);
            for (int i=0; i<tb; i++) {
                n =  update_buf(buf, ' ', n);
            }
        } else {
             n = update_buf(buf, c, n);
        }
    }
}