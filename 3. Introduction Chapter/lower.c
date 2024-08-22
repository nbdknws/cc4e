#include <stdio.h>

/*Write a program to convert its input to lower case, using a function lower(c) which returns c if c is not a letter, and the lower case value of c if it is a letter.*/

char lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    char test1[] = "HELL0 WO!RLT5123 AkaIOUKJ1";
    char test2[] = "";
    char test3[] = "123aaaAAA";

    for (int i = 0; test1[i] != '\0'; i++) {
        test1[i] = lower(test1[i]);
    }

    for (int i = 0; test2[i] != '\0'; i++) {
        test1[i] = lower(test1[i]);
    }

    for (int i = 0; test3[i] != '\0'; i++) {
        test1[i] = lower(test1[i]);
    }

    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s\n", test3);
}