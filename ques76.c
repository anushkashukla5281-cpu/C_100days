#include <stdio.h>

int main() {
    int a[10][10], i, j, n, symmetric = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}