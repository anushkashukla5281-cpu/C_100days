#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0; // Variable to store sum

    // Step 1: Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols]; // Declare matrix

    // Step 2: Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add each element to sum
        }
    }

    // Step 3: Print the sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}