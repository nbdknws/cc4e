#include <stdio.h>

int main() {
    int nl, nw, nc, in_word;
    nl = nw = nc =  in_word = 0;
    int chr;

    while ((chr = getchar()) != EOF) {
        if (chr == '\n') {
            ++nl;
        }
        if (chr == '\n' || chr == ' ' || chr == '\t') {
            if (in_word) {
                ++nw;
            }
            in_word = 0;

        } else {
            in_word = 1;
            ++nc;
        }
    }

    printf("The numberof lines: %d\n", nl);
    printf("The numberof words: %d\n", nw);
    printf("The numberof chars: %d\n", nc);
}