#include <stdio.h>

int main() {
    int nums1[100], nums2[100], merged[200];
    int m, n, i, j, k = 0;

    scanf("%d", &m);
    for(i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    // Copy nums1 to merged
    for(i = 0; i < m; i++)
        merged[k++] = nums1[i];

    // Copy nums2 to merged
    for(i = 0; i < n; i++)
        merged[k++] = nums2[i];

    // Now sort the merged array (simple bubble sort)
    for(i = 0; i < k; i++) {
        for(j = i + 1; j < k; j++) {
            if(merged[i] > merged[j]) {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    // Print merged sorted array
    for(i = 0; i < k; i++)
        printf("%d ", merged[i]);

    return 0;
}