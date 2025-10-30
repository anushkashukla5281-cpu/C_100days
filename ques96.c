#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    gets(str);  // or use fgets(str, sizeof(str), stdin)

    int len = strlen(str);

    for (i = 0; i <= len; i++) {
        // when space or end of string is found
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            // reverse current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;  // move to start of next word
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}