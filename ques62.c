#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i + 1);  // +1 for user-friendly position
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found in the array.\n");

    return 0;
}