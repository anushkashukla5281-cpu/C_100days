#include <stdio.h>

int main() {
    int a[10][10], n, i, j, k, distinct = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < n; i++) {
        for(k = i + 1; k < n; k++) {
            if(a[i][i] == a[k][k]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct == 1)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}