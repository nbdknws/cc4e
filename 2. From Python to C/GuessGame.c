#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    while (scanf("%d", &number) != EOF) {
        if (number == 42) {
            printf("Nice work!\n");
            exit(0);
        }
        else if (number < 42) {
            printf("Too low - guess again\n");
        }
        else {
            printf("Too high - guess again\n");
        }
    }
    return 0;
}