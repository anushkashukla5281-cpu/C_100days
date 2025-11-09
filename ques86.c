#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    gets(str);   // read the string

    len = strlen(str);  // find length of string

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;   // not a palindrome
            break;
        }
    }

    if(flag == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}