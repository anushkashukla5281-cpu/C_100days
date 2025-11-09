#include <stdio.h>

int main() {
    int i, j;

    // First group: 4 stars
    for(i = 1; i <= 4; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Second group: 5 stars
    for(i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Third group: 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Fourth group: 1 star
    printf("*\n");

    return 0;
}