#include <stdio.h>

int main() {
    char name[100];
    printf("Enter name\n");
    scanf("%100s", name); /* name already halds a pointer to the start of the array, so we pass by value */
    printf("Hello, %s\n", name);
}