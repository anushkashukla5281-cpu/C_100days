  #include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);   // size of array

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // input elements
    }

    scanf("%d", &k);   // input k

    int maxSum = 0;

    // Brute force: Check all subarrays of size k
    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if(sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}