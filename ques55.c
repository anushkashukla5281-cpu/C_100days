#include <stdio.h>

int main() {
    int i, j, n, isPrime;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through numbers from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1; // assume i is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}