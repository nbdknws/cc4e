#include <stdio.h>
#include <string.h>

// Write the function any(s1, s2) which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.

int charloc(char s[], int c) {
    // returns the first location of the character c in the string  s
    int i;
    for (i = 0; (s[i] != '\0') && (s[i] != c); i++);
    if (s[i] == '\0') {
        return -1;
    } 
    return i;  
}

int any(char s1[], char s2[]) {
    int i, cur, fl = -1;
    
    if (strlen(s1) == 0 || strlen(s2) == 0) {
        return -1;
    }

    for (i = 0; s2[i] != '\0'; i++) {
        cur = charloc(s1, s2[i]);
        if (cur != -1 && (fl == -1 || cur < fl)) {
            fl = cur;
        }
    }
    return fl;
}

int main() {
    char s[] = "I am a big and beautiful string";
    char chrs[] = "9876I";
    int test, result;
    result = any(s, chrs);
    test = charloc(s,'9');
    printf("%d", result);
}