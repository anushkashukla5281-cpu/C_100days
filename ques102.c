#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int result = -1;  // index of ceil

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {   // first element >= x
            result = i;
            break;
        }
    }

    printf("Output: %d\n", result);
    return 0;
}