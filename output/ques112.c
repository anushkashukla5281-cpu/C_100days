#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int current_sum = 0;
    int max_sum = arr[0]; // initialize with first element

    for(int i = 0; i < n; i++) {
        current_sum += arr[i];

        if(current_sum > max_sum)
            max_sum = current_sum;

        if(current_sum < 0)
            current_sum = 0; // reset when negative
    }

    printf("Maximum Subarray Sum = %d", max_sum);
    return 0;
}