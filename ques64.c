#include <stdio.h>

int main() {
    long num;
    int digit, i;
    int count[10] = {0};  // To count digits 0-9
    int max = 0, most = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(num < 0)
        num = -num;  // Make positive if negative

    // Count each digit
    while(num > 0) {
        digit = num % 10;   // Get last digit
        count[digit]++;     // Increase its count
        num = num / 10;     // Remove last digit
    }

    // Find which digit appears most
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            most = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", most, max);

    return 0;
}