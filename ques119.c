#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[1000] = {0}; // assuming element values are small

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        // Check if already seen
        if(visited[arr[i]] == 1){
            printf("%d", arr[i]);
            return 0;  // end program when repeated element found
        }
        visited[arr[i]] = 1;
    }

    return 0;
}