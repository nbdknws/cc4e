#include <stdio.h>

int is_alpha(int chr) {
    return (chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z');
}
void collect_lengths(int lwords[], int n) {
    int chr;
    int cur_len = 0;

    while ((chr = getchar()) != EOF) {
        if(is_alpha(chr)) {
            ++cur_len;
        } 
        else if (cur_len > 0) {
            if (cur_len < n) {
                    ++lwords[cur_len];
            }
            cur_len = 0; 
        }
    }
    // Handle the last word if there is no trailing space or newline
    if (cur_len > 0 && cur_len < n) {
        ++lwords[cur_len];
    }
}

void draw_horizontal(int data[], int n) {
    for (int i = 1; i < n; i++) {  
        if (data[i] > 0) {
            printf("%3d | ", i);
            for (int j = 0; j < data[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

int max_value(int data[], int n) {
    int max = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

void draw_vertical(int data[], int size) {
    int height = max_value(data, size);
    
    for (int i = height; i > 0; i--) {  
        for (int j = 1; j < size; j++) { 
            if (data[j] >= i) {
                printf(" X ");
            } else {
                printf("   ");
            }
            printf("|"); 
        }
        printf("\n");
    }

    // Print separator row
    for (int j = 1; j < size; j++) {
        printf("----");
    }
    printf("\n");

    for (int j = 1; j < size; j++) {
        printf(" %2d ", j);
    }
    printf("\n");
}

int main() {
    int max_word_length = 20;
    int lwords[20] = {0}; 

    collect_lengths(lwords, max_word_length);

    printf("\nHorizontal Histogram:\n");
    draw_horizontal(lwords, max_word_length);

    printf("\nVertical Histogram:\n");
    draw_vertical(lwords, max_word_length);

    return 0;
}