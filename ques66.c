#include <stdio.h>

int main() {
    int arr[100], n, i, num, pos;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find position to insert
    pos = n; // assume at end
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = num;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}