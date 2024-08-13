#include <stdio.h>

int main() {
    char line[1000];
    FILE *handle;
    handle = fopen("file.txt", "r");
    while (fgets(line, 1000, handle) != NULL ) {
        printf("%s", line);
    }
}