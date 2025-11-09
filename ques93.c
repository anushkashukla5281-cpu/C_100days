#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, found, len1, len2;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not anagrams");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        found = 0;
        for(j = 0; j < len2; j++) {
            if(str1[i] == str2[j]) {
                str2[j] = '0'; // mark as used
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Strings are anagrams");
    return 0;
}