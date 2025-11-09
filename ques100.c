#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str);  // or use fgets(str, sizeof(str), stdin)

    len = strlen(str);

    printf("All substrings:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // print characters from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            // print comma except after last substring
            if (!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    return 0;
}