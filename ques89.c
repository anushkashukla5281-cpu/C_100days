#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);   // read the string

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);  // read the character

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;   // increase count when match found
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}