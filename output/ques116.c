#include <stdio.h>

int main() {
    int nums[100], n, target;
    
    scanf("%d", &n);          // number of elements
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
        
    scanf("%d", &target);     // target value

    // Check pairs
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    // If no solution found
    printf("-1 -1");
    return 0;
}