#include <stdio.h>

int main() {
    int a[100], n, k, i, j, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    for(j = 0; j < k; j++) {
        temp = a[n - 1];
        for(i = n - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = temp;
    }

    printf("After rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}