#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Step 1: Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols]; // Matrix
    int rowSum[rows];       // Array to store sum of each row

    // Step 2: Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Calculate sum of each row
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for current row
        for(j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Step 4: Print the sum of each row
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}