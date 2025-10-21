#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smaller number
    int min = (num1 < num2) ? num1 : num2;

    // Loop to find HCF
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  // store the current factor as HCF
        }
    }

    printf("The HCF (GCD) of %d and %d is: %d", num1, num2, hcf);

    return 0;
}