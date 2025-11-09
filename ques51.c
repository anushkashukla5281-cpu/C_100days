#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 5; i >= 1; i--) {
        // Print leading spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}