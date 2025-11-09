#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // To store frequency of each lowercase letter
    int i, index;
    char result = '\0';

    printf("Enter a string: ");
    gets(str); // or use fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';
            freq[index]++;

            if(freq[index] == 2) {  // found repeating character
                result = str[i];
                break;
            }
        }
    }

    if(result != '\0')
        printf("First repeating lowercase alphabet: %c", result);
    else
        printf("No repeating lowercase alphabet found.");

    return 0;
}