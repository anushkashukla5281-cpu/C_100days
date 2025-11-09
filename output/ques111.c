#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    int queue[n], front = 0, rear = 0;

    for(int i = 0; i < n; i++) {

        // Remove elements out of window
        while(front < rear && queue[front] <= i - k)
            front++;

        // Add current negative element
        if(arr[i] < 0)
            queue[rear++] = i;

        // Starting from i >= k-1 means window formed
        if(i >= k - 1) {
            if(front < rear)
                printf("%d ", arr[queue[front]]);
            else
                printf("0 ");
        }
    }
    return 0;
}