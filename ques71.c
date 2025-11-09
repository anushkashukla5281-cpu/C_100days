#include <stdio.h>

int main() {
    int a[10][10];   // Declare a 2D array (matrix)
    int rows, cols;  // Variables to store number of rows and columns
    int i, j;        // Loop counters

    // Step 1: Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Step 2: Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Print the matrix
    printf("\nThe matrix you entered is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", a[i][j]); // Print element
        }
        printf("\n"); // New line after each row
    }

    return 0;
}