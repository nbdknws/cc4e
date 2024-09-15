#include <stdio.h>

// Exercise 2-3. Write an alternate version of squeeze(s1, s2) which deletes each character in s1 which matches any character in the string s2.

void squeeze_c(char s[], int c) {
    int i,j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void squeeze(char s1[], char s2[]) {
    int i;
    for (i = 0; s2[i] != 0; i++) {
        squeeze_c(s1, s2[i]);
    }
}

int main() {
    char s[] = "I am a big and beautiful string";
    char del[] = "aIs";
    char del_c = 'a';

    squeeze(s, del);
    printf("%s", s);
}