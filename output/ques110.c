#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);   // size of array

    int arr[n];
    
    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);   // input window size

    // For each window starting index i
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Check next k elements
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}