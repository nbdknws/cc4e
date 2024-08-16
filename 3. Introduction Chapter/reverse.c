#include <stdio.h>
#include <string.h>

/* You should write a function called reverse(s) that reverses the characters in a string. Reverse the string in place. */

/* task solution */
void reverse(char s[]) {
    int len = strlen(s);
    char cur;
    int i;
    for (i = 0; i < (len / 2); i++) {
        cur = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = cur;
    }
}

/* code from the task */

int main() {
  char t[1000];
  char *copy();
  void reverse();
  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}