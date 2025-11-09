#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation");
        return 0;
    }

    // Create a new string by joining str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is inside temp
    if (strstr(temp, str2) != NULL)
        printf("One string is a rotation of another");
    else
        printf("Not a rotation");

    return 0;
}